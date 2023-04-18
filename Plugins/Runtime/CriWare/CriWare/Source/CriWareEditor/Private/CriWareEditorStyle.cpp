/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Editor Style 
 * File     : CriWareEditorStyle.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "CriWareEditorStyle.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

/* Unreal Engine 4関連ヘッダ */
#include "ClassIconFinder.h"
#include "Styling/SlateStyleRegistry.h"

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

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/
TSharedPtr<ISlateStyle> FCriWareEditorStyle::Instance = NULL;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
void FCriWareEditorStyle::ResetToDefault()
{
	SetStyle(FCriWareEditorStyle::Create());
}

void FCriWareEditorStyle::SetStyle(const TSharedRef< ISlateStyle >& NewStyle)
{
	if (Instance != NewStyle)
	{
		if (Instance.IsValid())
		{
			auto Style = Instance.Get();
			FSlateStyleRegistry::UnRegisterSlateStyle(*Style);
		}

		Instance = NewStyle;

		if (Instance.IsValid())
		{
			auto Style = Instance.Get();
			FSlateStyleRegistry::RegisterSlateStyle(*Style);
		}
		else
		{
			ResetToDefault();
		}
	}
}

TSharedRef< ISlateStyle > FCriWareEditorStyle::Create()
{
	return MakeShareable(new FCriWareStyle());;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( /*StyleSet->*/RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( /*StyleSet->*/RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( /*StyleSet->*/RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( /*StyleSet->*/RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( /*StyleSet->*/RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )


/* FCriWareStyle interface
*****************************************************************************/

FCriWareStyle::FCriWareStyle()
	: FSlateStyleSet("CriWareStyle")

	// Note, these sizes are in Slate Units.
	// Slate Units do NOT have to map to pixels.
	, Icon7x16(7.0f, 16.0f)
	, Icon8x4(8.0f, 4.0f)
	, Icon16x4(16.0f, 4.0f)
	, Icon8x8(8.0f, 8.0f)
	, Icon10x10(10.0f, 10.0f)
	, Icon12x12(12.0f, 12.0f)
	, Icon12x16(12.0f, 16.0f)
	, Icon14x14(14.0f, 14.0f)
	, Icon16x16(16.0f, 16.0f)
	, Icon16x20(16.0f, 20.0f)
	, Icon20x20(20.0f, 20.0f)
	, Icon22x22(22.0f, 22.0f)
	, Icon24x24(24.0f, 24.0f)
	, Icon25x25(25.0f, 25.0f)
	, Icon32x32(32.0f, 32.0f)
	, Icon40x40(40.0f, 40.0f)
	, Icon48x48(48.0f, 48.0f)
	, Icon64x64(64.0f, 64.0f)
	, Icon36x24(36.0f, 24.0f)
	, Icon128x128(128.0f, 128.0f)

	// These are the colors that are updated by the user style customizations
	, DefaultForeground_LinearRef(MakeShareable(new FLinearColor(0.72f, 0.72f, 0.72f, 1.f)))
	, InvertedForeground_LinearRef(MakeShareable(new FLinearColor(0, 0, 0)))
	, SelectorColor_LinearRef(MakeShareable(new FLinearColor(0.701f, 0.225f, 0.003f)))
	, SelectionColor_LinearRef(MakeShareable(new FLinearColor(0.728f, 0.364f, 0.003f)))
	, SelectionColor_Subdued_LinearRef(MakeShareable(new FLinearColor(0.807f, 0.596f, 0.388f)))
	, SelectionColor_Inactive_LinearRef(MakeShareable(new FLinearColor(0.25f, 0.25f, 0.25f)))
	, SelectionColor_Pressed_LinearRef(MakeShareable(new FLinearColor(0.701f, 0.225f, 0.003f)))

	// These are the Slate colors which reference those above; these are the colors to put into the style
	, DefaultForeground(DefaultForeground_LinearRef)
	, InvertedForeground(InvertedForeground_LinearRef)
	, SelectorColor(SelectorColor_LinearRef)
	, SelectionColor(SelectionColor_LinearRef)
	, SelectionColor_Subdued(SelectionColor_Subdued_LinearRef)
	, SelectionColor_Inactive(SelectionColor_Inactive_LinearRef)
	, SelectionColor_Pressed(SelectionColor_Pressed_LinearRef)

	, InheritedFromBlueprintTextColor(FLinearColor(0.25f, 0.5f, 1.0f))

	//, Settings(InSettings)
{
	Initialize();
}

void SetColor(const TSharedRef< FLinearColor >& Source, const FLinearColor& Value)
{
	Source->R = Value.R;
	Source->G = Value.G;
	Source->B = Value.B;
	Source->A = Value.A;
}

void FCriWareStyle::SettingsChanged(UObject* ChangedObject, FPropertyChangedEvent& PropertyChangedEvent)
{
	/*if (ChangedObject == Settings.Get())
	{
		SyncSettings();
	}*/
}

void FCriWareStyle::SyncSettings()
{
	/*if (Settings.IsValid())
	{
		// Sync the colors used by FEditorStyle
		SetColor(SelectorColor_LinearRef, Settings->KeyboardFocusColor);
		SetColor(SelectionColor_LinearRef, Settings->SelectionColor);
		SetColor(SelectionColor_Inactive_LinearRef, Settings->InactiveSelectionColor);
		SetColor(SelectionColor_Pressed_LinearRef, Settings->PressedSelectionColor);

		// The subdued selection color is derived from the selection color
		auto SubduedSelectionColor = Settings->GetSubduedSelectionColor();
		SetColor(SelectionColor_Subdued_LinearRef, SubduedSelectionColor);

		// Also sync the colors used by FCoreStyle, as FEditorStyle isn't yet being used as an override everywhere
		FCoreStyle::SetSelectorColor(Settings->KeyboardFocusColor);
		FCoreStyle::SetSelectionColor(Settings->SelectionColor);
		FCoreStyle::SetInactiveSelectionColor(Settings->InactiveSelectionColor);
		FCoreStyle::SetPressedSelectionColor(Settings->PressedSelectionColor);
	}*/
}

void FCriWareStyle::Initialize()
{
	//@Todo slate: splitting game and style atlases is a better solution to avoiding editor textures impacting game atlas pages. Tho this would still be a loading win.
	// We do WITH_EDITOR and well as !GIsEditor because in UFE !GIsEditor is true, however we need the styles.
#if WITH_EDITOR
	if (!GIsEditor)
	{
		return;
	}
#endif

	SyncSettings();

	FString PluginPath = TEXT("Plugins/Runtime/CriWare/CriWare");
	FString CorePath = FPaths::Combine(*(FPaths::ProjectDir()), PluginPath);
	if (!FPaths::DirectoryExists(CorePath)) {
		CorePath = FPaths::Combine(*(FPaths::EngineDir()), PluginPath);
	}
	SetContentRoot(CorePath / TEXT("Content"));
	SetCoreContentRoot(CorePath);

	SetupAtomStyles();
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}


void FCriWareStyle::SetupAtomStyles()
{
}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
