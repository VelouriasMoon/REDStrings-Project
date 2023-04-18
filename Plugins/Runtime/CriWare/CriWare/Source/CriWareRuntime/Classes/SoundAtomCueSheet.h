/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Sound Data (CueSheet)
 * File     : SoundAtomCueSheet.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Serialization/BulkData.h"
#include "EditorFramework/AssetImportData.h"
#include "Async/Async.h"

#include "CriWareApi.h"
#include "AtomDataTables.h"

#include "SoundAtomCueSheet.generated.h"

#ifndef UE_DEPRECATED
#define UE_DEPRECATED DEPRECATED
#endif


class USoundAtomCue;

UENUM(BlueprintType)
enum class EAtomFormat : uint8
{
	/** No Format */
	None = 0,

	/** CRI's Adaptive Differencial Extended sound. */
	ADX,

	/** CRI's High Compression Audio sound*/
	HCA,

	/** CRI's High Compression Audio Mix sound*/
	HCAMX		UMETA(DisplayName = "HCA-MX"),

	/** AIFF format sound */
	AIFF,

	/** Wave format sound */
	Wave,

	/** Raw PCM sound */
	RawPCM		UMETA(DisplayName = "Raw PCM"),

	/** Haptic vibrations */
	Vibration,

	/** Audio buffer */
	AudioBuffer UMETA(DisplayName = "Audio Buffer"),

	/** Synthetizer */
	Instrument,

	/** Hardware 1 sound (VAG or OPUS) */
	Hardware1,

	/** Hardware 2 sound (ATRAC) */
	Hardware2,

	Num	UMETA(hidden),
};

inline const TCHAR* ToString(EAtomFormat Format)
{
	switch(Format) { 
	case EAtomFormat::None:			return TEXT("None");
	case EAtomFormat::ADX:			return TEXT("ADX");
	case EAtomFormat::HCA:			return TEXT("HCA");
	case EAtomFormat::HCAMX:		return TEXT("HCA-MX");
	case EAtomFormat::AIFF:			return TEXT("AIFF");
	case EAtomFormat::Wave:			return TEXT("Wave");
	case EAtomFormat::RawPCM:		return TEXT("Raw PCM");
	case EAtomFormat::Vibration:	return TEXT("Vibration");
	case EAtomFormat::AudioBuffer:	return TEXT("Audio Buffer");
	case EAtomFormat::Instrument:	return TEXT("Instrument");
	case EAtomFormat::Hardware1:	return TEXT("Hardware1");
	case EAtomFormat::Hardware2:	return TEXT("Hardware2");
	default:						return TEXT("Unknown");
	}
}


USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomWaveInfo
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom")
	EAtomFormat Format;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom")
	int32 SamplingRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom")
	int32 NumChannels;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom")
	int32 NumSamples;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom")
	uint32 bIsStreamed : 1;
};

USTRUCT(BlueprintType, meta = (ToolTip = "AtomAttenuationDistanceParam structure."))
struct CRIWARERUNTIME_API FAtomAttenuationDistanceParam
{
	GENERATED_USTRUCT_BODY()

	FAtomAttenuationDistanceParam();

	/* 距離減衰の最小距離 */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "MinDistance.", ClampMin = "0.0"))
	float MinDistance;

	/* 距離減衰の最大距離 */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "MaxDistance.", ClampMin = "0.0"))
	float MaxDistance;

	FORCEINLINE bool operator == (const FAtomAttenuationDistanceParam& Other) const
	{
		return MinDistance == Other.MinDistance && MaxDistance == Other.MaxDistance;
	}

	FORCEINLINE bool operator != (const FAtomAttenuationDistanceParam& Other) const
	{
		return !(*this == Other);
	}
};

USTRUCT(BlueprintType, meta = (ToolTip = "AtomCueInfo structure."))
struct CRIWARERUNTIME_API FAtomCueInfo
{
	GENERATED_USTRUCT_BODY()

	FAtomCueInfo();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue Id."))
	int32 Id;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue Name."))
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue Duration."))
	FTimespan Duration;

	//FIXME: EDITOR ONLY
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue UserData."))
	FString UserData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue category names."))
	TArray<FString> CategoryNames;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue AISAC control names."))
	TArray<FString> AisacControlNames;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue Attenuation Distance."))
	FAtomAttenuationDistanceParam AttenuationDistance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue is a loop?"))
	uint8 bLooping : 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "Cue Pallet Parameter is assigned?"))
	uint8 bIsParameterPalletAssigned : 1;

	UPROPERTY(Transient, VisibleAnywhere, BlueprintReadOnly, Category = Atom, meta = (ToolTip = "A list of SoundAtomCue that link to this cue. List is empty if not referenced."))
	TArray<TSoftObjectPtr<USoundAtomCue>> SoundAtomCues;
};

UCLASS(hidecategories=object, BlueprintType, meta = (ToolTip = "SoundAtomCueSheet class."))
class CRIWARERUNTIME_API USoundAtomCueSheet : public UObject
{
	GENERATED_BODY()

	DECLARE_MULTICAST_DELEGATE_OneParam(FOnLoadCompleted, USoundAtomCueSheet*);

public:
	USoundAtomCueSheet(const FObjectInitializer& ObjectInitializer);

	/* ACBデータがuasset内に含まれているかどうか */
	UPROPERTY(Transient, VisibleAnywhere, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "Is ACB data contained", ToolTip = "Is ACB data contained."))
	bool Contains;

	/** DEPRECATED - ACB file path is now stored in AssetImportData. */
	UPROPERTY()
	FString AcbFilePath_DEPRECATED; // FIXME -> copy info to AssetImport data if version update or not empty

	/* キューシート名 */
	UPROPERTY(VisibleAnywhere, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "CueSheet name", ToolTip = "CueSheet name."))
	FString CueSheetName;

	/* 音声データ */
	UPROPERTY(VisibleAnywhere, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "Number of related AWB files", ToolTip = "Number of related AWB files."))
	int32 NumSlots;

	/* AWBファイルのフォルダパスを指定するかどうか */
	/* コンポーネント単位で距離減衰を設定するかどうか */
	UPROPERTY(EditAnywhere, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "Override AWB directory", ToolTip = "Load AWB file from the specified path. Ignore [Non-Asset Content Directory] setting."))
	bool bOverrideAwbDirectory;

	// FIXME use a CRIFSDataAsset to set the new directory for this asset -> this is in read and shoud show the resolved path (crifilesystem root or CRIFSDataAsset is used)
	/* AWBファイルを配置したフォルダのパス */
	UPROPERTY(EditAnywhere, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "AWB directory", ToolTip = "Directory containing AWB file."))
	FDirectoryPath AwbDirectory;

	/* Data imported from a Json file that was imported with acb file '<cue_sheet_filename>_acb.json' that contain extra data about this cue sheet and cues. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "Additional Cue Sheet Data", ToolTip = "Additional Cue Sheet data from ACB Json file."), AdvancedDisplay)
	UDataTable* AdditionalData;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sound Atom Cue Sheet", meta = (DisplayName = "Cue Infos", ToolTip = "Cue Infos"), AdvancedDisplay)
	TArray<FAtomCueInfo> CueInfos;

#if WITH_EDITORONLY_DATA
public:
	/** Importing data and options used for this cue sheet */
	UPROPERTY(VisibleAnywhere, Instanced, Category = ImportSettings)
	class UAssetImportData* AssetImportData;
#endif

public:
	/* バインダ */
	CriFsBinderHn Binder; // FIXME accessibility 

	/* ACBデータ */
	FByteBulkData RawData; // FIXME accessibility

	/**
	* Atom Cue Sheet オブジェクトの参照を指定して ACB データをロードします (Atom Cue Sheet オブジェクトを有効化します)。
	*
	* Atom Cue Sheetアセットは音声再生開始時に自動でロードされますが、本関数を使用して明示的にロードさせることも可能です。
	* 本関数でロードしたAtom Cue Sheetは、パーシスタントレベルを抜ける際に自動的に開放されます。
	* 例外的に、以下に該当する場合はパーシスタントレベルを抜けてもAtom Cue Sheetは解放されません。
	* ・関数の戻り値をUPROPERTYとしてアプリケーションで保持している場合。
	* ・キューシートに含まれるキューを、Persist Across Level Transitionを有効にしてUAtomStatics::SpawnSound2Dで再生している場合。
	*
	* 例えば以下の方法で、 USoundAtomCueSheet オブジェクトの生存期間をコントロールすることができます。
	* ・(1)本関数を呼び出す際、引数 [ Add to Level ] にfalseを指定します
	* ・(2)本関数が返した Atom Cue Sheet をUPROPERTYとしてアプリケーションで保持します
	* ・(3)本関数が返した Atom Cue Sheet を任意のタイミングで解放します
	*
	* 注意:
	* 本関数は非同期関数です。本関数の呼び出しに成功すると USoundAtomCueSheet ポインタが返ります。
	* 本関数の呼び出し直後では USoundAtomCueSheet ポインタが指すオブジェクト内はまだ有効な ACB ハンドルを持っていません。
	* 内部で ACB データのロードが完了すると、 ACB ハンドルに有効な値がセットされ、キューの参照が可能になります。
	* アプリケーションが ACB データのロード完了の検知のために、 USoundAtomCueSheet は OnLoadCompleted デリゲートを提供します。
	* または USoundAtomCueSheet::IsLoaded() 関数を呼び出すことで、ロードの完了を確認することも可能です。
	*
	* @param CueSheet ロードするAtom Cue Sheetアセットを指定します。
	* @param bAddToLevel キューシートをパーシスタントレベルに紐づけるかどうかを指定します。
	* @return USoundAtomCueSheetオブジェクトのリファレンスが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Cue Sheet")
	static USoundAtomCueSheet* LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel = true);

	/**
	* Atom Cue Sheet アセットの名前 (パス) を指定して  ACB データをロードします (Atom Cue Sheet オブジェクトを有効化します)。
	* 
	* 基本的には、USoundAtomCueSheet::LoadAtomCueSheet() 関数と同様の非同期処理を行います。
	* 詳細は USoundAtomCueSheet::LoadAtomCueSheet() 関数の説明を参照してください。
	*
	* 注意:
	* Atom Cue Sheet アセットがメモリ上に配置されていない場合、アセットファイルの検索と読み込みを行います。
	* この処理は高い負荷を生じる可能性があり、またファイル I/O を伴います。
	* アプリケーションやシステムの動作状況によっては、ヒッチを引き起こす恐れがあります。
	* 特別な理由がなければ、USoundAtomCueSheet::LoadAtomCueSheet() 関数の方を使用することをおすすめします。
	*
	* @param AcbName Atom Cue Sheet アセットの名前(パス)を指定します。
	* @param bAddToLevel キューシートをパーシスタントレベルに紐づけるかどうかを指定します。
	* @return USoundAtomCueSheetオブジェクトのリファレンスが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "CRIWARE")
	static USoundAtomCueSheet* LoadAcb(FName AcbName, bool bAddToLevel = true);

	//~ DEPRECATED functions

	/**
	 * @deprecated This function has no effect. 
	 */
	UE_DEPRECATED(4.23, "This function has no effect.")
	UFUNCTION(BlueprintCallable, Category="CRIWARE", Meta = (DeprecatedFunction, DeprecationMessage = "This function has no effect."))
	static void ReleaseAcb(FName AcbName);

	/**
	 * @deprecated Use UAtomAsrRack::AttachDspBusSetting instead. 
	 */
	UE_DEPRECATED(4.23, "Use UAtomAsrRack::AttachDspBusSetting instead.")
	UFUNCTION(BlueprintCallable, Category="CRIWARE", Meta = (DeprecatedFunction, DeprecationMessage = "Use AttachDspBusSetting form AtomAsrRack instead."))
	static void AttachDspBusSetting(FString SettingName);

	/**
	 * @deprecated Use UAtomAsrRack::DetachDspBusSetting instead. 
	 */
	UE_DEPRECATED(4.23, "Use UAtomAsrRack::DetachDspBusSetting instead.")
	UFUNCTION(BlueprintCallable, Category="CRIWARE", Meta = (DeprecatedFunction, DeprecationMessage = "Use DetachDspBusSetting form AtomAsrRack instead."))
	static void DetachDspBusSetting();

	/**
	 * deprecated - Use UAtomAsrRack::ApplyDspBusSnapshot instead. 
	 */
	UE_DEPRECATED(4.23, "Use UAtomAsrRack::ApplyDspBusSnapshot instead.")
	UFUNCTION(BlueprintCallable, Category="CRIWARE", Meta = (DeprecatedFunction, DeprecationMessage = "Use ApplyDspBusSnapshot for AtomAsrRack instead."))
	static void ApplyDspBusSnapshot(FString SnapshotName, int32 Milliseconds);

	//~ end DEPRECATED functions

	/* ACBの検索 */
	static USoundAtomCueSheet* Find(FName AcbName, FString PackagePath, UObject* InObjectPackage = (UObject*)ANY_PACKAGE);

	/* ローカライズされたアセットのパスを取得 */
	static FString GetLocalizedAssetPath(FString AssetPath);

	/* ロード済みのローカライズされたアセットを取得 */
	static USoundAtomCueSheet* GetLocalizedAtomCueSheet(USoundAtomCueSheet* CueSheet);

	/* 参照の追加 */
	void AddRef(void);

	/* 参照の削除 */
	void Release(void);

	/* キューシートをロード済みの状態にする */
	void AsyncLoadCueSheet();

	/* キューシートをロード済みの状態にする (完了するのを待つ) */
	void MakeSureCueSheetIsLoaded();

	/* 内部リソースを強制的に削除する */
	void ForceUnload(bool bUseAsync = true);

	/**
	* Atom Cue Sheet アセット内の ACB データがロード済みかどうかをチェックします。
	* 注意: UE4 による アセットロード処理によって Atom Cue Sheet アセット自体がメモリ上に配置された場合であっても、
	* Atom Cue Sheet アセット内の ACB データはロードされていません。
	* ACB データをロードして使用可能な状態にするには、USoundAtomCueSheet::LoadAtomCueSheet 関数を呼び出してロード完了を待ってください。
	*
	* @return true の場合、 ACB データは既にロード済みです。false の場合、 ACB データはまだロードされていません。
	*/
	UFUNCTION(BlueprintCallable, Category="Atom Cue Sheet")
	bool IsLoaded();

	/**
	* ロード済みの ACB データに対し、キューインデックスを指定してAtom Cue オブジェクトへの参照を取得します。
	*
	* @param CueIndex キューのインデックスを指定します。
	* @return USoundAtomCue オブジェクトへの参照を返します。 ACB データがロード済みで無い場合や、キューが  ACB データ 内に存在しない場合は nullptr を返します。
	*/
	UFUNCTION(BlueprintCallable, Category="Atom Cue Sheet")
	USoundAtomCue* GetAtomCueByIndex(int32 CueIndex);

	/**
	* ロード済みの ACB データに対し、キューIDを指定して Atom Cue オブジェクトへの参照を取得します。
	*
	* @param CueId キューIDを指定します。
	* @return USoundAtomCue オブジェクトへの参照を返します。 ACB データがロード済みで無い場合や、キューが  ACB データ 内に存在しない場合は nullptr を返します。
	*/
	UFUNCTION(BlueprintCallable, Category="Atom Cue Sheet")
	USoundAtomCue* GetAtomCueById(int32 CueId);

	/**
	* ロード済みの ACB データに対し、キュー名を指定して Atom Cue オブジェクトへの参照を取得します。
	*
	* @param CueName キュー名を指定します。
	* @return USoundAtomCue オブジェクトへの参照を返します。 ACB データがロード済みで無い場合や、キューが  ACB データ 内に存在しない場合は nullptr を返します。
	*/
	UFUNCTION(BlueprintCallable, Category="Atom Cue Sheet")
	USoundAtomCue* GetAtomCueByName(FString CueName);

	/**
	*  ACB データのハンドルを取得します
	*
	* @return CriAtomExAcbHn 型の値を返します。 ACB データがロード済みで無い場合、 NULL を返します。
	*/
	CriAtomExAcbHn GetAcbHn() { return AcbHn; }

	/** Gets number of cue referenced by this cue sheet. */
	UFUNCTION(BlueprintCallable, Category = "Atom Cue Sheet")
	int32 GetNumCues() const {
		FScopeLock Lock(&CriticalSection);
		return CueInfos.Num();
	}

	/** Gets cue information from cue index. */
	UFUNCTION(BlueprintCallable, Category = "Atom Cue Sheet", meta = (DisplayName = "Get Cue Info From Index", ScriptName = "GetCueInfoFromIndex"))
	bool BP_GetCueInfoFromIndex(int32 Index, UPARAM(ref) FAtomCueInfo& CueInfo) const;

	/** Gets cue information from cue name.*/
	UFUNCTION(BlueprintCallable, Category = "Atom Cue Sheet", meta = (DisplayName = "Get Cue Info From Name", ScriptName = "GetCueInfoFromName"))
	bool BP_GetCueInfoFromName(const FString& Name, UPARAM(ref) FAtomCueInfo& CueInfo) const;

	/** Gets cue information from cue ID. */
	UFUNCTION(BlueprintCallable, Category = "Atom Cue Sheet", meta = (DisplayName = "Get Cue Info From Id", ScriptName = "GetCueInfoFromId"))
	bool BP_GetCueInfoFromId(int32 Id, UPARAM(ref) FAtomCueInfo& CueInfo) const;

	/** Access to Cached Cue information and preset settings. */
	FORCEINLINE const FAtomCueInfo* GetCueInfoFromIndex(int32 Index) const {
		FScopeLock Lock(&CriticalSection);
		return Index >= 0 && Index < CueInfos.Num() ? &CueInfos[Index] : nullptr;
	};

	/** Access to Cached Cue information and preset settings. */
	FORCEINLINE const FAtomCueInfo* GetCueInfoFromId(int32 Id) const {
		FScopeLock Lock(&CriticalSection);
		for (auto& Info : CueInfos) {
			if (Info.Id == Id) { return &Info; }
		}
		return nullptr;
	};

	/** Access to Cached Cue information and preset settings. */
	FORCEINLINE const FAtomCueInfo* GetCueInfoFromName(const FString& Name) const {
		FScopeLock Lock(&CriticalSection);
		for (auto& Info : CueInfos) {
			if (Info.Name == Name) { return &Info; }
		}
		return nullptr;
	};

	bool RegisterSoundAtomCue(USoundAtomCue* SoundAtomCue);

	bool UnregisterSoundAtomCue(USoundAtomCue* SoundAtomCue);

	/** Event for updates. */
	//UPROPERTY(BlueprintAssignable)
	FOnLoadCompleted OnLoadCompleted;

	//~ Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual bool IsReadyForFinishDestroy() override;
	virtual void FinishDestroy() override;
	virtual void Serialize(FArchive& Ar) override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

#if WITH_EDITORONLY_DATA
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
#endif
	//~ End UObject interface.

private:
	/** 旧データの読み込み */
	void SerializeACBFile(FArchive& Ar);

	/** アセットの更新。when serialize */
	void UpdateAsset();

	/** */
	void LoadCueInfo(const CriAtomExCueInfo& AtomExCueInfo, FAtomCueInfo& CueInfo, float DistanceFactorToApply) const;

	/** RawData展開先バッファ */
	uint8* ResourceData;

	/** ACBハンドル */
	TAtomic<CriAtomExAcbHn> AcbHn;

	/** 参照カウント */
	FThreadSafeCounter ReferenceCount;

	/** Critical section for synchronizing load/unload. */
	mutable FCriticalSection CriticalSection;

	/** Flag used when the acb data is loading. */
	TAtomic<bool> bIsRequestingAcbLoadData;

	/** Task used to load acb data. */
	FGraphEventRef LoadTask;
};
