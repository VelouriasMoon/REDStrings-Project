/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Details Customization for Atom Cue Asset
 * File     : AtomCueDetailsCustomization.cpp
 *
 ****************************************************************************/

 /***************************************************************************
  *      インクルードファイル
  *      Include files
  ***************************************************************************/
  /* モジュールヘッダ */
#include "AtomCueDetailsCustomization.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "CriWareInitializer.h"
#include "SoundAtomCue.h"

/* Unreal Engine 4関連ヘッダ */
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SCheckBox.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "IDetailGroup.h"
#include "HAL/PlatformFilemanager.h"
#include "GenericPlatform/GenericPlatformFile.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomCueDetailsCustomization"

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

	   /***************************************************************************
		*      クラス定義
		*      Class Definition
		***************************************************************************/
TSharedRef<IDetailCustomization> FAtomCueDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FAtomCueDetailsCustomization);
}

void FAtomCueDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	/* メニューの追加表示 */
	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory(TEXT("Sound Atom Cue"));

	/* Atom Cue アセットにアクセス */
	TArray<TWeakObjectPtr<UObject>> Objects;
	DetailLayout.GetObjectsBeingCustomized(Objects);
	check(Objects.Num() > 0);
	USoundAtomCue* Cue = CastChecked<USoundAtomCue>(Objects[0].Get());

	TSharedPtr<IPropertyHandle> CueSheetHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueSheet));
	CueSheetHandle->MarkHiddenByCustomization();
	TSharedPtr<IPropertyHandle> CueNameHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(USoundAtomCue, CueName));
	CueNameHandle->MarkHiddenByCustomization();
	TSharedPtr<IPropertyHandle> LoopSettingHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(USoundAtomCue, LoopSetting));
	LoopSettingHandle->MarkHiddenByCustomization();

	CategoryBuilder.AddProperty(CueSheetHandle);
	CategoryBuilder.AddProperty(CueNameHandle);

	
	CategoryBuilder.AddCustomRow(FText::GetEmpty())
		.NameContent()
		[
			LoopSettingHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			.Padding(FMargin(2.0f))
			[
				SNew(STextBlock)
				.Text(LOCTEXT("IsLoopingLabel", "Is Looping"))
			]
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			.Padding(FMargin(2.0f))
			[
				SNew(SCheckBox)
				.IsEnabled(false)
				.IsChecked_Lambda([Cue]() { return Cue->IsLooping() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			]
			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			.Padding(FMargin(8.0f))
			[
				LoopSettingHandle->CreatePropertyValueWidget()
			]
		];
}

#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
