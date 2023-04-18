/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Reimport Factory of Atom Data
 * File     : AtomCueSheetFactoryDialog.cpp
 *
 ****************************************************************************/

#include "SAtomCueSheetFactoryDialog.h"

#include "ObjectTools.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Colors/SColorBlock.h"
#include "Widgets/Colors/SColorPicker.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Styling/SlateTypes.h"
#include "EditorStyleSet.h"
#include "DesktopPlatformModule.h"
#include "../Launch/Resources/Version.h"

#include "Factories/SoundAtomCueSheetImportOptions.h"
#include "SoundAtomCueSheetFactory.h"
#include "SoundAtomCue.h"
#include "CriWarePreviewer.h"
#include "CriWareInitializer.h"

#define LOCTEXT_NAMESPACE "SoundAtomCueSheetFactory"

const FName SAtomCueSheetFactoryDialog::ColumnID_Expander(TEXT("Expand"));
const FName SAtomCueSheetFactoryDialog::ColumnID_CheckBox(TEXT("Check"));
const FName SAtomCueSheetFactoryDialog::ColumnID_Previewer(TEXT("Preview"));
const FName SAtomCueSheetFactoryDialog::ColumnID_Name(TEXT("Name"));
const FName SAtomCueSheetFactoryDialog::ColumnID_ID(TEXT("ID"));
const FName SAtomCueSheetFactoryDialog::ColumnID_Duration(TEXT("Duration"));
const FName SAtomCueSheetFactoryDialog::ColumnID_Status(TEXT("Status"));
const FName SAtomCueSheetFactoryDialog::ColumnID_Action(TEXT("Action"));

static bool IsPathUnderDirectory(const FString& Path, const FString& Directory)
{
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	auto FullPath = FPaths::ConvertRelativePathToFull(Path);
	auto DstDirectory = FPaths::ConvertRelativePathToFull(Directory);
	if (DstDirectory.EndsWith(TEXT("/"))) {
		DstDirectory.RemoveAt(DstDirectory.Len() - 1);
	}

#if PLATFORM_WINDOWS || PLATFORM_XBOXONE
	bool IsStrSamePartialy = (FCString::Strnicmp(*FullPath, *DstDirectory, DstDirectory.Len()) == 0);
#else
	bool IsStrSamePartialy = (FCString::Strncmp(*FullPath, *DstDirectory, DstDirectory.Len()) == 0);
#endif
	bool IsPathStrIncludingDstDir = IsStrSamePartialy && FullPath[DstDirectory.Len()] == '/' || FullPath[DstDirectory.Len()] == 0;
	return IsPathStrIncludingDstDir;
#else
	return FPaths::IsUnderDirectory(Path, Directory);
#endif
}

/** Construct this widget. */
void SAtomCueSheetFactoryDialog::Construct(const FArguments& InArgs, USoundAtomCueSheetImportOptions* InOptions, TSharedRef<SWindow> InWindow)
{
	Previewer = nullptr;

	Options = InOptions;
	Window = InWindow;

	ExpandMode = EAtomCueExpandMode::CollapseAll;
	SortBy = EAtomCueSortMode::ByID;
	SortDirection = EColumnSortMode::Descending;

	GenerateAwbDirectories(InOptions);

	FText FileName = FText::FromString(FPaths::GetBaseFilename(Options->CueSheetPackageName));

	InWindow->SetOnWindowClosed(FOnWindowClosed::CreateRaw(this, &SAtomCueSheetFactoryDialog::OnWindowClosed));

	ChildSlot
	[
		SNew(SBorder)
		.Visibility(EVisibility::Visible)
		.BorderImage(FEditorStyle::GetBrush("Menu.Background"))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(8.0f)
			[
				SNew(STextBlock)
				.Text(Options->bIsAReimport ?
					FText::Format(LOCTEXT("ReimportCueSheetFileNameLabel", "Reimport '{0}'"), FileName) :
					FText::Format(LOCTEXT("ImportCueSheetFileNameLabel", "Import '{0}'"), FileName))
				.Font(FEditorStyle::GetFontStyle("StandardDialog.LargeFont"))
			]
			+ SVerticalBox::Slot()
			.FillHeight(0.8)
			[
				SNew(SBorder)
				.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
				.Padding(4.0f)
				.Content()
				[
					SNew(SVerticalBox)
					// Label
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0.0f, 8.0f, 0.0f, 0.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetLabel", "Adx2 ACB file Importation options:"))
					]
	// AWB File Handling
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(10.0f, 12.0f, 0.0f, 6.0f)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(STextBlock)
							.Text(FText::Format(LOCTEXT("ImportCueSheetAwbFileHandlingLabel", "AWB File Handling: ({0} {0}|plural(one=file,other=files))"), FText::FromString(FString::FromInt(Options->NumAwbFiles))))
						]
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(20.0f, 6.0f, 0.0f, 0.0f)
					[
						MakeAwbDirectoryWidget()
					]
	// Cue Options
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(10.0f, 12.0f, 0.0f, 6.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetCueOptionsLabel", "Options for new SoundAtomCue assets:"))
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(20.0f, 6.0f, 0.0f, 0.0f)
					[
						MakeCueAssetFilenameWidget()
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(20.0f, 6.0f, 0.0f, 0.0f)
					[
						MakeCueColorWidget()
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(20.0f, 6.0f, 0.0f, 0.0f)
					[
						MakeCueOptimizationsWidget()
					]
	// Cue ListView
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(10.0f, 12.0f, 0.0f, 0.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetCueListLabel", "SoundAtomCue Assets:"))
						.ToolTipText(LOCTEXT("ImportCueSheetCueListTip", "Selection of cues referenced by SoundAtomCue assets."))
					]
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(20.0f, 6.0f, 0.0f, 0.0f)
					[
						MakePresetsWidget()
					]
	// List View
					+ SVerticalBox::Slot()
					.FillHeight(0.8)
					.Padding(0.0f, 10.0f, 0.0f, 0.0f)
					[
						SNew(SBorder)
						.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
						.Padding(1.0)
						[
							SAssignNew(CueListView, STreeView< TSharedPtr<FAtomCueListItem> > )
							.ItemHeight(20.0f)
							.TreeItemsSource(&Options->Items)
							.OnGetChildren(this, &SAtomCueSheetFactoryDialog::OnGetChildrenForTree)
							//.ListItemsSource(&Options->Items)
							.SelectionMode(ESelectionMode::None)
							.OnGenerateRow(this, &SAtomCueSheetFactoryDialog::OnGenerateWidgetForTree)
							.OnContextMenuOpening(this, &SAtomCueSheetFactoryDialog::GetListContextMenu)
							.HeaderRow
							(
								SNew(SHeaderRow)
								// Expand
								+ SHeaderRow::Column(ColumnID_Expander)
								.HAlignCell(HAlign_Left)
								.FixedWidth(15.0f)
								[
									SAssignNew(ToggleExpandButton, SButton)
									.ButtonStyle(FCoreStyle::Get(), "NoBorder")
									.VAlign(VAlign_Center)
									.HAlign(HAlign_Center)
									.ClickMethod(EButtonClickMethod::MouseDown)
									.OnClicked(this, &SAtomCueSheetFactoryDialog::OnExpandAllButtonClicked)
									.ContentPadding(0.0f)
									.ForegroundColor(FSlateColor::UseForeground())
									.IsFocusable(false)
									.ToolTipText(LOCTEXT("ExpanderCueListHeaderTip", "Expand / Collapse"))
									[
									SNew(SImage)
										.Image(this, &SAtomCueSheetFactoryDialog::GetExpanderImage)
										.ColorAndOpacity(FSlateColor::UseForeground())
									]	
								]
								// Check
								+ SHeaderRow::Column(ColumnID_CheckBox)
								.HAlignCell(HAlign_Center)
								.FixedWidth(23)
								[
									SAssignNew(ToggleSelectedCheckBox, SCheckBox)
									.IsChecked(this, &SAtomCueSheetFactoryDialog::GetToggleSelectedState)
									.OnCheckStateChanged(this, &SAtomCueSheetFactoryDialog::OnToggleSelectedCheckBox)
								]
								// Player
								+ SHeaderRow::Column(ColumnID_Previewer)
								.FixedWidth(23)
								.HAlignCell(HAlign_Center)
								[
									SNew(STextBlock)
									.ToolTipText(LOCTEXT("PreviewerCueListHeaderTip", "Play cue sound."))
								]
								// Cue Name
								+ SHeaderRow::Column(ColumnID_Name)
								.SortMode(this, &SAtomCueSheetFactoryDialog::GetNameSortMode)
								.OnSort(this, &SAtomCueSheetFactoryDialog::OnSortByChanged)
								.FillWidth(1.5)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CueNameCueListHeader", "Name"))
									.ToolTipText(LOCTEXT("CueNameCueListHeaderTip", "Name of the Cue."))
								]
								// Cue ID
								+ SHeaderRow::Column(ColumnID_ID)
								.SortMode(this, &SAtomCueSheetFactoryDialog::GetIDSortMode)
								.OnSort(this, &SAtomCueSheetFactoryDialog::OnSortByChanged)
								.FillWidth(0.15)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CueIDCueListHeader", "ID"))
									.ToolTipText(LOCTEXT("CueIDCueListHeaderTip", "ID of the Cue."))
								]
								// Cue Duration
								+ SHeaderRow::Column(ColumnID_Duration)
								.SortMode(this, &SAtomCueSheetFactoryDialog::GetDurationSortMode)
								.OnSort(this, &SAtomCueSheetFactoryDialog::OnSortByChanged)
								.FillWidth(0.4)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CueDurationCueListHeader", "Duration"))
									.ToolTipText(LOCTEXT("CueDurationCueListHeaderTip", "Duration of the Cue."))
								]
								// Cue Status
								+ SHeaderRow::Column(ColumnID_Status)
								.FixedWidth(50)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CueStatusCueListHeader", "Status"))
									.ToolTipText(LOCTEXT("CueStatusCueListHeaderTip", "Cue importation status:"
														"\n'New': This cue is new and is not used by any SoundAtomCue asset yet."
														"\n'Exist': This cue is already referenced by a SoundAtomCue asset."
														"\n'Deleted': This cue does not exist anymore but is referenced by a SoundAtomCue asset."))
								]
								// Cue Action
								+ SHeaderRow::Column(ColumnID_Action)
								.FixedWidth(50)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CueSActionCueListHeader", "Action"))
									.ToolTipText(LOCTEXT("CueActionCueListHeaderTip", "Action performed when importing a cue:"
														"\n'Create': Creates a new SoundAtomCue asset."
														"\n'Keep': Keep SoundAtomCue asset."
														"\n'Delete': Deletes an existing SoundAtomCue asset."))
								]
							)
						]
					]
				]
			]
  // Bottom Panel
			+ SVerticalBox::Slot()
			.AutoHeight()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Bottom)
			.Padding(8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.HAlign(HAlign_Left)
				[
					SNew(SCheckBox)
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION < 26
					// UseSameOption is not available for reimport prior 4.26 (no CleanUp())
					.Visibility(Options->bIsAReimport ? EVisibility::Hidden : EVisibility::Visible)
#endif
					.IsChecked_Lambda([this] { return Options->bUseSameOptions ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) { Options->bUseSameOptions = CheckState == ECheckBoxState::Checked; })
					[
						SNew(STextBlock)
						.Text(Options->bIsAReimport ? 
							LOCTEXT("ReimportCueSheetUseSameOptionsLabel", "Apply same settings for other reimports.") :
							LOCTEXT("ImportCueSheetUseSameOptionsLabel", "Apply same settings for other imports."))
					]
				]
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Right)
				[
					SNew(SUniformGridPanel)
					.SlotPadding(FEditorStyle::GetMargin("StandardDialog.SlotPadding"))
					.MinDesiredSlotWidth(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotWidth"))
					.MinDesiredSlotHeight(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotHeight"))

					+ SUniformGridPanel::Slot(0, 0)
					[
						SNew(SButton)
						.HAlign(HAlign_Center)
						.ContentPadding(FEditorStyle::GetMargin("StandardDialog.ContentPadding"))
						.OnClicked_Lambda([this]() -> FReply { CloseDialog(true); return FReply::Handled(); })
						.Text(LOCTEXT("OkButtonLabel", "OK"))
					]

					+ SUniformGridPanel::Slot(1, 0)
					[
						SNew(SButton)
						.HAlign(HAlign_Center)
						.ContentPadding(FEditorStyle::GetMargin("StandardDialog.ContentPadding"))
						.OnClicked_Lambda([this]() -> FReply { CloseDialog(false); return FReply::Handled(); })
						.Text(LOCTEXT("CancelButtonLabel", "Cancel"))
					]
				]
			]
		]
	];
}

void SAtomCueSheetFactoryDialog::Clean()
{
	// stop and destroy previewer
	if (Previewer) {
		FCriWareApi::criAtomExPlayer_Destroy(Previewer);
		Previewer = nullptr;
	}
}

void SAtomCueSheetFactoryDialog::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	// check if preview playback is ended
	if (Previewer && !PreviewingCue.IsEmpty()) {
		CriAtomExPlayerStatus Status = FCriWareApi::criAtomExPlayer_GetStatus(Previewer);

		if ((Status != CRIATOMEXPLAYER_STATUS_PREP) && (Status != CRIATOMEXPLAYER_STATUS_PLAYING)) {
			FCriWareApi::criAtomExPlayer_Stop(Previewer);
			PreviewingCue = FText::GetEmpty();
		}
	}

	 SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
}

void SAtomCueSheetFactoryDialog::GenerateAwbDirectories(USoundAtomCueSheetImportOptions* InOptions)
{
	// generate awb root directory
	static const FString PackageRoot = TEXT("/Game/");
	auto PluginSettings = GetDefault<UCriWarePluginSettings>();
	FString AwbRootFolder = PluginSettings->AwbRoot;
	FString PackagePath = FPaths::GetPath(InOptions->CueSheetPackageName);
	PackagePath.RemoveFromStart(PackageRoot);

	// set awb directories
	RootedAwbDir = FPaths::Combine(AwbRootFolder, PackagePath);
	DefaultAwbDir = PluginSettings->NonAssetContentDir.Path;
	CurrentEditAwbDir = InOptions->AwbDirectory;
	
	// update directory
	Options->AwbDirectory = GetAwbDirectory();
}

FString& SAtomCueSheetFactoryDialog::GetAwbDirectory()
{
	return !Options->bOverrideAwbDirectory ? DefaultAwbDir :
					  Options->bUseAwbRoot ? RootedAwbDir :
		              CurrentEditAwbDir;
}

FReply SAtomCueSheetFactoryDialog::OnAwbDirectoryButtonClicked()
{
	// Prompt the user for the Filenames
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (DesktopPlatform != NULL)
	{
		FString CurrentValue = Options->AwbDirectory;
		
		// sanitize
		FPaths::NormalizeDirectoryName(CurrentValue);
		FPaths::CollapseRelativeDirectories(CurrentValue);
		FPaths::RemoveDuplicateSlashes(CurrentValue);
		
		// validate
		if (!FPaths::ValidatePath(CurrentValue))
		{
			CurrentValue.Empty();
		}

		// expand
		CurrentValue = FPaths::Combine(FPaths::ProjectContentDir(), CurrentValue);
		
		// open dialog
		FString OpenDirectory;
		bool bOpened = DesktopPlatform->OpenDirectoryDialog(
			FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
			NSLOCTEXT("UnrealEd", "Import", "Import").ToString(),
			CurrentValue,
			OpenDirectory);

		if (bOpened)
		{
			if (!CurrentValue.Equals(OpenDirectory))
			{
				if (IsPathUnderDirectory(OpenDirectory, FPaths::ProjectContentDir()))
				{
					FPaths::MakePathRelativeTo(OpenDirectory, *FPaths::ProjectContentDir());
					Options->AwbDirectory = OpenDirectory;
				}
				else
				{
					FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ImportCueSheetOuterDirectoryMessage", "Selected directory must be within the project directory."));
				}
			}
		}
	}

	return FReply::Handled();
}

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::MakeAwbDirectoryWidget()
{
	return	SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 2, 0, 0)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ImportCueSheetAwbDirectoryLabel", "AWB directory"))
				.ToolTipText(LOCTEXT("ImportCueSheetAwbDirectoryTip", "A directory where AWB files used by this SoundAtomCueSheet will be stored."))
				.MinDesiredWidth(90)
			]
			+ SHorizontalBox::Slot()
			.MaxWidth(540)
			.Padding(0, 0, 4, 0)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this] { return Options->bOverrideAwbDirectory ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) {
						Options->bOverrideAwbDirectory = CheckState == ECheckBoxState::Checked;
						Options->AwbDirectory = GetAwbDirectory();
					})
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetOverrideAwbDirectoryLabel", "Override AWB Directory"))
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 8, 0, 0)
				[
					SNew(SCheckBox)
					.IsEnabled_Lambda([this] { return Options->bOverrideAwbDirectory; })
					.IsChecked_Lambda([this] { return Options->bUseAwbRoot ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) {
						Options->bUseAwbRoot = CheckState == ECheckBoxState::Checked;
						Options->AwbDirectory = GetAwbDirectory();
					})
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetUseAwbRootDirectoryLabel", "Use AWB Root Directory"))
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 8, 0, 0)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.FillWidth(1)
					.Padding(0, 0, 4, 0)
					[
						SNew(SEditableTextBox)
						.IsEnabled_Lambda([this] { return Options->bOverrideAwbDirectory && !Options->bUseAwbRoot; })
						.Text_Lambda([this] { return FText::FromString(Options->AwbDirectory); })
						.OnTextChanged_Lambda([this](FText Dir) {
							CurrentEditAwbDir = Dir.ToString();
							Options->AwbDirectory = GetAwbDirectory();
						})
						.ToolTipText_Lambda([this] { return FText::FromString(Options->AwbDirectory); })
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(4, 0, 0, 0)
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "PropertyEditor.AssetComboStyle")
						.ForegroundColor(FEditorStyle::GetColor("PropertyEditor.AssetName.ColorAndOpacity"))
						.IsEnabled_Lambda([this] { return Options->bOverrideAwbDirectory && !Options->bUseAwbRoot; })
						.ContentPadding(FMargin(4, 0))
						.Text(LOCTEXT("...", "..."))
						.TextStyle(FEditorStyle::Get(), "PropertyEditor.AssetClass")
						.OnClicked(this, &SAtomCueSheetFactoryDialog::OnAwbDirectoryButtonClicked)
					]
				]
			];
}

FString SAtomCueSheetFactoryDialog::GenerateCueAssetFilename(const FText& CueName)
{
	const FString& Prefix = Options->bUseCueSheetNameAsPrefix
		? FPaths::GetBaseFilename(Options->CueSheetPackageName) + TEXT("_") + Options->AssetFilenamePrefix
		: Options->AssetFilenamePrefix;

	const FString& Suffix = ObjectTools::SanitizeObjectName(Options->AssetFilenameSuffix);

	return ObjectTools::SanitizeObjectName(Prefix) + CueName.ToString() + Suffix;
};

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::MakeCueAssetFilenameWidget()
{
	static const int MaxAffixChars = 25;
	const FText CueNamePlaceHolder = LOCTEXT("ImportCueSheetCueName", "<Cue Name>");
	
	auto GenerateFilenameLambda = [=] {
		return FText::FromString(GenerateCueAssetFilename(CueNamePlaceHolder));
	};

	return	SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 2, 0, 0)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ImportCueSheetCueFilenameLabel", "Asset Name"))
				.ToolTipText(LOCTEXT("ImportCueSheetCueFilenameTip", "Add prefix and suffix to new SoundAtomCue assets."))
				.MinDesiredWidth(90)
			]
			+ SHorizontalBox::Slot()
			.MaxWidth(540)
			.Padding(0, 0, 4, 0)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(SCheckBox)
						.IsChecked_Lambda([this] { return Options->bUseCueSheetNameAsPrefix ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
						.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) { Options->bUseCueSheetNameAsPrefix = CheckState == ECheckBoxState::Checked; })
						[
							SNew(STextBlock)
							.IsEnabled_Lambda([this] { return Options->bUseCueSheetNameAsPrefix; })
							.Text(LOCTEXT("ImportCueSheetCueUseCueSheetNameLabel", "Use cue sheet name as prefix"))
						]
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(10, 2, 4, 0)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetAssetFilenamePrefixLabel", "Prefix"))
						.ToolTipText(LOCTEXT("ImportCueSheetAssetFilenamePrefixTip", "A prefix to add to SoundAtomCue asset name."))
					]
					+ SHorizontalBox::Slot()
					.Padding(4, 0, 4, 0)
					.MaxWidth(200.0f)
					[
						SAssignNew(PrefixTextBox, SEditableTextBox)
						.Text_Lambda([this] { return FText::FromString(Options->AssetFilenamePrefix); })
						.OnTextChanged_Lambda([this](FText Dir) {
							Options->AssetFilenamePrefix = FPaths::MakeValidFileName(Dir.ToString().Left(MaxAffixChars));
							PrefixTextBox->SetText(FText::FromString(Options->AssetFilenamePrefix));
						})
						.ToolTipText(LOCTEXT("ImportCueSheetAssetFilenamePrefixTip", "A prefix to add to SoundAtomCue aseet name."))
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(10, 2, 4, 0)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetAssetFilenameSuffixLabel", "Suffix"))
						.ToolTipText(LOCTEXT("ImportCueSheetAssetFilenameSuffixTip", "A suffix to add to SoundAtomCue asset name."))
					]
					+ SHorizontalBox::Slot()
					.Padding(4, 0, 0, 0)
					.MaxWidth(200.0f)
					[
						SAssignNew(SuffixTextBox, SEditableTextBox)
						.Text_Lambda([this] { return FText::FromString(Options->AssetFilenameSuffix); })
						.OnTextChanged_Lambda([this](FText Dir) {
							Options->AssetFilenameSuffix = FPaths::MakeValidFileName(Dir.ToString().Left(MaxAffixChars));
							SuffixTextBox->SetText(FText::FromString(Options->AssetFilenameSuffix));
						})
						.ToolTipText(LOCTEXT("ImportCueSheetAssetFilenameSuffixTip", "A suffix to add to SoundAtomCue asset name."))
					]
				]
				+SVerticalBox::Slot()
				.AutoHeight()
				.HAlign(HAlign_Fill)
				.Padding(0, 8, 0, 0)
				[
					SNew(SBorder)
					.Visibility(EVisibility::Visible)
					.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
					[
						SNew(SEditableTextBox)
						.IsReadOnly(true)
						.Text_Lambda(GenerateFilenameLambda)
						.ToolTipText_Lambda(GenerateFilenameLambda)
						.BackgroundColor(FColor::Transparent)
					]
				]
			];
}

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::MakeCueColorWidget()
{
	return	SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 2, 0, 0)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ImportCueSheetCueColorLabel", "Cue Color"))
				.ToolTipText(LOCTEXT("ImportCueSheetCueColorTip", "A color to easily identify the cue in editor."))
				.MinDesiredWidth(90)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0, 2, 4, 0)
			[
				SNew(SColorBlock)
				.Color_Lambda([this] { return Options->CueColor; })
				.Size(FVector2D(128, 16))
				.OnMouseButtonDown(this, &SAtomCueSheetFactoryDialog::OnClickCueColorBlock)
			];
}

FReply SAtomCueSheetFactoryDialog::OnClickCueColorBlock(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
	{
		return FReply::Unhandled();
	}

	FColorPickerArgs PickerArgs;
	PickerArgs.bOnlyRefreshOnOk = true;
	PickerArgs.DisplayGamma = TAttribute<float>::Create(TAttribute<float>::FGetter::CreateUObject(GEngine, &UEngine::GetDisplayGamma));
	PickerArgs.OnColorCommitted = FOnLinearColorValueChanged::CreateLambda([=](FLinearColor NewColor) { Options->CueColor = NewColor.ToFColor(true); });
	PickerArgs.InitialColorOverride = Options->CueColor;
	//PickerArgs.bUseAlpha = false;
	PickerArgs.bIsModal = true;
	PickerArgs.ParentWidget = SharedThis(this);

	OpenColorPicker(PickerArgs);

	return FReply::Handled();
}

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::MakeCueOptimizationsWidget()
{
	return	SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 6, 0, 0)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ImportCueSheetOptimizationsLabel", "Optimizations"))
				.ToolTipText(LOCTEXT("ImportCueSheetOptimizationsTip", "Optimizations to enable for newly created SoundAtomCue assets."))
				.MinDesiredWidth(90)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0, 2, 4, 0)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this] { return Options->bEnableEconomicTick ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) { Options->bEnableEconomicTick = CheckState == ECheckBoxState::Checked; })
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetVariableTickLabel", "Enable Economic Tick"))
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 8, 0, 0)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this] { return Options->bEnableDistanceCulling ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState CheckState) { Options->bEnableDistanceCulling = CheckState == ECheckBoxState::Checked; })
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ImportCueSheetDistanceCullingLabel", "Enable Distance Culling"))
					]
				]
			];
}

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::MakePresetsWidget()
{
	return	SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ImportCueSheetCuePresetsLabel", "Presets"))
				.MinDesiredWidth(90)
			]
			+ SHorizontalBox::Slot()
			.MaxWidth(540)
			.HAlign(HAlign_Fill)
			.Padding(0, 2, 0, 0)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.FillWidth(0.5f)
				.Padding(0, 0, 4, 0)
				[
					SNew(SBorder)
					.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
					[
						SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.AutoHeight()
						.HAlign(HAlign_Center)
						.VAlign(VAlign_Center)
						.Padding(0, 4)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("ImportCueSheetNewCuesLabel", "New Assets"))
							.ToolTipText(LOCTEXT("ImportCueSheetNewCuesTip", "Presets for creation of SoundAtomCue asset for new cues."))
						]
						+ SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0, 2, 0, 6)
						[
							SNew(SUniformGridPanel)
							.SlotPadding(FEditorStyle::GetMargin("StandardDialog.SlotPadding"))
							.MinDesiredSlotWidth(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotWidth"))
							.MinDesiredSlotHeight(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotHeight"))

							+ SUniformGridPanel::Slot(0, 0)
							[
								SAssignNew(ToggleCreateNewButton, SCheckBox)
								.HAlign(HAlign_Center)
								.Style(FEditorStyle::Get(), "ToggleButtonCheckbox")
								.Type(ESlateCheckBoxType::ToggleButton)
								.IsChecked_Lambda([this] { return Options->NewCuePreset == EAtomNewCuePresets::Create ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
								.OnCheckStateChanged(this, &SAtomCueSheetFactoryDialog::OnCreateNewClicked)
								.ToolTipText(LOCTEXT("CreateNewCueButtonTip", "Creates new SoundAtomCue assets."))
								.Padding(4)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("CreateNewCueButtonLabel", "Create"))
									.Font(FEditorStyle::GetFontStyle("StandardDialog.SmallFont"))
								]
							]
							+ SUniformGridPanel::Slot(1, 0)
							[
								SAssignNew(ToggleDontCreateNewButton, SCheckBox)
								.HAlign(HAlign_Center)
								.Style(FEditorStyle::Get(), "ToggleButtonCheckbox")
								.Type(ESlateCheckBoxType::ToggleButton)
								.IsChecked_Lambda([this] { return Options->NewCuePreset == EAtomNewCuePresets::DoNotCreate ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
								.OnCheckStateChanged(this, &SAtomCueSheetFactoryDialog::OnDoNotCreateNewClicked)
								.ToolTipText(LOCTEXT("DoNotCreateNewCueButtonTip", "Does not create new SoundAtomCue assets."))
								.Padding(4)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("DoNotCreateNewCueButtonLabel", "Do Not Create"))
									.Font(FEditorStyle::GetFontStyle("StandardDialog.SmallFont"))
								]
							]
						]
					]
				]
			+ SHorizontalBox::Slot()
				.FillWidth(0.5f)
				.Padding(4, 0, 0, 0)
				[
					SNew(SBorder)
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 26
					.IsEnabled_Lambda([this] { return Options->bIsAReimport || Options->bUseSameOptions; })
#else
					// UseSameOption is not available for reimport prior 4.26 (no CleanUp())
					.IsEnabled(Options->bIsAReimport)
					.Visibility(Options->bIsAReimport ? EVisibility::Visible : EVisibility::Hidden)
#endif
					.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
					[

						SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.AutoHeight()
						.HAlign(HAlign_Center)
						.VAlign(VAlign_Center)
						.Padding(0, 4)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("ImportCueSheetExistingCuesLabel", "Existing Assets"))
							.ToolTipText(LOCTEXT("ImportCueSheetExistingCuesTip", "Presets for cues already referenced by some SoundAtomCue assets."))
						]
						+SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0, 2, 0, 6)
						[
							SNew(SUniformGridPanel)
							.SlotPadding(FEditorStyle::GetMargin("StandardDialog.SlotPadding"))
							.MinDesiredSlotWidth(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotWidth"))
							.MinDesiredSlotHeight(FEditorStyle::GetFloat("StandardDialog.MinDesiredSlotHeight"))

							+ SUniformGridPanel::Slot(0, 0)
							[
								SAssignNew(ToggleKeepExistingButton, SCheckBox)
								.HAlign(HAlign_Center)
								.Style(FEditorStyle::Get(), "ToggleButtonCheckbox")
								.Type(ESlateCheckBoxType::ToggleButton)
								.IsChecked_Lambda([this] { return Options->ExistingCuePreset == EAtomExistingCuePresets::Keep ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
								.OnCheckStateChanged(this, &SAtomCueSheetFactoryDialog::OnKeepExistingClicked)
								.ToolTipText(LOCTEXT("KeepExistingCueButtonTip", "Keeps all existing SoundAtomCue assets."))
								.Padding(4)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("KeepExistingCueButtonLabel", "Keep"))
									.Font(FEditorStyle::GetFontStyle("StandardDialog.SmallFont"))
								]
							]
							+ SUniformGridPanel::Slot(1, 0)
							[
								SAssignNew(ToggleDeleteExistingButton, SCheckBox)
								.HAlign(HAlign_Center)
								.Style(FEditorStyle::Get(), "ToggleButtonCheckbox")
								.Type(ESlateCheckBoxType::ToggleButton)
								.IsChecked_Lambda([this] { return Options->ExistingCuePreset == EAtomExistingCuePresets::Delete ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
								.OnCheckStateChanged(this, &SAtomCueSheetFactoryDialog::OnDeleteExistingClicked)
								.ToolTipText(LOCTEXT("DeleteExistingCueButtonTip", "Deletes all existing SoundAtomCue asset."))
								.Padding(4)
								[
									SNew(STextBlock)
									.Text(LOCTEXT("DeleteExistingCueButtonLabel", "Delete"))
									.Font(FEditorStyle::GetFontStyle("StandardDialog.SmallFont"))
								]
							]
						]
					]
				]
			];
}

void SAtomCueSheetFactoryDialog::OnGetChildrenForTree(TSharedPtr<FAtomCueListItem> InItem, TArray<TSharedPtr<FAtomCueListItem>>& OutChildren)
{
	if (InItem->IsCueEntry) {
		OutChildren.Append(InItem->Children);
	}
}

/** Callback for generating a row widget for the dispatch state list view. */
TSharedRef<ITableRow> SAtomCueSheetFactoryDialog::OnGenerateWidgetForTree(TSharedPtr<FAtomCueListItem> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	CueListView->SetItemSelection(InItem, InItem->Selected, ESelectInfo::OnMouseClick);

	return	SNew(SACSFCueListTableRow, OwnerTable)
			.Item(InItem)
			.ImportDialog(SharedThis(this));
}

TSharedRef<SWidget> SAtomCueSheetFactoryDialog::GenerateWidgetForItemAndColumn(TSharedPtr<FAtomCueListItem> Item, const FName& ColumnID, const TSharedRef<ITableRow>& TableRow)
{
	check(Item.IsValid());

	const FMargin RowPadding(3, 0, 0, 0);

	if (Item->IsCueEntry)
	{
		if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Expander)
		{
			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Center)
					.AutoWidth()
					[
						SNew(SExpanderArrow, TableRow)
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_CheckBox)
		{
			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						SNew(SCheckBox)
						.IsChecked_Lambda([Item, this] { 
							for (auto Child : Item->Children) { if (!Child->Selected) { return ECheckBoxState::Unchecked; } }
							return ECheckBoxState::Checked;
						})
						.OnCheckStateChanged_Lambda([Item, this](ECheckBoxState CheckState) {
							Options->NewCuePreset = EAtomNewCuePresets::Custom;
							if (Options->bIsAReimport) { Options->ExistingCuePreset = EAtomExistingCuePresets::Custom; }
							Item->Selected = CheckState == ECheckBoxState::Checked;
							for (auto Child : Item->Children) { Child->Selected = Item->Selected; }
						})
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Previewer)
		{
			auto OnGetDisplayBrushLambda = [this, Item]() -> const FSlateBrush*
			{
				if (PreviewingCue.CompareTo(Item->CueName) == 0) {
					return FEditorStyle::GetBrush("MediaAsset.AssetActions.Stop.Large");
				}
				return FEditorStyle::GetBrush("MediaAsset.AssetActions.Play.Large");
			};

			return	SNew(SBox)
					.Padding(RowPadding)
					.WidthOverride(23)
					.HeightOverride(15)
					[
						SNew(SButton)
						.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
						.ToolTipText(Item->ToDisplayString())
						.Cursor(EMouseCursor::Default) // The outer widget can specify a DragHand cursor, so we need to override that here
						.ForegroundColor(FSlateColor::UseForeground())
						.OnClicked(this, &SAtomCueSheetFactoryDialog::OnPreviewButtonClicked, Item)
						[
							SNew(SImage)
							.Image_Lambda(OnGetDisplayBrushLambda)
						]
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Name)
		{
			auto TextBlock =	SNew(STextBlock)
								.Text(Item->CueName)
								.ToolTipText(Item->ToDisplayString());

			TextBlock->SetOnMouseButtonUp(FPointerEventHandler::CreateLambda([Item](const FGeometry&, const FPointerEvent& MouseEvent) -> FReply {
				if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton) {
					Item->Selected = !Item->Selected;
					return FReply::Handled();
				}
				return FReply::Unhandled();
			}));

			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						TextBlock
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_ID)
		{
			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						SNew(STextBlock)
						.Text(FText::AsNumber(Item->CueID))
						.ToolTipText(Item->ToDisplayString())
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Duration)
		{
			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						SNew(STextBlock)
						.Text(FText::FromString(Item->CueInfo.Duration.ToString(TEXT("%h:%m:%s.%f")).RightChop(1)))
						.ToolTipText(Item->ToDisplayString())
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Status)
		{
			FText StatusText;
			FColor StatusColor;
			Item->GetStatusTextAndColor(StatusText, StatusColor);

			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						SNew(STextBlock)
						.Text(StatusText)
						.ColorAndOpacity(StatusColor)
						.ToolTipText(Item->ToDisplayString())
					];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Action)
		{
			return	SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(RowPadding)
					[
						SNew(STextBlock)
						.Text_Lambda([Item, this] { if (!CueListView->IsItemExpanded(Item)) { 
														FText Text; FColor Color; Item->GetActionTextAndColor(Text, Color); return Text; } 
													return FText::GetEmpty(); })
						.ColorAndOpacity_Lambda([Item] { FText Text; FColor Color; Item->GetActionTextAndColor(Text, Color); return FSlateColor(Color); })
					];
		}	
	} 
	else
	{
		if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Previewer)
		{
			return	SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(RowPadding)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([Item] { return Item->Selected ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([Item, this](ECheckBoxState CheckState) { 
						Options->NewCuePreset = EAtomNewCuePresets::Custom;
						if (Options->bIsAReimport) { Options->ExistingCuePreset = EAtomExistingCuePresets::Custom; }
						Item->Selected = CheckState == ECheckBoxState::Checked;
					})
				];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Name)
		{
			auto TextBlock = SNew(STextBlock)
				.Text_Lambda([Item, this] {
					FString CueFilepath = Item->CueAssetName;
					if (Item->ImportStatus == EAtomCueImportStatus::NewCue) {
						CueFilepath = FPaths::GetPath(Options->CueSheetPackageName) / GenerateCueAssetFilename(Item->CueName);
					}
					return FText::FromString(CueFilepath);
				})
				.ColorAndOpacity_Lambda([Item] { FText Text; FColor Color; Item->GetStatusTextAndColor(Text, Color); return FSlateColor(Color); })
				.ToolTipText(Item->ToDisplayString());

			TextBlock->SetOnMouseButtonUp(FPointerEventHandler::CreateLambda([Item](const FGeometry&, const FPointerEvent& MouseEvent) -> FReply {
				if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton) {
					Item->Selected = !Item->Selected;
					return FReply::Handled();
				}
				return FReply::Unhandled();
			}));

			return	SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(RowPadding)
				[
					TextBlock
				];
		}
		else if (ColumnID == SAtomCueSheetFactoryDialog::ColumnID_Action)
		{
			return	SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(RowPadding)
				[
					SNew(STextBlock)
					.Text_Lambda([Item] { FText Text; FColor Color; Item->GetActionTextAndColor(Text, Color); return Text; })
					.ColorAndOpacity_Lambda([Item] { FText Text; FColor Color; Item->GetActionTextAndColor(Text, Color); return FSlateColor(Color); })
				];
		}
	}

	return SNullWidget::NullWidget;
}

FReply SAtomCueSheetFactoryDialog::OnExpandAllButtonClicked()
{
	if (ExpandMode == EAtomCueExpandMode::ExpandAll) {
		ExpandMode = EAtomCueExpandMode::CollapseAll;
		
		CueListView->ClearExpandedItems();
		
	} else {
		ExpandMode = EAtomCueExpandMode::ExpandAll;
		for (auto Item : Options->Items) {
			CueListView->SetItemExpansion(Item, true);
		}
	}
	
	return FReply::Handled();
}

const FSlateBrush* SAtomCueSheetFactoryDialog::GetExpanderImage() const
{
	FName ResourceName;
	if (ExpandMode == EAtomCueExpandMode::ExpandAll)
	{
		if (ToggleExpandButton->IsHovered())
		{
			static FName ExpandedHoveredName = "TreeArrow_Expanded_Hovered";
			ResourceName = ExpandedHoveredName;
		}
		else
		{
			static FName ExpandedName = "TreeArrow_Expanded";
			ResourceName = ExpandedName;
		}
	}
	else
	{
		if (ToggleExpandButton->IsHovered())
		{
			static FName CollapsedHoveredName = "TreeArrow_Collapsed_Hovered";
			ResourceName = CollapsedHoveredName;
		}
		else
		{
			static FName CollapsedName = "TreeArrow_Collapsed";
			ResourceName = CollapsedName;
		}
	}

	return FCoreStyle::Get().GetBrush(ResourceName);
}

FReply SAtomCueSheetFactoryDialog::OnPreviewButtonClicked(TSharedPtr<FAtomCueListItem> InItem)
{
	if (!Previewer) {
		Previewer = FCriWareApi::criAtomExPlayer_Create(nullptr, PlayerWork, sizeof(PlayerWork));
	}

	if (!PreviewingCue.IsEmpty()) {
		FCriWareApi::criAtomExPlayer_Stop(Previewer);
	}
	
	if (PreviewingCue.CompareTo(InItem->CueName) == 0) {
		PreviewingCue = FText::GetEmpty();
	} else {
		PreviewingCue = InItem->CueName;
		FCriWareApi::criAtomExPlayer_SetCueName(Previewer, InItem->AcbHn, TCHAR_TO_UTF8(*InItem->CueName.ToString()));
		FCriWareApi::criAtomExPlayer_SetPanType(Previewer, CRIATOMEX_PAN_TYPE_PAN3D); // can play 2d and 3d sound
		FCriWareApi::criAtomExPlayer_StartAsync(Previewer);

		// to do: error handeling
	}

	return FReply::Handled();
};

TArray< TSharedPtr<FAtomCueListItem> > SAtomCueSheetFactoryDialog::GetSelectedItems(bool bAllIfNone) const
{
	//get the list of highlighted packages
	TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = CueListView->GetSelectedItems();
	if (SelectedItems.Num() == 0 && bAllIfNone)
	{
		//If no cue are explicitly highlighted, return all cues in the list.
		SelectedItems = Options->Items;
		for (auto Item : Options->Items) {
			SelectedItems.Append(Item->Children);
		}
	}

	return SelectedItems;
}

ECheckBoxState SAtomCueSheetFactoryDialog::GetToggleSelectedState() const
{
	// default to a Checked state
	ECheckBoxState PendingState = ECheckBoxState::Checked;

	TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

	// Iterate through the list of selected packages
	for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
	{
		if (SelectedItem->Get()->Selected == false)
		{
			// if any cue in the selection is Unchecked, then represent the entire set of highlighted cues as Unchecked,
			// so that the first (user) toggle of ToggleSelectedCheckBox consistently Checks all highlighted cues
			PendingState = ECheckBoxState::Unchecked;
		}
	}

	return PendingState;
}

void SAtomCueSheetFactoryDialog::OnToggleSelectedCheckBox(ECheckBoxState InNewState)
{
	TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

	for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
	{
		FAtomCueListItem* Item = SelectedItem->Get();
		if (InNewState == ECheckBoxState::Checked)
		{
			/*if (Item->IsDisabled())
			{
				item->SetState(ECheckBoxState::Undetermined);
			}
			else*/
			{
				Item->Selected = true;

				if (Item->IsCueEntry)
				{
					for (auto Child : Item->Children)
					{
						Child->Selected = true;
					}
				}
			}
		}
		else
		{
			Item->Selected = false;
		}
	}

	// setup coresponding presets
	if (InNewState == ECheckBoxState::Checked)
	{
		Options->NewCuePreset = EAtomNewCuePresets::Create;
		if (Options->bIsAReimport)
		{
			Options->ExistingCuePreset = EAtomExistingCuePresets::Keep;
		}
	}
	else
	{
		Options->NewCuePreset = EAtomNewCuePresets::DoNotCreate;
		if (Options->bIsAReimport)
		{
			Options->ExistingCuePreset = EAtomExistingCuePresets::Delete;
		}
	}

	CueListView->RequestTreeRefresh();
}

void SAtomCueSheetFactoryDialog::RefreshCueAssetPresets()
{
	bool bIsNew = false;
	bool bIsExist = false;
	bool bIsAllNewCuesSelected = true;
	bool bIsAllNewCuesNotSelected = true;
	bool bIsAllExistingCuesSelected = true;
	bool bIsAllExistingCuesNotSelected = true;

	for (auto Item : Options->Items)
	{ 
		if (Item->ImportStatus == EAtomCueImportStatus::NewCue)
		{
			bIsNew = true;

			if (!Item->Selected)
			{
				bIsAllNewCuesSelected = false;
			}
			else
			{
				bIsAllNewCuesNotSelected = false;
			}
		}

		if (Item->ImportStatus == EAtomCueImportStatus::ExistCue)
		{
			bIsExist = true;

			if (!Item->Selected)
			{
				bIsAllExistingCuesSelected = false;
			}
			else
			{
				bIsAllExistingCuesNotSelected = false;
			}
		}
	}

	if (bIsNew)
	{
		Options->NewCuePreset = bIsAllNewCuesSelected ? EAtomNewCuePresets::Create :
			bIsAllNewCuesNotSelected ? EAtomNewCuePresets::DoNotCreate :
			EAtomNewCuePresets::Custom;
	}

	if (bIsExist)
	{
		Options->ExistingCuePreset = bIsAllExistingCuesSelected ? EAtomExistingCuePresets::Keep :
			bIsAllExistingCuesNotSelected ? EAtomExistingCuePresets::Delete :
			EAtomExistingCuePresets::Custom;
	}
}

void SAtomCueSheetFactoryDialog::OnCreateNewClicked(ECheckBoxState NewValue)
{
	if (NewValue == ECheckBoxState::Checked)
	{
		Options->NewCuePreset = EAtomNewCuePresets::Create;

		TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

		for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
		{
			FAtomCueListItem* Item = SelectedItem->Get();

			if (Item->ImportStatus == EAtomCueImportStatus::NewCue) {
				Item->Selected = true;
			}
		}

		CueListView->RequestTreeRefresh();
	}
}

void SAtomCueSheetFactoryDialog::OnDoNotCreateNewClicked(ECheckBoxState NewValue)
{
	if (NewValue == ECheckBoxState::Checked)
	{
		Options->NewCuePreset = EAtomNewCuePresets::DoNotCreate;

		TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

		for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
		{
			FAtomCueListItem* Item = SelectedItem->Get();

			if (Item->ImportStatus == EAtomCueImportStatus::NewCue) {
				Item->Selected = false;
			}
		}

		CueListView->RequestTreeRefresh();
	}
}

void SAtomCueSheetFactoryDialog::OnKeepExistingClicked(ECheckBoxState NewValue)
{
	if (NewValue == ECheckBoxState::Checked)
	{
		Options->ExistingCuePreset = EAtomExistingCuePresets::Keep;

		TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

		for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
		{
			FAtomCueListItem* Item = SelectedItem->Get();

			if (Item->ImportStatus == EAtomCueImportStatus::ExistCue) {
				Item->Selected = true;
			}
		}

		CueListView->RequestTreeRefresh();
	}
}

void SAtomCueSheetFactoryDialog::OnDeleteExistingClicked(ECheckBoxState NewValue)
{
	if (NewValue == ECheckBoxState::Checked)
	{
		Options->ExistingCuePreset = EAtomExistingCuePresets::Delete;

		TArray< TSharedPtr<FAtomCueListItem> > SelectedItems = GetSelectedItems(true);

		for (auto SelectedItem = SelectedItems.CreateConstIterator(); SelectedItem; ++SelectedItem)
		{
			FAtomCueListItem* Item = SelectedItem->Get();

			if (Item->ImportStatus == EAtomCueImportStatus::ExistCue) {
				Item->Selected = false;
			}
		}

		CueListView->RequestTreeRefresh();
	}
}

EColumnSortMode::Type SAtomCueSheetFactoryDialog::GetNameSortMode() const
{
	return (SortBy == EAtomCueSortMode::ByName) ? SortDirection : EColumnSortMode::None;
}

EColumnSortMode::Type SAtomCueSheetFactoryDialog::GetIDSortMode() const
{
	return (SortBy == EAtomCueSortMode::ByID) ? SortDirection : EColumnSortMode::None;
}

EColumnSortMode::Type SAtomCueSheetFactoryDialog::GetDurationSortMode() const
{
	return (SortBy == EAtomCueSortMode::ByDuration) ? SortDirection : EColumnSortMode::None;
}
		
void SAtomCueSheetFactoryDialog::OnSortByChanged(const EColumnSortPriority::Type SortPriority, const FName& ColumnID, const EColumnSortMode::Type NewSortMode)
{
	if (ColumnID == ColumnID_Name)
	{
		// If already sorting by Name, flip direction
		if (SortBy == EAtomCueSortMode::ByName)
		{
			SortDirection = (SortDirection == EColumnSortMode::Descending) ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
		}
		// If not, sort by ID, and default to ascending
		else
		{
			SortBy = EAtomCueSortMode::ByName;
			SortDirection = EColumnSortMode::Descending;
		}
	}
	else if (ColumnID == ColumnID_ID)
	{
		// If already sorting by ID, flip direction
		if (SortBy == EAtomCueSortMode::ByID)
		{
			SortDirection = (SortDirection == EColumnSortMode::Descending) ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
		}
		// If not, sort by ID, and default to ascending
		else
		{
			SortBy = EAtomCueSortMode::ByID;
			SortDirection = EColumnSortMode::Descending;
		}
	}
	else if (ColumnID == ColumnID_Duration)
	{
		// If already sorting by Duration, flip direction
		if (SortBy == EAtomCueSortMode::ByDuration)
		{
			SortDirection = (SortDirection == EColumnSortMode::Descending) ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
		}
		// If not, sort by Duration, and default to ascending
		else
		{
			SortBy = EAtomCueSortMode::ByDuration;
			SortDirection = EColumnSortMode::Descending;
		}
	}
	else if (ColumnID == ColumnID_Status)
	{
		
	}

	RebuildItemList();
}

/** Functor for comparing cue by Name */
struct FCompareAtomCueByName
{
	EColumnSortMode::Type SortMode;

	FCompareAtomCueByName(EColumnSortMode::Type InSortMode)
		: SortMode(InSortMode)
	{}

	FORCEINLINE bool operator()(const TSharedPtr<FAtomCueListItem> A, const TSharedPtr<FAtomCueListItem> B) const
	{
		check(A.IsValid());
		check(B.IsValid());

		bool CompareResult = A->CueName.CompareToCaseIgnored(B->CueName) <= 0;
		return SortMode == EColumnSortMode::Ascending ? CompareResult : !CompareResult;
	}
};

/** Functor for comparing cue by ID */
struct FCompareAtomCueByID
{
	EColumnSortMode::Type SortMode;

	FCompareAtomCueByID(EColumnSortMode::Type InSortMode)
		: SortMode(InSortMode)
	{}

	FORCEINLINE bool operator()(const TSharedPtr<FAtomCueListItem> A, const TSharedPtr<FAtomCueListItem> B) const
	{
		check(A.IsValid());
		check(B.IsValid());

		if (SortMode == EColumnSortMode::Descending)
		{
			return (A->CueID < B->CueID);
		}
		else
		{
			return (A->CueID > B->CueID);
		}
	}
};

/** Functor for comparing cue by Duration */
struct FCompareAtomCueByDuration
{
	EColumnSortMode::Type SortMode;

	FCompareAtomCueByDuration(EColumnSortMode::Type InSortMode)
		: SortMode(InSortMode)
	{}

	FORCEINLINE bool operator()(const TSharedPtr<FAtomCueListItem> A, const TSharedPtr<FAtomCueListItem> B) const
	{
		check(A.IsValid());
		check(B.IsValid());

		if (SortMode == EColumnSortMode::Descending)
		{
			return (A->CueInfo.Duration < B->CueInfo.Duration);
		}
		else
		{
			return (A->CueInfo.Duration > B->CueInfo.Duration);
		}
	}
};

void SAtomCueSheetFactoryDialog::RebuildItemList()
{
	// We have built all the lists, now sort (if desired)
	if (SortBy == EAtomCueSortMode::ByName)
	{
		Options->Items.Sort(FCompareAtomCueByName(SortDirection));
		for (auto Item : Options->Items)
		{
			Item->Children.Sort(FCompareAtomCueByName(SortDirection));
		}
	}
	else if (SortBy == EAtomCueSortMode::ByID)
	{
		Options->Items.Sort(FCompareAtomCueByID(SortDirection));
	}
	else if (SortBy == EAtomCueSortMode::ByDuration)
	{
		Options->Items.Sort(FCompareAtomCueByDuration(SortDirection));
	}

	// When underlying array changes, refresh list
	CueListView->RequestTreeRefresh();
}

TSharedPtr<SWidget> SAtomCueSheetFactoryDialog::GetListContextMenu()
{
	FMenuBuilder MenuBuilder(true, nullptr);

	//MenuBuilder.AddMenuEntry();
	//MenuBuilder.AddMenuEntry(FLogWidgetCommands::Get().FindLogText);

	return MenuBuilder.MakeWidget();
}

// On Close Dialog
void SAtomCueSheetFactoryDialog::CloseDialog(bool InOkClicked)
{
	// cancel if presets are not selected but Use Same Options is checked.
	if (InOkClicked && Options->bUseSameOptions
		&& (Options->NewCuePreset == EAtomNewCuePresets::Custom
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 26
		// UseSameOption is not available for reimport prior 4.26 (no CleanUp())
		|| (Options->bIsAReimport && Options->ExistingCuePreset == EAtomExistingCuePresets::Custom)
#endif
		))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ImportCueSheetBadCuePresetsMessage", "Please select AtomCue assets presets to apply with other importations."));
		return;
	}

	Options->OkClicked = InOkClicked;

	Clean();

	// grab selected cue
	if (CueListView->IsEnabled()) {
		TArray<TSharedPtr<FAtomCueListItem>> Selection = CueListView->GetSelectedItems();
		for (auto Item : Selection) {
			Item->Selected = true;
		}
	}

	// close window
	if (Window.IsValid())
	{
		Window.Pin()->RequestDestroyWindow();
	}
}

//
void SAtomCueSheetFactoryDialog::OnWindowClosed(const TSharedRef<SWindow>& InWindow)
{
	Clean();
}

void SACSFCueListTableRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView)
{
	ImportDialogWeak = InArgs._ImportDialog;
	Item = InArgs._Item;

	SMultiColumnTableRow< TSharedPtr<FAtomCueListItem> >::Construct(FSuperRowType::FArguments(), InOwnerTableView);
}

TSharedRef<SWidget> SACSFCueListTableRow::GenerateWidgetForColumn(const FName& ColumnName)
{
	// Create the widget for this item
	auto ImportDialogShared = ImportDialogWeak.Pin();
	if (ImportDialogShared.IsValid())
	{
		return ImportDialogShared->GenerateWidgetForItemAndColumn(Item, ColumnName, SharedThis(this));
	}

	// Packages dialog no longer valid; return a valid, null widget.
	return SNullWidget::NullWidget;
}

#undef LOCTEXT_NAMESPACE
