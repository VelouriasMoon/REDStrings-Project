/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Config File
 * File     : SoundAtomConfig.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Serialization/BulkData.h"
#include "EditorFramework/AssetImportData.h"

/* モジュールヘッダ */
#include "SoundAtomConfig.generated.h"

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
 /* CategoryInfoパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "AtomCategoryInfoParam struct."))
struct FAtomCategoryInfoParam
{
	GENERATED_USTRUCT_BODY()

	FAtomCategoryInfoParam();

	/* Category名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aisac", meta = (ToolTip = "Name."))
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aisac", meta = (ToolTip = "ID."))
	int32 category_id;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aisac", meta = (ToolTip = "ID."))
	int32 group_no;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aisac", meta = (ToolTip = "Volume."))
	float volume;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aisac", meta = (ToolTip = "Volume."))
	bool isPaused;
};

UCLASS(hidecategories=object, meta = (ToolTip = "SoundAtomConfig class."))
class CRIWARERUNTIME_API USoundAtomConfig : public UObject
{
	GENERATED_BODY()

public:
	USoundAtomConfig(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Instanced, Category = Reimport)
	class UAssetImportData* AssetImportData;
#endif

	/** (DEPRECATED) ACF file path is now stored in AssetImportData. */
	UPROPERTY()
	FString AcfFilePath;

	/* ACFデータ */
	FByteBulkData RawData;

	/* ACFアセットのロード */
	static USoundAtomConfig* LoadAcfAsset(FString AssetPath);

	UFUNCTION(BlueprintCallable, Category = "Atom")
	static TArray<FAtomCategoryInfoParam> GetCategoryInfoArray();

	// Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void Serialize(FArchive& Ar) override;
	// End UObject interface.

	// Begin AssetUserData Interface
#if WITH_EDITORONLY_DATA
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
#endif
	// End AssetUserData Interface
};

/* AtomConfigアセットのバージョン管理用 */
struct FAtomConfigVersion
{
	/* バージョン番号 */
	static const int32 AssetVersion;

	/* GUID */
	static const FGuid AssetGuid;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
