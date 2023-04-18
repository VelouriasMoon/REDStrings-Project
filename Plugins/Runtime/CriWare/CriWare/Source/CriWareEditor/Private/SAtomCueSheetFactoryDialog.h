#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/SWindow.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Views/STreeView.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/STableRow.h"

#include "CriWareInitializer.h"

class USoundAtomCueSheetImportOptions;
struct FAtomCueListItem;

namespace EAtomCueSortMode
{
	enum Type
	{
		ByID,
		ByName,
		ByDuration
	};
}

namespace EAtomCueExpandMode
{
	enum Type
	{
		ExpandAll,
		CollapseAll
	};
}

class SAtomCueSheetFactoryDialog : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SAtomCueSheetFactoryDialog) { }
	SLATE_END_ARGS()

	/** Construct this widget. */
	void Construct(const FArguments& InArgs, USoundAtomCueSheetImportOptions* InOptions, TSharedRef<SWindow> InWindow);

	/** Clean the widget. */
	void Clean();

	/**
	 * Create and return a widget for the given item and column ID
	 *
	 * @param	Item		The item being queried
	 * @param	ColumnID	The column ID being queried
	 *
	 * @return	The widget which was created
	 */
	TSharedRef<SWidget> GenerateWidgetForItemAndColumn( TSharedPtr<FAtomCueListItem> Item, const FName& ColumnID, const TSharedRef<ITableRow>& TableRow );

protected:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	/** Create the default awb directories: Default, Rooted and Current. */
	void GenerateAwbDirectories(USoundAtomCueSheetImportOptions* InOptions);

	/** Get AWB directory according to config in options. */
	FString& GetAwbDirectory();

	/** Callback to select an awb directory with directory pickup dialog. */
	FReply OnAwbDirectoryButtonClicked();

	/** Create the directory widget to add setup a directory for awb files. */
	TSharedRef<SWidget> MakeAwbDirectoryWidget();

	/** Create the cue filename from current options. */
	FString GenerateCueAssetFilename(const FText& CueName);

	/** Create the filename widget to add a prefix and/or a suffix to AtomCue asset name. */
	TSharedRef<SWidget> MakeCueAssetFilenameWidget();

	/** Create the color widget for CueColor option. */
	TSharedRef<SWidget> MakeCueColorWidget();

	/** Open the color picker for CueColor option. */
	FReply OnClickCueColorBlock(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

	/** Create the optimisation widget for new cue optimization options. */
	TSharedRef<SWidget> MakeCueOptimizationsWidget();

	/** Create the widget for presets to easily pre-select items in cue list view. */
	TSharedRef<SWidget> MakePresetsWidget();

	/** Callback for generating a */
	void OnGetChildrenForTree(TSharedPtr<FAtomCueListItem> InItem, TArray<TSharedPtr<FAtomCueListItem>>& OutChildren);

	/** Callback for generating a row widget for the dispatch state list view. */
	TSharedRef<ITableRow> OnGenerateWidgetForTree(TSharedPtr<FAtomCueListItem> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	TArray< TSharedPtr<FAtomCueListItem> > GetSelectedItems(bool bAllIfNone) const;

	ECheckBoxState GetToggleSelectedState() const;

	void RefreshCueAssetPresets();

	void OnCreateNewClicked(ECheckBoxState NewValue);
	void OnDoNotCreateNewClicked(ECheckBoxState NewValue);
	void OnDeleteExistingClicked(ECheckBoxState NewValue);
	void OnKeepExistingClicked(ECheckBoxState NewValue);

	FReply OnExpandAllButtonClicked();

	const FSlateBrush* GetExpanderImage() const;

	FReply OnPreviewButtonClicked(TSharedPtr<FAtomCueListItem> InItem);

	void OnToggleSelectedCheckBox(ECheckBoxState State);
	
	EColumnSortMode::Type GetNameSortMode() const;
	EColumnSortMode::Type GetIDSortMode() const;
	EColumnSortMode::Type GetDurationSortMode() const;
	
	void OnSortByChanged(const EColumnSortPriority::Type SortPriority, const FName& ColumnName, const EColumnSortMode::Type NewSortMode);
	void RebuildItemList();
	TSharedPtr<SWidget> GetListContextMenu();
	
	void CloseDialog(bool InOkClicked);

	void OnWindowClosed(const TSharedRef<SWindow>& InWindow);

public:
	/** Current way we are expanding nodes */
	EAtomCueExpandMode::Type ExpandMode;
	/** Current way we are sorting cues */
	EAtomCueSortMode::Type	SortBy;
	/** Current way we are setting sort direction */
	EColumnSortMode::Type	SortDirection;

	static const FName ColumnID_Expander;
	static const FName ColumnID_CheckBox;
	static const FName ColumnID_Previewer;
	static const FName ColumnID_Name;
	static const FName ColumnID_ID;
	static const FName ColumnID_Duration;
	static const FName ColumnID_Status;
	static const FName ColumnID_Action;

private:
	
	TWeakObjectPtr<USoundAtomCueSheetImportOptions> Options;
	TWeakPtr<SWindow> Window;

	TSharedPtr<SEditableTextBox> PrefixTextBox, SuffixTextBox;

	/** The Toggle buttons for cue creation presets.*/
	TSharedPtr<SCheckBox> ToggleCreateNewButton;
	TSharedPtr<SCheckBox> ToggleDontCreateNewButton;
	TSharedPtr<SCheckBox> ToggleDeleteExistingButton;
	TSharedPtr<SCheckBox> ToggleKeepExistingButton;

	/** The list view for showing all checkboxes */
	TSharedPtr<STreeView<TSharedPtr<FAtomCueListItem>>> CueListView;

	/** A Checkbox used to toggle multiple items. */
	TSharedPtr<SCheckBox> ToggleSelectedCheckBox;

	/** A Button used to toggle node expansion. */
	TSharedPtr<SButton> ToggleExpandButton;

private:

	static const uint32 PLAYER_WORK_SIZE = 1536;

	uint8 PlayerWork[PLAYER_WORK_SIZE];
	CriAtomExPlayerHn Previewer;
	FText PreviewingCue;

private:

	FString DefaultAwbDir;
	FString RootedAwbDir;
	FString CurrentEditAwbDir;
};

/** Widget that represents a row in the AtomCueSheetImportDialog's list view.  Generates widgets for each column on demand. */
class SACSFCueListTableRow : public SMultiColumnTableRow< TSharedPtr<FAtomCueListItem> >
{
public:

	SLATE_BEGIN_ARGS(SACSFCueListTableRow) {}

		/** The AtomCueSheetImportDialog that owns the tree.  We'll only keep a weak reference to it. */
		SLATE_ARGUMENT(TSharedPtr<SAtomCueSheetFactoryDialog>, ImportDialog)

		/** The list item for this row */
		SLATE_ARGUMENT(TSharedPtr<FAtomCueListItem>, Item)

	SLATE_END_ARGS()


	/** Construct function for this widget */
	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView);

	/** Overridden from SMultiColumnTableRow.  Generates a widget for this column of the list row. */
	virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override;

private:

	/** Weak reference to the AtomCueSheetImportDialog widget that owns our list */
	TWeakPtr<SAtomCueSheetFactoryDialog> ImportDialogWeak;

	/** The item associated with this row of data */
	TSharedPtr<FAtomCueListItem> Item;
};

