/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : PluginSettings
* File     : CriWarePluginSettingsDetails.cpp
*
****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "CriWarePluginSettingsDetails.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "CriWarePluginSettings.h"
#include "ICriWareEditor.h"
#include "CriWareInitializer.h"

/* Unreal Engine 4関連ヘッダ */
#include "SSettingsEditorCheckoutNotice.h"
#include "Editor/Documentation/Public/IDocumentation.h"
#include "EditorDirectories.h"
#include "UnrealEdMisc.h"
#include "Widgets/Text/SRichTextBlock.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "IDetailChildrenBuilder.h"
#include "IDetailPropertyRow.h"
#include "PropertyCustomizationHelpers.h"
#include "Widgets/Input/SFilePathPicker.h"
#include "SourceControlHelpers.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Dialogs/Dialogs.h"
#include "Widgets/Views/SHeaderRow.h"
#include "Widgets/Notifications/SErrorText.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Images/SImage.h"
#include "Framework/Application/SlateApplication.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "FCriWarePluginSettingsDetails"

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
FCriSubmitItem::FCriSubmitItem(const FString& InItem)
: Item(InItem)
{
	DisplayName = FText::FromString(Item);
}

/* 削除するファイル名を表示するUI部を扱う関数 */
void SDeleteFileListRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView)
{
	CriWareDeleteFileNoticeWidgetPtr = InArgs._CriWareDeleteFileNoticeWidget;
	Item = InArgs._Item;

	SMultiColumnTableRow<TSharedPtr<FCriSubmitItem>>::Construct(FSuperRowType::FArguments(), InOwnerTableView);
}

TSharedRef<SWidget> SDeleteFileListRow::GenerateWidgetForColumn(const FName& ColumnName)
{
	/* Widgetアイテムを作成 */
	TSharedPtr<SCriWareDeleteFileNoticeWidget> CriWareDeleteFileNoticeWidget = CriWareDeleteFileNoticeWidgetPtr.Pin();
	if (CriWareDeleteFileNoticeWidget.IsValid())
	{
		return CriWareDeleteFileNoticeWidget->GenerateWidgetForItemAndColumn(Item);
	}

	/* Widgetアイテムがなかった場合はNullWidgetを返す */
	return SNullWidget::NullWidget;
}

/* ConfigファイルのConvertボタンを押した際に削除されるファイルがあることを知らせるポップアップのUI設定 */
void SCriWareDeleteFileNoticeWidget::Construct(const FArguments& InArgs){
	ParentFrame = InArgs._ParentWindow.Get();

	for (const auto& Item : InArgs._Items.Get())
	{
		ListViewItems.Add(MakeShareable(new FCriSubmitItem(Item)));
	}

	/* 表示するWindow内に表示するListボックスの設定 ここではファイル列を作成している */
	TSharedRef<SHeaderRow> HeaderRowWidget = SNew(SHeaderRow);
	HeaderRowWidget->AddColumn(
		SHeaderRow::Column("File")
		.DefaultLabel(LOCTEXT("FileColumnLabel", "File"))
		.FillWidth(7.0f)
		);

	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.Padding(FMargin(5, 0))
			[
				SNew(SBorder)
				[
					/* リストボックスのUI設定 */
					SAssignNew(ListView, SListView<TSharedPtr<FCriSubmitItem>>)
					.ItemHeight(20)
					.ListItemsSource(&ListViewItems)
					.OnGenerateRow(this, &SCriWareDeleteFileNoticeWidget::OnGenerateRowForList)
					.HeaderRow(HeaderRowWidget)
					.SelectionMode(ESelectionMode::None)
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(FMargin(5, 5, 5, 0))
			[
				SNew(SBorder)
				.Padding(5)
				[
					/* リストボックスの下に表示される注意書き用のボックスのUI設定 */
					SNew(SErrorText)
					.ErrorText(NSLOCTEXT("CriWare.CheckPanel", "DeleteListDescWarning", "The Convert operation will delete the above config files."))
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Bottom)
			.Padding(0.0f, 0.0f, 0.0f, 5.0f)
			[
				/* OKボタンとキャンセルボタンのUI設定 */
				SNew(SUniformGridPanel)
				.SlotPadding(FEditorStyle::GetMargin("StandardDialog.SlotPadding"))
				.MinDesiredSlotWidth(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotWidth"))
				.MinDesiredSlotHeight(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotHeight"))
				+ SUniformGridPanel::Slot(0, 0)
				[
					/* OKボタン */
					SNew(SButton)
					.HAlign(HAlign_Center)
					.ContentPadding(FEditorStyle::GetMargin("StandardDialog.ContentPadding"))
					.Text(NSLOCTEXT("SourceControl.CheckPanel", "OKButton", "OK"))
					.OnClicked(this, &SCriWareDeleteFileNoticeWidget::OKClicked)
				]
				+ SUniformGridPanel::Slot(1, 0)
				[
					/* Cancelボタン */
					SNew(SButton)
					.HAlign(HAlign_Center)
					.ContentPadding(FEditorStyle::GetMargin("StandardDialog.ContentPadding"))
					.Text(NSLOCTEXT("CriWare.CheckPanel", "CancelButton", "Cancel"))
					.OnClicked(this, &SCriWareDeleteFileNoticeWidget::CancelClicked)
				]
			]
		]
	];
}

/* 削除するファイルの列挙するボックスのデザイン設定 */
TSharedRef<SWidget> SCriWareDeleteFileNoticeWidget::GenerateWidgetForItemAndColumn(TSharedPtr<FCriSubmitItem> Item) const
{
	check(Item.IsValid());

	const FMargin RowPadding(3, 0, 0, 0);
	TSharedPtr<SWidget> ItemContentWidget;

	ItemContentWidget = SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.Padding(RowPadding)
		[
			/* アイテム（削除するファイル名）をTextBlockで表示 */
			SNew(STextBlock)
			.Text(Item->GetDisplayName())
		];
	
	return ItemContentWidget.ToSharedRef();
}

/* OKボタンを押した際の処理（ここでConfigファイルのConvertを行う）をする関数 */
FReply SCriWareDeleteFileNoticeWidget::OKClicked()
{
	auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
	if (Settings->ConvertConfigrationFile()){
		Settings->bNoExistCriWareIni = true;
#if (CRIWARE_USE_ADX_LIPSYNC)
		Settings->bEditableCriWareAdxLipSyncSetting = true && Settings->bNoExistCriWareIni;
#else  /* CRIWARE_USE_ADX_LIPSYNC */
		Settings->bEditableCriWareAdxLipSyncSetting = false;
#endif /* CRIWARE_USE_ADX_LIPSYNC */
		ParentFrame.Pin()->RequestDestroyWindow();
	}
	return FReply::Handled();
}

/* Cancelボタンを押した際の処理をする関数 */
FReply SCriWareDeleteFileNoticeWidget::CancelClicked()
{
	ParentFrame.Pin()->RequestDestroyWindow();
	return FReply::Handled();
}

/* リストボックスにアイテムの内容を追加 */
TSharedRef<ITableRow> SCriWareDeleteFileNoticeWidget::OnGenerateRowForList(TSharedPtr<FCriSubmitItem> SubmitItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	TSharedRef<ITableRow> Row =
		SNew(SDeleteFileListRow, OwnerTable)
		.CriWareDeleteFileNoticeWidget(SharedThis(this))
		.Item(SubmitItem);

	return Row;
}

/* FCriWarePluginSettingsDetailsのインスタンスを生成 */
TSharedRef<IDetailCustomization> FCriWarePluginSettingsDetails::MakeInstance()
{
	return MakeShareable(new FCriWarePluginSettingsDetails);
}

class SCriWareRequiredDefaultConfig : public SCompoundWidget
{
public:
	
	SLATE_BEGIN_ARGS(SCriWareRequiredDefaultConfig) {}

	SLATE_END_ARGS()

	~SCriWareRequiredDefaultConfig()
	{
		GetMutableDefault<UCriWarePluginSettings>()->OnSettingChanged().RemoveAll(this);
	}
	
public:

	TMap<TWeakObjectPtr<UObject>, TSharedPtr<SRichTextBlock>> SettingRegions;

	void Construct(const FArguments& InArgs)
	{
		LastStatusUpdate = 0;

		GetMutableDefault<UCriWarePluginSettings>()->OnSettingChanged().AddRaw(this, &SCriWareRequiredDefaultConfig::Update);

		/* ProjectSettingsのパラメタ変更点をGUIのPending Changes欄に出力 */
		ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SAssignNew(CheckoutNotices, SVerticalBox)
			]
		];
	}

	/* ProjectSettingsの変数の変更状態を取得する関数 */
	static EVisibility GetAnyPendingChangesVisibility()
	{
		return GetMutableDefault<UCriWarePluginSettings>()->HasPendingChanges() ? EVisibility::Visible : EVisibility::Collapsed;
	}

	void Initialize(IDetailLayoutBuilder& DetailBuilder, IDetailCategoryBuilder& PendingChangesCategory)
	{
		FText CategoryHeaderTooltip = LOCTEXT("CategoryHeaderTooltip", "List of properties modified in this project setting category");

		ICriWareEditor& Module = ICriWareEditor::Get();
		for (const FModifiedDefaultConfig& Settings : Module.GetPendingSettingsChanges()) {
			TSharedRef<SRichTextBlock> EditPropertiesBlock =
				SNew(SRichTextBlock)
				.AutoWrapText(false)
				.Justification(ETextJustify::Left)
				.TextStyle(FEditorStyle::Get(), "HardwareTargets.Normal")
				.DecoratorStyleSet(&FEditorStyle::Get());

			SettingRegions.Add(Settings.SettingsObject, EditPropertiesBlock);

			/* ProjectSettingsのPending Changes欄の内容部 */
			FDetailWidgetRow& CategoryRow = PendingChangesCategory.AddCustomRow(Settings.CategoryHeading, true)
				.NameContent()
				[
					SNew(STextBlock)
					.Text(Settings.CategoryHeading)
					.ToolTipText(CategoryHeaderTooltip)
					.Font(IDetailLayoutBuilder::GetDetailFont())
				]
			.ValueContent()
				.MaxDesiredWidth(400.0f)
				[
					EditPropertiesBlock
				];
		}

		Update();
		
	}

	void Update()
	{
		FileWatcherWidgets.Reset();
		CheckoutNotices->ClearChildren();

		ICriWareEditor& Module = ICriWareEditor::Get();
		int32 SlotIndex = 0;

		// Run thru the settings and push changes to the existing settings, as well as build a list of inis that will need to be edited
		TSet<FString> SeenConfigFiles;
		for (const FModifiedDefaultConfig& Settings : Module.GetPendingSettingsChanges()) {
			if (!Settings.SettingsObject.IsValid()) {
				continue;
			}
			/* ProjectSettingsのPendingChanges欄の内容更新 */
			SettingRegions.FindChecked(Settings.SettingsObject)->SetText(Settings.Description);

			// @todo userconfig: Should we check for GlobalUserConfig here? It's not ever going to be checked in...
			if (!Settings.SettingsObject->GetClass()->HasAnyClassFlags(CLASS_Config | CLASS_DefaultConfig /*| CLASS_GlobalUserConfig*/)) {
				continue;
			}
		}
	}
	
	TArray<TSharedPtr<SSettingsEditorCheckoutNotice>> FileWatcherWidgets;

	TSharedPtr<SVerticalBox> CheckoutNotices;

	double LastStatusUpdate;
};

/* ProjectSettingでCriWareが開かれるたびに呼ばれる */
void FCriWarePluginSettingsDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	auto* CriWareSettings = GetMutableDefault<UCriWarePluginSettings>();

	if (!CriWareSettings->IsMixedConfigFiles()){
		CriWareSettings->bNoExistCriWareIni = !CriWareSettings->IsExistingCriWareIniFile();
#if (CRIWARE_USE_ADX_LIPSYNC)
		CriWareSettings->bEditableCriWareAdxLipSyncSetting = true && CriWareSettings->bNoExistCriWareIni;
#else  /* CRIWARE_USE_ADX_LIPSYNC */
		CriWareSettings->bEditableCriWareAdxLipSyncSetting = false;
#endif /* CRIWARE_USE_ADX_LIPSYNC */

		/* ProjectSettingエディタのカテゴリ追加 */
		/* ここに"IDetailCategoryBuilder&以下・・・;"を入れ替えたり追加したりすれば順番の変更やカテゴリの追加ができる */
		IDetailCategoryBuilder& VersionCategory = DetailBuilder.EditCategory(TEXT("Plugin Version"));
		IDetailCategoryBuilder& IsPendingCategory = DetailBuilder.EditCategory(TEXT("Information of Parameter Changing"));
		IDetailCategoryBuilder& FileSystemPluginCategory = DetailBuilder.EditCategory(TEXT("FileSystem"));
		IDetailCategoryBuilder& AtomPluginCategory = DetailBuilder.EditCategory(TEXT("Atom"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		/* CRIプラグインのバージョンを表示する */
		{
			const float PaddingAmount = 2.0f;
			
			VersionCategory.AddCustomRow(FText::GetEmpty())
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(PaddingAmount, PaddingAmount, PaddingAmount, 0.0f))
				[
					SNew(STextBlock)
					.Text(NSLOCTEXT(
						"CriWarePluginSettingsDetails",
						"CriWareVersionText",
						"CRIWARE SDK for Unreal Engine 4 Version " CRIWARE_UE4_PLUGIN_VERSION))
				]
			];
		}

		/* SButtonが押されたときに行う処理 */
		/* UnrealEditorを再起動させる */
		auto ApplyNow = []{
			/* 再起動前にモニタライブラリを無効化 */
			/* 備考）Socketのクローズから復帰しなくなる不具合を回避するための措置。 */
			UCriWareInitializer::DisableMonitor();

			/* 再起動 */
			const bool bWarn = false;
			FUnrealEdMisc::Get().RestartEditor(bWarn);
			return FReply::Handled();
		};

		/* Convertボタンの処理内容 */
		auto ConvertNow = []{
			auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
			TArray<FString> deletedFilesName = Settings->GetDeletedFilesName();
			if (deletedFilesName.Num()){
				TSharedRef<SWindow> NewWindow = SNew(SWindow)
					.Title(NSLOCTEXT("CriWare.CheckDeleteFile", "Title", "Check Delete File"))
					.SizingRule(ESizingRule::UserSized)
					.ClientSize(FVector2D(800, 400))
					.SupportsMaximize(true)
					.SupportsMinimize(false);

				TSharedRef<SCriWareDeleteFileNoticeWidget> SourceControlWidget =
					SNew(SCriWareDeleteFileNoticeWidget)
					.ParentWindow(NewWindow)
					.Items(deletedFilesName);

				NewWindow->SetContent(
					SourceControlWidget
					);
				FSlateApplication::Get().AddModalWindow(NewWindow, NULL);
			}
			return FReply::Handled();
		};
		/* ProjectSettingsの内容が書き換わったか判定し、書き換わっていた場合にUIを表示する */
		auto AnyPendingChangesVisible = []()->EVisibility{
			auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
			if (Settings->IsExistingCriWareIniFile())return EVisibility::Collapsed;
			return Settings->HasPendingChanges() ? EVisibility::Visible : EVisibility::Collapsed;
		};
		/* ProjectSettingsの内容が書き換わったか判定し、書き換わっていない場合にUIを表示する */
		auto NoPendingChangesVisible = []()->EVisibility{
			auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
			if (Settings->IsExistingCriWareIniFile())return EVisibility::Collapsed;
			return Settings->HasPendingChanges() ? EVisibility::Collapsed : EVisibility::Visible;
		};
		/* 古いConfigファイルの有無を判定しコンバートボタン、Saveボタンの表示を行うかを決定 */
		auto ConvertButtonForCriWareIniVisible = []()->EVisibility{
			auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
			return Settings->IsExistingCriWareIniFile() ? EVisibility::Visible : EVisibility::Collapsed;
		};
		/* 新しいConfigファイルの有無を判定し、存在した場合にSaveボタンを表示する */
		auto SaveButtonForMultiPlatformVisibility = []()->EVisibility{
			auto* Settings = GetMutableDefault<UCriWarePluginSettings>();
			return Settings->IsExistingCriWareIniFile() ? EVisibility::Collapsed : EVisibility::Visible;
		};

		TSharedRef<SCriWareRequiredDefaultConfig> ConfigWidget = SNew(SCriWareRequiredDefaultConfig);
		ICriWareEditor& CriWareEditor = ICriWareEditor::Get();

		const float PaddingAmount = 2.0f;

		/* CriWare.iniが存在しない場合 */
		IsPendingCategory.AddCustomRow(FText::GetEmpty())
			[
				SNew(SVerticalBox)
				/* パラメータ変更時に表示するリスタートボタンとメッセージ */
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(PaddingAmount, PaddingAmount, PaddingAmount, 0.0f))
				[
					SNew(SBorder)
					.BorderBackgroundColor(FLinearColor::Red)
					.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
					.Padding(8.0f)
					.Visibility_Static(AnyPendingChangesVisible)
					[
						SNew(SUniformGridPanel)
						.SlotPadding(FEditorStyle::GetMargin("StandardDialog.SlotPadding"))
						.MinDesiredSlotWidth(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotWidth"))
						.MinDesiredSlotHeight(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotHeight"))
						+ SUniformGridPanel::Slot(0, 0)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.VAlign(VAlign_Center)
							[
								SNew(SImage)
								.Image(FEditorStyle::GetBrush("SettingsEditor.WarningIcon"))
							]
							+ SHorizontalBox::Slot() /* パラメタが一つでも変更されていたら表示 */
								.AutoWidth()
								.VAlign(VAlign_Center)
								.Padding(4)
								[
									/* リスタートを示すためのテキストボックス */
									SNew(STextBlock)
									.Font(IDetailLayoutBuilder::GetDetailFont())
									.ColorAndOpacity(FLinearColor(1, 1, 1, 1))
									.AutoWrapText(true)
									.Text(LOCTEXT("RestartMessage", "Unreal Editor must be restarted for the parameter changes to take effect."))
								]
						]
						+ SUniformGridPanel::Slot(1, 0)
							[
								SNew(SHorizontalBox)
								+ SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								.HAlign(HAlign_Right)
								.Padding(2, 1)
								[
									/* RestartボタンのUI設定 */
									SNew(SButton)
									.ContentPadding(FEditorStyle::GetMargin("StandardDialog.ContentPadding"))
									.Text(LOCTEXT("RestartNow", "Restart Now"))
									.OnClicked_Static(ApplyNow)
								]
							]
					]
				]

				/* パラメータ未変更時に表示するメッセージ */
				+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(FMargin(PaddingAmount, PaddingAmount, PaddingAmount, 0.0f))
					[
						SNew(SBorder)
						.BorderBackgroundColor(FLinearColor::Green)
						.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
						.Padding(8.0f)
						.Visibility_Static(NoPendingChangesVisible)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.VAlign(VAlign_Center)
							[
								SNew(SImage)
								.Image(FEditorStyle::GetBrush("SettingsEditor.GoodIcon"))
							]
							+ SHorizontalBox::Slot() /* パラメタが一つも変更されていなかったら表示 */
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(STextBlock)
									.ColorAndOpacity(FLinearColor(1, 1, 1, 1))
									.AutoWrapText(true)
									.Text(LOCTEXT("NotRestartMessage", "No parameter is changed."))
								]
						]
					]

				/* コンバートボタン */
				+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(FMargin(PaddingAmount, PaddingAmount, PaddingAmount, 0.0f))
					[
						SNew(SBorder)
						.BorderBackgroundColor(FLinearColor::Yellow)
						.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
						.Padding(8.0f)
						.Visibility_Static(ConvertButtonForCriWareIniVisible)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.VAlign(VAlign_Center)
							[
								SNew(SImage)
								.Image(FEditorStyle::GetBrush("SettingsEditor.WarningIcon"))
							]
							+ SHorizontalBox::Slot() /* パラメタが一つでも変更されていたら表示 */
								.AutoWidth()
								.VAlign(VAlign_Center)
								[
									SNew(STextBlock)
									.ColorAndOpacity(FLinearColor(1, 1, 1, 1))
									.Text(LOCTEXT("ConvertMessage", "The current configuration file must be converted to the new format.\n\nYou cannot edit the parameter while the old format file is existing.\nWhen you push the button, Old format file will be deleted, and UnrealEditor will be restarted."))
								]
							+ SHorizontalBox::Slot()
								.AutoWidth()
								.VAlign(VAlign_Center)
								.HAlign(HAlign_Right)
								.Padding(8.0f)
								[
									SNew(SButton)
									.Text(LOCTEXT("ConvertNow", "Convert Now"))
									.OnClicked_Static(ConvertNow)
								]
						]
					]

				+ SVerticalBox::Slot()
					[
						ConfigWidget /* Construct(const FArguments& InArgs)はここで動作する */
					]
			];

		ConfigWidget->Initialize(DetailBuilder, IsPendingCategory);
	}
	else {
		CriWareSettings->bNoExistCriWareIni = false;
#if (CRIWARE_USE_ADX_LIPSYNC)
		CriWareSettings->bEditableCriWareAdxLipSyncSetting = true && CriWareSettings->bNoExistCriWareIni;
#else  /* CRIWARE_USE_ADX_LIPSYNC */
		CriWareSettings->bEditableCriWareAdxLipSyncSetting = false;
#endif /* CRIWARE_USE_ADX_LIPSYNC */

		IDetailCategoryBuilder& ErrorCategory = DetailBuilder.EditCategory(TEXT("Error"));

		ErrorCategory
		.AddCustomRow(FText::GetEmpty())
		[
			SNew(SBorder)
			.BorderBackgroundColor(FLinearColor::Red)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
			.Padding(8.0f)
			[
				
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(SImage)
					.Image(FEditorStyle::GetBrush("SettingsEditor.WarningIcon"))
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(4)
				[
					SNew(STextBlock)
					.Font(IDetailLayoutBuilder::GetDetailFont())
					.ColorAndOpacity(FLinearColor(1, 1, 1, 1))
					.AutoWrapText(true)
					.Text(LOCTEXT("ErrorMessage", "CRIWARE Plugin Error:\nBoth new and old format settings was found in configuration files.\nPlease follow this instructions to initialize CRIWARE plugin correctly.\n\nIn order to use the new format:\n1. Delete old configuration files (*CriWare.ini).\n\nIn order to use the old format:\n1. Open new configuration file (*Engine.ini) by text editor.\n2. Remove section [/Script/CriWareRuntime.CriWarePluginSettings].\n\n[Appendix]\nConfiguration files will be in the following directories:\n- Engine/Config/\n- Engine/Platform/\n- [ProjectDir]/Config/\n- [ProjectDir]/Config/[Platform]/\n"))
				]
			]
		];
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}

void FCriWarePluginSettingsDetails::GenerateArrayElementWidget(TSharedRef<IPropertyHandle> PropertyHandle, int32 ArrayIndex, IDetailChildrenBuilder& ChildrenBuilder)
{
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
};


void FCriWarePluginSettingsDetails::HandleFilePathPickerPathPicked(const FString& PickedPath, TSharedRef<IPropertyHandle> Property)
{
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}

FString FCriWarePluginSettingsDetails::HandleFilePathPickerFilePath(TSharedRef<IPropertyHandle> Property) const
{
	FString FilePath;
	Property->GetValue(FilePath);

	return FilePath;
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
