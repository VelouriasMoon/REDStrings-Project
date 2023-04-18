/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Localization
 * File     : CriWareLocalization.h
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

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#if !defined(CRIWARE_ENABLE_LOCALIZATION)
#define CRIWARE_ENABLE_LOCALIZATION 1
#endif

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
#if CRIWARE_ENABLE_LOCALIZATION
 /** The global namespace that must be defined/undefined to wrap uses of the NS-prefixed macros below */
#undef LOCTEXT_NAMESPACE

 /**
 * Creates an FText. All parameters, that are not string literals, will be passed through the localization system.
 * The global LOCTEXT_NAMESPACE macro must be first set to a string literal to specify this localization key's namespace.
 */
#define CRI_LOCTEXT( InKey, InText ) FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText( InText, TEXT(LOCTEXT_NAMESPACE), InKey )

 /**
 * Creates an FText. All parameters that are not string literals, will be passed through the localization system.
 */
#define CRI_NSLOCTEXT( InNamespace, InKey, InText ) FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText( InText, InNamespace, InKey )

/**
* Macro to localize a class in CriWare plugin. 
* Localization of unreal properties metadata with LOCTEXT markups and reflection.
*/
#define	CRI_LOCCLASS(InClass) {\
	static bool InitLocalizedMetaData = true;\
	if (InitLocalizedMetaData) {\
		InitLocalizedMetaData = false;\
		auto& CriWareLocRes = FCriWareLocalization::GetLocalizationResources();\
		CriWareLocRes.LocalizeClassFromUStructDeclaration(InClass, TEXT(LOCTEXT_NAMESPACE));\
	}\
}

/**
* Macro to localize a structure in CriWare plugin (force usage of a key prefix).
* Localization of unreal properties metadata with LOCTEXT markups and reflection.
*/
#define	CRI_LOCSTRUCT(InStruct) {\
	static bool InitLocalizedMetaData = true;\
	if (InitLocalizedMetaData) {\
		InitLocalizedMetaData = false;\
		auto& CriWareLocRes = FCriWareLocalization::GetLocalizationResources();\
		CriWareLocRes.LocalizeClassFromUStructDeclaration(InStruct, TEXT(LOCTEXT_NAMESPACE), true);\
	}\
}
#else
#define	CRI_LOCCLASS(InClass)
#define	CRI_LOCSTRUCT(InStruct)
#endif

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
#if CRIWARE_ENABLE_LOCALIZATION
class CRIWARERUNTIME_API FCriWareLocalization
{
private:
	bool bResourcesLoaded = false;

private:
	FCriWareLocalization();

public:
	/* Load CriWare Localized Resources Files if not already loaded, then return singleton. */
	static FCriWareLocalization& GetLocalizationResources();

#if WITH_EDITOR
	/* Use DisplayName and ToolTip defined in UStruct or UClass header as Key for Localization. 
	 * Note: You can enable use of Ustruct.Name as prefix to avoid duplicated keys in same localization namespace.
	 */
	void LocalizeClassFromUStructDeclaration(UStruct* InStruct, const TCHAR* InNamespace, bool bUseStructPrefixInKey = false);
#endif
};
#endif

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
