/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAudioVolume
 * File     : AtomAudioVolume.h
 *
 ****************************************************************************/

 /* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Class.h"
#include "GameFramework/Volume.h"
#include "Engine/Brush.h"
#include "Components/BrushComponent.h"
#include "Model.h"

#include "AtomAudioVolume.generated.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ****************************************************************************/

/****************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ****************************************************************************/
UENUM(BlueprintType)
enum class EAtomAudioVolumeType : uint8
{
	UseSnapshot = 0,		
	UseBus,				
	UseAisacControl,
	UseEntranceVolume,
	Num
};

/****************************************************************************
 *      変数宣言
 *      Prototype Variables
 ****************************************************************************/

/****************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ****************************************************************************/
class AAtomEntranceVolume;
class AAtomAudioVolume;
class UModel;
struct FBodyInstance;

UCLASS(hidecategories = (Advanced, Attachment, Collision, Volume))
class CRIWARERUNTIME_API AAtomEntranceVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(EditAnywhere, Category = AtomEntranceVolume)
	float Priority;

	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_bEnabled, Category = AtomEntranceVolume)
	uint32 bEnabled : 1;

#if WITH_EDITORONLY_DATA
	// Volume Color.
	UPROPERTY(EditAnywhere, Category = AudioVolume)
	FColor AtomBrushColor;
#endif

public:
	bool bIsAddedStaticArray_EntranceVolume;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_bEnabled, Category = AtomEntranceVolume)
	TArray<TWeakObjectPtr<AAtomAudioVolume>> NeighbourhoodAudioVolumeArray;

	static bool bIsInitialized;  // FIXME
	static TArray<class AAtomEntranceVolume*> EntranceVolumeArray; // ??

public:
	UFUNCTION(BlueprintCallable, Category = AtomEntranceVolume)
	float GetPriority() const { return Priority; }

	UFUNCTION(BlueprintCallable, Category = AtomEntranceVolume)
	void SetPriority(float NewPriority) { Priority = NewPriority; }

	UFUNCTION(BlueprintCallable, Category = AtomEntranceVolume)
	bool GetEnabled() const { return bEnabled; }

	UFUNCTION(BlueprintCallable, Category = AtomEntranceVolume)
	void SetEnabled(bool bNewEnabled);

	static class AAtomEntranceVolume* GetEntranceSettings(const FVector& ViewLocation);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnConstruction(const FTransform& Transform) override;

	/** @return false */
	virtual bool IsBrushShape() const { return true; }

	//~ Begin AActor Interface
	virtual void PostInitProperties() override;
	virtual void PostUnregisterAllComponents() override;
	virtual void PostRegisterAllComponents() override;
	//~ End AActor Interface
private:
	UFUNCTION()
	virtual void OnRep_bEnabled() {}

	void TransformUpdated(USceneComponent* RootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);
	
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetHidden(bool InHidden);
#endif
};


/** Struct encapsulating settings for reverb effects. */
USTRUCT(BlueprintType)
struct FSnapshotSwitchSettings
{
	GENERATED_USTRUCT_BODY()

	FSnapshotSwitchSettings();

	/** The reverb asset to employ. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	int32 AsrRackID;

	/* DspBusSettings指定用ID. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	int32 DspBusSettingsID;

	/* DspBusSettings名. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings)
	FString DspBusSettingsName;

	/* Snapshot指定用ID. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	int32 SnapshotID;

	/* Snapshot名. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings)
	FString SnapshotName;

	/** Time to fade from the current reverb settings into this setting, in seconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	float FadeTime;

	bool operator==(const FSnapshotSwitchSettings& Other) const;
	bool operator!=(const FSnapshotSwitchSettings& Other) const { return !(*this == Other); }

	void PostSerialize(const FArchive& Ar);
};

template<>
struct TStructOpsTypeTraits<FSnapshotSwitchSettings> : public TStructOpsTypeTraitsBase2<FSnapshotSwitchSettings>
{
	enum
	{
		WithPostSerialize = true,
	};
};


/** Struct encapsulating settings for reverb effects. */
USTRUCT(BlueprintType)
struct FAisacControlInterpolationSettings
{
	GENERATED_USTRUCT_BODY()

	FAisacControlInterpolationSettings();

	/** DspBusSettings指定用ID. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AisacControl)
	int32 AisacControlID;

	/** AisacControl名. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AisacControl)
	FString AisacControlName;

	/** Target value for Inside. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AisacControl, meta = (DisplayName = "Aisac Value for Inside", ToolTip = "Target value for inside the audio volume.", ClampMin = "0.0", ClampMax = "1.0"))
	float AisacControlValueForInside;

	/** Time to fade from the current reverb setting to this setting, in seconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AisacControl, meta = (DisplayName = "Aisac Value for Outside", ToolTip = "Target value for outside the audio volume", ClampMin = "0.0", ClampMax = "1.0"))
	float AisacControlValueForOutside;

	/** Distance to volume border where interporlation applies. Distance can be positive or negative. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AisacControl, meta = (DisplayName = "Area Width", ToolTip = "Distance to volume body border where Interporlation applies. Value can be positive or negative.", ClampMin = "0.0"))
	float Width;

	// Expreimental use, accumaulated result
	float LerpValue;
	float LerpValueForVolumeOutside;

	bool operator==(const FAisacControlInterpolationSettings& Other) const {
		return (AisacControlName == Other.AisacControlName
			&& AisacControlValueForInside == Other.AisacControlValueForInside
			&& AisacControlValueForOutside == Other.AisacControlValueForOutside
			&& Width == Other.Width);
	}
	bool operator!=(const FAisacControlInterpolationSettings& Other) const { return !(*this == Other); }

	void PostSerialize(const FArchive& Ar) {}
};

template<>
struct TStructOpsTypeTraits<FAisacControlInterpolationSettings> : public TStructOpsTypeTraitsBase2<FAisacControlInterpolationSettings>
{
	enum
	{
		WithPostSerialize = true,
	};
};

/** Structure encapsulating settings for bus send level. */
USTRUCT(BlueprintType)
struct FBusSendInterpolationSettings
{
	GENERATED_USTRUCT_BODY()

	FBusSendInterpolationSettings();

	/** DspBusSettings指定用ID. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	int32 DspBusSettingsID;

	/** DspBusSettings名. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	FString DspBusSettingsName;

	/** DspBusSettings指定用ID. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	int32 BusID;

	/** BusSettings名. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = DspBusSettings)
	FString BusName;

	/** Target level for the current bus inside the audio volume. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings, meta = (DisplayName = "Bus Send level for AudioVolume Inside", ToolTip = "Target level for the current bus inside the audio volume."))
	float BusSendLevelForInside;

	/** Target level for the current bus outside the audio volume. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings, meta = (DisplayName = "Bus Send level for AudioVolume Outside", ToolTip = "Target level for the current bus outside the audio volume."))
	float BusSendLevelForOutside;

	/** Distance to volume border where interporlation applies. Distance can be positive or negative. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DspBusSettings, meta = (DisplayName = "Area Width", ToolTip = "Width to volume border where interporlation applies. Value can be positive only.", ClampMin = "0.0"))
	float Width;

	float LerpValue;
	float LerpValueForVolumeOutside;

	bool operator==(const FBusSendInterpolationSettings& Other) const {
		return (BusName == Other.BusName
			&& BusSendLevelForInside == Other.BusSendLevelForInside
			&& BusSendLevelForOutside == Other.BusSendLevelForOutside
			&& Width == Other.Width);
	}
	bool operator!=(const FBusSendInterpolationSettings& Other) const { return !(*this == Other); }

	void PostSerialize(const FArchive& Ar) {}
};

template<>
struct TStructOpsTypeTraits<FBusSendInterpolationSettings> : public TStructOpsTypeTraitsBase2<FBusSendInterpolationSettings>
{
	enum
	{
		WithPostSerialize = true,
	};
};

USTRUCT(BlueprintType)
struct FAtomAudioVolumeParameters {
	GENERATED_USTRUCT_BODY()

	FAtomAudioVolumeParameters()
		: bUseSnapshotSettings(false)
		, bUseBusSendSettings(false)
		, bUseAisacControlSettings(false)
		, IsActiveEntranceVolumeFlag(false)
#if WITH_EDITOR
		, AtomAudioVolumeWireFrameColor(FColor(255, 0, 255, 255))
#endif
		, MaxDistanceForEntranceVolume(5000000.0f)
		, bSwitchIntepolationInsideForBus(false)
		, bSwitchIntepolationInsideForAisac(false)
	{
		SnapshotSwitchSettings.Empty();
		BusSendInterpolateSettings.Empty();
		AisacControlInterpolateSettings.Empty();
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume, meta = (EditCondition = "!IsActiveEntranceVolumeFlag"))
	bool bUseSnapshotSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume, meta = (EditCondition = "!IsActiveEntranceVolumeFlag"))
	bool bUseBusSendSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume, meta = (EditCondition = "!IsActiveEntranceVolumeFlag"))
	bool bUseAisacControlSettings;

	bool IsActiveEntranceVolumeFlag;

#if WITH_EDITORONLY_DATA
	// Volume Color.
	UPROPERTY(EditAnywhere, Category = AudioVolume)
	FColor AtomAudioVolumeWireFrameColor;
#endif

	// EntranceVolumeによる距離判定を行わないようにする距離を設定します。
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume, meta = (Tooltip = "Set the distance at which EntranceVolume is not performed."), AdvancedDisplay)
	float MaxDistanceForEntranceVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AudioVolume, meta = (Tooltip = "Switch the interpolation area from outside to inside this volume for bus send levels."))
	bool bSwitchIntepolationInsideForBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AudioVolume, meta = (Tooltip = "Switch the interpolation area from outside to inside this volume for AISAC control values."))
	bool bSwitchIntepolationInsideForAisac;

	/** Dspバス設定構造体。 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Snapshot, meta = (EditCondition = "bUseSnapshotSettings"))
	TArray<FSnapshotSwitchSettings> SnapshotSwitchSettings;

	/** バスセンドレベル設定構造体。 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Bus, meta = (EditCondition = "bUseBusSendSettings"))
	TArray<FBusSendInterpolationSettings> BusSendInterpolateSettings;

	/** バスセンドレベル設定構造体。 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AisacControlInterpolateSettings, meta = (EditCondition = "bUseAisacControlSettings"))
	TArray<FAisacControlInterpolationSettings> AisacControlInterpolateSettings;
};

UCLASS(hidecategories = (Advanced, Attachment, Collision, Volume))
class CRIWARERUNTIME_API AAtomAudioVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

private:

	/**
	 * Priority of this volume. In the case of overlapping volumes the one with the highest priority
	 * is chosen. The order is undefined if two or more overlapping volumes have the same priority.
	 */
	UPROPERTY(EditAnywhere, Category = AudioVolume)
	float Priority;

	/** whether this volume is currently enabled and able to affect sounds */
	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_bEnabled, Category = AudioVolume)
	uint32 bEnabled : 1;

	UPROPERTY(EditAnywhere, Category = AudioVolume, AdvancedDisplay)
	FName CollisionProfile;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = AudioVolume, AdvancedDisplay)
	FName CollisionProfileForDetectingEntranceVolume;
#endif

	UPROPERTY(EditAnywhere, Category = Entrance)
	bool bAutoSettingEntranceVolume;

	UPROPERTY(EditAnywhere, Category = Entrance)
	bool bAutoSettingNeighbourAudioVolumeToEntranceVolume;

	bool bIsAddedStaticArray_Snapshot; // ?
	bool bIsAddedStaticArray_Bus;
	bool bIsAddedStaticArray_Aisac;

protected:
	// achetype
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume)
	TArray<FName> AudioVolumeTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AudioVolume)
	bool bOverrideAtomAudioVolume;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AudioVolume, meta = (EditCondition = "!bOverrideAtomAudioVolume"))
	class UAtomAudioVolumeSettings* AtomAudioVolumeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AudioVolume, meta = (EditCondition = "bOverrideAtomAudioVolume"))
	struct FAtomAudioVolumeParameters AtomAudioVolumeSettingsOverrides;

	/** 侵入口座標. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Entrance)
	TArray<class AAtomEntranceVolume*> EntranceVolumes;

	static float MaxInterpolationDistanceForBus;
	static float MaxInterpolationDistanceForAisac;

private:
	UFUNCTION()
	virtual void OnRep_bEnabled() {}

	void TransformUpdated(USceneComponent* RootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

	void InitializeStaticVariable();

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetHidden(bool InHidden);
#endif

	static int32 CurrentAudioVolumeNum_Bus;
	static int32 CurrentAudioVolumeNum_Aisac;
	static int32 CurrentAudioVolumeNum_Snapshot;

public:

	//~ Begin UObject Interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~ End UObject Interface

	virtual void OnConstruction(const FTransform& Transform) override;

	/** @return false */
	virtual bool IsBrushShape() const { return true; } // FIXME

	//~ Begin AActor Interface
	virtual void PostInitProperties() override;
	virtual void PostUnregisterAllComponents() override;
	virtual void PostRegisterAllComponents() override;
	//~ End AActor Interface

#if WITH_EDITOR
	void ProcessAudioVolumeParameterSettings(FAtomAudioVolumeParameters* const AtomAudioVolumeParam, TArray<TWeakObjectPtr<class AAtomAudioVolume>> AudioVolumeArray_Bus, bool& bIsAddedStaticArray, EAtomAudioVolumeType SettingsID);
	void ProcessAutoSettingsForEntranceVolume(FPropertyChangedEvent& PropertyChangedEvent);
#endif

	/**
	 * AtomAudioVolumeの設定を詳細パネル上の設定で上書きするかどうかのフラグを返します。
	 *
	 * @return bOverrideAtomAudioVolumeの値を返します。
	 */
	bool GetOverrideAtomAudioVolume() const { return bOverrideAtomAudioVolume; }

	/**
	 * @return AudioVolumeTagsのアレイ数を返します。
	 */
	int32 GetAudioVolumeTagsNum() const { return AudioVolumeTags.Num(); }

	/*
	 * AudioVolumeTagを返す関数です。
	 *
	 * @param AudioVolumeTagsのアレイ番号
	 * @return AudioVolumeTagsのタグ名を返します。
	 */
	FName GetAudioVolumeTag(int32 Index) const { 
		return (Index >= 0 && Index < AudioVolumeTags.Num()) ? AudioVolumeTags[Index] : NAME_None;
	}

	/**
	 * ListenerとSoundが属しているAudioVolumeのタグが同じかどうか確認するための関数です。
	 *
	 * @param AudioVolume 比較したいAudioVolume
	 * @return 同じTag名を持っている場合にtrueを返します。
	 */
	bool CheckIfSharesSameVolumeTag(const AAtomAudioVolume* Volume) const;

	/**
	 * Validate this audio volume
	 *
	 * @return true if is valid
	 */
	bool Validate() const {
		return IsValid(this) && GetEnabled() && !GetFName().IsNone();
	}
	
	/**
	 * AtomAudioVolumeのPriorityを返します。
	 *
	 * @return Priority AudioVolumeのPritorityを返します
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAudioVolume)
	float GetPriority() const { return Priority; }

	/**
	 * AtomAudioVolumeのPriorityを動的にセットします。
	 *
	 * @param NewPriority AtomAudioVolumeに適用したいPriority値を指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAudioVolume)
	void SetPriority(float NewPriority);

	/**
	 * AtomAudioVolumeが有効になっているかどうか確認します。
	 * trueが返ると、AtomAudioVolumeは有効となっています。
	 *
	 * @return bEnabled AtomAudioVolumeの有効フラグを返します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAudioVolume)
	bool GetEnabled() const { return bEnabled; }

	/**
	 * AtomAudioVolumeを動的に有効・無効にします。
	 * trueを引数に指定するとAtomAudioVolumeが有効となります。
	 *
	 * @param bNewEnabled AtomAudioVolumeに新しい有効フラグを指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAudioVolume)
	void SetEnabled(bool bNewEnabled);

	/**
	 * AtomAudioVolumeのReverbSettingsを動的に変更します。
	 * セットする引数のNewReverbSettingsはアセットで事前に作成しておくか、
	 * BP上などで事前に作成しておく必要があります。
	 *
	 * @param NewReverbSettings 新しくReverbSettingsを指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAudioVolume)
	void SetReverbSettings(const FSnapshotSwitchSettings& NewReverbSettings);

	/**
	 * レベル上に存在しているすべてのAtomAudioVolumeに対して一括で有効・無効化させることができます。
	 * trueを引数に指定するとすべてのAtomAudioVolumeが有効となります。
	 *
	 * @param bEnable 新しい有効フラグを指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AudioVolume)
	static void EnableAllAudioVolume(bool bEnable);

	// FIXME 

	/* ViewLocation座標値が侵入しているボリュームを返す関数 */
	static TWeakObjectPtr<AAtomAudioVolume> GetAudioSettings(const FVector& ViewLocation, EAtomAudioVolumeType Type, const TWeakObjectPtr<AAtomEntranceVolume>& EntranceVolume = nullptr);

	/* 最近傍のAudioVolumeを取得する関数 */
	static TWeakObjectPtr<class AAtomAudioVolume> GetNearestAtomAudioVolume(const FVector& Positiion, EAtomAudioVolumeType SettingsID);

	/* const ポインタ変数を返す。この関数の呼び出し元コードで、返り値のポインタ変数が指す先を書き換えることはできない。テスト目的・デバッグ目的だからいいか？ */
	static FAtomAudioVolumeParameters* GetAtomAudioVolumeSettingsToApply(const TWeakObjectPtr<AAtomAudioVolume>& AudioVolume);
};

/**
 * Defines how a sound changes volume with distance to the listener
 */
UCLASS(BlueprintType, hidecategories = Object, editinlinenew, MinimalAPI)
class UAtomAudioVolumeSettings : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Settings, meta = (CustomizeProperty))
	struct FAtomAudioVolumeParameters AtomAudioVolumeParameters;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

	virtual void PostInitProperties() override;
};


/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

 /* --- end of file --- */
