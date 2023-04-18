/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : DataTable Struct For Atom
 * File     : AtomDataTableStruct.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/ObjectMacros.h"

#include "AtomDataTables.generated.h"


USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo category parameters."))
struct FAtomCueInfoCategoryParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoCategoryParam() :
		Name("")
	{
	}

	/* Category名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Category", meta = (ToolTip = "Category Name."))
	FString Name;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo selector parameters."))
struct FAtomCueInfoSelectorParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoSelectorParam() :
		Name(""),
		Label("")
	{
	}

	/* Selector名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selector", meta = (ToolTip = "Selector Name."))
	FString Name;

	/* Label名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selector", meta = (ToolTip = "Label Name."))
	FString Label;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo track parameters."))
struct FAtomCueInfoTrackParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoTrackParam() :
#if WITH_EDITORONLY_DATA
		Comment(""),
#endif
		Volume(0.0f),
		Name("")
	{
	}

#if WITH_EDITORONLY_DATA
	/* トラックのコメント */
	UPROPERTY(VisibleAnywhere, Category = "Track", meta = (ToolTip = "Comment for Track."))
	FString Comment;
#endif

	/* トラックに設定されているボリューム */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Track", meta = (ToolTip = "TrackVolume."))
	float Volume;

	/* Track名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Track", meta = (ToolTip = "CategoryName."))
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Track", meta = (ToolTip = "Selector."))
	FAtomCueInfoSelectorParam Selector;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo bus send parameters."))
struct FAtomCueInfoBusSendParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoBusSendParam() :
		Name(""),
		Enable(true),
		Level(0.0f)
	{
	}
	
	/* BusSend名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "BusSendName."))
	FString Name;

	/* バスセンドが有効かどうかのフラグ */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "Is Enabled BusSend."))
	bool Enable;

	/* バスセンド値 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "BusSend Level."))
	float Level;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo blocks parameters."))
struct FAtomCueInfoBlocksParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoBlocksParam() :
		Name(""),
		StartPosition(0),
		Length(0)
	{
	}

	/* ブロック名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "BusSend Name."))
	FString Name;

	/* ブロックが開始する位置(msec) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "Start Position."))
	int32 StartPosition;

	/* ブロックの長さ(msec) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BusSend", meta = (ToolTip = "Length."))
	int32 Length;

};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo attached selector parameters."))
struct FAtomCueInfoAttachedSelectorParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoAttachedSelectorParam() :
		Name("")
	{
	}

	/* セレクタ名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttachedSelector", meta = (ToolTip = "Attached Selector Name."))
	FString Name;
};


USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo attached Aisac control parameters."))
struct FAtomCueInfoAttachedAisacControlParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoAttachedAisacControlParam() :
		Name(""),
		Id(0)
	{
	}

	/* AISACコントロール名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttachedSelector", meta = (ToolTip = "The name of the attched Aisac control."))
	FString Name;

	/* AISACコントロールのコントロールID */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AttachedSelector", meta = (ToolTip = "The id of the attched Aisac control."))
	int32 Id;
};


USTRUCT(BlueprintType, meta = (ToolTip = "Atom CueInfo data table."))
struct FAtomCueInfoDataTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueInfoDataTable() :
		Name(""),
#if WITH_EDITORONLY_DATA
	    Comment(""),
#endif
		CueId(0),
		CueTypeIndex(0),
		CueType(""),
		Volume(0.0f),
		Public(false),
		CategoryCuePriority(0),
		CategoryCuePriorityType(""),
		CategoryCuePriorityTypeIndex(0),
		CuePriorityType(""),
		CuePriorityTypeIndex(0),
		EnableCueLimit(false),
		NumCueLimits(0),
		Probability(0),
		Length(0)
	{
	}

	/* キュー名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "Name."))
	FString Name;

#if WITH_EDITORONLY_DATA
	/* キューのコメント */
	UPROPERTY(VisibleAnywhere, Category = "CueInfo", meta = (ToolTip = "User comment."))
	FString Comment;
#endif

	/* キューID */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "The id of the cue."))
	int32 CueId;

	/* キュータイプのID */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CueTypeIndex."))
	int32 CueTypeIndex;

	/* キュータイプ名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "The type of the cue."))
	FString CueType;

	/* Cueに指定されているDefaultのSelectorLabel */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "DefaultSelectorLabel."))
	FAtomCueInfoSelectorParam DefaultSelectorLabel;

	/* キューに設定されているボリューム */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "Volume."))
	float Volume;

	/* キューを公開するかどうかのフラグ */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "Public."))
	bool Public;

	/* カテゴリ内でのキュー発音プライオリティレベル */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CategoryCuePriority."))
	int32 CategoryCuePriority;

	/* カテゴリ内でのキュー発音プライオリティタイプ（Last : 後着優先, First : 先着優先） */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CategoryCuePriorityType."))
	FString CategoryCuePriorityType;

	/* カテゴリ内でのキュー発音プライオリティタイプ (0 : 後着優先, 1 : 先着優先) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CategoryCuePriorityTypeIndex."))
	int32 CategoryCuePriorityTypeIndex;

	/* キューの発音プライオリティタイプ（Last : 後着優先, First : 先着優先） */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CuePriorityType."))
	FString CuePriorityType;

	/* キューの発音プライオリティタイプ (0 : 後着優先, 1 : 先着優先) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "CuePriorityTypeIndex."))
	int32 CuePriorityTypeIndex;

	/* キューシート内のキューリミットを使用するかのフラグ */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "EnableCueLimit."))
	bool EnableCueLimit;

	/* キューリミット数 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "NumCueLimits."))
	int32 NumCueLimits;

	/* キューの再生確率 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "Probability."))
	int32 Probability;

	/* キューの長さ(msec) 無限ループが設定されているキューは-1になります。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "Lenght of the cue in milisecs."))
	int32 Length;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of categories."))
	TArray<FAtomCueInfoCategoryParam> Category;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of tracks."))
	TArray<FAtomCueInfoTrackParam> Track;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of bus sends."))
	TArray<FAtomCueInfoBusSendParam> BusSend;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of block."))
	TArray<FAtomCueInfoBlocksParam> Blocks;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of seletors attached to this cue."))
	TArray<FAtomCueInfoAttachedSelectorParam> AttachedSelector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CueInfo", meta = (ToolTip = "List of Asisac cintrols attached to this cue."))
	TArray<FAtomCueInfoAttachedAisacControlParam> AttachedAisacControl;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom Cue Sheet data table."))
struct CRIWARERUNTIME_API FAtomCueSheetDataTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCueSheetDataTable() :
		BuildDate(""),
#if WITH_EDITORONLY_DATA
		Comment(""),
#endif
		WorkUnit(""),
		Volume(0.0f),
		EnableCueLimit(false),
		NumCueLimits(0),
		PriorityType(""),
		PriorityTypeIndex(0)
	{
	}

	/* キュー名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "Name."))
	FString Name;
	
	/* ACBをビルドした日付・日時(yyyMMddhhmmss) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "BuildDate."))
	FString BuildDate;

#if WITH_EDITORONLY_DATA
	/* 出力するキューシートに記録されているコメント */
	UPROPERTY(VisibleAnywhere, Category = JSONBuildInfo, meta = (ToolTip = "Comment."))
	FString Comment;
#endif

	/* キューシートが所属するWorkUnit名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "WorkUnit."))
	FString WorkUnit;

	/* キューシートのボリューム */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "Volume."))
	float Volume;

	/* キューリミットが有効であるかのフラグ */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "EnableCueLimit."))
	bool EnableCueLimit;

	/* キューシート内のキューリミット数 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "NumCueLimits."))
	int32 NumCueLimits;

	/* キューシート内のキューの発音プライオリティタイプの文字列（Last : 後着優先, First : 先着優先） */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "PriorityType."))
	FString PriorityType;

	/* キューシート内のキューの発音プライオリティタイプの値 (0 : 後着優先, 1 : 先着優先) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "PriorityTypeIndex."))
	int32 PriorityTypeIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "CueInfo list."))
	TArray<FAtomCueInfoDataTable> Cue;
};

USTRUCT(BlueprintType)
struct FAtomStringWithComment
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomStringWithComment() {}

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = "AtomString", meta = (ToolTip = "Comment."))
	FString Comment;
#endif

	UPROPERTY(VisibleAnywhere, Category = "AtomString", BlueprintReadOnly, meta = (ToolTip = "PropertyName."))
	FString Name;
};

/* セレクタセッティングパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "Atom Selector settings parameters."))
struct FAtomSelectorSettingsParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomSelectorSettingsParam() {}

#if WITH_EDITORONLY_DATA
	/* Comment */
	UPROPERTY(VisibleAnywhere, Category = "Selector", meta = (ToolTip = "Comment For Selector."))
	FString Comment;
#endif

	/* セレクタ名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selector", meta = (ToolTip = "Selector Name."))
	FString Name;

	/* デフォルトセレクタラベル名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selector", meta = (ToolTip = "Default Label Name."))
	FString DefaultSelectorLabel;

	/* ラベル名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selector", meta = (ToolTip = "Label Name."))
	TArray<FAtomStringWithComment> Labels;
};

/* AISACコントロールセッティングパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "Atom Aisac control settings parameters."))
struct FAtomAisacControlSettingsParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomAisacControlSettingsParam()
	:Id(0)
	{}

#if WITH_EDITORONLY_DATA
	/* AISACコントロールComment */
	UPROPERTY(VisibleAnywhere, Category = "AisacControl", meta = (ToolTip = "Comment For AISAC."))
	FString Comment;
#endif

	/* AISACコントロールID */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AisacControl", meta = (ToolTip = "AisacControlId."))
	int32 Id;

	/* AISACコントロール名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AisacControl", meta = (ToolTip = "AisacControlName."))
	FString Name;
};


/* グローバルAISACセッティングパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = " Atom global Aisac settings parameters."))
struct FAtomGlobalAisacSettingsParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomGlobalAisacSettingsParam() {}

#if WITH_EDITORONLY_DATA
	/* AISACコントロールComment */
	UPROPERTY(EditAnywhere, Category = "AisacControl", meta = (ToolTip = "Comment For AISAC."))
	FString Comment;
#endif

	/* AISACコントロール名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AisacControl", meta = (ToolTip = "AisacControlName."))
	FString AisacControl;
};

/* ゲーム変数パラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "Atom Game Variable parameters."))
struct FAtomGameVariableParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomGameVariableParam()
	:Value(0.0f)
	{}

#if WITH_EDITORONLY_DATA
	/* Comment */
	UPROPERTY(VisibleAnywhere, Category = "GameVariable", meta = (ToolTip = "Comment For GameVariable."))
	FString Comment;
#endif

	/* ゲーム変数名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameVariable", meta = (ToolTip = "GameVariable Name."))
	FString Name;

	/* ゲーム変数値 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameVariable", meta = (ToolTip = "GameVariable Value."))
	float Value;
};

/* Categoryパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "Atom category parameters."))
struct FAtomCategoryParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomCategoryParam()
	: Id(0)
	, Volume(1.0f)
	{
	}

#if WITH_EDITORONLY_DATA
	/* Comment */
	UPROPERTY(VisibleAnywhere, Category = "Category", meta = (ToolTip = "Comment for Category."))
	FString Comment;
#endif

	/* CategoryID */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Category", meta = (ToolTip = "CategoryID."))
	int32 Id;

	/* Category名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Category", meta = (ToolTip = "CategoryName."))
	FString Name;

	/* CategoryGroup名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Category", meta = (ToolTip = "CategoryGroup."))
	FString Group;

	/* CategoryVolume(データテーブルとしてJsonから読み込み時はデフォルト値として格納) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Category", meta = (ToolTip = "CategoryVolume."))
	float Volume;
};

/* DspBusSettingパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "Atom DspBus settings parameters."))
struct FAtomDspBusSettingsParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomDspBusSettingsParam()
	{
	}

#if WITH_EDITORONLY_DATA
	/* Comment */
	UPROPERTY(VisibleAnywhere, Category = "DspBusSettings", meta = (ToolTip = "Comment For Bus Settings."))
	FString Comment;
#endif

	/* DspBusSettings名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DspBusSettings", meta = (ToolTip = "BusSettingsName."))
	FString BusSettingsName;

	/* Snapshot名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DspBusSettings", meta = (ToolTip = "SnapshotName."))
	TArray<FAtomStringWithComment> Snapshot;

	/* Bus名 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DspBusSettings", meta = (ToolTip = "BusName."))
	TArray<FAtomStringWithComment> Bus;
};

USTRUCT(BlueprintType, meta = (ToolTip = "Atom Configuration data table."))
struct CRIWARERUNTIME_API FAtomConfigDataTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomConfigDataTable() :
		NumCategoriesPerPlayback(0),
		NumCategories(0),
		NumAisacControls(0),
		NumGlobalAisacs(0),
		NumVoiceLimitGroups(0),
		NumDspBusSettings(0),
		NumDspBusSettingSnapshots(0),
		NumDspBus(0),
		NumGameVariables(0),
		NumSelectors(0),
		NumReacts(0)
	{
	}

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JSONBuildInfo, meta = (ToolTip = "BuildDate."))
	FString BuildDate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Category, meta = (ToolTip = "Number of CategoriesPerPlayback."))
	int32 NumCategoriesPerPlayback;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Category, meta = (ToolTip = "Number of Categories."))
	int32 NumCategories;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AisacControl, meta = (ToolTip = "Number of AisacControls."))
	int32 NumAisacControls;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AisacControl, meta = (ToolTip = "Number of GlobalAisac."))
	int32 NumGlobalAisacs;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = VoiceLimit, meta = (ToolTip = "Number of VoiceLimitGroups."))
	int32 NumVoiceLimitGroups;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings, meta = (ToolTip = "Number of DspSettings."))
	int32 NumDspBusSettings;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings, meta = (ToolTip = "Number of DspSettingSnapshots."))
	int32 NumDspBusSettingSnapshots;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings, meta = (ToolTip = "Number of DspBusnames."))
	int32 NumDspBus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameVariable, meta = (ToolTip = "Number of GameVariables."))
	int32 NumGameVariables;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Selector, meta = (ToolTip = "Number of Selectors."))
	int32 NumSelectors;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = React, meta = (ToolTip = "Number of Reacts."))
	int32 NumReacts;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Selector, meta = (ToolTip = "Selector."))
	TArray<FAtomSelectorSettingsParam> Selector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AisacControl, meta = (ToolTip = "AisacControl."))
	TArray<FAtomAisacControlSettingsParam> AisacControl;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameVariable, meta = (ToolTip = "GameVariableName."))
	TArray<FAtomGameVariableParam> GameVariable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AisacControl, meta = (ToolTip = "GlobalAisacControlName."))
	TArray<FAtomGlobalAisacSettingsParam> GlobalAisac;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Category, meta = (ToolTip = "Category."))
	TArray<FAtomCategoryParam> Category;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = DspBusSettings, meta = (ToolTip = "DspBusSettings."))
	TArray<FAtomDspBusSettingsParam> DspBusSettings;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = React, meta = (ToolTip = "React."))
	TArray<FAtomStringWithComment> React;
};
