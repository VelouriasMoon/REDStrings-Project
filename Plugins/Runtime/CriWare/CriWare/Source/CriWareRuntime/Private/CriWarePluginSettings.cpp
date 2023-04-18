/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2015 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : PluginSettings
* File     : CriWarePluginSettings.cpp
*
****************************************************************************/

#include "CriWarePluginSettings.h"


#include "CriWareRuntimePrivatePCH.h"
#include "CriWareInitializer.h"
#if WITH_EDITOR
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 20
#include "SourceControlOperations.h"
#endif
#endif

#include "Misc/Paths.h"
#include "Misc/ConfigCacheIni.h"
#if WITH_EDITOR
#include "Misc/FileHelper.h"
#include "Misc/MessageDialog.h"
#endif


DECLARE_LOG_CATEGORY_EXTERN(LogCriWarePluginSettings, Verbose, All);
DEFINE_LOG_CATEGORY(LogCriWarePluginSettings);

#define LOCTEXT_NAMESPACE "CriWarePluginSettings"


#define CRIATOM_DEFAULT_ECONOMICTICK_MARGIN_DISTANCE	(1000000.0f)
#define CRIATOM_DEFAULT_ECONOMICTICK_FREQUENCY			(15)
#define CRIATOM_DEFAULT_CULLING_MARGIN_DISTANCE			(1000000.0f)
#define CRIATOM_DEFAULT_AWB_ROOT_DIRECTORY				(TEXT("CriWare/Sounds"))


#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */
#define isFileSystemCategory_or_isAtomCategory_or_isManaCategory (isFileSystemCategory || isAtomCategory)
#endif


FORCEINLINE static TEnumAsByte<EAtomSoundRendererType::Type> GetSoundRendererTypeByIndex(int32 Index)
{
	switch(Index) {
		/* マジックナンバーを避けるため EAtomSoundRendererType::Type を int32 へキャスト。安全 */
		case static_cast<int32>(EAtomSoundRendererType::Type::Any):
		return EAtomSoundRendererType::Any;
		break;

		case static_cast<int32>(EAtomSoundRendererType::Type::Asr):
		return EAtomSoundRendererType::Asr;
		break;

		case static_cast<int32>(EAtomSoundRendererType::Type::Hardware2):
		return EAtomSoundRendererType::Hardware2;
		break;

		case static_cast<int32>(EAtomSoundRendererType::Type::Hardware3):
		return EAtomSoundRendererType::Hardware3;
		break;

		case static_cast<int32>(EAtomSoundRendererType::Type::Hardware4):
		return EAtomSoundRendererType::Hardware4;
		break;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		default:
		/* EAtomSoundRendererType::Type::Hardware1 が指定された時もここに来る*/
		return EAtomSoundRendererType::Native;
		break;
	}
}

UCriWarePluginSettings::UCriWarePluginSettings(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	AwbRootDirectory.Path = CRIATOM_DEFAULT_AWB_ROOT_DIRECTORY;

	FString SourceConfigPath = FPaths::SourceConfigDir();
	if (SourceConfigPath != FPaths::EngineConfigDir()) {
		/* 各種パラメータの初期化           */
		UpdateUProperty(0);

		FString engineConfigDir = FPaths::ConvertRelativePathToFull(FPaths::EngineConfigDir());
		FString sourceConfigDir = FPaths::SourceConfigDir();

		/* Windowsの設定ファイルを読み込む */
		FString EngineIniFile;
		GConfig->LoadGlobalIniFile(EngineIniFile, TEXT("Engine"));

		FString SectionNameUClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
		FString SectionNameUClassNew = "/Script/CriWareRuntime.CriWarePluginSettings";
		FString SectionNameUClass = SectionNameUClassNew;
		TArray<FString> SectionUClass;
		bool isExistSection_UClass = GConfig->GetSection(*SectionNameUClass, SectionUClass, EngineIniFile);
		if (!isExistSection_UClass) {
			SectionNameUClass = SectionNameUClassOld;
			isExistSection_UClass = GConfig->GetSection(*SectionNameUClass, SectionUClass, EngineIniFile);
		}

		if (isExistSection_UClass) {
			// Standalone: simple load of settings
			InitializeCriWarePlugins(SectionUClass);
		}
	}

}

#if WITH_EDITOR
/* Remove Section from INI file */
static void RemoveSectionFromIniFile(FString SectionName, const TCHAR* IniFile)
{
	FString FileData = "";
	FFileHelper::LoadFileToString(FileData, IniFile);
	TArray<FString> InLines;
	int32 lineCount = FileData.ParseIntoArrayLines(InLines);
	FileData.Empty();
	bool InSection = false;
	bool FirstSection = true;
	bool EmptySection = true;
	for (FString Line : InLines) {
		if (Line.StartsWith("[") && Line.EndsWith("]")) {
			if (InSection) {
				InSection = false;
			} else if (Line.Mid(1, Line.Len() - 2).TrimStart() == SectionName) {
				InSection = true;
			} else if (!FirstSection && !EmptySection){
				FileData.Append(TEXT("\r\n"));
			}
			FirstSection = false;
			EmptySection = true;
		} else {
			EmptySection = false;
		}
		if (!InSection) {
			FileData.Append(Line + TEXT("\r\n"));
		}
	}
	FFileHelper::SaveStringToFile(FileData, IniFile);
}

void UCriWarePluginSettings::InitializeSettings()
{
	FString SourceConfigPath = FPaths::SourceConfigDir();
	if (!SourceConfigPath.Contains(TEXT("Engine"))) {
		/* 各種パラメータの初期化           */
		UpdateUProperty(0);

		FString engineConfigDir = FPaths::ConvertRelativePathToFull(FPaths::EngineConfigDir());
		FString sourceConfigDir = FPaths::SourceConfigDir();

		new(EngineIniFilePath)FString(engineConfigDir + TEXT("BaseEngine.ini"));
		new(EngineIniFilePath)FString(engineConfigDir + TEXT("Windows/WindowsEngine.ini"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		new(EngineIniFilePath)FString(sourceConfigDir + TEXT("DefaultEngine.ini"));
		new(EngineIniFilePath)FString(sourceConfigDir + TEXT("Windows/WindowsEngine.ini"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		/* Windowsの設定ファイルを読み込む */
		FString EngineIniFile;
		GConfig->LoadGlobalIniFile(EngineIniFile, TEXT("Engine"));

		FString SectionNameUClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
		FString SectionNameUClassNew = "/Script/CriWareRuntime.CriWarePluginSettings";
		FString SectionNameUClass = SectionNameUClassNew;
		TArray<FString> SectionUClass;
		bool isExistSection_UClass = GConfig->GetSection(*SectionNameUClass, SectionUClass, EngineIniFile);
		if (!isExistSection_UClass) {
			SectionNameUClass = SectionNameUClassOld;
			isExistSection_UClass = GConfig->GetSection(*SectionNameUClass, SectionUClass, EngineIniFile);
		}

		// remove old section
		if (SectionNameUClass == SectionNameUClassOld) {
			RemoveSectionFromIniFile(SectionNameUClassOld, *EngineIniFilePath[EEngineIniFileType::ProjDefaultEngineIni]);
		}
		// Any old style -> need converstion
		/* 設定ファイルのヒエラルキー通りのパスをすべて書き出し（CriWare.iniとEngine.ini） */
		new(CriWareIniFilePath)FString(engineConfigDir + TEXT("BaseCriWare.ini"));
		new(CriWareIniFilePath)FString(engineConfigDir + TEXT("Windows/WindowsCriWare.ini"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		new(CriWareIniFilePath)FString(sourceConfigDir + TEXT("DefaultCriWare.ini"));
		new(CriWareIniFilePath)FString(sourceConfigDir + TEXT("Windows/WindowsCriWare.ini"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		FString CriWareIniFile;
		GConfig->LoadGlobalIniFile(CriWareIniFile, TEXT("CriWare"));

		/* ProjectSettingsからのパラメータ変更を有効にするかどうかの判定 */
		bNoExistCriWareIni = !IsExistingCriWareIniFile();
#if (CRIWARE_USE_ADX_LIPSYNC)
		bEditableCriWareAdxLipSyncSetting = bNoExistCriWareIni;
#else  /* CRIWARE_USE_ADX_LIPSYNC */
		bEditableCriWareAdxLipSyncSetting = false;
#endif /* CRIWARE_USE_ADX_LIPSYNC */

		/* CriWare用のパラメータがConfigファイルに記載されている場合はUPropertyの値をConfigファイルに記載されているパラメータで上書き */
		/* CriWare用のパラメータがどのConfigファイルにも記載されていない場合はDefaultEngine.iniに現在のUPropertyの値を書き込む */
		FString SectionNameFileSystem = "FileSystem";
		FString SectionNameAtom = "Atom";
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		TArray<FString> SectionFileSystem;
		TArray<FString> SectionAtom;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		bool isFileSystemCategory = GConfig->GetSection(*SectionNameFileSystem, SectionFileSystem, CriWareIniFile);
		bool isAtomCategory = GConfig->GetSection(*SectionNameAtom, SectionAtom, CriWareIniFile);
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		if ((isFileSystemCategory_or_isAtomCategory_or_isManaCategory) && !isExistSection_UClass) {
			/* 旧Configファイルが存在し新Configファイルがない場合の処理 */
			UpdateCriData(SectionFileSystem, &SectionUClass, TEXT("FileSystem"));
			UpdateCriData(SectionAtom, &SectionUClass, TEXT("Atom"));
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
			InitializeCriWarePlugins(SectionUClass);
		}
		else if (!(isFileSystemCategory_or_isAtomCategory_or_isManaCategory) && isExistSection_UClass) {
			/* 新Configファイルが存在し旧Configファイルがない場合の処理 */
			InitializeCriWarePlugins(SectionUClass);
			UpdateDefaultConfigFile(EngineIniFilePath[EEngineIniFileType::ProjDefaultEngineIni]);
		}
		else if (!(isFileSystemCategory_or_isAtomCategory_or_isManaCategory) && !isExistSection_UClass) {
			/* 新Configファイルがなく、旧Configファイルもない場合の処理 */
			CheckoutConfigFile(EngineIniFilePath[EEngineIniFileType::ProjDefaultEngineIni]);
			UpdateDefaultConfigFile(EngineIniFilePath[EEngineIniFileType::ProjDefaultEngineIni]);
		}

		/* Engine/Saved以下にEngine.iniが存在していた場合そのファイルを削除 */
		FString savedConfigDir = TEXT("Saved/Config/Windows/CriWare.ini");
		FString engineSavedConfigDir = FPaths::Combine(*(FPaths::ProjectDir()), savedConfigDir);
		if (!FPaths::DirectoryExists(engineSavedConfigDir)) {
			engineSavedConfigDir = FPaths::Combine(*(FPaths::EngineDir()), savedConfigDir);
		}
		IFileManager::Get().Delete(*engineSavedConfigDir);
	}
}

bool UCriWarePluginSettings::IsExistingCriWareIniFile() const
{
	bool bExistingCriWareIni = false;

	if (CriWareIniFilePath.Num() < NUM_INIFILE) {
		return bExistingCriWareIni;
	}

	for (int iter = 0; iter < NUM_INIFILE; iter++) {
		/* CriWare.iniを使用しているか判定 */
		if (FPaths::FileExists(CriWareIniFilePath[iter])) {
			/* CriWare.iniが見つかったらfalse */
			bExistingCriWareIni = true;
		}
	}
	return bExistingCriWareIni;
}

// used by detail
bool UCriWarePluginSettings::ConvertConfigrationFile(){
#if WITH_EDITOR
	/* SourceControl機能が有効な場合に対して、Configファイルをチェックアウトし削除後に結果をサブミットする必要がある */
	for (int iter = 0; iter < NUM_INIFILE; iter++){
		FString AbsoluteConfigFilePath_CriWare = CriWareIniFilePath[iter];
		FString AbsoluteConfigFilePath_Engine = EngineIniFilePath[iter];

		if (!FPaths::FileExists(AbsoluteConfigFilePath_CriWare)){
			/* FilePathのConfigファイルが存在しない場合は次のファイルの操作に移る */
			continue;
		}

		/* 一度UPropertyにデフォルト値を代入する */
		UpdateUProperty(1);

		if (!CreateEngineIniFile(AbsoluteConfigFilePath_Engine, AbsoluteConfigFilePath_CriWare)){
			UpdateUProperty(0);
			return false;
		}

		TArray<FString> FilesToBeDeleted;
		FilesToBeDeleted.Add(AbsoluteConfigFilePath_CriWare);

		ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
		FSourceControlStatePtr SourceControlState = SourceControlProvider.GetState(AbsoluteConfigFilePath_CriWare, EStateCacheUsage::ForceUpdate);

		/* CriWare設定ファイルが存在する場合、存在するヒエラルキー毎の設定ファイルを個別にEngine.iniにコンバートしていく */
		/* 設定ファイルが存在しない場合は新しく設定ファイルは作成しない */
		/* 設定ファイル単体の内容をSection[Category]にカテゴリごとに格納 */
		FString SectionNameFileSystem = "FileSystem";
		FString SectionNameAtom = "Atom";
		FString SectionNameMana = "Mana";
		FString SectionNameUClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
		FString SectionNameUClass = "/Script/CriWareRuntime.CriWarePluginSettings";
		TArray<FString> SectionFileSystem;
		TArray<FString> SectionAtom;
		TArray<FString> SectionMana;
		TArray<FString> SectionUClass;
		bool isFileSystemCategory = GConfig->GetSection(*SectionNameFileSystem, SectionFileSystem, AbsoluteConfigFilePath_CriWare);
		bool isAtomCategory = GConfig->GetSection(*SectionNameAtom, SectionAtom, AbsoluteConfigFilePath_CriWare);
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		bool isUClassCategory = GConfig->GetSection(*SectionNameUClass, SectionUClass, AbsoluteConfigFilePath_Engine);
		if (!isUClassCategory) {
			SectionNameUClass = SectionNameUClassOld;
			GConfig->GetSection(*SectionNameUClass, SectionUClass, AbsoluteConfigFilePath_Engine);
		}

		if (isFileSystemCategory_or_isAtomCategory_or_isManaCategory){

			/* 手動でConfigファイルを記述していた場合 */
			/* 旧Configファイルを削除して新規に新フォーマットのデータを作成する */

			/* 旧カテゴリの内容をSectionUClassに上書き */

			ConvertCriData(SectionFileSystem, &SectionUClass, TEXT("FileSystem"));
			ConvertCriData(SectionAtom, &SectionUClass, TEXT("Atom"));
			ConvertCriData(SectionMana, &SectionUClass, TEXT("Mana"));

			/* 旧カテゴリの内容を削除するためファイルそのものを一度削除(UpdateDefaultConfigFile()関数で再度生成される) */
			if (SourceControlState.IsValid()) {
				/* SourceControlを使用している場合はConfigファイルを削除目的でマーキング */
				if (SourceControlState->CanCheckout() || SourceControlState->IsCheckedOutOther()) {
					SourceControlProvider.Execute(ISourceControlOperation::Create<FDelete>(), FilesToBeDeleted);
				}
				else if (SourceControlState->CanAdd()){
					IFileManager::Get().Delete(*AbsoluteConfigFilePath_CriWare);
				}

				/* Engine.iniがUpdateDefaultConfigFileで作成もしくは更新される前にEngine.iniの存在を確認 */
				bool isExistEngineIniFile = false;
				if (FPaths::FileExists(AbsoluteConfigFilePath_Engine)){
					isExistEngineIniFile = true;
				}

				InitializeCriWarePlugins(SectionUClass);

				/* Engine.iniを新規作成、または更新 */
				if (isExistEngineIniFile){
					/* Engine.iniが存在する場合 */
					CheckoutConfigFile(AbsoluteConfigFilePath_Engine);
				}
				UpdateDefaultConfigFile(AbsoluteConfigFilePath_Engine);
				if (!isExistEngineIniFile){
					/* Engine.iniが存在しない場合 */
					CheckoutConfigFile(AbsoluteConfigFilePath_Engine);
				}
			}
			else {
				/* SourceControlを使用していない場合はConfigファイルを削除 */
				IFileManager::Get().Delete(*AbsoluteConfigFilePath_CriWare);
				InitializeCriWarePlugins(SectionUClass);
				UpdateDefaultConfigFile(AbsoluteConfigFilePath_Engine);
			}
		}
	}
	/* ここですべての設定ファイルのコンバート完了 */

	/* Windowsの設定ファイルを読み込む */
	FString EngineIniFile;
	GConfig->LoadGlobalIniFile(EngineIniFile, TEXT("Engine"));
	FString SectionNameUClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
	FString SectionNameUClass = "/Script/CriWareRuntime.CriWarePluginSettings";
	TArray<FString> Section;
	/* 新フォーマットのデータをSectionUClassに格納 */
	if (!GConfig->GetSection(*SectionNameUClass, Section, EngineIniFile)) {
		GConfig->GetSection(*SectionNameUClassOld, Section, EngineIniFile);
	}
	InitializeCriWarePlugins(Section);
#endif
	return true;
}

bool UCriWarePluginSettings::IsMixedConfigFiles() const
{
	if (!HasPendingChanges()){
		FString CriWareIniFile;
		GConfig->LoadGlobalIniFile(CriWareIniFile, TEXT("CriWare"));
		FString EngineIniFile;
		GConfig->LoadGlobalIniFile(EngineIniFile, TEXT("Engine"));

		FString SectionNameFileSystem = "FileSystem";
		FString SectionNameAtom = "Atom";
		FString SectionNameMana = "Mana";
		FString SectionName_UClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
		FString SectionName_UClass = "/Script/CriWareRuntime.CriWarePluginSettings";
		TArray<FString> SectionFileSystem;
		TArray<FString> SectionAtom;
		TArray<FString> SectionMana;
		TArray<FString> SectionUClass;
		bool isFileSystemCategory = GConfig->GetSection(*SectionNameFileSystem, SectionFileSystem, CriWareIniFile);
		bool isAtomCategory = GConfig->GetSection(*SectionNameAtom, SectionAtom, CriWareIniFile);
		bool isManaCategory = GConfig->GetSection(*SectionNameMana, SectionMana, CriWareIniFile);
		bool isExistSection_UClass = GConfig->GetSection(*SectionName_UClass, SectionUClass, EngineIniFile);
		if (!isExistSection_UClass) {
			SectionName_UClass = SectionName_UClassOld;
			isExistSection_UClass = GConfig->GetSection(*SectionName_UClass, SectionUClass, EngineIniFile);
		}

		return ((isFileSystemCategory_or_isAtomCategory_or_isManaCategory) && isExistSection_UClass);
	}
	return false;

}

// used by detail
TArray<FString> UCriWarePluginSettings::GetDeletedFilesName() const
{
	TArray<FString> DeletedFilesName;

	/* SourceControl機能が有効な場合に対して、Configファイルをチェックアウトし削除後に結果をサブミットする必要がある */
	for (int iter = 0; iter < NUM_INIFILE; iter++){
		FString AbsoluteConfigFilePath_CriWare = CriWareIniFilePath[iter];
		FString AbsoluteConfigFilePath_Engine = EngineIniFilePath[iter];

		if (!FPaths::FileExists(AbsoluteConfigFilePath_CriWare)){
			/* FilePathのConfigファイルが存在しない場合は次のファイルの操作に移る */
			continue;
		}

		TArray<FString> FilesToBeDeleted;
		FilesToBeDeleted.Add(AbsoluteConfigFilePath_CriWare);

		ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
		FSourceControlStatePtr SourceControlState = SourceControlProvider.GetState(AbsoluteConfigFilePath_CriWare, EStateCacheUsage::ForceUpdate);

		/* CriWare設定ファイルが存在する場合、存在するヒエラルキー毎の設定ファイルを個別にEngine.iniにコンバートしていく */
		/* 設定ファイルが存在しない場合は新しく設定ファイルは作成しない */
		/* 設定ファイル単体の内容をSection[Category]にカテゴリごとに格納 */
		FString SectionNameFileSystem = "FileSystem";
		FString SectionNameAtom = "Atom";
		FString SectionNameMana = "Mana";
		TArray<FString> SectionFileSystem;
		TArray<FString> SectionAtom;
		TArray<FString> SectionMana;
		TArray<FString> SectionUClass;
		bool isFileSystemCategory = GConfig->GetSection(*SectionNameFileSystem, SectionFileSystem, AbsoluteConfigFilePath_CriWare);
		bool isAtomCategory = GConfig->GetSection(*SectionNameAtom, SectionAtom, AbsoluteConfigFilePath_CriWare);
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		if (isFileSystemCategory_or_isAtomCategory_or_isManaCategory){

			/* 削除するファイル名をDeletedFilesNameに格納する */
			if (SourceControlState.IsValid()) {
					DeletedFilesName.Add(AbsoluteConfigFilePath_CriWare);
			}
			else {
				/* SourceControlを使用していない場合はConfigファイルを削除 */
				DeletedFilesName.Add(AbsoluteConfigFilePath_CriWare);
			}
		}
	}
	return DeletedFilesName;
}

bool UCriWarePluginSettings::HasPendingChanges() const
{
	/* AsrRackConfigの比較処理 */
	bool isChangedArray_AsrRackConfig = false;
	isChangedArray_AsrRackConfig = (AsrRackConfig.Num() != AppliedAsrRackConfig.Num());
	int32 iterNum = (AsrRackConfig.Num() > AppliedAsrRackConfig.Num()) ? AsrRackConfig.Num() : AppliedAsrRackConfig.Num();
	for (int check_iter = 0; check_iter < iterNum; check_iter++) {
		if (isChangedArray_AsrRackConfig)break;
		isChangedArray_AsrRackConfig = (AsrRackConfig[check_iter].SoundRendererType != AppliedAsrRackConfig[check_iter].SoundRendererType);
	}

	return (
			/* === FileSystem関連パラメータ === */
			ContentDir != AppliedContentDir
			|| NumBinders != AppliedNumBinders
			|| MaxBinds != AppliedMaxBinds
			|| NumLoaders != AppliedNumLoaders
			|| MaxPath != AppliedMaxPath
			|| OutputsLogFileSystem != AppliedOutputsLogFileSystem
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		/* === Atom関連パラメータ === */
			|| MaxVirtualVoices != AppliedMaxVirtualVoices
			|| UsesInGamePreview != AppliedUsesInGamePreview
			|| OutputsLogAtom != AppliedOutputsLogAtom
			|| AwbRoot != AppliedAwbRoot
			|| MonitorCommunicationBufferSize != AppliedMonitorCommunicationBufferSize
			|| MaxPitch != AppliedMaxPitch
			|| AsrOutputChannels != AppliedAsrOutputChannels
			|| NumStandardMemoryVoices != AppliedNumStandardMemoryVoices
			|| StandardMemoryVoiceNumChannels != AppliedStandardMemoryVoiceNumChannels
			|| StandardMemoryVoiceSamplingRate != AppliedStandardMemoryVoiceSamplingRate
			|| NumStandardStreamingVoices != AppliedNumStandardStreamingVoices
			|| StandardStreamingVoiceNumChannels != AppliedStandardStreamingVoiceNumChannels
			|| StandardStreamingVoiceSamplingRate != AppliedStandardStreamingVoiceSamplingRate
			|| AtomConfig != AppliedAtomConfig
			|| AtomConfigDataTable != AppliedAtomConfigDataTable
			|| DistanceFactor != AppliedDistanceFactor
			|| SoundRendererType != AppliedSoundRendererType
			|| isChangedArray_AsrRackConfig
			|| EconomicTickMarginDistance != AppliedEconomicTickMarginDistance
			|| EconomicTickFrequency != AppliedEconomicTickFrequency
			|| CullingMarginDistance != AppliedCullingMarginDistance
			|| HcaMxVoiceSamplingRate != AppliedHcaMxVoiceSamplingRate
			|| NumHcaMxMemoryVoices != AppliedNumHcaMxMemoryVoices
			|| HcaMxMemoryVoiceNumChannels != AppliedHcaMxMemoryVoiceNumChannels
			|| NumHcaMxStreamingVoices != AppliedNumHcaMxStreamingVoices
			|| HcaMxStreamingVoiceNumChannels != AppliedHcaMxStreamingVoiceNumChannels
			|| WASAPI_IsExclusive != AppliedWASAPI_IsExclusive
			|| WASAPI_BitsPerSample != AppliedWASAPI_BitsPerSample
			|| WASAPI_SamplingRate != AppliedWASAPI_SamplingRate
			|| WASAPI_NumChannels != AppliedWASAPI_NumChannels
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		);
}
#endif // WITH_EDITOR

#if WITH_EDITOR
void UCriWarePluginSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	/* NonAssetContentDirに対する変更かどうかチェック */
	if (PropertyChangedEvent.MemberProperty != nullptr)
	{
		if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCriWarePluginSettings, NonAssetContentDir)) {
			/* NonAssetContentDir変更時はセットされたパスを相対パスに変換 */
			bool bIsRelative = FPaths::IsRelative(NonAssetContentDir.Path);
			if (bIsRelative == false) {
				FPaths::MakePathRelativeTo(NonAssetContentDir.Path, *FPaths::ProjectContentDir());
			}

			/* パスが更新されたかどうかチェック */
			if (ContentDir != NonAssetContentDir.Path) {
				/* 既存ContentDirと異なる場合はContentDirの値を更新 */
				ContentDir = NonAssetContentDir.Path;

				/* iniファイルの内容を更新 */
				SaveConfig(CPF_Config, *GetClass()->GetDefaultConfigFilename(), GConfig);
			}
		}

		/* AwbRootDirectoryに対する変更かどうかチェック */
		if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCriWarePluginSettings, AwbRootDirectory)) {
			/* AwbRootDirectory変更時はセットされたパスを相対パスに変換 */
			if (!FPaths::IsRelative(AwbRootDirectory.Path)) {
				FPaths::MakePathRelativeTo(AwbRootDirectory.Path, *FPaths::ProjectContentDir());
			}

			/* 違反パスが入力された場合は元に戻す。*/
			if (!FPaths::ValidatePath(AwbRootDirectory.Path)) {
				AwbRootDirectory.Path = AwbRoot;
			}

			/* パスが更新されたかどうかチェック */
			if (AwbRoot != AwbRootDirectory.Path) {
				/* 既存AwbRootと異なる場合はAwbRootの値を更新 */
				AwbRoot = AwbRootDirectory.Path;

				/* iniファイルの内容を更新 */
				SaveConfig(CPF_Config, *GetClass()->GetDefaultConfigFilename(), GConfig);
			}
		}

		/* SoundRendererTypeに対する変更かどうかチェック */
		if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCriWarePluginSettings, SoundRendererTypeUI)) {
			/* SoundRendererTypeが更新されたかどうかチェック */
			int32 NewSoundRendererType = static_cast<int32>(SoundRendererTypeUI.GetValue());
			if (SoundRendererType != NewSoundRendererType) {
				/* 既存SoundRendererTypeと異なる場合はSoundRendererTypeの値を更新 */
				SoundRendererType = NewSoundRendererType;

				/* iniファイルの内容を更新 */
				SaveConfig(CPF_Config, *GetClass()->GetDefaultConfigFilename(), GConfig);
			}
		}

		/* AsrRackConfigに対する変更かどうかチェック */
		if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCriWarePluginSettings, AsrRackConfigUI)) {
			/* IDの再割り振り */
			for (int32 check_iter = 0; check_iter < AsrRackConfigUI.Num(); check_iter++) {
				AsrRackConfigUI[check_iter].ElementID = check_iter + 1;
			}

			/* 保存用の情報を再構築 */
			AsrRackConfig.SetNumZeroed(AsrRackConfigUI.Num());
			for (int32 check_iter = 0; check_iter < AsrRackConfig.Num(); check_iter++) {
				AsrRackConfig[check_iter].SoundRendererType = static_cast<int32>(AsrRackConfigUI[check_iter].SoundRendererTypeUI);
				AsrRackConfig[check_iter].ElementID = AsrRackConfigUI[check_iter].ElementID;
			}

			/* iniファイルの内容を更新 */
			SaveConfig(CPF_Config, *GetClass()->GetDefaultConfigFilename(), GConfig);
		}
	}

	SettingChangedEvent.Broadcast();
}
#endif // WITH_EDITOR

void UCriWarePluginSettings::UpdateUProperty(int isConvert){
	/* === FileSystem関連パラメータ === */
	NonAssetContentDir.Path = TEXT("");
	ContentDir = TEXT("");
	AppliedContentDir = TEXT("");
	NumBinders = FS_NUM_BINDERS;
	AppliedNumBinders = (isConvert == 1) ? 0 : FS_NUM_BINDERS;
	MaxBinds = FS_MAX_BINDS;
	AppliedMaxBinds = (isConvert == 1) ? 0 : FS_MAX_BINDS;
	NumLoaders = FS_NUM_LOADERS;
	AppliedNumLoaders = (isConvert == 1) ? 0 : FS_NUM_LOADERS;
	MaxPath = FS_MAX_PATH;
	AppliedMaxPath = (isConvert == 1) ? 0 : FS_MAX_PATH;
	OutputsLogFileSystem = FS_OUTPUT_LOG;
	AppliedOutputsLogFileSystem = (isConvert == 1) ? false : FS_OUTPUT_LOG;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	/* === Atom関連パラメータ === */
	AutomaticallyCreateCueAsset_DEPRECATED = false; // deprecated - does nothing
	UsesInGamePreview = ATOM_USES_INGAME_PREVIEW;
	AppliedUsesInGamePreview = (isConvert == 1) ? true : ATOM_USES_INGAME_PREVIEW;
	OutputsLogAtom = ATOM_OUTPUT_LOG;
	AppliedOutputsLogAtom = (isConvert == 1) ? false : ATOM_OUTPUT_LOG;
	AwbRoot = CRIATOM_DEFAULT_AWB_ROOT_DIRECTORY;
	AppliedAwbRoot = (isConvert == 1) ? TEXT("") : CRIATOM_DEFAULT_AWB_ROOT_DIRECTORY;
	MonitorCommunicationBufferSize = ATOM_MONITOR_COMMUNICATION_BUFFER;
	AppliedMonitorCommunicationBufferSize = (isConvert == 1) ? 0 : ATOM_MONITOR_COMMUNICATION_BUFFER;
	MaxPitch = ATOM_MAX_PITCH;
	AppliedMaxPitch = (isConvert == 1) ? 0 : ATOM_MAX_PITCH;
	AsrOutputChannels = CRIWARE_UE4_MAX_CHANNELS;
	AppliedAsrOutputChannels = (isConvert == 1) ? 0 : CRIWARE_UE4_MAX_CHANNELS;
	MaxVirtualVoices = ATOM_MAX_VIRTUAL_VOICES;
	AppliedMaxVirtualVoices = (isConvert == 1) ? 0 :ATOM_MAX_VIRTUAL_VOICES;
	NumStandardMemoryVoices = ATOM_NUM_STANDARD_MEMORY_VOICES;
	AppliedNumStandardMemoryVoices = (isConvert == 1) ? 0 : ATOM_NUM_STANDARD_MEMORY_VOICES;
	StandardMemoryVoiceNumChannels = ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	AppliedStandardMemoryVoiceNumChannels = (isConvert == 1) ? 0 : ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	StandardMemoryVoiceSamplingRate = ATOM_STANDARD_MEMORY_VOICE_SAMPLING_RATE;
	AppliedStandardMemoryVoiceSamplingRate = (isConvert == 1) ? 0 :ATOM_STANDARD_MEMORY_VOICE_SAMPLING_RATE;
	NumStandardStreamingVoices = ATOM_NUM_STANDARD_STREAMING_VOICES;
	AppliedNumStandardStreamingVoices = (isConvert == 1) ? 0 : ATOM_NUM_STANDARD_STREAMING_VOICES;
	StandardStreamingVoiceNumChannels = ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;
	AppliedStandardStreamingVoiceNumChannels = (isConvert == 1) ? 0 : ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;
	StandardStreamingVoiceSamplingRate = ATOM_STANDARD_STREAMING_VOICE_SAMPLING_RATE;
	AppliedStandardStreamingVoiceSamplingRate = (isConvert == 1) ? 0: ATOM_STANDARD_STREAMING_VOICE_SAMPLING_RATE;
	AtomConfig.Reset();
	AppliedAtomConfig.Reset();
	AtomConfigDataTable.Reset();
	AppliedAtomConfigDataTable.Reset();
	DistanceFactor = ATOM_DISTANCE_FACTOR;
	AppliedDistanceFactor = (isConvert == 1) ? 0 : ATOM_DISTANCE_FACTOR;
	SoundRendererTypeUI = EAtomSoundRendererType::Native;
	SoundRendererType = static_cast<int32>(EAtomSoundRendererType::Native);
	AppliedSoundRendererType = static_cast<int32>(EAtomSoundRendererType::Native);
	EconomicTickMarginDistance = CRIATOM_DEFAULT_ECONOMICTICK_MARGIN_DISTANCE;
	AppliedEconomicTickMarginDistance = (isConvert == 1) ? 0.0f : CRIATOM_DEFAULT_ECONOMICTICK_MARGIN_DISTANCE;
	EconomicTickFrequency = CRIATOM_DEFAULT_ECONOMICTICK_FREQUENCY;
	AppliedEconomicTickFrequency = (isConvert == 1) ? 0 : CRIATOM_DEFAULT_ECONOMICTICK_FREQUENCY;
	CullingMarginDistance = CRIATOM_DEFAULT_CULLING_MARGIN_DISTANCE;
	AppliedCullingMarginDistance = (isConvert == 1) ? 0.0f : CRIATOM_DEFAULT_CULLING_MARGIN_DISTANCE;
	HcaMxVoiceSamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	AppliedHcaMxVoiceSamplingRate = (isConvert == 1) ? 0 : CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	NumHcaMxMemoryVoices = 0;
	AppliedNumHcaMxMemoryVoices = 0;
	HcaMxMemoryVoiceNumChannels = ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	AppliedHcaMxMemoryVoiceNumChannels = (isConvert == 1) ? 0 : ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	NumHcaMxStreamingVoices = 0;
	AppliedNumHcaMxStreamingVoices = 0;
	HcaMxStreamingVoiceNumChannels = ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;
	AppliedHcaMxStreamingVoiceNumChannels = (isConvert == 1) ? 0 : ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;
	WASAPI_IsExclusive = false;
	AppliedWASAPI_IsExclusive = false;
	WASAPI_BitsPerSample = 24;
	AppliedWASAPI_BitsPerSample = (isConvert == 1) ? 0 : 24;
	WASAPI_SamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	AppliedWASAPI_SamplingRate = (isConvert == 1) ? 0 : CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	WASAPI_NumChannels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;
	AppliedWASAPI_NumChannels = (isConvert == 1) ? 0 : CRIATOM_DEFAULT_OUTPUT_CHANNELS;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}

FString UCriWarePluginSettings::CheckIniParamString(FString ini_param_string, int default_value)
{
	if (ini_param_string == "") {
		ini_param_string = FString::FromInt(default_value);
	}
	return ini_param_string;
}

FString UCriWarePluginSettings::CheckIniParamString(FString ini_param_string, float default_value)
{
	if (ini_param_string == "") {
		ini_param_string = FString::SanitizeFloat(default_value);
	}
	return ini_param_string;
}

FString UCriWarePluginSettings::CheckIniParamString(FString ini_param_string, FString default_value)
{
	if (ini_param_string == "") {
		ini_param_string = default_value;
	}
	return ini_param_string;
}

void UCriWarePluginSettings::InitializeCriWarePlugins(const TArray<FString>& Section_UClass)
{
	/* === FileSystem関連パラメータ === */

	/* コンテンツディレクトリパス指定の取得 */
	ContentDir = GetParameterString( Section_UClass, TEXT("ContentDir") );
	AppliedContentDir = ContentDir;
	NonAssetContentDir.Path = ContentDir;

	/* バインダ情報の取得 */
	NumBinders = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumBinders")), FS_NUM_BINDERS));
	AppliedNumBinders = NumBinders;
	MaxBinds = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("MaxBinds")), FS_MAX_BINDS));
	AppliedMaxBinds = MaxBinds;

	/* ローダ情報の取得 */
	NumLoaders = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumLoaders")), FS_NUM_LOADERS));
	AppliedNumLoaders = NumLoaders;

	/* パスの最大長を取得 */
	MaxPath = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("MaxPath")), FS_MAX_PATH));
	AppliedMaxPath = MaxPath;

	/* ログ出力を行うかどうか */
	OutputsLogFileSystem = FCString::ToBool( *GetParameterString(Section_UClass, TEXT("OutputsLogFileSystem")) );
	AppliedOutputsLogFileSystem = OutputsLogFileSystem;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* === Atom関連パラメータ === */

	/* ACBファイルインポート時にキューアセットを作成するかどうか */
	AutomaticallyCreateCueAsset_DEPRECATED = false; // deprecated - does nothing

	/* インゲームプレビューを使用するかどうか */
	UsesInGamePreview = FCString::ToBool( *GetParameterString(Section_UClass, TEXT("UsesInGamePreview")));
	AppliedUsesInGamePreview = UsesInGamePreview;

	/* ログ出力を行うかどうか */
	OutputsLogAtom = FCString::ToBool( *GetParameterString(Section_UClass, TEXT("OutputsLogAtom")) );
	AppliedOutputsLogAtom = OutputsLogAtom;

	/* AWBルートディレクトリ指定の取得 */
	AwbRoot = CheckIniParamString(GetParameterString(Section_UClass, TEXT("AwbRoot")), CRIATOM_DEFAULT_AWB_ROOT_DIRECTORY);
	AppliedAwbRoot = AwbRoot;
	AwbRootDirectory.Path = AwbRoot;

	/* CRI Atom Craftとの通信に利用するバッファ数 */
	MonitorCommunicationBufferSize = FCString::Atoi(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("MonitorCommunicationBufferSize")), ATOM_MONITOR_COMMUNICATION_BUFFER));
	AppliedMonitorCommunicationBufferSize = MonitorCommunicationBufferSize;

	/* 最大ピッチ値 */
	MaxPitch = FCString::Atof(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("MaxPitch")), ATOM_MAX_PITCH));
	AppliedMaxPitch = MaxPitch;

	/* ASR 最大出力チャンネル数 */
	AsrOutputChannels = FCString::Atoi(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("AsrOutputChannels")), CRIWARE_UE4_MAX_CHANNELS));
	AppliedAsrOutputChannels = AsrOutputChannels;

	/* 最大バーチャルボイス数の取得 */
	MaxVirtualVoices = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("MaxVirtualVoices")), ATOM_MAX_VIRTUAL_VOICES));
	AppliedMaxVirtualVoices = MaxVirtualVoices;

	/* メモリ再生用ボイス情報の取得 */
	NumStandardMemoryVoices = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumStandardMemoryVoices")), ATOM_NUM_STANDARD_MEMORY_VOICES));
	AppliedNumStandardMemoryVoices = NumStandardMemoryVoices;
	StandardMemoryVoiceNumChannels = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("StandardMemoryVoiceNumChannels")), ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS));
	AppliedStandardMemoryVoiceNumChannels = StandardMemoryVoiceNumChannels;
	StandardMemoryVoiceSamplingRate = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("StandardMemoryVoiceSamplingRate")), ATOM_STANDARD_MEMORY_VOICE_SAMPLING_RATE));
	AppliedStandardMemoryVoiceSamplingRate = StandardMemoryVoiceSamplingRate;

	/* ストリーム再生用ボイス情報の取得 */
	NumStandardStreamingVoices = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumStandardStreamingVoices")), ATOM_NUM_STANDARD_STREAMING_VOICES));
	AppliedNumStandardStreamingVoices = NumStandardStreamingVoices;
	StandardStreamingVoiceNumChannels = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("StandardStreamingVoiceNumChannels")), ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS));
	AppliedStandardStreamingVoiceNumChannels = StandardStreamingVoiceNumChannels;
	StandardStreamingVoiceSamplingRate = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("StandardStreamingVoiceSamplingRate")), ATOM_STANDARD_STREAMING_VOICE_SAMPLING_RATE));
	AppliedStandardStreamingVoiceSamplingRate = StandardStreamingVoiceSamplingRate;

	/* HCA-MXサンプリングレートの取得 */
	HcaMxVoiceSamplingRate = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("HcaMxVoiceSamplingRate")), CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE));
	AppliedHcaMxVoiceSamplingRate = HcaMxVoiceSamplingRate;

	/* HCA-MXメモリ再生用ボイス情報の取得 */
	NumHcaMxMemoryVoices = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumHcaMxMemoryVoices")), 0));
	AppliedNumHcaMxMemoryVoices = NumHcaMxMemoryVoices;
	HcaMxMemoryVoiceNumChannels = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("HcaMxMemoryVoiceNumChannels")), ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS));
	AppliedHcaMxMemoryVoiceNumChannels = HcaMxMemoryVoiceNumChannels;

	/* HCA-MXストリーム再生用ボイス情報の取得 */
	NumHcaMxStreamingVoices = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("NumHcaMxStreamingVoices")), 0));
	AppliedNumHcaMxStreamingVoices = NumHcaMxStreamingVoices;
	HcaMxStreamingVoiceNumChannels = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("HcaMxStreamingVoiceNumChannels")), ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS));
	AppliedHcaMxStreamingVoiceNumChannels = HcaMxStreamingVoiceNumChannels;

	/* ACFアセット参照文字列の取得 */
	AtomConfig = GetParameterString(Section_UClass, TEXT("AtomConfig"));
	AppliedAtomConfig = AtomConfig;

	/* AtomConfigデータテーブルアセットの参照文字列の取得 */
	AtomConfigDataTable = GetParameterString(Section_UClass,TEXT("AcfDataTable"));
	AppliedAtomConfigDataTable = AtomConfigDataTable;
	
	/* 距離係数の取得 */
	DistanceFactor = FCString::Atof( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("DistanceFactor")), ATOM_DISTANCE_FACTOR));
	AppliedDistanceFactor = DistanceFactor;

	/* サウンドレンダラタイプの取得 */
	SoundRendererType = FCString::Atoi(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("SoundRendererType")), CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE));
	AppliedSoundRendererType = SoundRendererType;
	SoundRendererTypeUI = GetSoundRendererTypeByIndex(SoundRendererType);

	/* ASRラック設定の取得 */
	AsrRackConfig = GetParemeterArrayAsr(Section_UClass, TEXT("AsrRackConfig"));
	AppliedAsrRackConfig = AsrRackConfig;
	AsrRackConfigUI.SetNumZeroed(AsrRackConfig.Num());
	for (int32 check_iter = 0; check_iter < AsrRackConfig.Num(); check_iter++) {
		AsrRackConfigUI[check_iter].SoundRendererTypeUI = GetSoundRendererTypeByIndex(AsrRackConfig[check_iter].SoundRendererType);
		AsrRackConfigUI[check_iter].ElementID = check_iter+1;
	}

	/* Economic Tick 用の Margin を取得 */
	EconomicTickMarginDistance = FCString::Atof(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("EconomicTickMarginDistance")), CRIATOM_DEFAULT_ECONOMICTICK_MARGIN_DISTANCE));
	AppliedEconomicTickMarginDistance = EconomicTickMarginDistance;

	/* Economic Tick の頻度を取得 */
	EconomicTickFrequency = FCString::Atoi(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("EconomicTickFrequency")), CRIATOM_DEFAULT_ECONOMICTICK_FREQUENCY));
	AppliedEconomicTickFrequency = EconomicTickFrequency;

	/* Culling 用の Margin を取得 */
	CullingMarginDistance = FCString::Atof(*CheckIniParamString(GetParameterString(Section_UClass, TEXT("CullingMarginDistance")), CRIATOM_DEFAULT_CULLING_MARGIN_DISTANCE));
	AppliedCullingMarginDistance = CullingMarginDistance;

	/* WASAPI関連 */
	WASAPI_IsExclusive = FCString::ToBool( *GetParameterString(Section_UClass, TEXT("WASAPI_IsExclusive")) );
	AppliedWASAPI_IsExclusive = WASAPI_IsExclusive;
	WASAPI_BitsPerSample = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("WASAPI_BitsPerSample")), 24));
	AppliedWASAPI_BitsPerSample = WASAPI_BitsPerSample;
	WASAPI_SamplingRate = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("WASAPI_SamplingRate")), CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE));
	AppliedWASAPI_SamplingRate = WASAPI_SamplingRate;
	WASAPI_NumChannels = FCString::Atoi( *CheckIniParamString(GetParameterString(Section_UClass, TEXT("WASAPI_NumChannels")), CRIATOM_DEFAULT_OUTPUT_CHANNELS));
	AppliedWASAPI_NumChannels = WASAPI_NumChannels;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}

TArray<FString> UCriWarePluginSettings::GetParemeterArray(const TArray<FString>& str, FString SelectorName)
{
	TArray<FString> result;
	// get all line with "Selector"
	for (int32 index = 0; index < str.Num(); index++) {
		FString tmp, tmp2;
		if (str[index].Split(TEXT("="), &tmp, &tmp2) == true) {
			tmp = tmp.TrimStart();
			tmp2 = tmp2.TrimStart();
			tmp = tmp.TrimEnd();
			tmp2 = tmp2.TrimEnd();

			if (tmp == SelectorName) {
				result.Add(tmp2);
			}
		}
	}
	return result;
}

TArray<FAtomAsrRackConfig> UCriWarePluginSettings::GetParemeterArrayAsr(const TArray<FString>& str, FString SelectorName)
{
	TArray<FAtomAsrRackConfig> result;
	int32 ElementID = 0;

	for (int32 index = 0; index < str.Num(); index++) {
		FString Key;
		FString Value;
		if (str[index].Split(TEXT("=(SoundRendererType="), &Key, &Value) == true) {
			Key = Key.TrimStart();
			Key = Key.TrimEnd();
			if (Key == SelectorName) {
				FAtomAsrRackConfig asr_rack_config_tmp;
				Value = Value.TrimEnd();
				Value = Value.TrimStart();
				asr_rack_config_tmp.SoundRendererType = FCString::Atoi(*Value);
				asr_rack_config_tmp.ElementID = ++ElementID;
				result.Add(asr_rack_config_tmp);
			}
		}
	}

	return result;
}

FString UCriWarePluginSettings::GetParameterString(const TArray<FString>& str, FString SelectorName)
{
	FString separate;
	int32 index = 0;
	while (index < str.Num()) {
		FString tmp;
		str[index].Split(TEXT("="), &tmp, NULL);
		if (tmp == SelectorName) {
			break;
		}
		index++;
	}

	if ( index == str.Num() ){
		return TEXT("");
	}
	if ( str[index].EndsWith(TEXT("=")) ) {
		return TEXT("");
	}
	str[index].Split(TEXT("="), NULL, &separate);

	return separate;
}

#if WITH_EDITOR
void UCriWarePluginSettings::UpdateCriData(TArray<FString> Section_Old, TArray<FString>* Section_New, FString CategoryType)
{
	for (int i = 0; i < Section_Old.Num(); i++){
		FString Old_tmp = Section_Old[i];
		FString SectionName_Old;
		FString Outputs;
		Old_tmp.Split(TEXT("="), &SectionName_Old, &Outputs);

		/* 旧フォーマットだとOutputLogだけ[Atom]、[FileSystem]で同名のパラメータとして存在しているため名前を変更 */
		if (SectionName_Old == TEXT("OutputsLog")) {
			if (CategoryType == TEXT("FileSystem")){
				Section_Old[i] = TEXT("OutputsLogFileSystem=") + Outputs;
			} else if (CategoryType == TEXT("Atom")) {
				Section_Old[i] = TEXT("OutputsLogAtom=") + Outputs;
			}
		}
		new(*Section_New)FString(Section_Old[i]);
	}
}

void UCriWarePluginSettings::ConvertCriData(TArray<FString> Section_Old, TArray<FString>* Section_New, FString CategoryType)
{
	for (int i = 0; i < Section_Old.Num(); i++){
		FString Old_tmp = Section_Old[i];
		FString SectionName_Old;
		FString Outputs;
		Old_tmp.Split(TEXT("="), &SectionName_Old, &Outputs);

		/* 旧フォーマットだとOutputLogだけ[Atom]、[FileSystem]で同名のパラメータとして存在しているため名前を変更 */
		if (SectionName_Old == TEXT("OutputsLog")) {
			if (CategoryType == TEXT("FileSystem")){
				Section_Old[i] = TEXT("OutputsLogFileSystem=") + Outputs;
				SectionName_Old = TEXT("OutputsLogFileSystem=");
			}
			else if (CategoryType == TEXT("Atom")) {
				Section_Old[i] = TEXT("OutputsLogAtom=") + Outputs;
				SectionName_Old = TEXT("OutputsLogAtom=");
			}
		}
		for (int iter = 0; iter < (*Section_New).Num(); iter++){
			FString SectionName;
			(*Section_New)[iter].Split(TEXT("="), &SectionName, NULL);
			if (SectionName == SectionName_Old){
				(*Section_New)[iter] = Section_Old[i];
			}
		}
	}

	// HACK
	// exeption for array of boot movies that must be kept
	// NOTE: remove support of old format -> convert once and save forever to new one!
	for (int i = 0; i < Section_Old.Num(); i++) {
		FString Old_tmp = Section_Old[i];
		FString SectionName_Old;
		Old_tmp.Split(TEXT("="), &SectionName_Old, NULL);
		if (SectionName_Old == "StartupMovies") {
			Section_New->Add(Section_Old[i]);
		}
	}
}

void UCriWarePluginSettings::CheckoutConfigFile(FString FileName) {
#if WITH_EDITOR
	FText ErrorMessage;

	ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
	FSourceControlStatePtr SourceControlState = SourceControlProvider.GetState(FileName, EStateCacheUsage::ForceUpdate);
	TArray<FString> SourceControlFiles;
	SourceControlFiles.Add(FileName);

	if (SourceControlState.IsValid()) {
		if (SourceControlState->IsDeleted())
		{
			/* ファイルが削除されていた場合の処理 */
			ErrorMessage = LOCTEXT("ConfigFileMarkedForDeleteError", "Error: The configuration file is marked for deletion.");
		}
		else if (!SourceControlState->IsCurrent())
		{
			/* ファイルが最新でない場合の処理 */
			if (false)
			{
				if (SourceControlProvider.Execute(ISourceControlOperation::Create<FSync>(), SourceControlFiles) == ECommandResult::Succeeded)
				{
					ReloadConfig();
					if (SourceControlState->CanCheckout() || SourceControlState->IsCheckedOutOther()) {
						/* Engine.iniが存在した場合、Configファイルをチェックアウトする */
						if (SourceControlProvider.Execute(ISourceControlOperation::Create<FCheckOut>(), SourceControlFiles) == ECommandResult::Failed)
						{
							ErrorMessage = LOCTEXT("FailedToCheckOutConfigFileError", "Error: Failed to check out the configuration file.");
						}
					}
				}
				else
				{
					ErrorMessage = LOCTEXT("FailedToSyncConfigFileError", "Error: Failed to sync the configuration file to head revision.");
				}
			}
		}
		else if (SourceControlState->CanCheckout() || SourceControlState->IsCheckedOutOther()) {
			/* Engine.iniが存在した場合、Configファイルをチェックアウトする */
			if (SourceControlProvider.Execute(ISourceControlOperation::Create<FCheckOut>(), SourceControlFiles) == ECommandResult::Failed)
			{
				ErrorMessage = LOCTEXT("FailedToCheckOutConfigFileError", "Error: Failed to check out the configuration file.");
			}
		}
		else if (SourceControlState->CanAdd()){
			/* Engine.iniが存在しない場合、もしくはSourceControlに追加されていない場合はConfigファイルを追加目的でマーキングする */
			if (SourceControlProvider.Execute(ISourceControlOperation::Create<FMarkForAdd>(), SourceControlFiles) == ECommandResult::Failed)
			{
				ErrorMessage = LOCTEXT("FailedToMarkForAddConfigFileError", "Error: Failed to Mark For Add the configuration file.");
			}
		}
	}
	// show errors, if any
	if (!ErrorMessage.IsEmpty())
	{
		FMessageDialog::Open(EAppMsgType::Ok, ErrorMessage);
	}
#endif
}

// used by detail
bool UCriWarePluginSettings::CreateEngineIniFile(FString EngineIniFileName, FString CriWareIniFileName){
	FText ErrorMessage;

	ISourceControlProvider& SourceControlProvider = ISourceControlModule::Get().GetProvider();
	FSourceControlStatePtr SourceControlState = SourceControlProvider.GetState(CriWareIniFileName, EStateCacheUsage::ForceUpdate);

	FDateTime time = IFileManager::Get().GetTimeStamp(*EngineIniFileName);

	if (IFileManager::Get().IsReadOnly(*CriWareIniFileName) && !SourceControlState.IsValid()){
		ErrorMessage = LOCTEXT("FailedToRewriteCriWareIniError", "Error: Failed to delete CriWare.ini! CRIWARE configuration file comes with read-Only attribute.");
		FMessageDialog::Open(EAppMsgType::Ok, ErrorMessage);
		return false;
	}

	if (IFileManager::Get().IsReadOnly(*EngineIniFileName)){
		ErrorMessage = LOCTEXT("FailedToRewriteEngineIniError", "Error: Failed to rewrite Engine.ini! Engine configuration file comes with read-Only attribute.");
		FMessageDialog::Open(EAppMsgType::Ok, ErrorMessage);
		return false;
	}

	UpdateDefaultConfigFile(EngineIniFileName);

	/* Configファイルが更新されていなかった場合に更新されるまでループ処理を行う。max_iteration回ループしたらエラーメッセージを出して終了 */
	FDateTime UpdatedTime;

	UpdatedTime = IFileManager::Get().GetTimeStamp(*EngineIniFileName);
	if (time != UpdatedTime){
		return true;
	}

	ErrorMessage = LOCTEXT("FailedToRewriteEngineIniUnknownError", "Error: Failed to rewrite Engine.ini. Engine.ini file may be opend by other application.");
	FMessageDialog::Open(EAppMsgType::Ok, ErrorMessage);
	return false;
}

#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
