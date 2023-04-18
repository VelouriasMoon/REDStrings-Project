/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Profile Data
* File     : AtomProfileData.h
*
****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Kismet/BlueprintFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"
#include "SoundAtomCue.h"
#include "AtomComponent.h"
#include "SoundAtomConfig.h"

/* モジュールヘッダ */
#include "AtomProfileData.generated.h"

/***************************************************************************
*      定数マクロ
*      Macro Constants
***************************************************************************/

/***************************************************************************
*      処理マクロ
*      Macro Functions
***************************************************************************/

/***************************************************************************
*      データ型宣言
*      Data Type Declarations
***************************************************************************/

/***************************************************************************
*      変数宣言
*      Prototype Variables
***************************************************************************/

/***************************************************************************
*      クラス宣言
*      Prototype Classes
***************************************************************************/
UENUM(BlueprintType)
enum class EAtomProfileSortType : uint8
{
	AtomComponentID,
	Distance,
	Name,
	Time
};

UENUM(BlueprintType)
enum class EAtomSortOrderType : uint8
{
	Ascending,
	Descending
};

/* 再生リストアイテム */
USTRUCT(BlueprintType, meta = (ToolTip = "AtomAisacControlParam struct."))
struct FAtomProfileItem
{
	GENERATED_USTRUCT_BODY()

	/* コンポーネントID */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "AtomComponentID."))
	int32 AtomComponentID;

	/* セットされているキュー名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "AtomCueName."))
	FString AtomCueName;

	/* Componentの3D位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "AtomComponentLocation."))
	FVector AtomComponentLocation;

	/* リスナーからの距離 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "DistanceFromListener."))
	float DistanceFromListener;

	/* サウンドの再生時刻 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "PlayingTime."))
	float PlayingTime;

	/* 再生状況 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "PlayerState."))
	FString PlayerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "Number of playing sound."))
	int32 NumSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomProfile", meta = (ToolTip = "Sound Concurrency Name."))
	FString ConcurrencyName;

	/* SoundObjectのID。SoundObjectが設定されていない場合は0(ゼロ)になる */
	uint64 SoundObjectId;

	/* SoundObjectの名前。SoundObjectが設定されていない場合は"None"になる */
	FString SoundObjectName;

	/* SoundObjectのEnableVoiceLimitScopeのフラグ */
	bool SoundObjectVoiceLimitFlag;

	/* SoundObjectのEnableCategoryCueLimitScopeのフラグ */
	bool SoundObjectCategoryLimitFlag;
};



UCLASS(meta = (ToolTip = "AtomComponent class."))
class CRIWARERUNTIME_API UAtomProfileData : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UAtomProfileData();

	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", ToolTip = "Get All Atom Compoent Profiled data."))
	static TArray<FAtomProfileItem> CriWareAdx2ProfileDataUpdate(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", ToolTip = "Get All Atom Compoent Profiled data."))
	static void CriWareAdx2ProfileDataSort(TArray<FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<FAtomProfileItem> &sorted_item);

};

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/* --- end of file --- */
