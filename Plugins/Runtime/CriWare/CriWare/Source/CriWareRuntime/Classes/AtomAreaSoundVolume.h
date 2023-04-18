/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomAreaSoundVolume
 * File     : AtomAreaSoundVolume.h
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

#include "SoundAtomCue.h"

#include "AtomAreaSoundVolume.generated.h"

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

/****************************************************************************
 *      変数宣言
 *      Prototype Variables
 ****************************************************************************/

/****************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ****************************************************************************/
class AAtomAreaSoundVolume;
class USoundAtomCue;
class UAtomComponent;
struct FBodyInstance;

UCLASS(EarlyAccessPreview, hidecategories = (Advanced, Attachment, Collision, Volume))
class CRIWARERUNTIME_API AAtomAreaSoundVolume : public AVolume
{
	GENERATED_UCLASS_BODY()

private:

	/**
	 * Priority of this volume. In the case of overlapping volumes the one with the highest priority
	 * is chosen. The order is undefined if two or more overlapping volumes have the same priority.
	 */
	UPROPERTY(EditAnywhere, Category = AtomAreaSoundVolume)
	float Priority;

	/** whether this volume is currently enabled and able to affect sounds */
	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_bEnabled, Category = AtomAreaSoundVolume)
	uint32 bEnabled : 1;

	UPROPERTY(EditAnywhere, Category = AtomAreaSoundVolume, AdvancedDisplay)
	FName CollisionProfile;

	UPROPERTY(EditAnywhere, Category = SoundAtomCue)
	float SoundStopDistance;

	UPROPERTY(EditAnywhere, Category = SoundAtomCue)
	bool bIsEnableAtomCompoentPack;

	/* Sound再生用にAtomComponentArrayが作られているか確認するためのフラグ */
	bool bIsCreatedAtomComponentsArray;

	/* 初期化されたかどうかを確認するためのフラグ */
	/* 初期化タイミング時にはサウンドの再生を行わないためこのフラグでチェックを行う */
	bool bIsInitialized;

#if WITH_EDITORONLY_DATA
	// Volume Color.
	UPROPERTY(EditAnywhere, Category = AtomAreaSoundVolume)
	FColor AtomBrushColor;
#endif

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SoundAtomCue)
	bool bIsAutoPlaySound;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AtomAreaSoundVolume)
	bool bIsDeterminationFromVolumeBoundaryPlane;

	UPROPERTY(BlueprintReadWrite, Transient, Category = AtomAreaSoundVolume)
	TArray<UAtomComponent*> AtomComponents;

	UPROPERTY(EditAnywhere, Category = SoundAtomCue)
	TArray<USoundAtomCue*> Sounds;

	static TArray<class AAtomAreaSoundVolume*> AreaSoundVolumeArray;

private:
	UFUNCTION()
	virtual void OnRep_bEnabled() {}

	void TransformUpdated(USceneComponent* RootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetHidden(bool InHidden);
#endif

public:
	//~ Begin UObject Interface
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~ End UObject Interface

	/** @return false */
	virtual bool IsBrushShape() const { return true; }

	//~ Begin AActor Interface
	virtual void PostInitProperties() override;
	virtual void PostUnregisterAllComponents() override;
	virtual void PostRegisterAllComponents() override;

	/**
	 *	Function called every frame on this Actor. Override this function to implement custom logic to be executed every frame.
	 *	Note that Tick is disabled by default, and you will need to check PrimaryActorTick.bCanEverTick is set to true to enable it.
	 *
	 *	@param	DeltaSeconds	Game time elapsed during last frame modified by the time dilation
	 */
	virtual void Tick(float DeltaSeconds);
	//~ End AActor Interface


	/**
	* AtomComponentsにセットされているサウンドすべてを一括に再生します。
	* @param Listener（カメラ）の座標値を指定します。
	* @return Soundの再生の成功/失敗が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom")
	TArray<UAtomComponent*> CreateSounds(FVector listener_location);

	/**
	 * AtomComponentsで再生しているサウンドを停止します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom")
	void DestroySounds();

	/**
	 * AAtomAreaSoundVolumeのPriorityを返します。
	 *
	 * @return Priority AudioVolumeのPritorityを返します
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAreaSoundVolume)
	float GetPriority() const { return Priority; }

	/**
	 * AAtomAreaSoundVolumeのPriorityを動的にセットします。
	 *
	 * @param NewPriority AAtomAreaSoundVolumeに適用したいPriority値を指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAreaSoundVolume)
	void SetPriority(float NewPriority);

	/**
	 * AAtomAreaSoundVolumeが有効になっているかどうか確認します。
	 * trueが返ると、AAtomAreaSoundVolumeは有効となっています。
	 *
	 * @return bEnabled AAtomAreaSoundVolumeの有効フラグを返します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAreaSoundVolume)
	bool GetEnabled() const { return bEnabled; }

	/**
	 * AAtomAreaSoundVolumeを動的に有効・無効にします。
	 * trueを引数に指定するとAAtomAreaSoundVolumeが有効となります。
	 *
	 * @param bNewEnabled AAtomAreaSoundVolumeに新しい有効フラグを指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = AtomAreaSoundVolume)
	void SetEnabled(bool bNewEnabled);

	/* ViewLocation座標値が侵入しているボリュームを返す関数 */
	static class AAtomAreaSoundVolume* GetSoundShapeSettings(const FVector& ViewLocation);
};


/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

 /* --- end of file --- */
