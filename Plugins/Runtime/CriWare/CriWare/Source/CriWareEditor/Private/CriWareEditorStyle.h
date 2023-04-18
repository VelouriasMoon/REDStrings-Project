/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Editor Style 
 * File     : CriWareEditorStyle.h
 *
 ****************************************************************************/

#pragma once

#include "Styling/SlateStyle.h"
#include "Styling/SlateTypes.h"

class FCriWareEditorStyle
{
public:

	static TSharedRef< class ISlateStyle > Create();

	/** @return the singleton instance. */
	static const ISlateStyle& Get()
	{
		return *(Instance.Get());
	}

	static void ResetToDefault();

protected:

	static void SetStyle(const TSharedRef< class ISlateStyle >& NewStyle);

private:

	/** Singleton instance of the slate style */
	static TSharedPtr< class ISlateStyle > Instance;
};

class FCriWareStyle : public FSlateStyleSet
{
public:
	FCriWareStyle();

	void Initialize();
	void SetupAtomStyles();
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	void SettingsChanged(UObject* ChangedObject, FPropertyChangedEvent& PropertyChangedEvent);
	void SyncSettings();

	FString RootToCriWareContentDir(const ANSICHAR relativePath);

	const FVector2D Icon7x16;
	const FVector2D Icon8x4;
	const FVector2D Icon16x4;
	const FVector2D Icon8x8;
	const FVector2D Icon10x10;
	const FVector2D Icon12x12;
	const FVector2D Icon12x16;
	const FVector2D Icon14x14;
	const FVector2D Icon16x16;
	const FVector2D Icon16x20;
	const FVector2D Icon20x20;
	const FVector2D Icon22x22;
	const FVector2D Icon24x24;
	const FVector2D Icon25x25;
	const FVector2D Icon32x32;
	const FVector2D Icon40x40;
	const FVector2D Icon48x48;
	const FVector2D Icon64x64;
	const FVector2D Icon36x24;
	const FVector2D Icon128x128;

	// These are the colors that are updated by the user style customizations
	const TSharedRef< FLinearColor > DefaultForeground_LinearRef;
	const TSharedRef< FLinearColor > InvertedForeground_LinearRef;
	const TSharedRef< FLinearColor > SelectorColor_LinearRef;
	const TSharedRef< FLinearColor > SelectionColor_LinearRef;
	const TSharedRef< FLinearColor > SelectionColor_Subdued_LinearRef;
	const TSharedRef< FLinearColor > SelectionColor_Inactive_LinearRef;
	const TSharedRef< FLinearColor > SelectionColor_Pressed_LinearRef;

	// These are the Slate colors which reference those above; these are the colors to put into the style
	const FSlateColor DefaultForeground;
	const FSlateColor InvertedForeground;
	const FSlateColor SelectorColor;
	const FSlateColor SelectionColor;
	const FSlateColor SelectionColor_Subdued;
	const FSlateColor SelectionColor_Inactive;
	const FSlateColor SelectionColor_Pressed;

	// These are common colors used thruout the editor in mutliple style elements
	const FSlateColor InheritedFromBlueprintTextColor;

	FTextBlockStyle NormalText;
	FEditableTextBoxStyle NormalEditableTextBoxStyle;
	FTableRowStyle NormalTableRowStyle;
	FButtonStyle Button;
	FButtonStyle HoverHintOnly;
};
