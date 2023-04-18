/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2015-2016 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : PluginSettings
* File     : CriWarePluginSettingsDetails.h
*
****************************************************************************/

/* 参考コード */
/*
HardwareTargettingSettingsDetails.cpp
HardwareTargettingSettingsDetails.h
SSettingsEditorCheckoutNotice.cpp
SSourceControlSubmit.cpp
SSourceControlSubmit.h
*/

#pragma once

/* Unreal Editor関連ヘッダ */
#include "IDetailCustomization.h"
#include "PropertyHandle.h"
#include "Widgets/Views/SListView.h"

/* CRIWAREプラグインヘッダ */
#include "CriWarePluginSettings.h"

class FCriSubmitItem : public TSharedFromThis<FCriSubmitItem>
{
public:
	/** Constructor */
	explicit FCriSubmitItem(const FString& InItem);

	/** Returns the full path of the item in source control */
	FString GetFilename() const { return Item; }

	/** Returns the name of the item as displayed in the widget */
	FText GetDisplayName() const { return DisplayName; }

private:
	/** Shared pointer to the source control state object itself */
	FString Item;

	/** Cached name to display in the listview */
	FText DisplayName;
};

class SCriWareDeleteFileNoticeWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SCriWareDeleteFileNoticeWidget)
		: _ParentWindow()
		, _Items()
	{}

		SLATE_ATTRIBUTE(TSharedPtr<SWindow>, ParentWindow)
		SLATE_ATTRIBUTE(TArray<FString>, Items)

	SLATE_END_ARGS()

	/** Constructor */
	SCriWareDeleteFileNoticeWidget()
	{
	}

	~SCriWareDeleteFileNoticeWidget()
	{
	}

public:
	void Construct(const FArguments& InArgs);

	/** Returns a widget representing the item and column supplied */
	TSharedRef<SWidget> GenerateWidgetForItemAndColumn(TSharedPtr<FCriSubmitItem> Item) const;

private:
	/** Called when the settings of the dialog are to be accepted*/
	FReply OKClicked();

	/** Called when the settings of the dialog are to be ignored*/
	FReply CancelClicked();

	/** Called by SListView to get a widget corresponding to the supplied item */
	TSharedRef<ITableRow> OnGenerateRowForList(TSharedPtr<FCriSubmitItem> SubmitItemData, const TSharedRef<STableViewBase>& OwnerTable);

private:

	/** ListBox for selecting which object to consolidate */
	TSharedPtr<SListView<TSharedPtr<FCriSubmitItem>>> ListView;

	/** Collection of objects (Widgets) to display in the List View. */
	TArray<TSharedPtr<FCriSubmitItem>> ListViewItems;

	TWeakPtr<SWindow> ParentFrame;
};

class SDeleteFileListRow : public SMultiColumnTableRow<TSharedPtr<FCriSubmitItem>>
{
public:

	SLATE_BEGIN_ARGS(SDeleteFileListRow) {}

		/** The SCriWareDeleteFileNoticeWidget that owns the tree.  We'll only keep a weak reference to it. */
		SLATE_ARGUMENT(TSharedPtr<SCriWareDeleteFileNoticeWidget>, CriWareDeleteFileNoticeWidget)

		/** The list item for this row */
		SLATE_ARGUMENT(TSharedPtr<FCriSubmitItem>, Item)

	SLATE_END_ARGS()

	/** Construct function for this widget */
	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView);

	/** Overridden from SMultiColumnTableRow.  Generates a widget for this column of the list row. */
	virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnName) override;

private:

	/** Weak reference to the SSourceControlSubmitWidget that owns our list */
	TWeakPtr<SCriWareDeleteFileNoticeWidget> CriWareDeleteFileNoticeWidgetPtr;

	/** The item associated with this row of data */
	TSharedPtr<FCriSubmitItem> Item;
};


/**
* FIniFilename struct.
*
* Helper struct for generating ini files.
*/
struct FCriWareIniFilename
{
	/** Ini filename */
	FString Filename;
	/** If true this ini file is required to generate the output ini. */
	bool bRequired;
	/** Used as ID for looking up an INI Hierarchy */
	FString CacheKey;

	FCriWareIniFilename(const FString& InFilename, bool InIsRequired, FString InCacheKey = FString(TEXT("")))
		: Filename(InFilename)
		, bRequired(InIsRequired)
		, CacheKey(InCacheKey)
	{}
};

/* CriWarePluginのProjectSettings用GUIの表示用 */
class FCriWarePluginSettingsDetails : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder);
	// End of IDetailCustomization interface

private:
	/** Generate a widget for a movie array element */
	void GenerateArrayElementWidget(TSharedRef<IPropertyHandle> PropertyHandle, int32 ArrayIndex, IDetailChildrenBuilder& ChildrenBuilder);

	/** Callback for getting the selected path in the picker widget. */
	FString HandleFilePathPickerFilePath(TSharedRef<IPropertyHandle> Property) const;

	/** Delegate handler for when a new movie path is picked */
	void HandleFilePathPickerPathPicked(const FString& InOutPath, TSharedRef<IPropertyHandle> Property);

private:
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
};

