/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

  /* モジュールヘッダ */
#include "AtomAudioVolumeHandler.h"
#include "CriWareLocalization.h"
#include "AtomStatics.h"
#include "AtomComponent.h"
#include "AtomSoundManager.h"
#include "CriWareInitializer.h"

/* Unreal Engine 4関連ヘッダ */
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "AtomAudioVolumeHandler"

/***************************************************************************
 *      データ型定義
 *      Data Type Definition
 ***************************************************************************/
namespace {
	/* AudioVolume外に出た際に直前のAudioVolumeとAudioVolume外の設定値どうしの補完値を格納するための構造体 */
	/* AudioVolume外に出て、再度内部に入った際に自然に切り替わるようにするために使用 */
	struct StoreNullLerpValue {
		StoreNullLerpValue() {
			PreviousParamNameArray.Empty();
			StoredNullLerpParamName.Empty();
			StoredNullLerpParam.Empty();
			StoredNullLerpParamForVolumeOutside.Empty();
			StoredNullParamApplyDistance.Empty();
		}

		/* AudioVolume外に出る際に変更していたAisacやBusSendの名前をリストとして格納するために利用 */
		TArray<FString> PreviousParamNameArray;

		/* 直前のAudioVolumeに設定されていた設定名を格納 */
		TArray<FString> StoredNullLerpParamName;

		/* 直前のAudioVolumeに設定されていたボリューム内用設定値を格納 */
		TArray<float> StoredNullLerpParam;

		/* 直前のAudioVolumeに設定されていたボリューム外用設定値を格納 */
		TArray<float> StoredNullLerpParamForVolumeOutside;

		/* 直前のAudioVolumeに設定されていたApplyDistanceを格納 */
		TArray<float> StoredNullParamApplyDistance;
	};


	/* AisacやBusSendなどの複数AudioVolume間の補間値格納用構造体 */
	struct LerpValue {
		float LerpedValue;
		float LerpedValueForVolumeOutside;
		float SoundApplyDistance;
		LerpValue()
			: LerpedValue(0.0f)
			, LerpedValueForVolumeOutside(0.0f)
			, SoundApplyDistance(1.0f)
		{
		}
	};
}


class AtomAudioVolRelationInfoBase
{
public:
	AtomAudioVolRelationInfoBase() {
		SoundAudioVolume.Reset();
		SoundNeighbourAudioVolume.Reset();
		ListenerAudioVolume.Reset();
		PrevListenerAudioVolume.Reset();
		NearestEntranceVolume.Reset();
		EntranceVolumeForEnterPoint.Reset();
		AudioVolumeEnterPoint = FVector::ZeroVector;
		StoredNullLerp = MakeUnique<StoreNullLerpValue>();
		bIsBackToSamePreviousVolume = false;
		ValueToApplyMap.Empty();
		MaxInterpolationDistance = 0.0f;
		bIsWorkLerp = true;
		bIsEnteredToAnotherAudioVolume = false;
		bIsInAudioVolumeAtFirstPlay = false;
	}

	virtual ~AtomAudioVolRelationInfoBase() {
	}

	TWeakObjectPtr<AAtomAudioVolume> SoundAudioVolume;
	TWeakObjectPtr<AAtomAudioVolume> SoundNeighbourAudioVolume;
	TWeakObjectPtr<AAtomAudioVolume> ListenerAudioVolume;
	TWeakObjectPtr<AAtomAudioVolume> PrevListenerAudioVolume;
	TWeakObjectPtr<AAtomEntranceVolume> NearestEntranceVolume;
	TWeakObjectPtr<AAtomEntranceVolume> EntranceVolumeForEnterPoint;
	FVector AudioVolumeEnterPoint;
	TUniquePtr<StoreNullLerpValue> StoredNullLerp; // これポインタにする必要ある？
	bool bIsBackToSamePreviousVolume;
	float MaxInterpolationDistance;
	int32 bIsWorkLerp;
	TMap<FString, float> ValueToApplyMap;
	EAtomAudioVolumeType VolumeType;
	bool bIsEnteredToAnotherAudioVolume;
	bool bIsInAudioVolumeAtFirstPlay;
};


class AtomAudioVolRelationInfoBus : public AtomAudioVolRelationInfoBase {
public:
	AtomAudioVolRelationInfoBus() : AtomAudioVolRelationInfoBase() {
		VolumeType = EAtomAudioVolumeType::UseBus;
	}
};


class AtomAudioVolRelationInfoAisac : public AtomAudioVolRelationInfoBase {
public:
	AtomAudioVolRelationInfoAisac() : AtomAudioVolRelationInfoBase() {
		VolumeType = EAtomAudioVolumeType::UseAisacControl;
	}
};


/***************************************************************************
 *      関数定義
 *      Prototype Definition
 ***************************************************************************/
namespace {
	// ネスト名前空間を作ろう！

	void UpdatePreviousParamNameArrayImpl(AtomAudioVolRelationInfoBus& VolumeInfo)
	{
		const auto& NeighbourAtomAudioVolumeParam = *(AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(VolumeInfo.SoundNeighbourAudioVolume.Get()));
		/* 切り替わる前の前に保存していたデータをクリアする */
		VolumeInfo.StoredNullLerp->PreviousParamNameArray.Empty();
		VolumeInfo.StoredNullLerp->PreviousParamNameArray.SetNumZeroed(NeighbourAtomAudioVolumeParam.BusSendInterpolateSettings.Num());
		for (int32 Index = 0; Index < NeighbourAtomAudioVolumeParam.BusSendInterpolateSettings.Num(); Index++) {
			FBusSendInterpolationSettings SoundCueBus = NeighbourAtomAudioVolumeParam.BusSendInterpolateSettings[Index];
			VolumeInfo.StoredNullLerp->PreviousParamNameArray[Index] = SoundCueBus.BusName;
		}
	}

	void UpdatePreviousParamNameArrayImpl(AtomAudioVolRelationInfoAisac& VolumeInfo)
	{
		const auto& NeighbourAtomAudioVolumeParam = *(AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(VolumeInfo.SoundNeighbourAudioVolume.Get()));
		/* 切り替わる前の前に保存していたデータをクリアする */
		VolumeInfo.StoredNullLerp->PreviousParamNameArray.Empty();
		VolumeInfo.StoredNullLerp->PreviousParamNameArray.SetNumZeroed(NeighbourAtomAudioVolumeParam.AisacControlInterpolateSettings.Num());
		for (int32 Index = 0; Index < NeighbourAtomAudioVolumeParam.AisacControlInterpolateSettings.Num(); Index++) {
			FAisacControlInterpolationSettings AisacControl = NeighbourAtomAudioVolumeParam.AisacControlInterpolateSettings[Index];
			VolumeInfo.StoredNullLerp->PreviousParamNameArray[Index] = AisacControl.AisacControlName;
		}
	}

	/* Listener-AudioVolume間によるApplyDistanceに基づく補間値の算出する関数 */
	float CalcDistanceBetweenVolumeAndListener(float CullDistance, float ApplyDistance, AAtomAudioVolume* const AtomAudioVolume, const FVector& ListenerLocation)
	{
		if (!AtomAudioVolume) {
			/* 遷移先のAudioVolumeがないことになるためリスナがいる場所の情報となるようにする */
			return 0.0f;
		}

		if ((AtomAudioVolume->GetOverrideAtomAudioVolume() != true) && (AtomAudioVolume->AtomAudioVolumeSettings == NULL)) {
			/* 遷移先のAudioVolumeに情報がないためリスナがいる場所の情報となるようにする */
			return 0.0f;
		}

		FVector EntrancePoint;
		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(AtomAudioVolume);
		float Distance = ApplyDistance;

		bool IsExistEntranceVolume = AtomAudioVolumeParam && AtomAudioVolume->EntranceVolumes.Num() > 0;
		if (!IsExistEntranceVolume) {
			/* EntranceVolumeが設定されてない場合はAudioVolumeの内部とApplyDistanceを以って補間値を計算する。*/
			bool bDistanceCulling = AtomAudioVolume != nullptr && (AtomAudioVolume->GetActorLocation() - ListenerLocation).SizeSquared() > (CullDistance * CullDistance);
			if (!bDistanceCulling) {
				AtomAudioVolume->GetBrushComponent()->GetClosestPointOnCollision(ListenerLocation, EntrancePoint);
				Distance = (ListenerLocation - EntrancePoint).Size();
			}
			return Distance;
		}

		bool bDistanceCulling = AtomAudioVolume->EntranceVolumes[0] != nullptr && (AtomAudioVolume->EntranceVolumes[0]->GetActorLocation() - ListenerLocation).SizeSquared() <= (CullDistance * CullDistance);

		if (bDistanceCulling) {
			/* Culling指定距離よりも短い場合はVolumeの最近傍点を計算する */
			Distance = AtomAudioVolume->EntranceVolumes[0]->GetEnabled() ? AtomAudioVolume->EntranceVolumes[0]->GetBrushComponent()->GetClosestPointOnCollision(ListenerLocation, EntrancePoint) : ApplyDistance;
		}

		/* EntranceVolumeが設定されている場合は、リスナとEntrancePointまでの距離を計算して、Valueを設定距離ApplyDistanceとの比率で計算し補間する。 */
		float DistanceBetweenEntranceAndListener = Distance;

		for (AAtomEntranceVolume* EntranceVolume : AtomAudioVolume->EntranceVolumes) {
			if (!IsValid(EntranceVolume)) {
				continue;
			}

			if (!EntranceVolume->GetEnabled()) {
				continue;
			}
			Distance = ApplyDistance;
			bDistanceCulling = EntranceVolume != nullptr && (EntranceVolume->GetActorLocation() - ListenerLocation).SizeSquared() <= (CullDistance * CullDistance);
			if (bDistanceCulling) {
				/* Culling指定距離よりも短い場合はVolumeの最近傍点を計算する */
				EntranceVolume->GetBrushComponent()->GetClosestPointOnCollision(ListenerLocation, EntrancePoint);
				Distance = (ListenerLocation - EntrancePoint).Size();
			}

			/* EntrancePointとListenerのAudioVolumeへの侵入座標を比較して最も近い座標を取得 */
			DistanceBetweenEntranceAndListener = FMath::Min(DistanceBetweenEntranceAndListener, Distance);
		}
		return DistanceBetweenEntranceAndListener;
	}

	float GetDistanceBetweenVolumeAndListener(
		AAtomAudioVolume* const ListenerVolume,
		AAtomAudioVolume* const SoundVolume,
		bool bIsValueChangeAudioVolumeInside,
		float CullDistance,
		float MaxApplyDistance,
		bool bIsListenerVolume,
		const FVector& ListenerLocation)
	{
		bool bIsSameTag = SoundVolume && SoundVolume->CheckIfSharesSameVolumeTag(ListenerVolume);

		float DistanceBetweenVolumeAndListener = 0.0f;
		if (bIsValueChangeAudioVolumeInside || (ListenerVolume != SoundVolume && !bIsSameTag)) {

			if (bIsListenerVolume) {
				DistanceBetweenVolumeAndListener = CalcDistanceBetweenVolumeAndListener(
					CullDistance,
					MaxApplyDistance,
					ListenerVolume,
					ListenerLocation
				);
			}
			else {
				DistanceBetweenVolumeAndListener = CalcDistanceBetweenVolumeAndListener(
					CullDistance,
					MaxApplyDistance,
					SoundVolume,
					ListenerLocation
				);
			}
		}
		return DistanceBetweenVolumeAndListener;
	}

	void CalcLerpedValueForOutside(
		LerpValue &LerpedValue,
		const AtomAudioVolRelationInfoBase& VolumeInfo,
		const FVector& SoundLocation)
	{
		const auto& ListenerVolume = VolumeInfo.ListenerAudioVolume.Get();
		const auto& PrevSoundVolume = VolumeInfo.SoundNeighbourAudioVolume.Get();
		if (ListenerVolume && PrevSoundVolume == ListenerVolume) {
			float SoundTransitionRatio = 1.0f;
			/* SoundのEntranceからの侵入距離から補間値を計算 */
			SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeInfo.AudioVolumeEnterPoint).Size() / LerpedValue.SoundApplyDistance), 0.0f, 1.0f);
			/* ListenerのEntranceからの侵入距離から補間値を計算 */
		} else if (!ListenerVolume) {
			float SoundTransitionRatio = 1.0f;
			/* SoundのEntranceからの侵入距離から補間値を計算 */
			SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeInfo.AudioVolumeEnterPoint).Size() / LerpedValue.SoundApplyDistance), 0.0f, 1.0f);
		}
	}

	/* AisacやBusSendのAudioVolume-Sound間による補間値の計算を行う関数 */
	/* AudioVolume内での移動で出力される補間値には、stored_null_lerp_valueアレイ内に保存されている設定値を更新する */
	/* Soundの移動でAudioVolumeが切り替わった際には、stored_null_lerp_valueに格納されている補間値を利用するようにする。 */
	float CalcValueToApplyForOutside(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const FString& param_name,
		const LerpValue& LerpedValue,
		const FVector& sound_location,
		float ListenerTransitionRatio)
	{
		/* AudioVolumeで設定されているParamがPreviousAudioVolumeでも見つかったらバスセンドの補間計算を行う */
		auto DistanceBetweenEntranceAndSource = (VolumeInfo.AudioVolumeEnterPoint - sound_location).Size();
		auto SoundTransitionRatio = FMath::Clamp(DistanceBetweenEntranceAndSource / LerpedValue.SoundApplyDistance, 0.0f, 1.0f);

		float ResultLevel			= 0.0f;
		float ResultLevelForOutside	= 0.0f;
		if (!VolumeInfo.bIsWorkLerp) {
			ResultLevel = FMath::Lerp(LerpedValue.LerpedValue, 0.0f, SoundTransitionRatio);
			ResultLevelForOutside = FMath::Lerp(LerpedValue.LerpedValueForVolumeOutside, 0.0f, SoundTransitionRatio);
		}

		if (VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			/* Volume切り替わり時にはArrayを作成 */
			VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Add(param_name);
			VolumeInfo.StoredNullLerp->StoredNullLerpParam.Add(ResultLevel);
			VolumeInfo.StoredNullLerp->StoredNullLerpParamForVolumeOutside.Add(ResultLevelForOutside);
			VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance.Add(LerpedValue.SoundApplyDistance);
		} else {
			/* Volume内での更新はArrayの中身を更新 */
			int32 find_index = -1;
			if (VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Find(param_name, find_index)) {
				VolumeInfo.StoredNullLerp->StoredNullLerpParamName[find_index] = param_name;
				VolumeInfo.StoredNullLerp->StoredNullLerpParam[find_index] = ResultLevel;
				VolumeInfo.StoredNullLerp->StoredNullLerpParamForVolumeOutside[find_index] = ResultLevelForOutside;
				VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance[find_index] = LerpedValue.SoundApplyDistance;
			} else {
				VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Add(param_name);
				VolumeInfo.StoredNullLerp->StoredNullLerpParam.Add(ResultLevel);
				VolumeInfo.StoredNullLerp->StoredNullLerpParamForVolumeOutside.Add(ResultLevelForOutside);
				VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance.Add(LerpedValue.SoundApplyDistance);
			}
		}

		if (VolumeInfo.ListenerAudioVolume.Get()->Validate()) {
			return ResultLevelForOutside;
		} else {
			ResultLevel = FMath::Lerp(ResultLevelForOutside, ResultLevel, SoundTransitionRatio);
			return FMath::Lerp(ResultLevelForOutside, ResultLevel, ListenerTransitionRatio);
		}
	}

	void UpdateApplyValueMapForOutside(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const FBusSendInterpolationSettings& InterpolationSettings,
		const FVector& SoundLocation,
		float ListenerTransitionRatio)
	{
		LerpValue LerpedValue{};
		LerpedValue.LerpedValue = InterpolationSettings.BusSendLevelForInside;
		LerpedValue.LerpedValueForVolumeOutside = InterpolationSettings.BusSendLevelForOutside;
		LerpedValue.SoundApplyDistance = InterpolationSettings.Width;
		float ValueToApply = CalcValueToApplyForOutside(
			VolumeInfo,
			InterpolationSettings.BusName,
			LerpedValue,
			SoundLocation,
			ListenerTransitionRatio);
		/* BusSend値の更新 */
		VolumeInfo.ValueToApplyMap.Add(InterpolationSettings.BusName, ValueToApply);
	}


	void UpdateApplyValueMapForOutside(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const FAisacControlInterpolationSettings& InterpolationSettings,
		const FVector& SoundLocation,
		float ListenerTransitionRatio)
	{
		LerpValue LerpedValue{};
		LerpedValue.LerpedValue = InterpolationSettings.AisacControlValueForInside;
		LerpedValue.LerpedValueForVolumeOutside = InterpolationSettings.AisacControlValueForOutside;
		LerpedValue.SoundApplyDistance = InterpolationSettings.Width;
		// LerpedValue を更新
		CalcLerpedValueForOutside(
			LerpedValue,
			VolumeInfo,
			SoundLocation);
		float ValueToApply = CalcValueToApplyForOutside(
			VolumeInfo,
			InterpolationSettings.AisacControlName,
			LerpedValue,
			SoundLocation,
			ListenerTransitionRatio);
		/* AisacControl値の更新 */
		VolumeInfo.ValueToApplyMap.Add(InterpolationSettings.AisacControlName, ValueToApply);
	}

	/* 複数のVolumeの境界上で適用する各設定値の補間値を算出する関数 */
	LerpValue CalcLerpedValueForInsideImpl(
		float Value,
		float PrevLerpValue,
		float ValueForVolumeOutside,
		float PrevLerpValueForVolumeOutside,
		float PrevApplyDistance,
		const FVector& AudioVolumeEnterPoint,
		const FVector& SoundLocation,
		bool bIsLerpWork,
		bool bIsSameAudioVolume)
	{
		LerpValue ResultValue;
		float SoundTransitionRatio = 0.0f;

		/* AudioVolumeで設定されているBusNameがPreviousAudioVolumeでも見つかったらValueの補間計算を行う */
		float DistanceBetweenEntranceAndSource = (AudioVolumeEnterPoint - SoundLocation).Size();
		SoundTransitionRatio = FMath::Clamp(DistanceBetweenEntranceAndSource / PrevApplyDistance, 0.0f, 1.0f);

		/* Valueの補間値の算出 */
		if (bIsLerpWork) {
			ResultValue.LerpedValue = FMath::Lerp(PrevLerpValue, Value, SoundTransitionRatio);
			ResultValue.LerpedValueForVolumeOutside = FMath::Lerp(PrevLerpValueForVolumeOutside, ValueForVolumeOutside, SoundTransitionRatio);
		} else {
			ResultValue.LerpedValue = Value;
			ResultValue.LerpedValueForVolumeOutside = ValueForVolumeOutside;
		}
		ResultValue.SoundApplyDistance = PrevApplyDistance;

		return ResultValue;
	}

	/* BusSend値、AisacControl値などADX2APIに適用するパラメータをAudioVolume-Listener距離、AudioVolume-Sound距離から算出する */
	float CalcValueToApplyForInside(
		const AtomAudioVolRelationInfoBase& VolumeInfo,
		const LerpValue& LerpedValue,
		const FVector& SoundLocation,
		float IsListenerInAudioVolume,
		float ListenerTransitionRatio,
		bool IsValueChangeAudioVolumeInside)
	{
		LerpValue InterpolatedValue = LerpedValue;

		auto ListenerVolume		= VolumeInfo.ListenerAudioVolume;
		auto PrevListenerVolume	= VolumeInfo.PrevListenerAudioVolume;
		auto SoundVolume		= VolumeInfo.SoundAudioVolume;
		auto PrevSoundVolume	= VolumeInfo.SoundNeighbourAudioVolume;
		bool bIsSameVolume				= VolumeInfo.bIsBackToSamePreviousVolume;
		const FVector& VolumeEnterPoint	= VolumeInfo.AudioVolumeEnterPoint;

		FVector OutLocation;
		float distance = VolumeInfo.SoundAudioVolume->GetBrushComponent()->GetClosestPointOnCollision(SoundLocation, OutLocation);

		/* Listenerの位置によるAisacの補間値を算出（EntrancePointが格納されていない場合はResultBusSendLevelとなる） */
		float ADX2ApplyValue = 0.0f;
		if (IsListenerInAudioVolume && ListenerVolume->EntranceVolumes.Num() > 0) {
			/* Listenerが属しているAudioVolumeにEntranceVolumeが設定されている場合 */
			if (ListenerVolume == SoundVolume) {
				/* Listenerが属しているAudioVolumeとSoundが属しているAudioVolumeが同じとき */
				float SoundTransitionRatio = 1.0f;
				/* SoundのEntranceからの侵入距離から補間値を計算 */
				SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeEnterPoint).Size() / InterpolatedValue.SoundApplyDistance), 0.0f, 1.0f);
				/* ListenerのEntranceからの侵入距離から補間値を計算 */
				InterpolatedValue.LerpedValue = FMath::Lerp(InterpolatedValue.LerpedValueForVolumeOutside, InterpolatedValue.LerpedValue, SoundTransitionRatio);
				/* ListenerがAudioVolumeの内部に行くほどLerpedValueとなっていく */
				ADX2ApplyValue = IsValueChangeAudioVolumeInside ? FMath::Lerp(InterpolatedValue.LerpedValueForVolumeOutside, InterpolatedValue.LerpedValue, ListenerTransitionRatio) : InterpolatedValue.LerpedValue;
			} else {
				/* Listenerが属しているAudioVolumeと、Soundが属しているAudioVolumeが異なるとき */
				if (SoundVolume->EntranceVolumes.Num() > 0) {
					if (ListenerVolume == PrevSoundVolume) {
						/* Listenerが属しているAudioVolumeとSoundが属しているAudioVolumeが同じとき */
						float SoundTransitionRatio = 1.0f;
						/* SoundのEntranceからの侵入距離から補間値を計算 */
						SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeEnterPoint).Size() / InterpolatedValue.SoundApplyDistance), 0.0f, 1.0f);
						/* ListenerがAudioVolumeの内部に行くほどLerpedValueとなっていく */
						ADX2ApplyValue = IsValueChangeAudioVolumeInside ? InterpolatedValue.LerpedValueForVolumeOutside : FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio);

					} else {
						if (IsValueChangeAudioVolumeInside) {
							ADX2ApplyValue = InterpolatedValue.LerpedValueForVolumeOutside;
						} else {
							/* Listenerが属しているAudioVolumeとSoundが属しているAudioVolumeが同じとき */
							float SoundTransitionRatio = 1.0f;
							/* SoundのEntranceからの侵入距離から補間値を計算 */
							SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeEnterPoint).Size() / InterpolatedValue.SoundApplyDistance), 0.0f, 1.0f);
							/* ListenerのEntranceからの侵入距離から補間値を計算 */
							InterpolatedValue.LerpedValue = FMath::Lerp(InterpolatedValue.LerpedValueForVolumeOutside, InterpolatedValue.LerpedValue, SoundTransitionRatio);
							/* ListenerがAudioVolumeの内部に行くほどLerpedValueとなっていく */
							ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio);
						}
					}
				} else {
					/* Soundが属しているAudioVolumeがEntranceVolumeを持っていない場合 */
					float SoundTransitionRatio = 1.0f;
					/* SoundのEntranceからの侵入距離から補間値を計算 */
					SoundTransitionRatio = FMath::Clamp(((SoundLocation - VolumeEnterPoint).Size() / InterpolatedValue.SoundApplyDistance), 0.0f, 1.0f);
					/* ListenerのEntranceからの侵入距離から補間値を計算 */
					InterpolatedValue.LerpedValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, SoundTransitionRatio);
					/* ListenerがいるAudioVolumeにSoundが入ってきた場合 */
					//ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, IsValueChangeAudioVolumeInside ? ListenerTransitionRatio : (1.0f - ListenerTransitionRatio));
					ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio );
				}
			}
		} else if (IsListenerInAudioVolume && !(ListenerVolume->EntranceVolumes.Num() > 0)) {
			/* Listenerが属しているAudioVolumeにEntranceVolumeが設定されていない場合 */
			if (ListenerVolume == SoundVolume) {
				/* Listenerが属しているAudioVolumeとSoundが属しているAudioVolumeが同じとき */
				ADX2ApplyValue = InterpolatedValue.LerpedValue;
			} else {
				if (!(SoundVolume->EntranceVolumes.Num() > 0)) {
					/* Listenerが属しているAudioVolumeも、Soundが属しているAudioVolumeもEntranceVolumeを持っていない場合 */
					ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio);
				}
				else if (SoundVolume->EntranceVolumes.Num() > 0) {
					/* Listenerが属しているAudioVolumeがEntranceVolumeを持っておらず、Soundが属しているAudioVolumeはEntranceVolumeを持っている場合 */
					bool bIsSameTag = SoundVolume.IsValid() && SoundVolume->CheckIfSharesSameVolumeTag(ListenerVolume.Get());
					if (bIsSameTag) {
						ADX2ApplyValue = InterpolatedValue.LerpedValue;
					}
					else {
						ADX2ApplyValue = InterpolatedValue.LerpedValueForVolumeOutside;
					}
				}
			}
		} else {
			if (IsValueChangeAudioVolumeInside) {
				/* ListenerがAudioVolume外にいる場合 */
				if (PrevListenerVolume != nullptr && PrevListenerVolume->EntranceVolumes.Num() > 0) {
					ADX2ApplyValue = InterpolatedValue.LerpedValueForVolumeOutside;
				} else if (PrevListenerVolume != nullptr && !(PrevListenerVolume->EntranceVolumes.Num() > 0)) {
					ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio);
				} else {
					/* 一度もAudioVolumeにListenerが入っていない場合 */
					if (SoundVolume.IsValid() && SoundVolume->EntranceVolumes.Num() > 0) {
						/* Soundが属しているAudioVolumeにEntranceVolumeが設定されている */
						ADX2ApplyValue = InterpolatedValue.LerpedValueForVolumeOutside;
					} else {
						/* Soundが属しているAudioVolumeにEntranceVolumeが設定されていない */
						if (distance > 0) {
							ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, 0.0f, ListenerTransitionRatio);
						} else {
							ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, InterpolatedValue.LerpedValueForVolumeOutside, ListenerTransitionRatio);
						}
					}
				}
			} else {
				float ResultLerpedValue = (distance > 0) ? 0.0f : InterpolatedValue.LerpedValueForVolumeOutside;
				ADX2ApplyValue = FMath::Lerp(InterpolatedValue.LerpedValue, ResultLerpedValue, ListenerTransitionRatio);
			}
		}

		return ADX2ApplyValue;
	}


	// VolumeInfo.SoundNeighbourAudioVolume を更新する。NearestEntranceVolume の中から、より適切な SoundNeighbourAudioVolume を探す
	// 更新されたら true を返す。更新がなければ false を返す。
	bool UpdateSoundNeighbourAudioVolumeRef(AtomAudioVolRelationInfoBase& VolumeInfo)
	{
		// ローカル変数 SoundNeighbourAudioVolumePtr と VolumeInfo.NeighbourAtomAudioVolumeParam を更新するブロック
		if (!VolumeInfo.NearestEntranceVolume.IsValid()) {
			return false;
		}
		// NearestEntranceVolume の隣接ボリューム群を全部チェックして、SoundAudioVolume と異なるものがあれば採用
		for (int i = 0; i < VolumeInfo.NearestEntranceVolume->NeighbourhoodAudioVolumeArray.Num(); i++) {
			auto AtomAudioVolumeRegisteredEntrance = VolumeInfo.NearestEntranceVolume->NeighbourhoodAudioVolumeArray[i];
			if (AtomAudioVolumeRegisteredEntrance != nullptr && AtomAudioVolumeRegisteredEntrance->GetEnabled() && AtomAudioVolumeRegisteredEntrance != VolumeInfo.SoundAudioVolume) {
				VolumeInfo.SoundNeighbourAudioVolume = AtomAudioVolumeRegisteredEntrance;
				return true;
			}
		}
		return false;
	}


	template <class T>
	void UpdatePreviousParamNameArray(T& VolumeInfo)
	{
		/* AudioVolumeが切り替わった場合、切り替わる前のAisacControl名を保存しておく */
		auto SoundNeighbourAudioVolumePtr = VolumeInfo.SoundNeighbourAudioVolume.Get();
		if (SoundNeighbourAudioVolumePtr
			&& SoundNeighbourAudioVolumePtr->IsValidLowLevel()
			&& !SoundNeighbourAudioVolumePtr->GetFName().IsNone()) {
			::UpdatePreviousParamNameArrayImpl(VolumeInfo);
		}
	}


	template <class T>
	float CalcTransitionRatio(
		const AtomAudioVolRelationInfoBase& VolumeInfo,
		const T& InterpolationSetting,
		const FVector& ListenerLocation,
		bool IsValueChangeAudioVolumeInside,
		bool isSelectedListenerAudioVolume,
		float CullingDistance)
	{
		float DistanceBetweenVolumeAndListener = ::GetDistanceBetweenVolumeAndListener(
			VolumeInfo.ListenerAudioVolume.Get(),
			VolumeInfo.SoundAudioVolume.Get(),
			IsValueChangeAudioVolumeInside,
			CullingDistance,
			VolumeInfo.MaxInterpolationDistance,
			isSelectedListenerAudioVolume,
			ListenerLocation);

		// return TransitionRatio
		return FMath::Clamp(DistanceBetweenVolumeAndListener / InterpolationSetting.Width, 0.0f, 1.0f);
	}


	LerpValue InterpolateInside(
		const AtomAudioVolRelationInfoBase& VolumeInfo,
		const FBusSendInterpolationSettings& InterpolationSetting,
		const FVector& SoundLocation,
		const FVector& ListenerLocation)
	{
		LerpValue LerpedValue{};
		LerpedValue.LerpedValue					= 1.0f;
		LerpedValue.LerpedValueForVolumeOutside = 1.0f;
		{
			const auto& ParamName = InterpolationSetting.BusName;

			// この if ブロックは Volume 切り替わり時の LervpedValue を計算する 
			if (VolumeInfo.SoundNeighbourAudioVolume->Validate() && VolumeInfo.SoundAudioVolume != VolumeInfo.SoundNeighbourAudioVolume) {
				/* PreviousAudioVolumeと異なるときは、サウンドのAudioVolumeに侵入したポイントから */
				/* PreviousAudioVolumeのApplyDistanceによる距離の比率を計算し、                   */
				/* PreviousAudioVolumeとAudioVolumeのバスセンド量の補間値を計算する               */
				int32 isFoundParamName = VolumeInfo.StoredNullLerp->PreviousParamNameArray.Find(ParamName);
				auto NeighborAtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(VolumeInfo.SoundNeighbourAudioVolume.Get());
				auto InterpolationSettingsForNeighbour = NeighborAtomAudioVolumeParam->BusSendInterpolateSettings;
				if ((isFoundParamName != INDEX_NONE) && (NeighborAtomAudioVolumeParam)) {
					/* Bus名の設定順序が異なる可能性があるためFindで検索する */
					int32 Index = 0;
					for (; Index < InterpolationSettingsForNeighbour.Num() + 1; Index++) {
						if (Index == InterpolationSettingsForNeighbour.Num()) {
							/* 一つ前のAudioVolumeに設定されていなかったParamNameが来た場合は何もLerpValueは1.0がかかるようにする */
							Index = -1;
							break;
						}
						if (InterpolationSettingsForNeighbour[Index].BusName == ParamName) {
							break;
						}

					}
					if (Index != -1) {
						const auto& NeighbourInterpolationSetting = InterpolationSettingsForNeighbour[Index];
						LerpedValue = ::CalcLerpedValueForInsideImpl(
							InterpolationSetting.BusSendLevelForInside,
							NeighbourInterpolationSetting.BusSendLevelForInside,
							InterpolationSetting.BusSendLevelForOutside,
							NeighbourInterpolationSetting.BusSendLevelForOutside,
							NeighbourInterpolationSetting.Width,
							VolumeInfo.AudioVolumeEnterPoint,
							SoundLocation,
							VolumeInfo.bIsWorkLerp != 0,
							VolumeInfo.bIsBackToSamePreviousVolume);
					}
				}
			}
			else if (!VolumeInfo.SoundNeighbourAudioVolume->Validate() && VolumeInfo.SoundAudioVolume != VolumeInfo.SoundNeighbourAudioVolume) {
				/* SoundがVolume外からVolume内に入る場合 */
				int32 find_index = -1;
				bool isFoundParamName = VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Find(ParamName, find_index);
				if (isFoundParamName) {
					LerpedValue = ::CalcLerpedValueForInsideImpl(
						InterpolationSetting.BusSendLevelForInside,
						0,
						InterpolationSetting.BusSendLevelForOutside,
						0,
						VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance[find_index],
						VolumeInfo.AudioVolumeEnterPoint,
						SoundLocation,
						VolumeInfo.SoundAudioVolume->EntranceVolumes.Num() > 0,
						VolumeInfo.bIsBackToSamePreviousVolume);
				} else if (!VolumeInfo.bIsInAudioVolumeAtFirstPlay) {
					LerpedValue = ::CalcLerpedValueForInsideImpl(
						InterpolationSetting.BusSendLevelForInside,
						0,
						InterpolationSetting.BusSendLevelForOutside,
						0,
						InterpolationSetting.Width,
						VolumeInfo.AudioVolumeEnterPoint,
						SoundLocation,
						VolumeInfo.SoundAudioVolume->EntranceVolumes.Num() > 0,
						VolumeInfo.bIsBackToSamePreviousVolume);
				}
			} else {
				/* AudioVolumeの切り替わりが起きていない場合 */
				LerpedValue.LerpedValue = InterpolationSetting.BusSendLevelForInside;
				LerpedValue.LerpedValueForVolumeOutside = InterpolationSetting.BusSendLevelForOutside;
			}
		}
		return LerpedValue;
	}


	LerpValue InterpolateInside(
		const AtomAudioVolRelationInfoBase& VolumeInfo,
		const FAisacControlInterpolationSettings& InterpolateSetting,
		const FVector& SoundLocation,
		const FVector& ListenerLocation)
	{
		LerpValue LerpedValue{};
		LerpedValue.LerpedValue = 1.0;
		LerpedValue.LerpedValueForVolumeOutside = 1.0f;
		{
			const auto& ParamName = InterpolateSetting.AisacControlName;

			// この if ブロックは Volume 切り替わり時の LervpedValue を計算する
			if (VolumeInfo.SoundNeighbourAudioVolume->Validate() && VolumeInfo.SoundAudioVolume != VolumeInfo.SoundNeighbourAudioVolume) {
				/* PreviousAudioVolumeと異なるときは、サウンドのAudioVolumeに侵入したポイントから */
				/* PreviousAudioVolumeのApplyDistanceによる距離の比率を計算し、                   */
				/* PreviousAudioVolumeとAudioVolumeのバスセンド量の補間値を計算する               */
				int32 isFoundParamName = VolumeInfo.StoredNullLerp->PreviousParamNameArray.Find(ParamName);
				auto NeighbourAtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(VolumeInfo.SoundNeighbourAudioVolume.Get());
				auto InterpolateSettingsForNeighbour = NeighbourAtomAudioVolumeParam->AisacControlInterpolateSettings;
				if ((isFoundParamName != INDEX_NONE) && (NeighbourAtomAudioVolumeParam)) {
					/* Bus名の設定順序が異なる可能性があるためFindで検索する */
					int32 find_index = 0;
					for (; find_index < InterpolateSettingsForNeighbour.Num() + 1; find_index++) {
						if (find_index == InterpolateSettingsForNeighbour.Num()) {
							/* 一つ前のAudioVolumeに設定されていなかったParamNameが来た場合は何もLerpValueは1.0がかかるようにする */
							find_index = -1;
							break;
						}
						if (InterpolateSettingsForNeighbour[find_index].AisacControlName == ParamName) {
							break;
						}

					}
					if (find_index != -1) {
						const auto& tmp_InterpolateSetting = InterpolateSettingsForNeighbour[find_index];
						LerpedValue = ::CalcLerpedValueForInsideImpl(
							InterpolateSetting.AisacControlValueForInside,
							tmp_InterpolateSetting.AisacControlValueForInside,
							InterpolateSetting.AisacControlValueForOutside,
							tmp_InterpolateSetting.AisacControlValueForOutside,
							tmp_InterpolateSetting.Width,
							VolumeInfo.AudioVolumeEnterPoint,
							SoundLocation,
							VolumeInfo.bIsWorkLerp != 0,
							VolumeInfo.bIsBackToSamePreviousVolume);
					}
				}
			}
			else if (!VolumeInfo.SoundNeighbourAudioVolume->Validate() && VolumeInfo.SoundAudioVolume != VolumeInfo.SoundNeighbourAudioVolume) {
				/* SoundがVolume外からVolume内に入る場合 */
				int32 Index = -1;
				bool bIsFoundParamName = VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Find(ParamName, Index);
				if (bIsFoundParamName) {
					LerpedValue = ::CalcLerpedValueForInsideImpl(
						InterpolateSetting.AisacControlValueForInside,
						0,
						InterpolateSetting.AisacControlValueForOutside,
						0,
						VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance[Index],
						VolumeInfo.AudioVolumeEnterPoint,
						SoundLocation,
						VolumeInfo.SoundAudioVolume->EntranceVolumes.Num() > 0,
						VolumeInfo.bIsBackToSamePreviousVolume);
				} else if(!VolumeInfo.bIsInAudioVolumeAtFirstPlay) {
					LerpedValue = ::CalcLerpedValueForInsideImpl(
						InterpolateSetting.AisacControlValueForInside,
						0,
						InterpolateSetting.AisacControlValueForOutside,
						0,
						InterpolateSetting.Width,
						VolumeInfo.AudioVolumeEnterPoint,
						SoundLocation,
						VolumeInfo.SoundAudioVolume->EntranceVolumes.Num() > 0,
						VolumeInfo.bIsBackToSamePreviousVolume);
				}
			}
			else {
				/* AudioVolumeの切り替わりが起きていない場合 */
				LerpedValue.LerpedValue = InterpolateSetting.AisacControlValueForInside;
				LerpedValue.LerpedValueForVolumeOutside = InterpolateSetting.AisacControlValueForOutside;
			}
		}
		return LerpedValue;
	}


	template <class T>
	void UpdateApplyValueMapForInsideImpl(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		T& InterpolateSetting,
		const FAtomAudioVolumeParameters* const AtomAudioVolumeParam,
		const FVector& SoundLocation,
		const FVector& ListenerLocation,
		const FString& ParameterName,
		bool bIsValueChangedAudioVolumeInside)
	{
		// PrevAudioVolumeに格納された際に利用するため、パラメータの補間値を計算しておく
		LerpValue LerpedValue = ::InterpolateInside(VolumeInfo, InterpolateSetting, SoundLocation, ListenerLocation);
		InterpolateSetting.LerpValue = LerpedValue.LerpedValue;
		InterpolateSetting.LerpValueForVolumeOutside = LerpedValue.LerpedValueForVolumeOutside;

		bool bIsListenerExistingInAudioVolume = VolumeInfo.ListenerAudioVolume->Validate();
		bool bIsSelectedListenerAudioVolume = bIsListenerExistingInAudioVolume
			&& bIsValueChangedAudioVolumeInside
			&& (VolumeInfo.ListenerAudioVolume.Get()->EntranceVolumes.Num() > 0);

		float TransitionRatio = ::CalcTransitionRatio(
			VolumeInfo,
			InterpolateSetting,
			ListenerLocation,
			bIsValueChangedAudioVolumeInside,
			bIsSelectedListenerAudioVolume,
			AtomAudioVolumeParam->MaxDistanceForEntranceVolume);

		/* Listenerの位置によるBusSendの補間値を算出（EntrancePointが格納されていない場合はResultValueForInsideとなる） */
		float ApplyValue = ::CalcValueToApplyForInside(
			VolumeInfo,
			LerpedValue,
			SoundLocation,
			bIsListenerExistingInAudioVolume,
			TransitionRatio,
			bIsValueChangedAudioVolumeInside);

		/* BusSend値の更新 */
		VolumeInfo.ValueToApplyMap.Add(ParameterName, ApplyValue);
	}


	template <class T>
	void UpdateMaxApplyDistanceImpl(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const TArray<T>& InterpolateSettings)
	{
		if (InterpolateSettings.Num() <= 0) {
			return;
		}
		VolumeInfo.MaxInterpolationDistance = InterpolateSettings[0].Width;
		for (const auto& InterpolateSetting : InterpolateSettings) {
			if (VolumeInfo.MaxInterpolationDistance < InterpolateSetting.Width) {
				VolumeInfo.MaxInterpolationDistance = InterpolateSetting.Width;
			}
		}
	}


	void UpdateMaxApplyDistanceInVolumeInfo(
		AtomAudioVolRelationInfoBus& VolumeInfo,
		const FAtomAudioVolumeParameters* const AtomAudioVolumeParam)
	{
		if (!VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			return;
		}
		UpdateMaxApplyDistanceImpl(
			VolumeInfo,
			AtomAudioVolumeParam->BusSendInterpolateSettings);
	}


	void UpdateMaxApplyDistanceInVolumeInfo(
		AtomAudioVolRelationInfoAisac& VolumeInfo,
		const FAtomAudioVolumeParameters* const AtomAudioVolumeParam)
	{
		if (!VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			return;
		}
		UpdateMaxApplyDistanceImpl(
			VolumeInfo,
			AtomAudioVolumeParam->AisacControlInterpolateSettings);
	}


	void UpdateApplyValueMapForInside(
		AtomAudioVolRelationInfoBus& VolumeInfo,
		FAtomAudioVolumeParameters* const AtomAudioVolumeParam,
		const FVector& SoundLocation,
		const FVector& ListenerLocation)
	{
		auto& InterpolateSettings = AtomAudioVolumeParam->BusSendInterpolateSettings;
		if (InterpolateSettings.Num() <= 0) {
			return;
		}
		VolumeInfo.ValueToApplyMap.Empty();
		VolumeInfo.ValueToApplyMap.Reserve(InterpolateSettings.Num());
		for (auto& InterpolateSetting : InterpolateSettings) {
			auto ParameterName = InterpolateSetting.BusName;
			::UpdateApplyValueMapForInsideImpl(
				VolumeInfo,
				InterpolateSetting,
				AtomAudioVolumeParam,
				SoundLocation,
				ListenerLocation,
				ParameterName,
				AtomAudioVolumeParam->bSwitchIntepolationInsideForBus);
		}
	}


	void UpdateApplyValueMapForInside(
		AtomAudioVolRelationInfoAisac& VolumeInfo,
		FAtomAudioVolumeParameters* const AtomAudioVolumeParam,
		const FVector& SoundLocation,
		const FVector& ListenerLocation)
	{
		auto& InterpolateSettings = AtomAudioVolumeParam->AisacControlInterpolateSettings;
		if (InterpolateSettings.Num() <= 0) {
			return;
		}
		VolumeInfo.ValueToApplyMap.Empty();
		VolumeInfo.ValueToApplyMap.Reserve(InterpolateSettings.Num());
		for (auto& InterpolateSetting : InterpolateSettings) {
			auto ParameterName = InterpolateSetting.AisacControlName;
			::UpdateApplyValueMapForInsideImpl(
				VolumeInfo,
				InterpolateSetting,
				AtomAudioVolumeParam,
				SoundLocation,
				ListenerLocation,
				ParameterName,
				AtomAudioVolumeParam->bSwitchIntepolationInsideForAisac);
		}
	}


	template <class T>
	void ProcessAudioVolumeForInside(
		T& VolumeInfo,
		const FVector& SoundLocation,
		const FVector& ListenerLocation)
	{
		if (!VolumeInfo.SoundAudioVolume->Validate()) {
			return;
		}

		FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(VolumeInfo.SoundAudioVolume.Get());
		if (!AtomAudioVolumeParam) {
			return;
		}

		UpdateMaxApplyDistanceInVolumeInfo(VolumeInfo, AtomAudioVolumeParam);
		UpdateApplyValueMapForInside(VolumeInfo, AtomAudioVolumeParam, SoundLocation, ListenerLocation);
	}


	template <class T>
	void ProcessAudioVolumeForOutside(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const TArray<T>& InterpolationSettings,
		const FVector& SoundLocation,
		const FVector& ListenerLocation,
		float MaxDistanceForEntranceVolume)
	{
		if (VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			VolumeInfo.StoredNullLerp->StoredNullLerpParamName.Empty();
			VolumeInfo.StoredNullLerp->StoredNullLerpParam.Empty();
			VolumeInfo.StoredNullLerp->StoredNullLerpParamForVolumeOutside.Empty();
			VolumeInfo.StoredNullLerp->StoredNullParamApplyDistance.Empty();
		}

		if (!VolumeInfo.SoundNeighbourAudioVolume.Get()) {
			return;
		}

		if (!(InterpolationSettings.Num() > 0)) {
			return;
		}

		if (VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			VolumeInfo.MaxInterpolationDistance = InterpolationSettings[0].Width;
			for (int i = 1; i < InterpolationSettings.Num(); i++) {
				auto InterpolationDistance = InterpolationSettings[i].Width;
				if (VolumeInfo.MaxInterpolationDistance < InterpolationDistance) {
					VolumeInfo.MaxInterpolationDistance = InterpolationDistance;
				}
			}
		}

		float DistanceBetweenVolumeAndListener = ::CalcDistanceBetweenVolumeAndListener(
			MaxDistanceForEntranceVolume,
			VolumeInfo.MaxInterpolationDistance,
			VolumeInfo.SoundNeighbourAudioVolume.Get(),
			ListenerLocation);

		VolumeInfo.ValueToApplyMap.Empty();
		VolumeInfo.ValueToApplyMap.Reserve(InterpolationSettings.Num());
		for (int i = 0; i < InterpolationSettings.Num(); i++) {
			float ListenerTransitionRatio = FMath::Clamp(DistanceBetweenVolumeAndListener / InterpolationSettings[i].Width, 0.0f, 1.0f);
			UpdateApplyValueMapForOutside(
				VolumeInfo,
				InterpolationSettings[i],
				SoundLocation,
				ListenerTransitionRatio);
		}
	}


	void UpdateRefsToAudioVolume(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const FVector& SoundLocation,
		bool IsMovableSound,
		bool CanStriddleAudioVolume)
	{

		auto PreviousVolume = VolumeInfo.SoundAudioVolume.Get();
		
		/* サウンドが移動しなかったり、サウンドのVolume間の遷移がない場合は、AudioVolumeの取得し直しはしない */
		auto CurrentVolume = (!IsMovableSound || !CanStriddleAudioVolume) ?
			PreviousVolume : AAtomAudioVolume::GetAudioSettings(
				SoundLocation,
				VolumeInfo.VolumeType,
				VolumeInfo.NearestEntranceVolume);

		bool IsNeverEntringVolume = !CurrentVolume.IsValid();
		if (IsNeverEntringVolume) {
			auto NearestAudioVolume = AAtomAudioVolume::GetNearestAtomAudioVolume(SoundLocation, VolumeInfo.VolumeType);
			if (NearestAudioVolume.IsValid() &&NearestAudioVolume->EntranceVolumes.Num() == 0) {
				CurrentVolume = NearestAudioVolume;
			}
		}

		/* Volumeが切り替わっているか */
		VolumeInfo.bIsEnteredToAnotherAudioVolume = CurrentVolume != PreviousVolume;
		if (VolumeInfo.bIsEnteredToAnotherAudioVolume) {
			VolumeInfo.bIsBackToSamePreviousVolume = (CurrentVolume == VolumeInfo.SoundNeighbourAudioVolume);
			if (!VolumeInfo.bIsBackToSamePreviousVolume && CurrentVolume != nullptr && VolumeInfo.SoundAudioVolume.IsValid()) {
				/* AudioVolume同士の遷移カウント */
				/* 外⇔中の移動はカウントしない */
				VolumeInfo.bIsWorkLerp = !VolumeInfo.bIsWorkLerp;
			} else if (VolumeInfo.bIsBackToSamePreviousVolume && PreviousVolume) {
				if (CurrentVolume != nullptr) {
					VolumeInfo.bIsWorkLerp = !VolumeInfo.bIsWorkLerp;
				}
				else {
					VolumeInfo.bIsWorkLerp = true;
				}
			} else {
				VolumeInfo.bIsWorkLerp = false;
			}
			/* AudioVolume が切り替わったので Neighbor への参照を更新 */
			VolumeInfo.SoundNeighbourAudioVolume = PreviousVolume;
		}

		/* AudioVolume への参照を更新 */
		VolumeInfo.SoundAudioVolume = CurrentVolume;
	}


	void UpdateNeighborVolumeAndParams(
		AtomAudioVolRelationInfoBus& VolumeInfo,
		const FVector& SoundLocation)
	{
		/* NearestEntranceVolume_Bus の更新 */
		VolumeInfo.NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
			SoundLocation,
			VolumeInfo.SoundAudioVolume.Get(),
			VolumeInfo.SoundNeighbourAudioVolume.Get(),
			VolumeInfo.AudioVolumeEnterPoint
		);

		UpdateSoundNeighbourAudioVolumeRef(VolumeInfo);
		VolumeInfo.EntranceVolumeForEnterPoint = VolumeInfo.NearestEntranceVolume.Get();

		UpdatePreviousParamNameArray(VolumeInfo);
	}


	void UpdateNeighborVolumeAndParams(
		AtomAudioVolRelationInfoAisac& VolumeInfo,
		const FVector& SoundLocation,
		const AtomAudioVolRelationInfoBus& BusInfo)
	{
		/* NearestEntranceVolume_Aisac の更新 */
		{
			bool IsAudioVolumeForAisacSameWithOneForBus =
				(VolumeInfo.SoundNeighbourAudioVolume.Get() == BusInfo.SoundNeighbourAudioVolume.Get()) &&
				(VolumeInfo.SoundAudioVolume.Get() == BusInfo.SoundAudioVolume.Get());
			if (IsAudioVolumeForAisacSameWithOneForBus) {
				VolumeInfo.NearestEntranceVolume = BusInfo.NearestEntranceVolume;
				VolumeInfo.AudioVolumeEnterPoint = BusInfo.AudioVolumeEnterPoint;
			}
			else {
				VolumeInfo.NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
					SoundLocation,
					VolumeInfo.SoundAudioVolume.Get(),
					VolumeInfo.SoundNeighbourAudioVolume.Get(),
					VolumeInfo.AudioVolumeEnterPoint
				);
			}
		}

		UpdateSoundNeighbourAudioVolumeRef(VolumeInfo);
		VolumeInfo.EntranceVolumeForEnterPoint = VolumeInfo.NearestEntranceVolume.Get();

		/* NeighborAtomAudioVolumeParam の更新？ */
		UpdatePreviousParamNameArray(VolumeInfo);
	}


	void FirstUpdateApplyValueMapForInsideImpl(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const TArray<FBusSendInterpolationSettings>& InterpolationSettings,
		float DistanceBetweenVolumeAndListener)
	{
		VolumeInfo.ValueToApplyMap.Reserve(InterpolationSettings.Num());
		for (const auto& InterpolationSetting : InterpolationSettings) {
			const auto TransitionRatio = FMath::Clamp(DistanceBetweenVolumeAndListener / InterpolationSetting.Width, 0.0f, 1.0f);
			const auto ValueToApply = FMath::Lerp(
				InterpolationSetting.BusSendLevelForOutside,
				InterpolationSetting.BusSendLevelForInside,
				TransitionRatio);
			VolumeInfo.ValueToApplyMap.Add(InterpolationSetting.BusName, ValueToApply);
		}
	}


	void FirstUpdateApplyValueMapForInsideImpl(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const TArray<FAisacControlInterpolationSettings>& InterpolateSettings,
		float DistanceBetweenVolumeAndListener)
	{
		VolumeInfo.ValueToApplyMap.Reserve(InterpolateSettings.Num());
		for (const auto& InterpolateSetting : InterpolateSettings) {
			const auto TransitionRatio = FMath::Clamp(DistanceBetweenVolumeAndListener / InterpolateSetting.Width, 0.0f, 1.0f);
			const auto ValueToApply = FMath::Lerp(
				InterpolateSetting.AisacControlValueForOutside,
				InterpolateSetting.AisacControlValueForInside,
				TransitionRatio);
			VolumeInfo.ValueToApplyMap.Add(InterpolateSetting.AisacControlName, ValueToApply);
		}
	}


	template <class T>
	void FirstUpdateApplyValueMapForInside(
		AtomAudioVolRelationInfoBase& VolumeInfo,
		const TArray<T> InterpolationSettings,
		bool IsValueChangeAudioVolumeInside,
		float MaxDistanceForEntranceVolume,
		float MaxInterpolationDistance,
		const FVector& ListenerLocation)
	{
		if (InterpolationSettings.Num() <= 0) {
			return;
		}
		VolumeInfo.MaxInterpolationDistance = MaxInterpolationDistance;
		auto ListenerAudioVolume = VolumeInfo.ListenerAudioVolume.Get();
		const auto IsExistingListenerAudioVolume = (ListenerAudioVolume && ListenerAudioVolume->GetEnabled());
		const auto IsSelectedListenerAudioVolume = IsExistingListenerAudioVolume
			&& IsValueChangeAudioVolumeInside
			&& ListenerAudioVolume->EntranceVolumes.Num() > 0
			&& ListenerAudioVolume->GetPriority() >= VolumeInfo.SoundAudioVolume.Get()->GetPriority();

		auto DistanceBetweenVolumeAndListener = ::GetDistanceBetweenVolumeAndListener(
			ListenerAudioVolume,
			VolumeInfo.SoundAudioVolume.Get(),
			IsValueChangeAudioVolumeInside,
			MaxDistanceForEntranceVolume,
			VolumeInfo.MaxInterpolationDistance,
			IsSelectedListenerAudioVolume,
			ListenerLocation);
		// 適用するパラメータ値のマップを更新
		FirstUpdateApplyValueMapForInsideImpl(VolumeInfo, InterpolationSettings, DistanceBetweenVolumeAndListener);
		VolumeInfo.bIsEnteredToAnotherAudioVolume = true;
	}

}


FAtomAudioVolumeHandler::FAtomAudioVolumeHandler()
{
	BusInfo = MakeUnique<AtomAudioVolRelationInfoBus>();
	AisacInfo = MakeUnique<AtomAudioVolRelationInfoAisac>();
	SoundLocation = FVector::ZeroVector;
	ListenerLocation = FVector::ZeroVector;
	bIsMovableSound = false;
	bCanStraddleAudioVolume = false;
}


FAtomAudioVolumeHandler::~FAtomAudioVolumeHandler()
{
	BusInfo.Reset();
	AisacInfo.Reset();
}


const TMap<FString, float>& FAtomAudioVolumeHandler::GetAisacControlValueMap() const
{
	return AisacInfo->ValueToApplyMap;
}


const TMap<FString, float>& FAtomAudioVolumeHandler::GetBusSendLevelMap() const
{
	return BusInfo->ValueToApplyMap;
}


void FAtomAudioVolumeHandler::FirstProcessAudioVolumeForInside()
{
	const auto IsExistingSoundAudioVolume_Bus = (BusInfo->SoundAudioVolume.Get() && BusInfo->SoundAudioVolume.Get()->GetEnabled());
	const auto IsExistingSoundAudioVolume_Aisac = (AisacInfo->SoundAudioVolume.Get() && AisacInfo->SoundAudioVolume.Get()->GetEnabled());
	if (!IsExistingSoundAudioVolume_Bus && !IsExistingSoundAudioVolume_Aisac) {
		/* SoundがAudioVolumeに属していないため、Soundに対する処理は何もしない */
		return;
	}

	/* BusSend系処理 */
	{
		// 適用するパラメータ値のマップを更新
		BusInfo->ValueToApplyMap.Empty();
		const auto AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(BusInfo->SoundAudioVolume.Get());
		if (IsExistingSoundAudioVolume_Bus && AtomAudioVolumeParam) {
			FirstUpdateApplyValueMapForInside(
				*BusInfo.Get(),
				AtomAudioVolumeParam->BusSendInterpolateSettings,
				AtomAudioVolumeParam->bSwitchIntepolationInsideForBus,
				AtomAudioVolumeParam->MaxDistanceForEntranceVolume,
				AAtomAudioVolume::MaxInterpolationDistanceForBus,
				ListenerLocation);
			BusInfo->bIsInAudioVolumeAtFirstPlay = true;
		}
		// ネイバーボリュームを更新
		BusInfo->SoundNeighbourAudioVolume = BusInfo->SoundAudioVolume.Get();
		// 最近エントランスボリュームを更新
		BusInfo->NearestEntranceVolume.Reset();
		BusInfo->NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
			SoundLocation,
			BusInfo->SoundAudioVolume.Get(),
			nullptr,
			BusInfo->AudioVolumeEnterPoint);
	}

	/* Aisac系処理 */
	{
		// 適用するパラメータ値のマップを更新
		AisacInfo->ValueToApplyMap.Empty();
		const auto AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(AisacInfo->SoundAudioVolume.Get());
		if (IsExistingSoundAudioVolume_Aisac && AtomAudioVolumeParam) {
			FirstUpdateApplyValueMapForInside(
				*AisacInfo.Get(),
				AtomAudioVolumeParam->AisacControlInterpolateSettings,
				AtomAudioVolumeParam->bSwitchIntepolationInsideForAisac,
				AtomAudioVolumeParam->MaxDistanceForEntranceVolume,
				AAtomAudioVolume::MaxInterpolationDistanceForAisac,
				ListenerLocation);
			AisacInfo->bIsInAudioVolumeAtFirstPlay = true;
		}
		// ネイバーボリュームを更新
		AisacInfo->SoundNeighbourAudioVolume = AisacInfo->SoundAudioVolume.Get();
		// 最近エントランスボリュームを更新
		AisacInfo->NearestEntranceVolume.Reset();
		if (AisacInfo->SoundAudioVolume.Get() == BusInfo->SoundAudioVolume.Get()) {
			// AisacInfo が BusInfo と同じボリュームを見ている場合、その他のボリュームへの参照も同じものを見ている
			AisacInfo->AudioVolumeEnterPoint = BusInfo->AudioVolumeEnterPoint;
			AisacInfo->NearestEntranceVolume = BusInfo->NearestEntranceVolume;
		} else {
			AisacInfo->NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
				SoundLocation,
				AisacInfo->SoundAudioVolume.Get(),
				nullptr,
				AisacInfo->AudioVolumeEnterPoint);
		}
	}
}


void FAtomAudioVolumeHandler::FirstProcessAudioVolumeForOutside()
{
	auto IsExistingSoundAudioVolume_Bus = (BusInfo->SoundAudioVolume.Get() && BusInfo->SoundAudioVolume.Get()->GetEnabled());
	auto IsExistingSoundAudioVolume_Aisac = (AisacInfo->SoundAudioVolume.Get() && AisacInfo->SoundAudioVolume.Get()->GetEnabled());

	if (!IsExistingSoundAudioVolume_Bus && !IsExistingSoundAudioVolume_Aisac) {
		// SoundがAudioVolumeに属していないため何もしない
		return;
	}

	// FirstProcessAudioVolumeForOutside関数内のみで使う関数の定義
	struct FirstProcessAudioVolumeForOutsideFunc {
	private:
		static float GetInterpolateValue(const TWeakObjectPtr<AAtomAudioVolume> atom_audio_volume, float width, const FVector& Location)
		{
			FVector OutLocation;
			return atom_audio_volume->EntranceVolumes.Num() > 0 ?
				CalcDistanceBetweenVolumeAndListener(width * 2, width, atom_audio_volume.Get(), Location) : atom_audio_volume->GetBrushComponent()->GetClosestPointOnCollision(Location, OutLocation);
		};
	public:
		static float GetAudioVolumeValueForOutSide(const TWeakObjectPtr<AAtomAudioVolume> atom_audio_volume, float width, const FVector& SoundLocation, const FVector& ListenerLocation, float InsedeValue, float OutsideValue)
		{
			float InterpolateDistance_Sound = GetInterpolateValue(atom_audio_volume, width, SoundLocation);
			float InterpolateDistance_Listener = GetInterpolateValue(atom_audio_volume, width, ListenerLocation);
			float lerp_parameter_sound = FMath::Clamp((InterpolateDistance_Sound / width), 0.0f, 1.0f);
			float lerp_parameter_Listener = FMath::Clamp((InterpolateDistance_Listener / width), 0.0f, 1.0f);
			float BusSendLevelForOutside = FMath::Lerp(InsedeValue, OutsideValue, lerp_parameter_Listener);
			return FMath::Lerp(BusSendLevelForOutside, 0.0f, lerp_parameter_sound);
		};
	};

	// BusSend系処理
	{
		// リスナーがAudioVolumeに入っていない場合で、サウンドがAudioVolumeに入っていた場合はそのボリュームの外向けのバスセンド量を適用する
		{
			BusInfo->ValueToApplyMap.Empty();
			const auto& AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(BusInfo->SoundAudioVolume.Get());
			if (IsExistingSoundAudioVolume_Bus && AtomAudioVolumeParam && AtomAudioVolumeParam->BusSendInterpolateSettings.Num() > 0) {
				BusInfo->ValueToApplyMap.Reserve(AtomAudioVolumeParam->BusSendInterpolateSettings.Num());
				for (auto& sound_cue_bus : AtomAudioVolumeParam->BusSendInterpolateSettings) {
					float ResultValue_Sound = FirstProcessAudioVolumeForOutsideFunc::GetAudioVolumeValueForOutSide(BusInfo->SoundAudioVolume, sound_cue_bus.Width, SoundLocation, ListenerLocation, sound_cue_bus.BusSendLevelForInside, sound_cue_bus.BusSendLevelForOutside);
					BusInfo->ValueToApplyMap.Add(sound_cue_bus.BusName, ResultValue_Sound);
				}
				BusInfo->bIsInAudioVolumeAtFirstPlay = true;
			}
		}
		// ネイバーボリュームの更新
		BusInfo->SoundNeighbourAudioVolume = BusInfo->SoundAudioVolume.Get();
		// 最近エントランスボリュームの更新
		BusInfo->NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
			SoundLocation,
			BusInfo->SoundNeighbourAudioVolume.Get(),
			nullptr,
			BusInfo->AudioVolumeEnterPoint);
	}

	// Aisac系処理
	{
		// リスナーがAudioVolumeに入っていない場合で、サウンドがAudioVolumeに入っていた場合、そのボリュームの外向けのAisac値を適用する
		{
			AisacInfo->ValueToApplyMap.Empty();
			const auto& AtomAudioVolumeParam_Aisac = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(AisacInfo->SoundAudioVolume.Get());
			if (IsExistingSoundAudioVolume_Aisac && AtomAudioVolumeParam_Aisac && AtomAudioVolumeParam_Aisac->AisacControlInterpolateSettings.Num() > 0) {
				AisacInfo->ValueToApplyMap.Reserve(AtomAudioVolumeParam_Aisac->AisacControlInterpolateSettings.Num());
				for (auto& aisac_control : AtomAudioVolumeParam_Aisac->AisacControlInterpolateSettings) {
					float ResultValue_Sound = FirstProcessAudioVolumeForOutsideFunc::GetAudioVolumeValueForOutSide(AisacInfo->SoundAudioVolume, aisac_control.Width, SoundLocation, ListenerLocation, aisac_control.AisacControlValueForInside, aisac_control.AisacControlValueForOutside);
					AisacInfo->ValueToApplyMap.Add(aisac_control.AisacControlName, ResultValue_Sound);
				}
				AisacInfo->bIsInAudioVolumeAtFirstPlay = true;
			}
		}
		// ネイバーボリュームの更新
		AisacInfo->SoundNeighbourAudioVolume = AisacInfo->SoundAudioVolume.Get();
		// 最近エントランスボリュームの更新
		if (BusInfo->SoundAudioVolume.Get() == AisacInfo->SoundAudioVolume.Get()) {
			AisacInfo->AudioVolumeEnterPoint = BusInfo->AudioVolumeEnterPoint;
			AisacInfo->NearestEntranceVolume = BusInfo->NearestEntranceVolume;
		} else {
			AisacInfo->NearestEntranceVolume = FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
				SoundLocation,
				AisacInfo->SoundAudioVolume.Get(),
				nullptr,
				AisacInfo->AudioVolumeEnterPoint);
		}
	}
}


void FAtomAudioVolumeHandler::FirstProcessAudioVolume(bool bIsEnableAudioVolume, bool bIsUseDistanceForEnablingAudioVolume, float DistanceForEnablingAudioVolumeFlag)
{
#if WITH_EDITOR
	UWorld* World = (GEditor ? (GEditor->PlayWorld) : nullptr);
	if (GEditor && !World) {
		return;
	}
#endif

	if (IsGarbageCollecting()) {
		return;
	}

	if (bIsUseDistanceForEnablingAudioVolume) {
		/* リスナとAtomComponentの距離がDistanceForEnablingAudioVolumeよりも近くにあるか判定し、近くにある場合はAudioVolumeの機能を有効にする */
		bIsEnableAudioVolume = (ListenerLocation - SoundLocation).SizeSquared() < DistanceForEnablingAudioVolumeFlag * DistanceForEnablingAudioVolumeFlag;
	}

	if (!bIsEnableAudioVolume) {
		return;
	}

	struct FirstProcessAudioVolumeFunc {
		static TWeakObjectPtr<AAtomAudioVolume> PrepareProcessFirstProcessAudioVolume(TWeakObjectPtr<AAtomAudioVolume> listener_audio_volume, FVector SoundLocation, EAtomAudioVolumeType Type, bool& bIsExistingListenerAudioVolume)
		{
			TWeakObjectPtr<AAtomAudioVolume> new_sound_audio_volume = AAtomAudioVolume::GetAudioSettings(SoundLocation, Type);
			bool bIsSameTag = new_sound_audio_volume.IsValid() && new_sound_audio_volume->CheckIfSharesSameVolumeTag(listener_audio_volume.Get());
			bIsExistingListenerAudioVolume = (listener_audio_volume.Get()
				&& listener_audio_volume.Get()->GetEnabled()
				&& (listener_audio_volume == new_sound_audio_volume || bIsSameTag));
			return new_sound_audio_volume.IsValid() ? new_sound_audio_volume : AAtomAudioVolume::GetNearestAtomAudioVolume(SoundLocation, Type);
		}
	};

	/* サウンドが属しているAudioVolumeを取得する */
	/* BusSend系下準備 */
	bool bIsExistingListenerAudioVolume_Bus = false;
	BusInfo->SoundAudioVolume = FirstProcessAudioVolumeFunc::PrepareProcessFirstProcessAudioVolume(BusInfo->ListenerAudioVolume, SoundLocation, EAtomAudioVolumeType::UseBus, bIsExistingListenerAudioVolume_Bus);

	/* Aisac系下準備 */
	bool bIsExistingListenerAudioVolume_Aisac = false;
	AisacInfo->SoundAudioVolume = FirstProcessAudioVolumeFunc::PrepareProcessFirstProcessAudioVolume(AisacInfo->ListenerAudioVolume, SoundLocation, EAtomAudioVolumeType::UseAisacControl, bIsExistingListenerAudioVolume_Aisac);

	if (bIsExistingListenerAudioVolume_Bus || bIsExistingListenerAudioVolume_Aisac) {
		FirstProcessAudioVolumeForInside();
	} else {
		FirstProcessAudioVolumeForOutside();
	}

	if (bIsMovableSound && bCanStraddleAudioVolume) {
		BusInfo->SoundAudioVolume.Reset();
	}

	if (bIsMovableSound && bCanStraddleAudioVolume) {
		AisacInfo->SoundAudioVolume.Reset();
	}
}


void FAtomAudioVolumeHandler::ProcessAudioVolume(
	bool bIsEnableAudioVolume,
	bool bIsUseDistanceForEnablingAudioVolume,
	float DistanceForEnablingAudioVolumeFlag)
{
#if WITH_EDITOR
	UWorld* World = (GEditor ? (GEditor->PlayWorld) : nullptr);
	if (GEditor && !World) {
		return;
	}
#endif

	if (IsGarbageCollecting()) {
		return;
	}

	if (!UCriWareInitializer::bIsInitialised_AudioVolume) {
		return;
	}

	if (bIsUseDistanceForEnablingAudioVolume) {
		/* リスナとAtomComponentの距離がDistanceForEnablingAudioVolumeよりも近くにあるか判定し、近くにある場合はAudioVolumeの機能を有効にする */
		bIsEnableAudioVolume = (ListenerLocation - SoundLocation).SizeSquared() < DistanceForEnablingAudioVolumeFlag * DistanceForEnablingAudioVolumeFlag;
	}

	if (!bIsEnableAudioVolume) {
		/* 距離による判定、もしくはユーザ設定でAudioVolume機能が無効であった場合は処理を抜ける */
		return;
	}

	/* BusSend系下準備開始→ */
	/* Sound が属している AudioVolume を取得する（サウンドが移動しているかもしれないため毎Tick取得する） */
	/* AudioVolume各種への参照を、それぞれの状況に合わせて更新 */
	::UpdateRefsToAudioVolume(
		*BusInfo.Get(),
		SoundLocation, 
		bIsMovableSound, 
		bCanStraddleAudioVolume);
	/* 2種類の AudioVolume からそれぞれパラメータを取得しつつ、NeighborVolume も更新。同時に2つの仕事をすべきではない...... */
	/* 所属 AudioVolume が切り替わっていた場合は Neighbor に切り替わる前の AudioVolume パラメータを保存しておく */
	if (bIsMovableSound) {
		::UpdateNeighborVolumeAndParams(*BusInfo.Get(), SoundLocation);
	}
	/* BusSend系下準備終了← */

	/* Aisac系下準備→ */
	::UpdateRefsToAudioVolume(
		*AisacInfo.Get(),
		SoundLocation,
		bIsMovableSound,
		bCanStraddleAudioVolume);
	if (bIsMovableSound) {
		::UpdateNeighborVolumeAndParams(*AisacInfo.Get(), SoundLocation, *BusInfo.Get());
	}
	/* Aisac系下準備終了← */

	/* SoundがAudioVolumeに入っているかどうか判定する */
	auto isSoundExistingInAudioVolume = BusInfo->SoundAudioVolume->Validate() || AisacInfo->SoundAudioVolume->Validate();
	if (isSoundExistingInAudioVolume) {
		/* SoundがAudioVolume内に存在しているとき */
		::ProcessAudioVolumeForInside(
			*BusInfo.Get(),
			SoundLocation,
			ListenerLocation);
		if (BusInfo->SoundNeighbourAudioVolume->Validate()) {
			BusInfo->bIsInAudioVolumeAtFirstPlay = true;
		} else {
			BusInfo->bIsInAudioVolumeAtFirstPlay = false;
		}

		::ProcessAudioVolumeForInside(
			*AisacInfo.Get(),
			SoundLocation,
			ListenerLocation);
		if (AisacInfo->SoundNeighbourAudioVolume->Validate()) {
			AisacInfo->bIsInAudioVolumeAtFirstPlay = true;
		} else {
			AisacInfo->bIsInAudioVolumeAtFirstPlay = false;
		}

	} else {
		/* サウンドがAudioVolume外にいる場合 */
		if (!BusInfo->SoundNeighbourAudioVolume.Get() && !AisacInfo->SoundNeighbourAudioVolume.Get()) {
			/* 初期位置がAudioVolume外などSoundPreviousAudioVolumeが無かった場合は何も処理しない */
			/* AudioVolumeに侵入したとして、EnabelFlagが無効である場合も何も処理しない */
			return;
		}

		const auto& NeighborAtomAudioVolumeParam_Bus = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(BusInfo->SoundNeighbourAudioVolume.Get());
		if (NeighborAtomAudioVolumeParam_Bus) {
			::ProcessAudioVolumeForOutside(
				*BusInfo.Get(),
				NeighborAtomAudioVolumeParam_Bus->BusSendInterpolateSettings,
				SoundLocation,
				ListenerLocation,
				NeighborAtomAudioVolumeParam_Bus->MaxDistanceForEntranceVolume);
		}

		const auto& NeighborAtomAudioVolumeParam_Aisac = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(AisacInfo->SoundNeighbourAudioVolume.Get());
		if (NeighborAtomAudioVolumeParam_Aisac) {
			::ProcessAudioVolumeForOutside(
				*AisacInfo.Get(),
				NeighborAtomAudioVolumeParam_Aisac->AisacControlInterpolateSettings,
				SoundLocation,
				ListenerLocation,
				NeighborAtomAudioVolumeParam_Aisac->MaxDistanceForEntranceVolume);
		}
	}
	return;
}

const bool FAtomAudioVolumeHandler::GetChangedVolumeFlag(EAtomAudioVolumeType VolumeType) const
{
	bool ret_value = false;
	switch (VolumeType) {
	case(EAtomAudioVolumeType::UseBus):
		ret_value = BusInfo->bIsEnteredToAnotherAudioVolume;
		break;
	case(EAtomAudioVolumeType::UseAisacControl):
		ret_value = AisacInfo->bIsEnteredToAnotherAudioVolume;
		break;
	default:
		break;
	}
	return ret_value;
}

const TWeakObjectPtr<AAtomAudioVolume> FAtomAudioVolumeHandler::GetSoundAudioVolume(EAtomAudioVolumeType VolumeType)
{
	switch (VolumeType) {
	case(EAtomAudioVolumeType::UseBus):
		return BusInfo->SoundAudioVolume;
	case(EAtomAudioVolumeType::UseAisacControl):
		return AisacInfo->SoundAudioVolume;
	default:
		return nullptr;
	}
}


const TWeakObjectPtr<AAtomAudioVolume> FAtomAudioVolumeHandler::GetSoundNeighbourAudioVolume(EAtomAudioVolumeType VolumeType)
{
	switch (VolumeType) {
	case(EAtomAudioVolumeType::UseBus):
		return BusInfo->SoundNeighbourAudioVolume;
	case(EAtomAudioVolumeType::UseAisacControl):
		return AisacInfo->SoundNeighbourAudioVolume;
	default:
		return nullptr;
	}
}


void FAtomAudioVolumeHandler::UpdateInPreprocess(UAtomComponent* const AtomComponent)
{
	using ItemType = __underlying_type(EAtomAudioVolumeType);

	SoundLocation = AtomComponent->GetComponentLocation();
	auto AtomListener = AtomComponent->GetAtomListener();
	ListenerLocation = AtomListener->GetListeningPoint();
	BusInfo->ListenerAudioVolume = AtomListener->AtomAudioVolumeHandler->GetAudioVolume((ItemType)EAtomAudioVolumeType::UseBus);
	BusInfo->PrevListenerAudioVolume = AtomListener->AtomAudioVolumeHandler->GetPrevAudioVolume((ItemType)EAtomAudioVolumeType::UseBus);
	AisacInfo->ListenerAudioVolume = AtomListener->AtomAudioVolumeHandler->GetAudioVolume((ItemType)EAtomAudioVolumeType::UseAisacControl);
	AisacInfo->PrevListenerAudioVolume = AtomListener->AtomAudioVolumeHandler->GetPrevAudioVolume((ItemType)EAtomAudioVolumeType::UseAisacControl);
	bIsMovableSound = AtomComponent->Sound->bIsMovable && AtomComponent->bIsMovable;
	bCanStraddleAudioVolume = AtomComponent->Sound->bCanStraddleAudioVolume && AtomComponent->bCanStraddleAudioVolume;
};


void FAtomAudioVolumeHandler::UpdateInPreprocess(FAtomSoundSettingsForAnimNotify* const AtomSoundSettings)
{
	using ItemType = __underlying_type(EAtomAudioVolumeType);

	SoundLocation = AtomSoundSettings->Location;
	ListenerLocation = AtomSoundSettings->DefaultListener->GetListeningPoint();
	BusInfo->ListenerAudioVolume = AtomSoundSettings->DefaultListener->AtomAudioVolumeHandler->GetAudioVolume((ItemType)EAtomAudioVolumeType::UseBus);
	BusInfo->PrevListenerAudioVolume = AtomSoundSettings->DefaultListener->AtomAudioVolumeHandler->GetPrevAudioVolume((ItemType)EAtomAudioVolumeType::UseBus);
	AisacInfo->ListenerAudioVolume = AtomSoundSettings->DefaultListener->AtomAudioVolumeHandler->GetAudioVolume((ItemType)EAtomAudioVolumeType::UseAisacControl);
	AisacInfo->PrevListenerAudioVolume = AtomSoundSettings->DefaultListener->AtomAudioVolumeHandler->GetPrevAudioVolume((ItemType)EAtomAudioVolumeType::UseAisacControl);
};


/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* サウンドに最も近い点を計算する関数 */
/* EntranceVolumeがある場合は、最も近いEntranceVolumeの最も近い点を算出 */
/* EntranceVolumeがない場合は、Soundが入っているAudioVolumeで最も近い点を算出する */
AAtomEntranceVolume* FAtomAudioVolumeHandler::CalcClosestPointOnEntranceVolume(
	const FVector& sound_location,
	AAtomAudioVolume* const current_volume,
	AAtomAudioVolume* const neighbor_volume,
	FVector& out_closest_point)
{
	FVector result_audio_volume_enter_point = FVector::ZeroVector;
	if ((neighbor_volume == nullptr) && (current_volume == nullptr)) {
		return nullptr;
	}

	AAtomAudioVolume* slected_audiovolume = nullptr;
	if (current_volume) {
		/* AtomAudioVolumeUtility の所有者がどこかの Volume に属している場合 */
		slected_audiovolume = current_volume;
	}
	else if (neighbor_volume) {
		/* AtomAudioVolumeUtility の所有者がどこの Volume にも属していないが、直前まで所属していた Volume は存在する場合 */
		slected_audiovolume = neighbor_volume;
	}
	else {
		/* 所有者が一度も Volume に属したことがない場合は何もやるべきことが無い */
		return nullptr;
	}

	FAtomAudioVolumeParameters* AtomAudioVolumeParam = AAtomAudioVolume::GetAtomAudioVolumeSettingsToApply(slected_audiovolume);
	if (!AtomAudioVolumeParam) {
		return nullptr;
	}

	AAtomEntranceVolume* out_entrance_volume = nullptr;
	TArray<AAtomEntranceVolume*> EntranceVolumes = slected_audiovolume->EntranceVolumes;
	if (EntranceVolumes.Num() > 0) {
		/* EntranceVolumeがCullingDistanceNotToUseEntranceVolumeよりも遠くにある場合はGetClosestPointOnCollisionで計算をしない */
		float distance = EntranceVolumes[0] && EntranceVolumes[0]->GetEnabled() ?
			EntranceVolumes[0]->GetBrushComponent()->GetClosestPointOnCollision(sound_location, result_audio_volume_enter_point) : AtomAudioVolumeParam->MaxDistanceForEntranceVolume;
		distance = EntranceVolumes[0] && EntranceVolumes[0]->GetEnabled() ? (sound_location - result_audio_volume_enter_point).Size() : distance;

		for (AAtomEntranceVolume* entrance_volume : EntranceVolumes) {
			if (neighbor_volume != nullptr && current_volume != nullptr) {
				if (current_volume->EntranceVolumes.Find(entrance_volume) == INDEX_NONE) {
					/* 直前のAudioVolumeに設定されていたentrance_volumeが、新しく入ったAudioVolumeに設定されていない場合は最短距離算出に利用しない */
					continue;
				}
			}
			if (entrance_volume && !entrance_volume->GetEnabled()) {
				continue;
			}

			FVector audio_volume_enter_point;
			/* EntranceVolumeがCullingDistanceNotToUseEntranceVolumeよりも遠くにある場合はGetClosestPointOnCollisionで計算をしない */
			float comp_distance = entrance_volume ? entrance_volume->GetBrushComponent()->GetClosestPointOnCollision(sound_location, audio_volume_enter_point) : distance;
			comp_distance = entrance_volume && entrance_volume->GetEnabled() ? (sound_location - audio_volume_enter_point).Size() : distance;
			result_audio_volume_enter_point = comp_distance < distance ? audio_volume_enter_point : result_audio_volume_enter_point;
			distance = comp_distance <= distance ? comp_distance : distance;
			out_entrance_volume = comp_distance <= distance ? entrance_volume : out_entrance_volume;
		}
	}
	else {
		/* EntranceVolumeがない場合は侵入したAudioVolumeとサウンドの最短距離となる座標を計算*/
		slected_audiovolume->GetBrushComponent()->GetClosestPointOnCollision(sound_location, result_audio_volume_enter_point);
		out_entrance_volume = nullptr;
	}

	out_closest_point = result_audio_volume_enter_point;
	return out_entrance_volume;
}


#undef LOCTEXT_NAMESPACE
