// Copyright (c) 2018 CRI Middleware Co., Ltd.


#include "Atom3dTransceiverComponent.h"
#include "CriWareRuntimePrivatePCH.h"

#if WITH_EDITOR
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
const FColor UAtom3dSourceBaseComponent::FRONT_DIRECTION_ARROW_COLOR_DEFAULT	= FColor(255, 0, 0);
const FColor UAtom3dSourceBaseComponent::TOP_DIRECTION_ARROW_COLOR_DEFAULT		= FColor(0, 255, 255);
//const FColor UAtom3dSourceBaseComponent::ATTENUATION_INNER_CONE_COLOR_DEFAULT	= FColor(167, 87, 168);
//const FColor UAtom3dSourceBaseComponent::ATTENUATION_OUTER_CONE_COLOR_DEFAULT	= FColor(210, 170, 211);
const FColor UAtom3dTransceiverComponent::IN_OUT_LINKED_ARROW_COLOR_DEFAULT		= FColor(0, 255, 0);
#endif //WITH_EDITOR

#define LOCTEXT_NAMESPACE "Atom3dTransceiver"

#if WITH_EDITOR
UDrawSphereComponent* FDebugSphereUtil::CreateSphereComponent(USceneComponent* Parent, float SphereRadius, const FLinearColor & SphereColor)
{
	UDrawSphereComponent* SphereComponent = NewObject<UDrawSphereComponent>(Parent, NAME_None, RF_Transactional | RF_TextExportTransient);
	SphereComponent->AttachToComponent(Parent, FAttachmentTransformRules::KeepRelativeTransform);
	SphereComponent->AlwaysLoadOnClient = false;
	SphereComponent->AlwaysLoadOnServer = false;
	/* 球半径と色を設定 */
	SphereComponent->InitSphereRadius(SphereRadius);
	SphereComponent->ShapeColor = SphereColor.ToFColor(true);
	SphereComponent->SetCanEverAffectNavigation(false);
	SphereComponent->RegisterComponent();

	return SphereComponent;
}

void FDebugSphereUtil::CreateNestedSphereComponents(USceneComponent* Parent, FDebugShphereInfo&& InnerSphereInfo, FDebugShphereInfo&& OuterSphereInfo)
{
	check(InnerSphereInfo.ComponentPtrRef != nullptr);
	check(OuterSphereInfo.ComponentPtrRef != nullptr);

	*InnerSphereInfo.ComponentPtrRef = FDebugSphereUtil::CreateSphereComponent(
		Parent, InnerSphereInfo.Radius, InnerSphereInfo.Color);

	*OuterSphereInfo.ComponentPtrRef = FDebugSphereUtil::CreateSphereComponent(
		Parent, OuterSphereInfo.Radius, OuterSphereInfo.Color);
}

void FDebugSphereUtil::DestroyNestedSphereComponents(UDrawSphereComponent*& InnnerSphereComponent, UDrawSphereComponent*& OuterSphereComponent)
{
	if (IsValid(InnnerSphereComponent)) {
		InnnerSphereComponent->DestroyComponent();
		InnnerSphereComponent = nullptr;
	}
	if (IsValid(OuterSphereComponent)) {
		OuterSphereComponent->DestroyComponent();
		OuterSphereComponent = nullptr;
	}
}

void FDebugSphereUtil::UpdateRadiusForNestedSphereComponents(FDebugShphereInfo&& InnerSphereInfo, FDebugShphereInfo&& OuterSphereInfo)
{
	if (IsValid(*InnerSphereInfo.ComponentPtrRef) && IsValid(*InnerSphereInfo.ComponentPtrRef)) {
		auto InnerSphereComponent = *(InnerSphereInfo.ComponentPtrRef);
		InnerSphereComponent->SetSphereRadius(InnerSphereInfo.Radius, false);

		auto OuterSphereComponent = *(OuterSphereInfo.ComponentPtrRef);
		OuterSphereComponent->SetSphereRadius(OuterSphereInfo.Radius, false);
	}
}
#endif // WITH_EDITOR

// CriAtomEx3dTransceiver ハンドルの取得
CriAtomEx3dTransceiverHn FAtom3dTransceiver::GetHandle()
{
	if (Handle != NULL) {
		return Handle;
	}

	// Handle が無ければ作って返す
	AllocateResource();
	return Handle;
}

void FAtom3dTransceiver::SetOutputPosition(const FAtom3dVector& Pos, const float DistanceFactor)
{
	check(DistanceFactor > 0);
	const CriAtomExVector OutPos = (Pos * DistanceFactor).Data;
	criAtomEx3dTransceiver_SetOutputPosition(GetHandle(), &OutPos);
};

void FAtom3dTransceiver::SetOutputOrientation(const FAtom3dVector& Front, const FAtom3dVector& Top)
{
	criAtomEx3dTransceiver_SetOutputOrientation(GetHandle(), &Front.Data, &Top.Data);
};

void FAtom3dTransceiver::SetRegion(TWeakObjectPtr<UAtom3dRegion> InRegion)
{
	FAtom3dSourceBase::SetRegion(InRegion);
	if (!Region.IsValid()) {
		return;
	}
	CriAtomEx3dRegionHn RegionHandle = Region->GetHandle()->GetRawHandle();
	check(RegionHandle != NULL);
	criAtomEx3dTransceiver_Set3dRegionHn(GetHandle(), RegionHandle);
};

void FAtom3dTransceiver::UpdateStatus()
{
	criAtomEx3dTransceiver_Update(GetHandle());
};

void FAtom3dTransceiver::SetOutputVolumeScale(float InVolumeScale)
{
	FAtom3dSourceBase::SetOutputVolumeScale(InVolumeScale);
	criAtomEx3dTransceiver_SetOutputVolume(GetHandle(), InVolumeScale);
	return;
}

bool FAtom3dTransceiver::SetOutputMinMaxAttenuationDistance(float InMinDistance, float InMaxDistance, const float DistanceFactor)
{
	check(DistanceFactor > 0);
	FAtom3dSourceBase::SetOutputMinMaxAttenuationDistance(InMinDistance, InMaxDistance, DistanceFactor);
	criAtomEx3dTransceiver_SetOutputMinMaxAttenuationDistance(GetHandle(), MinDistance, MaxDistance);
	return true;
}

bool FAtom3dTransceiver::SetOutputInteriorPanField(float InTransceiverRadius, float InInteriorDistance, const float DistanceFactor)
{
	check(DistanceFactor > 0);
	FAtom3dSourceBase::SetOutputInteriorPanField(InTransceiverRadius, InInteriorDistance, DistanceFactor);
	if (Handle == NULL) {
		// ここに来るのは正常系
		return false;
	}
	criAtomEx3dTransceiver_SetOutputInteriorPanField(Handle, SourceDistance, InteriorDistance);
	return true;
}

void FAtom3dTransceiver::SetDistanceAisacControl(const char* InGlobalAisacName)
{
	CriAtomExAisacControlId InAisacControlId = criAtomExAcf_GetAisacControlIdByName(StaticCast<const CriChar8*>(InGlobalAisacName));
	criAtomEx3dTransceiver_SetDistanceAisacControlId(GetHandle(), StaticCast<CriUint16>(InAisacControlId));
};

void FAtom3dTransceiver::SetOutputBasedAzimuthAngleAisacControl(const char* InAisacControlName)
{
	CriAtomExAisacControlId InAisacControlId = criAtomExAcf_GetAisacControlIdByName(StaticCast<const CriChar8*>(InAisacControlName));
	criAtomEx3dTransceiver_SetTransceiverOutputBasedAzimuthAngleAisacControlId(GetHandle(), StaticCast<CriUint16>(InAisacControlId));
};

void FAtom3dTransceiver::SetOutputBasedElevationAngleAisacControl(const char* InAisacControlName)
{
	CriAtomExAisacControlId InAisacControlId = criAtomExAcf_GetAisacControlIdByName(StaticCast<const CriChar8*>(InAisacControlName));
	criAtomEx3dTransceiver_SetTransceiverOutputBasedElevationAngleAisacControlId(GetHandle(), StaticCast<CriUint16>(InAisacControlId));
};

void FAtom3dTransceiver::SetListenerBasedAzimuthAngleAisacControl(const char* InAisacControlName)
{
	CriAtomExAisacControlId InAisacControlId = criAtomExAcf_GetAisacControlIdByName(StaticCast<const CriChar8*>(InAisacControlName));
	criAtomEx3dTransceiver_SetListenerBasedAzimuthAngleAisacControlId(GetHandle(), StaticCast<CriUint16>(InAisacControlId));
};

void FAtom3dTransceiver::SetListenerBasedElevationAngleAisacControl(const char* InAisacControlName)
{
	CriAtomExAisacControlId InAisacControlId = criAtomExAcf_GetAisacControlIdByName(StaticCast<const CriChar8*>(InAisacControlName));
	criAtomEx3dTransceiver_SetListenerBasedElevationAngleAisacControlId(GetHandle(), InAisacControlId);
};

void FAtom3dTransceiver::SetInputPosition(const FAtom3dVector& Pos, const float DistanceFactor)
{
	check(DistanceFactor > 0);
	const CriAtomExVector InPos = (Pos * DistanceFactor).Data;
	criAtomEx3dTransceiver_SetInputPosition(GetHandle(), &InPos);

};

void FAtom3dTransceiver::SetInputOrientation(const FAtom3dVector& Front, const FAtom3dVector& Top)
{
	criAtomEx3dTransceiver_SetInputOrientation(GetHandle(), &Front.Data, &Top.Data);
};

bool FAtom3dTransceiver::SetInputCrossfadeField(float InDirectAudioRadius, float InCrossfadeDistance, const float DistanceFactor)
{
	check(DistanceFactor > 0);
	check((InDirectAudioRadius >= 0.0f) && (InCrossfadeDistance >= 0.0f));
	DirectAudioRadius = InDirectAudioRadius * DistanceFactor;
	CrossfadeDistance = InCrossfadeDistance * DistanceFactor;
	criAtomEx3dTransceiver_SetInputCrossFadeField(GetHandle(), DirectAudioRadius, CrossfadeDistance);
	return true;

};

void FAtom3dTransceiver::AttachAisac(const char* InGlobalAisacName)
{
	criAtomEx3dTransceiver_AttachAisac(GetHandle(), StaticCast<const CriChar8*>(InGlobalAisacName));
};

void FAtom3dTransceiver::DetachAisac(const char* InGlobalAisacName)
{
	criAtomEx3dTransceiver_DetachAisac(GetHandle(), StaticCast<const CriChar8*>(InGlobalAisacName));
};

float FAtom3dTransceiver::GetDirectAudioRadius(const float DistanceFactor) const
{
	check(DistanceFactor > 0);
	return DirectAudioRadius / DistanceFactor;
};

float FAtom3dTransceiver::GetCrossfadeDistance(const float DistanceFactor) const
{
	check(DistanceFactor > 0);
	return CrossfadeDistance / DistanceFactor;
};

void FAtom3dTransceiver::AllocateResource()
{
	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

	// トランシーバハンドルが確保済みの場合は何もしない 
	if (Handle != NULL) {
		return;
	}

	// トランシーバの作成
	{
		CriAtomEx3dTransceiverConfig Config;
		criAtomEx3dTransceiver_SetDefaultConfig(&Config);
		check(criAtomEx3dTransceiver_CalculateWorkSize(&Config) < sizeof(HandleWork));
		Handle = criAtomEx3dTransceiver_Create(NULL, HandleWork, sizeof(HandleWork));
		check(Handle != NULL);
	}
}

void FAtom3dTransceiver::ReleaseResource()
{
	// Atom 未初期化のときは何もしない
	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

	// トランシーバハンドルが解放済みの場合は何もしない
	if (Handle == NULL) {
		return;
	}

	criAtomEx3dTransceiver_Destroy(Handle);
	Handle = NULL;
}

/*****************************************************/
/*    派生クラス UAtom3dTransceiverComponent の実装   */
/*****************************************************/

// Sets default values for this component's properties
UAtom3dTransceiverComponent::UAtom3dTransceiverComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}

	// トランシーバ
	Source = MakeUnique<FAtom3dTransceiver>();
#if WITH_EDITOR
	bIsInputCrossfadeFieldDebugSpheresVisible = false;
#endif // WITH_EDITOR
}

void UAtom3dTransceiverComponent::OnTickComponent(float DeltaTime)
{
	Super::OnTickComponent();

	/* TODO: 動きまわるトランシーバの入力ポイントの位置＆方向を更新
	SetInputPositionAndOrientation(GetOwner(), InputPoint);
	// 動いていない時にも UpdateStatus 関数が呼ばれるのは無駄。ユーザアプリケーション側から呼び出してもらうべき？
	Source->UpdateStatus();	
	*/

#if WITH_EDITOR
	UpdateVisualDebugInfo();
#endif // WITH_EDITOR
}

void UAtom3dTransceiverComponent::SetInputPositionAndOrientation(const AActor* const Owner, const AActor* const TargetActor)
{
	const AActor* const InputActor = (IsValid(TargetActor)) ? TargetActor : Owner;

	// 入力座標を更新
	{
		const FVector SourcePosition = (IsValid(InputActor)) ? InputActor->GetActorLocation() : GetComponentLocation();
		StaticCast<FAtom3dTransceiver*>(Source.Get())->SetInputPosition(FAtom3dVector(SourcePosition), DistanceFactor);
	}

	// 入力向きを更新 (確度AISACを使うときにだけ関係する)
	{
		const FRotator SourceRotation = (IsValid(InputActor)) ? InputActor->GetActorRotation() : GetComponentRotation();
		const FQuat SourceRot_Quat = SourceRotation.Quaternion();
		StaticCast<FAtom3dTransceiver*>(Source.Get())->SetInputOrientation(
			FAtom3dVector(SourceRot_Quat.GetForwardVector()), // Front
			FAtom3dVector(SourceRot_Quat.GetUpVector())); // Top
	}

	//Source->UpdateStatus();
}

void UAtom3dTransceiverComponent::InitializeSource()
{
	UAtom3dSourceBaseComponent::InitializeSource();

	if (!IsValid(InputPoint)) {
		//UE_LOG(LogCriWareRuntime, Warning, TEXT("Invalid settings for %s: UAtom3dTransceiverComponent has no InputPoint."), *GetPathName());
		InputPoint = GetOwner();
		return;
	}

	// Transceiver ハンドルの初期化
	{
		if (IsValid(InputPoint)) {
			SetInputPositionAndOrientation(GetOwner(), InputPoint);;
		}
		StaticCast<FAtom3dTransceiver*>(Source.Get())->SetInputCrossfadeField(DefaultDirectAudioRadius, DefaultCrossfadeDistance, DistanceFactor);

		// Aisac 関連のパラメータを設定。SetAisacLambda へは setter の役割を果たすラムダを渡す
		auto SetAisacByName = [this](auto AisacNameList, auto SetAisacLambda) {
			for (int32 i = 0; i < AisacNameList.Num() - 1; i++) {
				const FString AisacName = AisacNameList[i];
				if (!AisacName.IsEmpty() && !(AisacName != "")) {
					SetAisacLambda(TCHAR_TO_UTF8(*AisacName));
				}
				else {
					UE_LOG(LogCriWareRuntime, Warning, TEXT("Invalid settings for %s: UAtom3dTransceiverComponent has a wrong Aisac parameter."), *GetPathName());
				}
			}
		};
		SetAisacByName(DefaultGlobalAisacs, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->AttachAisac(InAisacName); });
		SetAisacByName(DefaultDistanceAisacControls, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->SetDistanceAisacControl(InAisacName); });
		SetAisacByName(DefaultOutputBasedAzimuthAngleAisacControls, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->SetOutputBasedAzimuthAngleAisacControl(InAisacName); });
		SetAisacByName(DefaultOutputBasedElevationAngleAisacControls, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->SetOutputBasedElevationAngleAisacControl(InAisacName); });
		SetAisacByName(DefaultListenerBasedAzimuthAngleAisacControls, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->SetListenerBasedAzimuthAngleAisacControl(InAisacName); });
		SetAisacByName(DefaultListenerBasedElevationAngleAisacControls, [this](auto InAisacName) {StaticCast<FAtom3dTransceiver*>(Source.Get())->SetListenerBasedElevationAngleAisacControl(InAisacName); });

		Source->UpdateStatus();
	}
}

void UAtom3dTransceiverComponent::OnRegister()
{
	Super::OnRegister();

#if WITH_EDITOR
	if (!GIsPlayInEditorWorld) {
		return;
	}

	// InputCrossfadeField の可視化スフィアを作成・破棄
	if (bIsInputCrossfadeFieldDebugSpheresVisible) {
		FDebugSphereUtil::CreateNestedSphereComponents(this,
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForInputCrossfadeDisabled, DefaultDirectAudioRadius, FLinearColor(0.0f, 1.0f, 0.0f)),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForInputCrossfadeEnabled, DefaultDirectAudioRadius + DefaultCrossfadeDistance, FLinearColor(0.0f, 1.0f, 0.4f)));
	}
	else {
		FDebugSphereUtil::DestroyNestedSphereComponents(SphereComopnentForInputCrossfadeDisabled, SphereComopnentForInputCrossfadeEnabled);
	}
#endif // WITH_EDITOR
}

#if WITH_EDITOR
void UAtom3dTransceiverComponent::UpdateSpriteTexture()
{
	if (!IsValid(SpriteComponent)) {
		return;
	}
	// トランシーバ用スプライト
	SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/CriWare/Icons/Transceiver.Transceiver")));
}

void UAtom3dTransceiverComponent::UpdateVisualDebugInfo()
{
	Super::UpdateVisualDebugInfo();

	/* AtomCraftAttenuationの距離減衰ワイヤフレームの半径を更新する */
	if (!GIsPlayInEditorWorld || !IsShowSoundLocation()) {
		return;
	}

	// 出力ポイントのリージョン名を表示
	if (bIsDebugStringsForDetailsVisible && Source->GetRegion().IsValid()) {
		FString OutString = GetDebugStringOfRegionName(InputPoint);
		DrawDebugString(GetWorld(), GetOwner()->GetActorLocation(), OutString, nullptr, Source->GetRegion().Get()->Color, 0.0f, false, 1.0f);
	}

	// 入力ポイントの方向 (トランシーバの集音マイクが向いている方向) を矢印で描画
	DrawDebugArrowsForFrontAndTopOf3dSourceActor(InputPoint);

	// 入力ポイントから出力ポイントを矢印で結んで描画
	if (IsValid(GetOwner()) && IsValid(InputPoint)) {
		DrawDebugDirectionalArrow(
			GetWorld(), InputPoint->GetActorLocation(), GetOwner()->GetActorLocation(), 100.0f,
			UAtom3dTransceiverComponent::IN_OUT_LINKED_ARROW_COLOR_DEFAULT, false, -1.0f, 0.0f, 5.0f);
	}

	// InputCrossfadeField の可視化スフィアの半径を更新する
	if (bIsInputCrossfadeFieldDebugSpheresVisible) {
		float DirectAudioRadius = StaticCast<FAtom3dTransceiver*>(Source.Get())->GetDirectAudioRadius(DistanceFactor);
		float CrossfadeDistance = StaticCast<FAtom3dTransceiver*>(Source.Get())->GetCrossfadeDistance(DistanceFactor);
		FDebugSphereUtil::UpdateRadiusForNestedSphereComponents(
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForInputCrossfadeDisabled, DirectAudioRadius),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForInputCrossfadeEnabled, DirectAudioRadius + CrossfadeDistance));
	}

	// InputCrossfadeField の可視化スフィアの位置を更新する
	if (IsValid(InputPoint)) {
		if (IsValid(SphereComopnentForInputCrossfadeDisabled) && IsValid(SphereComopnentForInputCrossfadeEnabled)) {
			auto InputPointLocation = InputPoint->GetActorLocation();
			SphereComopnentForInputCrossfadeDisabled->SetWorldLocation(InputPointLocation);
			SphereComopnentForInputCrossfadeEnabled->SetWorldLocation(InputPointLocation);
		}
	}

	return;
}

#endif // WITH_EDITOR

/*****************************************************/
/*    基底クラス UAtom3dSourceComponent の実装   */
/*****************************************************/

UAtom3dSourceBaseComponent::UAtom3dSourceBaseComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	bTickInEditor = true;
	bAutoActivate = true;
	bAllowAnyoneToDestroyMe = true;

	/* 音源位置更新のため、OnUpdateTransformを呼び出してもらうよう指定する。 */
	bWantsOnUpdateTransform = true;
	/* バウンドのトランスフォーム処理が起こらなくする */
	bUseAttachParentBound = true;
	/* 不要な機能を無効化 */
	bNeverNeedsRenderUpdate = true;
	bNavigationRelevant = false;
	SetVisibility(false);

	// 音源位置の更新を通知
	bTransformUpdated = true;
	DistanceFactor = UCriWareInitializer::GetDistanceFactor();

#if WITH_EDITOR
	/* 音源のスピーカアイコン表示を有効にする */
	bVisualizeComponent = true;
	SetSpriteShowFlags();
	bIsDebugStringsForDetailsVisible = false;
	bIsAttenuationDistanceDebugSpheresVisible = true;
	bIsOutputInteriorPanFieldDebugSpheresVisible = false;
#endif // WITH_EDITOR
}

void UAtom3dSourceBaseComponent::SetRegion(UAtom3dRegion* InRegion)
{
	check(Source);
	if (!IsValid(InRegion)) {
		return;
	}
	// 古いリージョンに登録していたデリゲート関数を解除
	Source->GetRegion()->OnRegionHandleChanged.Remove(DelegateOnRegionHandleChanged);
	{
		// 新しいリージョンへ更新
		Source->SetRegion(InRegion);
		Source->UpdateStatus();
	}
	// 新しいリージョンにデリゲート関数を登録
	DelegateOnRegionHandleChanged = Source->GetRegion()->OnRegionHandleChanged.AddUObject(this, &UAtom3dSourceBaseComponent::ReloadRegion);
};

void UAtom3dSourceBaseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// 音源位置の更新
	if (bTransformUpdated) {
		UpdateTransform();
		// 更新の適用
		Source->UpdateStatus();
	}
	OnTickComponent();
};

void UAtom3dSourceBaseComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);
	// 音源位置の更新を通知
	bTransformUpdated = true;
};

void UAtom3dSourceBaseComponent::UpdateTransform(bool bHasOwner)
{
	// 音源位置の更新通知をリセット
	bTransformUpdated = false;

	// トランシーバの出力位置＆方向を更新
	{
		AActor* Owner = nullptr;
		if (bHasOwner) {
			Owner = GetOwner();
			check(IsValid(Owner));
		}
		SetOutputPositionAndOrientation(Owner);
	}
};

bool UAtom3dSourceBaseComponent::IsShowSoundLocation() const
{
	const auto bShowSoundLoation = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("cri.ShowSoundLocation"));
	const int32 ValueShowSoundLocation = bShowSoundLoation->GetValueOnGameThread();
	const bool bIsShowSoundLocation = ValueShowSoundLocation > 0;
	return bIsShowSoundLocation;
};

void UAtom3dSourceBaseComponent::InitializeSource()
{
	// デフォルト値で Source を初期化
	check(Source);
	Source->SetRegion(DefaultRegion);
	check(Source->GetRegion() == DefaultRegion);
	if (Source->GetRegion().IsValid()) {
		// リージョンの内部データ(ハンドル)が外部からの命令で更新された場合に呼び出す処理を登録
		DelegateOnRegionHandleChanged = Source->GetRegion()->OnRegionHandleChanged.AddUObject(this, &UAtom3dSourceBaseComponent::ReloadRegion);
	}
	Source->SetOutputVolumeScale(DefaultOutputVolumeScale);
	check(Source->GetOutputVolumeScale() == DefaultOutputVolumeScale);
	Source->SetOutputMinMaxAttenuationDistance(DefaultMinAttenuationDistance, DefaultMaxAttenuationDistance, DistanceFactor);
	Source->SetOutputInteriorPanField(DefaultSourceRadius, DefaultInteriorDistance, DistanceFactor);
	Source->UpdateStatus();
}

void UAtom3dSourceBaseComponent::OnTickComponent(float DeltaTime)
{
#if WITH_EDITOR
	/* Play In Editorモードでは、再生中に音源位置と減衰距離を表示する */
	if (GIsPlayInEditorWorld) {
		bool bIsShowSoundLocation = IsShowSoundLocation();
		if (bIsShowSoundLocation) {
			/* Play In Editorモードで表示するには、ActorとComponentのbHiddenGameプロパティを、両方とも false にする必要がある。 */
			if (GetOwner()) {
				GetOwner()->SetActorHiddenInGame(false);
			}
			SetHiddenInGame(false, true);
		}
		if (IsValid(SpriteComponent)) {
			// CAUTION: 
			// If UAtom3dAudioObjectComponent is not the root component, 
			// the Sprite display may disappear depending on the camera accuracy in the PIE.
			SpriteComponent->SetHiddenInGame(!bIsShowSoundLocation, true);
		}
	}
#endif // WITH_EDITOR
}

void UAtom3dSourceBaseComponent::SetOutputPositionAndOrientation(const AActor* const Owner)
{
	// 座標を更新
	{
		const FVector SourcePosition = (IsValid(Owner)) ? Owner->GetActorLocation() : GetComponentLocation();
		Source->SetOutputPosition(FAtom3dVector(SourcePosition), DistanceFactor);
	}

	// 出力向きを更新 (Coneを使用する場合に必要)
	{
		const FRotator SourceRotation = (IsValid(Owner)) ? Owner->GetActorRotation() : GetComponentRotation();
		const FQuat SourceRot_Quat = SourceRotation.Quaternion();
		Source->SetOutputOrientation(
			FAtom3dVector(SourceRot_Quat.GetForwardVector()), // Front
			FAtom3dVector(SourceRot_Quat.GetUpVector())); // Top
	}
}

void UAtom3dSourceBaseComponent::ReloadRegion()
{
	Source->SetRegion(Source->GetRegion());
}

void UAtom3dSourceBaseComponent::PostInitProperties()
{
	Super::PostInitProperties();
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}
	InitializeSource();
}

#if WITH_EDITOR
bool UAtom3dSourceBaseComponent::bAnimSpriteShowFlags = true;

void UAtom3dSourceBaseComponent::OnAttachmentChanged()
{
	Super::OnAttachmentChanged();

	// デバッグ用コンポーネントの破棄処理
	{
		if (IsValid(GetAttachParent())) {
			return;	
		}
		DestroyDebugComponents();
	}
}

void UAtom3dSourceBaseComponent::DestroyDebugComponents()
{
	if (!IsValid(SpriteComponent)) {
		return;
	}
	SpriteComponent->DestroyComponent();
	SpriteComponent = nullptr;
}

void UAtom3dSourceBaseComponent::SetSpriteShowFlags()
{
	if (IsExistInAnimationEditor() == true) {
		/* スプライト表示フラグの設定 */
		bVisualizeComponent = bAnimSpriteShowFlags;
		/* スプライトを非表示にする場合 */
		if (bVisualizeComponent == false) {
			/* スプライトコンポーネントを破棄 */
			if (SpriteComponent) {
				SpriteComponent->DestroyComponent();
				SpriteComponent = nullptr;
			}
		}
	}
}

bool UAtom3dSourceBaseComponent::IsExistInAnimationEditor() const
{
	/* 参照しているワールドを取得 */
	UWorld* World = this->GetWorld();
	if (IsValid(World) == true) {
		/* プレビューゲームワールド(エディタ時またはゲーム時)を確認 */
		if (World->IsPreviewWorld() == true) {
			/* エディタビューポートの配列を取得 */
			TArray <FEditorViewportClient*> EditorViewportClient = GEditor->GetAllViewportClients();
			for (FEditorViewportClient*& ViewportClient : EditorViewportClient) {
				/* 自分が参照しているワールドと一致しているか確認 */
				if (World == ViewportClient->GetWorld()) {
					return true;
				}
			}
		}
	}

	return false;
}

void UAtom3dSourceBaseComponent::RegisterDebugSpriteComponent()
{
	SetSpriteShowFlags();

	/* エディターのパースペクティブビューに、スピーカーのアイコンを表示
	* インゲームでも、デバッグ表示向けにSpriteComponentを初期化しておく */
	/* SceneComponent.cpp USceneComponent::OnRegisterを参考 */
	if (bVisualizeComponent && SpriteComponent == nullptr && GetOwner()) {
		SpriteComponent = NewObject<UBillboardComponent>(GetOwner(), NAME_None, RF_Transactional | RF_TextExportTransient);

		SpriteComponent->Sprite = LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EditorResources/EmptyActor.EmptyActor"));
		SpriteComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		SpriteComponent->Mobility = EComponentMobility::Movable;
		SpriteComponent->AlwaysLoadOnClient = false;
		SpriteComponent->AlwaysLoadOnServer = false;
		SpriteComponent->SpriteInfo.Category = TEXT("Misc");
		SpriteComponent->SpriteInfo.DisplayName = NSLOCTEXT("SpriteCategory", "Misc", "Misc");
		SpriteComponent->CreationMethod = CreationMethod;
		SpriteComponent->bIsScreenSizeScaled = true;
		SpriteComponent->bUseInEditorScaling = true;
		SpriteComponent->bUseAttachParentBound = (GetAttachParent() != nullptr);

		SpriteComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
		SpriteComponent->RegisterComponent();
	}
	UpdateSpriteTexture();
}

void UAtom3dSourceBaseComponent::UpdateVisualDebugInfo()
{
	/* AtomCraftAttenuationの距離減衰ワイヤフレームの半径を更新する */
	if (!GIsPlayInEditorWorld || !IsShowSoundLocation()) {
		return;
	}

	// 最小・最大減衰距離のデバッグ描画用スフィアの半径を更新する
	if (bIsAttenuationDistanceDebugSpheresVisible) {
		FDebugSphereUtil::UpdateRadiusForNestedSphereComponents(
			FDebugSphereUtil::FDebugShphereInfo(&SphereComponentForOutputAttenuationDistanceMin, Source->GetMinDistance(DistanceFactor)),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComponentForOutputAttenuationDistanceMax, Source->GetMaxDistance(DistanceFactor)));
	}

	// OutputInteriorPanField のデバッグ描画用スフィアの半径を更新する
	if (bIsOutputInteriorPanFieldDebugSpheresVisible) {
		float TransceiverRadius = Source->GetSourceDistance(DistanceFactor);
		float InteriorDistance = Source->GetInteriorDistance(DistanceFactor);
		FDebugSphereUtil::UpdateRadiusForNestedSphereComponents(
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForOutputInteriorPanDisabled, TransceiverRadius),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForOutputInteriorPanEnabled, InteriorDistance));
	}

	// 出力ポイントの方向を矢印で描画
	DrawDebugArrowsForFrontAndTopOf3dSourceActor(GetOwner());

	// デバッグテキストの表示
	if (bIsDebugStringsForDetailsVisible && Source->GetRegion().IsValid()) {
		// 出力ポイントのリージョン名を表示
		FString OutString = GetDebugStringOfRegionName(GetOwner());
		// 音源から見たリスナーの方位角を表示
		OutString += GetDebugStringOfOutputBasedAzimuthAngleToNearestListeningPoint(GetOwner());
		OutString += GetDebugStringOfOutputBasedElevationAngleToNearestListeningPoint(GetOwner());
		DrawDebugString(GetWorld(), GetOwner()->GetActorLocation(), OutString, nullptr, Source->GetRegion().Get()->Color, 0.0f, false, 1.0f);
	}
}

#endif // WITH_EDITOR

void UAtom3dSourceBaseComponent::OnRegister()
{
	Super::OnRegister();
	InitializeSource();

#if WITH_EDITOR
	// スプライトを表示
	RegisterDebugSpriteComponent();

	if (!GIsPlayInEditorWorld || !IsValid(GetOwner())) {
		return;
	}

	// 距離減衰範囲の可視化スフィアを作成・破棄
	if (bIsAttenuationDistanceDebugSpheresVisible) {
		FDebugSphereUtil::CreateNestedSphereComponents(this,
			FDebugSphereUtil::FDebugShphereInfo(&SphereComponentForOutputAttenuationDistanceMin, DefaultMinAttenuationDistance, FLinearColor(1.0f, 0.0f, 0.0f)),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComponentForOutputAttenuationDistanceMax, DefaultMaxAttenuationDistance, FLinearColor(1.0f, 0.4f, 0.0f)));
	}
	else {
		FDebugSphereUtil::DestroyNestedSphereComponents(SphereComponentForOutputAttenuationDistanceMin, SphereComponentForOutputAttenuationDistanceMax);
	}

	// OutputInteriorPanField の可視化スフィアを作成・破棄
	if (bIsOutputInteriorPanFieldDebugSpheresVisible) {
		FDebugSphereUtil::CreateNestedSphereComponents(this,
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForOutputInteriorPanDisabled, DefaultSourceRadius, FLinearColor(0.0f, 0.0f, 1.0f)),
			FDebugSphereUtil::FDebugShphereInfo(&SphereComopnentForOutputInteriorPanEnabled, DefaultSourceRadius + DefaultInteriorDistance, FLinearColor(0.0f, 0.4f, 1.0f)));
	}
	else {
		FDebugSphereUtil::DestroyNestedSphereComponents(SphereComopnentForOutputInteriorPanDisabled, SphereComopnentForOutputInteriorPanEnabled);
	}
#endif // WITH_EDITOR
}

void UAtom3dSourceBaseComponent::BeginDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		Super::BeginDestroy();
		return;
	}
	if (DelegateOnRegionHandleChanged.IsValid() && Source.IsValid() && Source->GetRegion().IsValid()) {
		Source->GetRegion()->OnRegionHandleChanged.Remove(DelegateOnRegionHandleChanged);
		DelegateOnRegionHandleChanged.Reset();
	}
	Super::BeginDestroy();
}

#if WITH_EDITOR
void UAtom3dSourceBaseComponent::UpdateSpriteTexture()
{
	if (!IsValid(SpriteComponent)) {
		return;
	}
	if (bAutoActivate) {
		SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent_AutoActivate.S_AudioComponent_AutoActivate")));
	}
	else {
		SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent.S_AudioComponent")));
	}
}

FString UAtom3dSourceBaseComponent::GetDebugStringOfRegionName(const AActor* const SourceActor)
{
	FString OutString = FString("Region: ");

	// Region 名を表示
	if (!Source->GetRegion().IsValid()) {
		return OutString;
	}

	// 音源の位置から一番近いリスナーを取得する
	FVector SourcePosition = (IsValid(SourceActor)) ? SourceActor->GetActorLocation() : GetComponentLocation();
	FAtomListener* NearestListener = FAtomListener::GetNearestListener(SourcePosition);
	if (NearestListener == nullptr) {
		return OutString;
	}

	// このソースがリスナーと同じリージョンに属しているかどうかを調べる
	bool IsListenerAndSourceInSameRegion = false;
	auto ListenerRegionWeakPtr = NearestListener->GetRegion();
	if (ListenerRegionWeakPtr.IsValid()) {
		IsListenerAndSourceInSameRegion = (ListenerRegionWeakPtr.Get()->GetHandle()->GetRawHandle() == Source->GetRegion().Get()->GetHandle()->GetRawHandle());
	}
	// 同じリージョンに属しているなら Inactive ラベルを出力文字列に付与。そうでないなら Active
	FString IsRegionActiveLabel = (IsListenerAndSourceInSameRegion) ? "(Inactive)" : "(Active)";
	OutString = OutString + FString::Format(ANSI_TO_TCHAR("{0} {1}\n"), { Source->GetRegion().Get()->GetName(), IsRegionActiveLabel });
	return OutString;
}

FString UAtom3dSourceBaseComponent::GetDebugStringOfOutputBasedAzimuthAngleToNearestListeningPoint(const AActor* const SourceActor)
{
	FString OutString = FString("Azimuth angle: ");

	// 音源の位置から一番近いリスナーを取得する
	FVector SourcePosition = (IsValid(SourceActor)) ? SourceActor->GetActorLocation() : GetComponentLocation();
	FAtomListener* NearestListener = FAtomListener::GetNearestListener(SourcePosition);
	if (NearestListener == nullptr) {
		return OutString;
	}

	// 音源からリスニングポイントへの水平方向の向き(方位角)を算出する
	FRotator SourceRotation = (IsValid(SourceActor)) ? SourceActor->GetActorRotation() : GetComponentRotation();
	float AngleToNearestListener = UKismetMathLibrary::FindLookAtRotation(SourcePosition, NearestListener->GetListeningPoint()).Clamp().Yaw - SourceRotation.Clamp().Yaw;

	// 角度値を 0 ~ 360 度の範囲内に補正する。負値は許可しない
	{
		if (AngleToNearestListener < 0.0f) {
			AngleToNearestListener += 360.0f;
		}
		check((AngleToNearestListener >= 0.0f && AngleToNearestListener <= 360.0f));
	}

	OutString = OutString + FString::Format(ANSI_TO_TCHAR("{0}\n"), { StaticCast<int>(AngleToNearestListener) });
	return OutString;
}

FString UAtom3dSourceBaseComponent::GetDebugStringOfOutputBasedElevationAngleToNearestListeningPoint(const AActor* const SourceActor)
{
	FString OutString = FString("Elevation angle: ");

	// 音源の位置から一番近いリスナーを取得する
	FVector SourcePosition = (IsValid(SourceActor)) ? SourceActor->GetActorLocation() : GetComponentLocation();
	FAtomListener* NearestListener = FAtomListener::GetNearestListener(SourcePosition);
	if (NearestListener == nullptr) {
		return OutString;
	}

	// 音源からリスナーへの垂直方向の向き(方位角)を算出する
	FRotator SourceRotation = (IsValid(SourceActor)) ? SourceActor->GetActorRotation() : GetComponentRotation();
	float AngleToNearestListener = UKismetMathLibrary::FindLookAtRotation(SourcePosition, NearestListener->GetListeningPoint()).Clamp().Pitch - SourceRotation.Clamp().Pitch;

	// 角度値を -90 ~ 90 度の範囲内に補正する
	{
		if (AngleToNearestListener >= 270.0f) {
			AngleToNearestListener -= 360.0f;
		}
		//check((AngleToNearestListener >= -90.0f && AngleToNearestListener <= 90.0f));
	}

	OutString = OutString + FString::Format(ANSI_TO_TCHAR("{0}\n"), { StaticCast<int>(AngleToNearestListener) });
	return OutString;
}

void UAtom3dSourceBaseComponent::DrawDebugArrowsForFrontAndTopOf3dSourceActor(const AActor* const SourceActor)
{
	// プレイヤーの位置を取得（本題と直接は関係しない）
	FVector SourcePosition = (IsValid(SourceActor)) ? SourceActor->GetActorLocation() : GetComponentLocation();

	// Front
	{
		FVector FowardVector = (IsValid(SourceActor)) ? SourceActor->GetActorForwardVector() : GetForwardVector();
		FVector DistinationPosition = SourcePosition + FowardVector * 100.0f;
		DrawDebugDirectionalArrow(
			GetWorld(), SourcePosition, DistinationPosition, 100.0f,
			UAtom3dSourceBaseComponent::FRONT_DIRECTION_ARROW_COLOR_DEFAULT, false, -1.0f, 0.0f, 5.0f);

		// TODO: コーンを描画する
		/*
		DrawDebugCone(
			GetWorld(), SourcePosition, FowardVector, 500.0f,
			FMath::DegreesToRadians(30), FMath::DegreesToRadians(30), 10, UAtom3dSourceBaseComponent::FRONT_DIRECTION_ARROW_COLOR_DEFAULT);
		*/
	}
	// Top
	{
		FVector UpVector = (IsValid(SourceActor)) ? SourceActor->GetActorUpVector() : GetUpVector();
		FVector DistinationPosition = SourcePosition + UpVector * 100.0f;
		DrawDebugDirectionalArrow(
			GetWorld(), SourcePosition, DistinationPosition, 100.0f,
			UAtom3dSourceBaseComponent::TOP_DIRECTION_ARROW_COLOR_DEFAULT, false, -1.0f, 0.0f, 5.0f);
	}
}
#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
