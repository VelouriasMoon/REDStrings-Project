/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Initializer
 * File     : CriWareInitializer.cpp
 *
 ****************************************************************************/

/* プリプロセッサ定義の初期化 */
#if !defined(CRIWARE_USE_PCM_OUTPUT)
#define CRIWARE_USE_PCM_OUTPUT 0
#endif
#if !defined(CRIWARE_WITH_UE4_SOUND)
/* Whether to use CRIWARE and UE4 audio systems together. Default value is 1 (active). */
#define CRIWARE_WITH_UE4_SOUND 1
#endif
#if !defined(CRIWARE_USE_INTEL_MEDIA)
#define CRIWARE_USE_INTEL_MEDIA 0
#endif
#if !defined(CRIWARE_USE_ADX_LIPSYNC)
#define CRIWARE_USE_ADX_LIPSYNC 0
#endif

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "CriWareInitializer.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "CriWareFileIo.h"
#include "CriWarePluginSettings.h"
#include "SoundAtomConfig.h"
#include "AtomListener.h"
#include "AtomPerformanceMonitor.h"
#include "AtomProfileData.h"
#include "AtomSoundManager.h"
#include "AtomComponentPool.h"
#include "AtomStatics.h"
#include "AtomAsyncTask.h"
#include "AtomUnrealSoundRenderer.h"
#include "AtomCallbackManager.h"
#include "CriWareError.h"

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */

#if defined(XPT_TGT_PC)
#include "Windows/WindowsHWrapper.h"
#include "Windows/AllowWindowsPlatformTypes.h"
THIRD_PARTY_INCLUDES_START
#include <Windows.h>
#include <mmdeviceapi.h>
#include <Audioclient.h>
#include <functiondiscoverykeys.h>
#include <propvarutil.h>
#include <cri_le_atom_wasapi.h>
THIRD_PARTY_INCLUDES_END
#include "Windows/HideWindowsPlatformTypes.h"
#elif defined(XPT_TGT_MACOSX)
#include <cri_le_atom_macosx.h>
#endif

#endif

/* ANSI Cヘッダ */
#include <stdio.h>

/* Unreal Engine 4関連ヘッダ */
#include "Misc/CoreMiscDefines.h"
#include "Misc/CoreDelegates.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/MessageDialog.h"
#include "HAL/FileManager.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "CriWareInitializer"

/* 最大ボイスリミットグループ数 */
#define CRIWARE_UE4_MAX_VOICE_LIMIT_GROUPS 128

/* 最大カテゴリ数 */
#define CRIWARE_UE4_MAX_CATEGORIES 128

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/* 初期化／終了処理の共通化 */
#if defined(XPT_TGT_PC)
#define CriAtomExConfig_UE4				CriAtomExConfig_WASAPI
#define criAtomEx_SetDefaultConfig_UE4	criAtomEx_SetDefaultConfig_WASAPI
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_WASAPI
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_WASAPI
#elif defined(XPT_TGT_WINRT)
#define CriAtomExConfig_UE4				CriAtomExConfig_WASAPI
#define criAtomEx_SetDefaultConfig_UE4	criAtomEx_SetDefaultConfig_WASAPI
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_WASAPI
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_WASAPI
#elif defined(XPT_TGT_MACOSX)
#define CriAtomExConfig_UE4				CriAtomExConfig_MACOSX
#define criAtomEx_SetDefaultConfig_UE4	criAtomEx_SetDefaultConfig_MACOSX
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_MACOSX
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_MACOSX
#elif defined(XPT_TGT_IOS)
#define CriAtomExConfig_UE4				CriAtomExConfig_IOS
#define criAtomEx_SetDefaultConfig_UE4	criAtomEx_SetDefaultConfig_IOS
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_IOS
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_IOS
#elif defined(XPT_TGT_LINUX)
#define CriAtomExConfig_UE4			CriAtomExConfig_PULSE
#define criAtomEx_SetDefaultConfig_UE4		criAtomEx_SetDefaultConfig_PULSE
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_PULSE
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_PULSE
#elif defined(XPT_TGT_ANDROID)
#define CriAtomExConfig_UE4				CriAtomExConfig_ANDROID
#define criAtomEx_SetDefaultConfig_UE4	criAtomEx_SetDefaultConfig_ANDROID
#define criAtomEx_Initialize_UE4		criAtomEx_Initialize_ANDROID
#define criAtomEx_Finalize_UE4			criAtomEx_Finalize_ANDROID
#endif

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

/* リンクするライブラリ */
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */
#define isExistSection_FileSystem_or_isExistSection_Atom_or_isExistSection_Mana (isExistSection_FileSystem || isExistSection_Atom)
#endif

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

/* 未使用引数警告回避マクロ */
#define UNUSED(arg)						{ if ((arg) == (arg)) {} }

/* vsprintf関数の呼び分け */
#if defined(XPT_TGT_PC) || defined(XPT_TGT_XBOXONE) || defined(XPT_TGT_SCARLETT)
#define CRIWARE_VSPRINTF(a, b, c, d)	vsprintf_s(a, b, c, d)
#else
#define CRIWARE_VSPRINTF(a, b, c, d)	vsprintf(a, c, d)
#endif

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/* FCriWareStatics共有用 */
typedef TSharedPtr<class FCriWareStatics> FCriWareStaticsPtr;
typedef TSharedRef<class FCriWareStatics> FCriWareStaticsRef;

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/
/* ログ出力用 */
DEFINE_LOG_CATEGORY(LogCriWareRuntime);

/* コールバックログ出力用 */
DEFINE_LOG_CATEGORY(LogCriWare);

/* ビルド文字列 */
volatile const char criware_ue4_plugin_build_string[] =
	"\nCRIWARE UE4 Plugin Ver." CRIWARE_UE4_PLUGIN_VERSION
	" Build:" __DATE__ " " __TIME__ "\n";

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
class FCriWareStatics
{
public:
	/* コンストラクタ */
	FCriWareStatics();

	/* デストラクタ */
	~FCriWareStatics();

	/* CriWareStaticsの取得 */
	static FCriWareStaticsRef GetCriWareStatics();

	/* I/Oインターフェース */
	static CriFsIoInterfacePtr DefaultIoInterface;
	static CriFsIoInterface CustomIoInterface;

	/* 初期化処理 */
	void Initialize();

	/* 終了処理 */
	void Finalize();

	/* フレーム開始時の処理 */
	void HandleOnBeginFrame();

	/* フレーム終了時の処理 */
	void HandleOnEndFrame();

	/* サスペンド時の処理 */
	void HandleApplicationWillDeactivate();

	/* レジューム時の処理 */
	void HandleApplicationHasReactivated();

	/* モニタの無効化 */
	void DisableMonitor();

	/* デバッグ情報の表示 */
	void DrawDebugMessages(FString SortType, FString OrderType);

	/* PoolAtomComponent機能の利用フラグを返します */
	bool GetAtomPoolAtomComponent() { return AtomPoolAtomComponent; }

	/* MaxVirtualVoicesを返します*/
	int32 GetAtomMaxVirtualVoices() { return AtomMaxVirtualVoices; }

	/* UE4標準オーディオシステムを介した音声出力を行うかどうか */
	bool GetAtomUseUnrealSoundRenderer() {
#if WITH_EDITOR
		return AtomUseUnrealSoundRenderer; 
#else
		return false;
#endif
	}

	/* コンテンツディレクトリ */
	FString FsContentDir;

	/* メモリ再生ボイスプール */
	CriAtomExVoicePoolHn StandardMemoryVoicePool;

	/* ストリーム再生ボイスプール */
	CriAtomExVoicePoolHn StandardStreamingVoicePool;

	/* HCA-MXメモリ再生ボイスプール */
	CriAtomExVoicePoolHn HcaMxMemoryVoicePool;

	/* HCA-MXストリーム再生ボイスプール */
	CriAtomExVoicePoolHn HcaMxStreamingVoicePool;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* 距離係数 */
	float AtomDistanceFactor;

	/* AtomListener */
	static const int32 MAX_LISTENERS = 4;
	FAtomListener* AtomListener[MAX_LISTENERS];

	/* AtomPerformanceMonitor */
	FAtomPerformanceMonitor* AtomPerformanceMonitor;

	/* ユーザPCM出力用 */
	UAtomUnrealSoundRenderer* UnrealSoundRenderer;

	/* コールバックマネージャー */
	UAtomCallbackManager* AtomCallbackManager;

	/* ハードウェア名 */
	FString AtomHardware1;
	FString AtomHardware2;
	FString AtomHardware3;
	FString AtomHardware4;

	/* 固定で確保するASRラック */
	TArray<CriAtomExAsrRackId> AsrRackId;

	float EconomicTickMarginDistance;
	int32 EconomicTickFrequency;
	float CullingMarginDistance;

private:
	/* 共有されるCriWareStatics */
	static FCriWareStaticsPtr CriWareStaticsSingleton;

	/* 初期化カウンタ */
	int32 InitializationCount;

	/* iniファイル名 */
	FString CriWareIni;

	/* バインダ情報 */
	int32 FsNumBinders;
	int32 FsMaxBinds;

	/* ローダ情報 */
	int32 FsNumLoaders;

	/* パスの最大長 */
	int32 FsMaxPath;

	/* ログ出力を行うかどうか */
	bool FsOutputsLog;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* インゲームプレビューを行うかどうか */
	bool AtomUsesInGamePreview;

	/* ログ出力を行うかどうか */
	bool AtomOutputsLog;

	/* Atom Craftと通信を行う際に利用するバッファ数 */
	int32 AtomMonitorCommunicationBufferSize;

	/* AtomExConfigのMaxPitch値 */
	float AtomMaxPitch;

	/* 最大バーチャルボイス数 */
	int32 AtomMaxVirtualVoices;

	/* メモリ再生ボイス情報 */
	int32 AtomNumStandardMemoryVoices;
	int32 AtomStandardMemoryVoiceNumChannels;
	int32 AtomStandardMemoryVoiceSamplingRate;

	/* ストリーム再生ボイス情報 */
	int32 AtomNumStandardStreamingVoices;
	int32 AtomStandardStreamingVoiceNumChannels;
	int32 AtomStandardStreamingVoiceSamplingRate;

	/* AtomComponentをプールするかどうか */
	bool AtomPoolAtomComponent;

	/* ACFファイル名 */
	FString AtomAcfFileName;
	FString AtomAcfString;

	/* ACFデータテーブル名 */
	FString AtomAcfDataTableString;

	/* サウンドレンダラタイプ */
	CriAtomSoundRendererType AtomSoundRendererType;

	/* ASRラック設定 */
	TArray<FString> AtomAsrRackConfigs;

	/* ASR用設定 */
	int32 AtomAsrOutputChannels;

	/* HCA-MX再生用情報 */
	int32 AtomHcaMxVoiceSamplingRate;
	int32 AtomNumHcaMxMemoryVoices;
	int32 AtomHcaMxMemoryVoiceNumChannels;
	int32 AtomNumHcaMxStreamingVoices;
	int32 AtomHcaMxStreamingVoiceNumChannels;

	/* WASAPI: 排他モード用の設定 */
	bool AtomIsExclusive_WASAPI;
	int32 AtomBitsPerSample_WASAPI;
	int32 AtomSamplingRate_WASAPI;
	int32 AtomNumChannels_WASAPI;

	bool AtomUseUnrealSoundRenderer;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* D-BAS ID */
	int32 DbasId;

	/* プロファイル表示のタイプ */
	int32 ProfileType;

	/* iniファイルのロード */
	void LoadIniFile();

	/* ライブラリの初期化 */
	void InitializeLibrary();

	/* ライブラリの終了 */
	void FinalizeLibrary();

#if WITH_EDITOR
	/* ACFリロード処理用 */
	void ReloadAcf(const TArray<FString>& Args);
	IConsoleCommand *Command;
#endif
    
#if defined(XPT_TGT_IOS)
    id<NSObject> AVAudioSessionNotificationObserver;
#endif
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/
static void *criware_alloc_func(void *obj, CriUint32 size);
static void criware_free_func(void *obj, void *ptr);
static void criware_fs_logging_func(void *obj, const char* format, ...);
static void criware_atom_logging_func(void* obj, const CriChar8 *log_string);

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/
FCriWareStaticsPtr FCriWareStatics::CriWareStaticsSingleton;
FCriWarePlatform UCriWareInitializer::Platform;
FCriWareAllocator UCriWareInitializer::DefaultAllocator(criware_alloc_func, criware_free_func, nullptr);
FCriWareRuntimeSubModules UCriWareInitializer::SubModules;

#if defined(CRIWARE_UE4_LE)
void* UCriWareInitializer::CriWareDllHandle = nullptr;
uint32 UCriWareInitializer::NumInstances = 0;
#endif

FSoftObjectPath UCriWareInitializer::AcfAssetReference = nullptr;
FSoftObjectPath UCriWareInitializer::AcfDataTableAssetReference = nullptr;
UDataTable* UCriWareInitializer::AcfDataTableObject = nullptr;
uint8* UCriWareInitializer::AcfData = nullptr;
CriAtomDspSpectraHn UCriWareInitializer::dsp_hn = nullptr;
TArray<FString> UCriWareInitializer::bus_name;
TArray<int32> UCriWareInitializer::asr_rack_id;

FAtomSoundConcurrencyManager* UCriWareInitializer::ConcurrencyManager = nullptr;
TArray<TWeakObjectPtr<class AAtomAudioVolume>> UCriWareInitializer::AudioVolumeArray_Snapshot;
TArray<TWeakObjectPtr<class AAtomAudioVolume>> UCriWareInitializer::AudioVolumeArray_Bus;
TArray<TWeakObjectPtr<class AAtomAudioVolume>> UCriWareInitializer::AudioVolumeArray_Aisac;
bool UCriWareInitializer::bIsInitialised_AudioVolume = false;
#if WITH_EDITOR
FAtomListener* UCriWareInitializer::AtomListenerForPreviewEditor = nullptr;
#endif

#if STATS
/* 総メモリ確保サイズ */
DEFINE_STAT(STAT_CriWare_WorkSize);
#endif

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
UCriWareInitializer::UCriWareInitializer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	/* バージョン文字列の埋め込み */
	UNUSED(criware_ue4_plugin_build_string);

	IConsoleManager::Get().RegisterConsoleVariable(
		TEXT("cri.ShowSoundLocation"),
		0,
		TEXT("Show sound location by speaker icon when Play In Editor mode.\n")
		TEXT("0: Do not show. (default)")
		TEXT("1: Show sound location."),
		ECVF_Cheat);

	/* 
	 *リスニングポイント表示用デバッグコマンド追加予定箇所
	 */
	IConsoleManager::Get().RegisterConsoleVariable(
		TEXT("cri.ShowListeningPoint"),
		0,
		TEXT("Show listener listening point when Play In Editor mode.\n")
		TEXT("0: Do not show. (default)")
		TEXT("1: Sphere color is red.")
		TEXT("2: Sphere color is blue.")
		TEXT("3: Sphere color is green.")
		TEXT("4: Sphere color is yellow.")
		TEXT("5: Sphere color is white.")
		TEXT("Other: Sphere color is black."),
		ECVF_Cheat);

	FString Adx2ProfileDefaultValue = TEXT("0 id descending");
	IConsoleManager::Get().RegisterConsoleVariable(TEXT("cri.ShowProfileInfo"),
		*Adx2ProfileDefaultValue,
		TEXT("Show ADX2 sound profile info.\n")
		TEXT(" (Second argument: 0:HideProfile, 1:ShowProfile)\n")
		TEXT(" (Third argument: SortType: id, distance, name, time)\n")
		TEXT(" (Forth argument: OrderType: ascending, descending)\n"),
		ECVF_Cheat);

	AcfAssetReference.Reset();
	AcfDataTableAssetReference.Reset();
	AcfData = nullptr;
	dsp_hn = nullptr;
	bus_name.Empty();

	ConcurrencyManager = new FAtomSoundConcurrencyManager();
	AudioVolumeArray_Snapshot.Empty();
	AudioVolumeArray_Bus.Empty();
	AudioVolumeArray_Aisac.Empty();
}

/* コンテンツパスの取得 */
FString UCriWareInitializer::GetContentDir()
{
	/* コンテンツディレクトリのパスを返す */
	return FCriWareStatics::GetCriWareStatics()->FsContentDir;
}

FString UCriWareInitializer::ConvertToAbsolutePathForExternalAppForRead(const TCHAR* Filename)
{
	/* ファイルサイズの取得 */
	/* 備考）ファイルサーバ使用時に、この処理により	*/
	/* 　　　ファイルがローカルにコピーされる。		*/
	const int64 FileSize = IFileManager::Get().FileSize(Filename);
	if (FileSize < 0) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("Could not find file %s."), Filename);
	}

	/* フルパスへ変換 */
	FString AbsolutePath = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(Filename);

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

#if defined(XPT_TGT_IOS)
    AbsolutePath.ReplaceInline(TEXT("../"), TEXT(""));
    AbsolutePath.ReplaceInline(TEXT(".."), TEXT(""));
    AbsolutePath.ReplaceInline(FPlatformProcess::BaseDir(), TEXT(""));

    // if filehostip exists in the command line, cook on the fly read path should be used
    FString Value;

    // Cache this value as the command line doesn't change...
    static bool bHasHostIP = FParse::Value(FCommandLine::Get(), TEXT("filehostip"), Value) || FParse::Value(FCommandLine::Get(), TEXT("streaminghostip"), Value);
    if (bHasHostIP)
    {
        static FString ReadPathBase = FString([NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]) + TEXT("/");
        AbsolutePath = ReadPathBase + AbsolutePath;
    }
    else
    {
        static FString ReadPathBase = FString([[NSBundle mainBundle] bundlePath]) + TEXT("/cookeddata/");
        AbsolutePath = ReadPathBase + AbsolutePath;
    }
#endif

	return AbsolutePath;
}

/* メモリ再生ボイスプールの取得 */
CriAtomExVoicePoolHn UCriWareInitializer::GetMemoryVoicePool()
{
	return FCriWareStatics::GetCriWareStatics()->StandardMemoryVoicePool;
}

/* ストリーム再生ボイスプールの取得 */
CriAtomExVoicePoolHn UCriWareInitializer::GetStreamingVoicePool()
{
	return FCriWareStatics::GetCriWareStatics()->StandardStreamingVoicePool;
}

FSoftObjectPath UCriWareInitializer::GetAtomConfigAssetReference()
{
	return AcfAssetReference;
}

/* リスナの取得 */
CriAtomEx3dListenerHn UCriWareInitializer::GetListener(int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		return AtomListener->GetListenerHandle();
	} else {
		return nullptr;
	}
}

/* 距離係数の取得 */
float UCriWareInitializer::GetDistanceFactor()
{
	return FCriWareStatics::GetCriWareStatics()->AtomDistanceFactor;
}

/* 出力サンプリングレートの取得 */
int32 UCriWareInitializer::GetOutputSamplingRate()
{
	return CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
}

/* リスナの有効化／無効化 */
void UCriWareInitializer::SetListenerAutoUpdateEnabled(bool bEnabled, int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		AtomListener->SetAutoUpdateEnabled(bEnabled);
	}
}

/* リスナ位置の指定 */
void UCriWareInitializer::SetListenerLocation(FVector Location, int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		AtomListener->SetListenerLocation(Location);
	}
}

/* リスナの向きの指定 */
void UCriWareInitializer::SetListenerRotation(FRotator Rotation, int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		AtomListener->SetListenerRotation(Rotation);
	}
}

/* リスナ位置の取得 */
FVector UCriWareInitializer::GetListenerLocation(int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		return AtomListener->GetListenerLocation();
	} else {
		return FVector::ZeroVector;
	}
}

/* リスニングポイントの取得 */
FVector UCriWareInitializer::GetListeningPoint(int32 PlayerIndex)
{
	FAtomListener* AtomListener = FAtomListener::GetListener(PlayerIndex);
	if (AtomListener != nullptr) {
		return AtomListener->GetListeningPoint();
	} else {
		return FVector::ZeroVector;
	}
}

/* ACFがロード済みかどうかの判定 */
bool UCriWareInitializer::IsAcfLoaded()
{
	if (AcfData != nullptr) {
		return true;
	} else {
		return false;
	}
}

void UCriWareInitializer::DisableMonitor()
{
	FCriWareStatics::GetCriWareStatics()->DisableMonitor();
}

float UCriWareInitializer::GetEconomicTickDistanceMargin()
{
	return FCriWareStatics::GetCriWareStatics()->EconomicTickMarginDistance;
}

int32 UCriWareInitializer::GetEconomicTickFrequency()
{
	return FCriWareStatics::GetCriWareStatics()->EconomicTickFrequency;
}

float UCriWareInitializer::GetCullDistanceMargin()
{
	return FCriWareStatics::GetCriWareStatics()->CullingMarginDistance;
}

//~ DEPRECATED functions

float UCriWareInitializer::GetEconomicTickMarginDistance()
{
	return GetEconomicTickDistanceMargin();
}

float UCriWareInitializer::GetCullingMarginDistance()
{
	return GetCullDistanceMargin();
}

//~ end of DEPRECATED functions

void UCriWareInitializer::PostInitProperties()
{
	Super::PostInitProperties();

#if WITH_EDITOR
	/* エディタを使用する場合は標準の音声出力も有効にしておく。                     */
	/* →Unreal Editor上でクリック音等を再生するために必要。                        */
	/* ※XAudio2は多重初期化を許可しているので、Windows上でエディタを使用する場合、 */
	/* 　Unreal Engine標準のAudioDeviceが別途初期化されても大丈夫なはず。           */
#elif CRIWARE_WITH_UE4_SOUND || CRIWARE_USE_PCM_OUTPUT
	/* プラットフォームによっては CRIWARE_WITH_UE4_SOUND の定義を無効化して、下のelse分岐に通す */
#else
	/* UE4とADX2のサウンド初期化が競合するプラットフォームでは、デフォルト状態で-nosoundを呼ぶ必要がある。
	 * 過去、Linux では -nosound を呼ぶ必要があった。UE4.25現在ではそのようなプラットフォームは確認できていない */
	FCommandLine::Append(TEXT(" -nosound "));
#endif
	/* 初期化処理の実行 */
	SubModules.OnPreInitializeLibraries();

	FCriWareStatics::GetCriWareStatics()->Initialize();

	SubModules.OnPostInitializeLibraries();
}

void UCriWareInitializer::BeginDestroy()
{
	/* 終了処理の実行 */
	SubModules.OnPreFinalizeLibraries();

	FCriWareStatics::GetCriWareStatics()->Finalize();

	SubModules.OnPostFinalizeLibraries();

	delete ConcurrencyManager;

	Super::BeginDestroy();
}

int32 UCriWareInitializer::GetPooledAtomComponentNum()
{
	if (!FCriWareStatics::GetCriWareStatics()->GetAtomPoolAtomComponent()) {
		return 0;
	}
	
	return FCriWareStatics::GetCriWareStatics()->GetAtomMaxVirtualVoices();
}

/* コンストラクタ */
FCriWareStatics::FCriWareStatics()
{
	InitializationCount = 0;
	FsNumBinders = FS_NUM_BINDERS;
	FsMaxBinds = FS_MAX_BINDS;
	FsNumLoaders = FS_NUM_LOADERS;
	FsMaxPath = FS_MAX_PATH;
	FsOutputsLog = FS_OUTPUT_LOG;
	AtomUsesInGamePreview = ATOM_USES_INGAME_PREVIEW;
	AtomOutputsLog = ATOM_OUTPUT_LOG;
	AtomMonitorCommunicationBufferSize =  ATOM_MONITOR_COMMUNICATION_BUFFER;
	AtomMaxPitch = ATOM_MAX_PITCH;
	AtomMaxVirtualVoices = ATOM_MAX_VIRTUAL_VOICES;
	AtomNumStandardMemoryVoices = ATOM_NUM_STANDARD_MEMORY_VOICES;
	AtomStandardMemoryVoiceNumChannels = ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	AtomStandardMemoryVoiceSamplingRate = ATOM_STANDARD_MEMORY_VOICE_SAMPLING_RATE;
	AtomNumStandardStreamingVoices = ATOM_NUM_STANDARD_STREAMING_VOICES;
	AtomStandardStreamingVoiceNumChannels = ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;
	AtomStandardStreamingVoiceSamplingRate = ATOM_STANDARD_STREAMING_VOICE_SAMPLING_RATE;
	AtomPoolAtomComponent = false;
	AtomDistanceFactor = ATOM_DISTANCE_FACTOR;
	EconomicTickMarginDistance = CRIATOM_DEFAULT_ECONOMICTICK_MARGIN_DISTANCE;
	EconomicTickFrequency = CRIATOM_DEFAULT_ECONOMICTICK_FREQUENCY;
	CullingMarginDistance = CRIATOM_DEFAULT_CULLING_MARGIN_DISTANCE;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	DbasId = -1;
	StandardMemoryVoicePool    = NULL;
	StandardStreamingVoicePool = NULL;
	HcaMxMemoryVoicePool       = NULL;
	HcaMxStreamingVoicePool    = NULL;
	FMemory::Memset(AtomListener, 0, sizeof(AtomListener));
	AtomPerformanceMonitor = nullptr;

	AtomUseUnrealSoundRenderer = ATOM_USE_UNREAL_SOUND_RENDERER;
	UnrealSoundRenderer = nullptr;
	AtomCallbackManager = nullptr;

	AsrRackId.Reset();

#if WITH_EDITOR
	Command = nullptr;
#endif

	/* サウンドレンダラタイプ */
	AtomSoundRendererType = CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;

	/* ASRラック設定 */
	AtomAsrRackConfigs.Reset();

	/* ASR用設定 */
	AtomAsrOutputChannels = CRIWARE_UE4_MAX_CHANNELS;
 
	/* HCA-MX用の設定 */
	AtomHcaMxVoiceSamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	AtomNumHcaMxMemoryVoices = 0;
	AtomHcaMxMemoryVoiceNumChannels = ATOM_STANDARD_MEMORY_VOICE_NUM_CHANNELS;
	AtomNumHcaMxStreamingVoices = 0;
	AtomHcaMxStreamingVoiceNumChannels = ATOM_STANDARD_STREAMING_VOICE_NUM_CHANNELS;

	/* WASAPI用の設定 */
	AtomIsExclusive_WASAPI = false;
	AtomBitsPerSample_WASAPI = 24;
	AtomSamplingRate_WASAPI = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
	AtomNumChannels_WASAPI = CRIATOM_DEFAULT_OUTPUT_CHANNELS;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
}

/* デストラクタ */
FCriWareStatics::~FCriWareStatics()
{
}

/* FCriWareStaticsの取得 */
FCriWareStaticsRef FCriWareStatics::GetCriWareStatics()
{
	/* 実体の有無をチェック */
	if (!CriWareStaticsSingleton.IsValid()) {
		/* 実体がなければ確保 */
		CriWareStaticsSingleton = MakeShareable(new FCriWareStatics);
	}

	/* 参照ポインタを返す */
	return CriWareStaticsSingleton.ToSharedRef();
}

/* 初期化処理 */
void FCriWareStatics::Initialize()
{
	/* 初期化カウンタの更新 */
	InitializationCount++;
	if (InitializationCount != 1) {
		return;
	}

	/* iniファイルの読み込み */
	LoadIniFile();

	/* ライブラリの初期化 */
	InitializeLibrary();
    
#if defined(XPT_TGT_IOS)
    // AVAudioSession interruption notifications [IOS] only
    AVAudioSessionNotificationObserver = [[NSNotificationCenter defaultCenter] addObserverForName:AVAudioSessionInterruptionNotification object:nil queue:nil usingBlock: ^ (NSNotification *notification)
    {
        // the audio context should resume immediately after interrupt, if suspended

        switch ([[[notification userInfo] objectForKey:AVAudioSessionInterruptionTypeKey] unsignedIntegerValue])
        {
        case AVAudioSessionInterruptionTypeBegan:
            criAtomEx_StopSound_IOS();
            break;

        case AVAudioSessionInterruptionTypeEnded:

            NSNumber * interruptionOption = [[notification userInfo] objectForKey:AVAudioSessionInterruptionOptionKey];
            if (interruptionOption != nil && interruptionOption.unsignedIntegerValue > 0)
            {
                criAtomEx_StartSound_IOS();
            }
            break;
        }
    }];
#endif

	/* 定期処理の登録 */
	FCoreDelegates::OnBeginFrame.AddRaw(this, &FCriWareStatics::HandleOnBeginFrame);
	FCoreDelegates::OnEndFrame.AddRaw(this, &FCriWareStatics::HandleOnEndFrame);

	/* サスペンド／レジューム時の処理を登録 */
	FCoreDelegates::ApplicationWillDeactivateDelegate.AddRaw(this, &FCriWareStatics::HandleApplicationWillDeactivate);
	FCoreDelegates::ApplicationHasReactivatedDelegate.AddRaw(this, &FCriWareStatics::HandleApplicationHasReactivated);

#if WITH_EDITOR
	/* ACFリロードコマンドの登録 */
	Command = IConsoleManager::Get().RegisterConsoleCommand(
		TEXT("cri.ReloadAcf"),
		TEXT("Change the loaded ACF to the specified asset."),
		FConsoleCommandWithArgsDelegate::CreateRaw(this, &FCriWareStatics::ReloadAcf),
		ECVF_Default
	);
#endif

	UAtomStatics::SetCurrentDistanceFactor(this->AtomDistanceFactor);
}

/* iniファイルのロード */
void FCriWareStatics::LoadIniFile()
{
	/* 設定値の読み込み */
	FText ErrorMessage;
	FString EngineIniFilePath;

	/* CriWare.iniが存在する場合は設定値の読み込みを行う */
	/* [Atom]、[FileSystem]、[Mana]のカテゴリの設定値もGConfigに格納しておく                                   */
	GConfig->LoadGlobalIniFile(CriWareIni, TEXT("CriWare"));
	GConfig->LoadGlobalIniFile(EngineIniFilePath, TEXT("Engine"));
	FString SectionName_FileSystem = "FileSystem";
	FString SectionName_Atom = "Atom";
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	FString SectionName_UClassOld = "/Script/CriWareEditor.CriWarePluginSettings";
	FString SectionName_UClass = "/Script/CriWareRuntime.CriWarePluginSettings";
	TArray<FString> Section_FileSystem;
	TArray<FString> Section_Atom;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	TArray<FString> Section_UClass;

	/* CriWare.iniを作成していた場合への対応 */
	/* [FileSystem]、[Atom]、[Mana]カテゴリが存在した場合は該当するパラメータをPluginパラメータとして使用 */
	/* 上記カテゴリが存在しない場合はEngine.iniに記載しているパラメータを使用する */
	bool isExistSection_FileSystem = GConfig->GetSection(*SectionName_FileSystem, Section_FileSystem, CriWareIni);
	bool isExistSection_Atom = GConfig->GetSection(*SectionName_Atom, Section_Atom, CriWareIni);
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	bool isExistSection_UClass = GConfig->GetSection(*SectionName_UClass, Section_UClass, EngineIniFilePath);
	if (!isExistSection_UClass) {
		SectionName_UClass = SectionName_UClassOld;
		isExistSection_UClass = GConfig->GetSection(*SectionName_UClass, Section_UClass, EngineIniFilePath);
	}

	if ((isExistSection_FileSystem_or_isExistSection_Atom_or_isExistSection_Mana) && !isExistSection_UClass){
		/* 手動でiniファイルを記述していた場合はカテゴリ名を[FileSystem]、[Atom]、[Mana]としてCriWareを初期化 */
		SectionName_FileSystem = "FileSystem";
		SectionName_Atom = "Atom";
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	}
	else if(!(isExistSection_FileSystem_or_isExistSection_Atom_or_isExistSection_Mana) && isExistSection_UClass){
		GConfig->LoadGlobalIniFile(CriWareIni, TEXT("Engine"));

		/* iniファイルの自動生成に移行済みの場合はカテゴリ名を[/Script/CriWareRuntime.CriWarePluginSettings]としてCriWareを初期化 */
		SectionName_FileSystem = SectionName_UClass;
		SectionName_Atom = SectionName_UClass;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	} else if ((isExistSection_FileSystem_or_isExistSection_Atom_or_isExistSection_Mana) && isExistSection_UClass){
		ErrorMessage = LOCTEXT("FailedToMarkForAddConfigFileError", "CRIWARE Plugin Error:\nBoth new and old format settings was found in configuration files.\nPlease follow this instructions to initialize CRIWARE plugin correctly.\n\nIn order to use the new format:\n1. Delete old configuration files (*CriWare.ini).\n\nIn order to use the old format:\n1. Open new configuration file (*Engine.ini) by text editor.\n2. Remove section [/Script/CriWareRuntime.CriWarePluginSettings].\n\n[Appendix]\nConfiguration files will be in the following directories:\n- Engine/Config/\n- Engine/Platform/\n- [ProjectDir]/Config/\n- [ProjectDir]/Config/[Platform]/");
	}

	// show errors, if any
	if (!ErrorMessage.IsEmpty()) {
		const CriChar8 *errmsg;

		/* エラー文字列の表示 */
		/* Display an error message */
		errmsg = "CRIWARE Plugin Error:\nBoth new and old format settings was found in configuration files.\nPlease follow this instructions to initialize CRIWARE plugin correctly.\n\nIn order to use the new format:\n1. Delete old configuration files (*CriWare.ini).\n\nIn order to use the old format:\n1. Open new configuration file (*Engine.ini) by text editor.\n2. Remove section [/Script/CriWareRuntime.CriWarePluginSettings].\n\n[Appendix]\nConfiguration files will be in the following directories:\n- Engine/Config/\n- Engine/Platform/\n- [ProjectDir]/Config/\n- [ProjectDir]/Config/[Platform]/";

		/* ログ出力 */
		UE_LOG(LogCriWareRuntime, Error, TEXT("%s"), UTF8_TO_TCHAR(errmsg));
		FMessageDialog::Open(EAppMsgType::Ok, ErrorMessage);
	}

	/* === FileSystem関連パラメータ === */

	/* コンテンツディレクトリパス指定の取得 */
	GConfig->GetString(*SectionName_FileSystem, TEXT("ContentDir"), FsContentDir, CriWareIni);

	/* フルパスかどうかチェック */
	if ((FsContentDir.StartsWith(TEXT("/")) == false)
		&& (FsContentDir.Contains(TEXT(":")) == false)) {
		/* フルパスでない場合はゲームディレクトリパスを付加 */
		FsContentDir = FPaths::ProjectContentDir() + FsContentDir;
	}

	/* パスの終端に「/」を付加 */
	if (FsContentDir.EndsWith(TEXT("/")) == false) {
		FsContentDir += "/";
	}

	/* バインダ情報の取得 */
	GConfig->GetInt(*SectionName_FileSystem, TEXT("NumBinders"), FsNumBinders, CriWareIni);
	GConfig->GetInt(*SectionName_FileSystem, TEXT("MaxBinds"), FsMaxBinds, CriWareIni);

	/* ローダ情報の取得 */
	GConfig->GetInt(*SectionName_FileSystem, TEXT("NumLoaders"), FsNumLoaders, CriWareIni);

	/* パスの最大長の取得 */
	GConfig->GetInt(*SectionName_FileSystem, TEXT("MaxPath"), FsMaxPath, CriWareIni);

	/* ログ出力を行うかどうか */
	if (!GConfig->GetBool(*SectionName_FileSystem, TEXT("OutputsLog"), FsOutputsLog, CriWareIni)){
		GConfig->GetBool(*SectionName_FileSystem, TEXT("OutputsLogFileSystem"), FsOutputsLog, CriWareIni);
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* === Atom関連パラメータ === */

	/* インゲームプレビューを使用するかどうか */
	GConfig->GetBool(*SectionName_Atom, TEXT("UsesInGamePreview"), AtomUsesInGamePreview, CriWareIni);

	/* ログ出力を行うかどうか */
	if (!GConfig->GetBool(*SectionName_Atom, TEXT("OutputsLog"), AtomOutputsLog, CriWareIni)) {
		GConfig->GetBool(*SectionName_Atom, TEXT("OutputsLogAtom"), AtomOutputsLog, CriWareIni);
	}

	GConfig->GetInt(*SectionName_Atom, TEXT("MonitorCommunicationBufferSize"), AtomMonitorCommunicationBufferSize, CriWareIni);

	GConfig->GetFloat(*SectionName_Atom, TEXT("MaxPitch"), AtomMaxPitch, CriWareIni);

	/* ASR 用出力チャンネル数の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("AsrOutputChannels"), AtomAsrOutputChannels, CriWareIni);
	/* プラットフォームがサポートする最大ch数でクリップする */
	if (AtomAsrOutputChannels > CRIWARE_UE4_MAX_CHANNELS) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("ASR Output Channels was clipped to %d."), CRIWARE_UE4_MAX_CHANNELS);
		AtomAsrOutputChannels = CRIWARE_UE4_MAX_CHANNELS;
	}

	/* 最大バーチャルボイス数の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("MaxVirtualVoices"), AtomMaxVirtualVoices, CriWareIni);

	/* メモリ再生用ボイス情報の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("NumStandardMemoryVoices"), AtomNumStandardMemoryVoices, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("StandardMemoryVoiceSamplingRate"), AtomStandardMemoryVoiceSamplingRate, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("StandardMemoryVoiceNumChannels"), AtomStandardMemoryVoiceNumChannels, CriWareIni);

	/* プラットフォームがサポートする最大ch数でクリップする */
	if (AtomStandardMemoryVoiceNumChannels > CRIWARE_UE4_MAX_CHANNELS) {
		AtomStandardMemoryVoiceNumChannels = CRIWARE_UE4_MAX_CHANNELS;
	}

	/* ストリーム再生用ボイス情報の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("NumStandardStreamingVoices"), AtomNumStandardStreamingVoices, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("StandardStreamingVoiceSamplingRate"), AtomStandardStreamingVoiceSamplingRate, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("StandardStreamingVoiceNumChannels"), AtomStandardStreamingVoiceNumChannels, CriWareIni);

	/* プラットフォームがサポートする最大ch数でクリップする */
	if (AtomStandardStreamingVoiceNumChannels > CRIWARE_UE4_MAX_CHANNELS) {
		AtomStandardStreamingVoiceNumChannels = CRIWARE_UE4_MAX_CHANNELS;
	}

	/* AtomComponentをプールするかどうか */
	GConfig->GetBool(*SectionName_Atom, TEXT("PoolAtomComponent"), AtomPoolAtomComponent, CriWareIni);

	/* サウンドレンダラタイプの取得 */
	int32 SoundRendererType;
	GConfig->GetInt(*SectionName_Atom, TEXT("SoundRendererType"), SoundRendererType, CriWareIni);
	AtomSoundRendererType = static_cast<CriAtomSoundRendererType>(SoundRendererType);

	/* 最終出力には必ずハードウェアボイスをアサインする */
	switch (AtomSoundRendererType) {
		case CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW1:
		case CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW2:
		case CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW3:
		case CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW4:
		break;

		default:
		AtomSoundRendererType = CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;
		break;
	}

#if defined(XPT_TGT_PC)
	/* ハードウェア情報の取得 */
	GConfig->GetString(*SectionName_Atom, TEXT("Hardware1"), AtomHardware1, CriWareIni);
	GConfig->GetString(*SectionName_Atom, TEXT("Hardware2"), AtomHardware2, CriWareIni);
	GConfig->GetString(*SectionName_Atom, TEXT("Hardware3"), AtomHardware3, CriWareIni);
	GConfig->GetString(*SectionName_Atom, TEXT("Hardware4"), AtomHardware4, CriWareIni);
#endif

	/* ASRラック設定の取得 */
	GConfig->GetArray(*SectionName_Atom, TEXT("AsrRackConfig"), AtomAsrRackConfigs, CriWareIni);

	GConfig->GetFloat(*SectionName_Atom, TEXT("EconomicTickMarginDistance"), EconomicTickMarginDistance, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("EconomicTickFrequency"), EconomicTickFrequency, CriWareIni);
	GConfig->GetFloat(*SectionName_Atom, TEXT("CullingMarginDistance"), CullingMarginDistance, CriWareIni);

	/* HCA-MXサンプリングレートの取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("HcaMxVoiceSamplingRate"), AtomHcaMxVoiceSamplingRate, CriWareIni);

	/* HCA-MXメモリ再生用ボイス情報の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("NumHcaMxMemoryVoices"), AtomNumHcaMxMemoryVoices, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("HcaMxMemoryVoiceNumChannels"), AtomHcaMxMemoryVoiceNumChannels, CriWareIni);

	/* プラットフォームがサポートする最大ch数でクリップする */
	if (AtomHcaMxMemoryVoiceNumChannels > CRIWARE_UE4_MAX_CHANNELS) {
		AtomHcaMxMemoryVoiceNumChannels = CRIWARE_UE4_MAX_CHANNELS;
	}

	/* HCA-MXストリーム再生用ボイス情報の取得 */
	GConfig->GetInt(*SectionName_Atom, TEXT("NumHcaMxStreamingVoices"), AtomNumHcaMxStreamingVoices, CriWareIni);
	GConfig->GetInt(*SectionName_Atom, TEXT("HcaMxStreamingVoiceNumChannels"), AtomHcaMxStreamingVoiceNumChannels, CriWareIni);

	/* プラットフォームがサポートする最大ch数でクリップする */
	if (AtomHcaMxStreamingVoiceNumChannels > CRIWARE_UE4_MAX_CHANNELS) {
		AtomHcaMxStreamingVoiceNumChannels = CRIWARE_UE4_MAX_CHANNELS;
	}

	/* ACFファイル名の取得 */
	/* 備考）互換性維持のための処理。 */
	GConfig->GetString(*SectionName_Atom, TEXT("AcfFileName"), AtomAcfFileName, CriWareIni);

	/* ACFアセット名の取得 */
	GConfig->GetString(*SectionName_Atom, TEXT("AtomConfig"), AtomAcfString, CriWareIni);

	/* ACFアセット名の取得 */
	GConfig->GetString(*SectionName_Atom, TEXT("AcfDataTable"), AtomAcfDataTableString, CriWareIni);

	/* 距離係数の取得 */
	GConfig->GetFloat(*SectionName_Atom, TEXT("DistanceFactor"), AtomDistanceFactor, CriWareIni);
	if (AtomDistanceFactor <= 0.0f) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Invalid distance factor."));
		AtomDistanceFactor = ATOM_DISTANCE_FACTOR;
	}

	/* WASAPI: 排他モード設定の取得 */
	GConfig->GetBool(*SectionName_FileSystem, TEXT("WASAPI_IsExclusive"), AtomIsExclusive_WASAPI, CriWareIni);
	GConfig->GetInt(*SectionName_FileSystem, TEXT("WASAPI_BitsPerSample"), AtomBitsPerSample_WASAPI, CriWareIni);
	GConfig->GetInt(*SectionName_FileSystem, TEXT("WASAPI_SamplingRate"), AtomSamplingRate_WASAPI, CriWareIni);
	GConfig->GetInt(*SectionName_FileSystem, TEXT("WASAPI_NumChannels"), AtomNumChannels_WASAPI, CriWareIni);
	if (AtomIsExclusive_WASAPI != false) {
		/* 備考）現状、PCMフォーマットは16bit or 24bitしか使用できない。 */
		AtomBitsPerSample_WASAPI = ((AtomBitsPerSample_WASAPI <= 16) ? 16 : 24);
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* === パラメータの補正（初期化に失敗するケースを排除） === */

	/* バーチャルボイス数の補正 */
	int32 RequiredVoices = (AtomNumStandardStreamingVoices + AtomNumStandardMemoryVoices
		+ AtomNumHcaMxStreamingVoices + AtomNumHcaMxMemoryVoices) * 2;
	if (AtomMaxVirtualVoices < RequiredVoices) {
		AtomMaxVirtualVoices = RequiredVoices;
	}

	/* ファイル数の補正 */
	int32 RequiredFiles = AtomNumStandardStreamingVoices + AtomNumHcaMxStreamingVoices + 1;
	if (FsNumBinders < RequiredFiles) {
		FsNumBinders = RequiredFiles;
	}
	if (FsMaxBinds < RequiredFiles) {
		FsMaxBinds = RequiredFiles;
	}
	if (FsNumLoaders < RequiredFiles) {
		FsNumLoaders = RequiredFiles;
	}

#if WITH_EDITOR
	/* 【暫定】エディタ実行時はファイル関連リソースを多めに確保する。				*/
	/* →PIE時はGCが行われないため、Shipping時よりも多くのリソースを必要とする。	*/
	/* ※将来的にはこれらのリソースは上限なく確保できるようになる予定。				*/
	FsNumBinders += 128;
	FsMaxBinds += 128;
	FsNumLoaders += 128;
#endif
}

/* ライブラリの初期化 */
void FCriWareStatics::InitializeLibrary()
{
#if defined(CRIWARE_UE4_LE)

#if PLATFORM_WINDOWS
#if PLATFORM_64BITS
	FString WinDir = TEXT("x64");
	FString DLLName = TEXT("cri_ware_pcx64_le.dll");
#else
	FString WinDir = TEXT("x86");
	FString DLLName = TEXT("cri_ware_pcx86_le.dll");
#endif

	if (UCriWareInitializer::NumInstances == 0) {
		if (!UCriWareInitializer::CriWareDllHandle)
		{
			FString PluginPath = FString::Printf(TEXT("Plugins/Runtime/CriWare/CriWare"));
			FString CorePath = FPaths::Combine(*(FPaths::ProjectDir()), PluginPath);
			if (!FPaths::DirectoryExists(CorePath)) {
				CorePath = FPaths::Combine(*(FPaths::EngineDir()), PluginPath);
			}
			FString RootDllPath = CorePath / TEXT("Source/ThirdParty/CriWare/cri/pc/libs") / WinDir;
			FPlatformProcess::PushDllDirectory(*RootDllPath);
			UCriWareInitializer::CriWareDllHandle = FPlatformProcess::GetDllHandle(*(RootDllPath / DLLName));
			FPlatformProcess::PopDllDirectory(*RootDllPath);
			if (!UCriWareInitializer::CriWareDllHandle) {
				UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load CriWare Plugin DLL."));
				return;
			}
		}
	}
	UCriWareInitializer::NumInstances++;

#endif

#endif

	/* エラーコールバックの生成 */
	UCriWareError::CreateInstance();

	/* アロケータの登録 */
	criFs_SetUserAllocator(criware_alloc_func, criware_free_func, NULL);
	criAtomEx_SetUserAllocator(criware_alloc_func, criware_free_func, NULL);

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* ライブラリの初期化設定を作るための関数 */
	auto SetAtomConfigLambda = [this](auto& atom_config, CriFsConfig& fs_config) {
		atom_config.atom_ex.max_virtual_voices = AtomMaxVirtualVoices;
		atom_config.atom_ex.max_pitch = AtomMaxPitch;
		atom_config.atom_ex.max_parameter_blocks = AtomMaxVirtualVoices * 16;
		atom_config.atom_ex.max_voice_limit_groups = AtomMaxVirtualVoices;
		atom_config.atom_ex.max_categories = AtomMaxVirtualVoices;
		atom_config.atom_ex.max_sequences = AtomMaxVirtualVoices;
		atom_config.atom_ex.max_tracks = AtomMaxVirtualVoices * 2;
		atom_config.atom_ex.max_track_items = AtomMaxVirtualVoices * 2;
		atom_config.atom_ex.max_voice_limit_groups = CRIWARE_UE4_MAX_VOICE_LIMIT_GROUPS;
		atom_config.atom_ex.max_categories = CRIWARE_UE4_MAX_CATEGORIES;
		atom_config.atom_ex.categories_per_playback = CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK;
		atom_config.asr.output_channels = AtomAsrOutputChannels;
		atom_config.asr.output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
		atom_config.asr.num_buses = CRIATOMEXASR_MAX_BASES;
		atom_config.asr.sound_renderer_type = AtomSoundRendererType;
		atom_config.hca_mx.output_channels = CRIWARE_UE4_MAX_CHANNELS;
		atom_config.hca_mx.output_sampling_rate = AtomHcaMxVoiceSamplingRate;
		atom_config.hca_mx.max_sampling_rate = AtomHcaMxVoiceSamplingRate;
		atom_config.hca_mx.max_voices = AtomNumHcaMxMemoryVoices + AtomNumHcaMxStreamingVoices;
		atom_config.hca_mx.num_mixers = ((atom_config.hca_mx.max_voices > 0) ? 1 : 0);

		fs_config.num_binders = FsNumBinders;
		fs_config.max_binds = FsMaxBinds;
		fs_config.num_loaders = FsNumLoaders;
		fs_config.max_files = 0;
		fs_config.max_path = FsMaxPath;
		atom_config.atom_ex.fs_config = &fs_config;

#if defined(XPT_TGT_STADIA)
		/* 音途切れ(プチノイズ)を抑えるために必要 */
		atom_config.latency_usec = 80000;
#endif
	};

#if defined(XPT_TGT_PC)
	if (AtomIsExclusive_WASAPI != false) {
		/* WASAPIの出力フォーマットを指定 */
		WAVEFORMATEXTENSIBLE ExclusiveFormat;
		FMemory::Memset(&ExclusiveFormat, 0, sizeof(ExclusiveFormat));
		WAVEFORMATEX *MixerFormat = (WAVEFORMATEX *)&ExclusiveFormat;
		MixerFormat->wFormatTag = WAVE_FORMAT_EXTENSIBLE;
		MixerFormat->nChannels = (uint16)AtomNumChannels_WASAPI;
		MixerFormat->nSamplesPerSec = (uint32)AtomSamplingRate_WASAPI;
		MixerFormat->wBitsPerSample = ((AtomBitsPerSample_WASAPI > 16) ? 32 : 16);
		MixerFormat->nBlockAlign = MixerFormat->wBitsPerSample / 8 * MixerFormat->nChannels;
		MixerFormat->nAvgBytesPerSec = MixerFormat->nSamplesPerSec * MixerFormat->nBlockAlign;
		MixerFormat->cbSize = 22;
		ExclusiveFormat.Samples.wValidBitsPerSample = AtomBitsPerSample_WASAPI;
		ExclusiveFormat.SubFormat = KSDATAFORMAT_SUBTYPE_PCM;
		criAtom_SetAudioClientFormat_WASAPI(MixerFormat);

		/* 排他モードを有効化 */
		criAtom_SetAudioClientShareMode_WASAPI(AUDCLNT_SHAREMODE_EXCLUSIVE);
	}
#endif

	// Platform specific module: Atom initializer.
	auto PlatformAtom = UCriWareInitializer::Platform.Atom();
	if (PlatformAtom) {
		PlatformAtom->InitializeAtomLibrary();
	}

	/* ライブラリの初期化 */
	{
		CriFsConfig fs_config;
		criFs_SetDefaultConfig(&fs_config);
		/* When you set num_installers 1 over, an CRI installer thread is made. */
		fs_config.num_installers = 0;

		if (!GetAtomUseUnrealSoundRenderer()) {
			CriAtomExConfig_UE4 atom_config;
			criAtomEx_SetDefaultConfig_UE4(&atom_config);
			SetAtomConfigLambda(atom_config, fs_config);
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */
			criAtomEx_Initialize_UE4(&atom_config, NULL, 0);
#endif
		}
		else {
#if defined(XPT_TGT_PC)
			CriAtomExConfigForUserPcmOutput atom_config;
			criAtomEx_SetDefaultConfigForUserPcmOutput(&atom_config);
			SetAtomConfigLambda(atom_config, fs_config);
			criAtomEx_InitializeForUserPcmOutput(&atom_config, NULL, 0);
#endif
		}
	}

#if CRIWARE_USE_MCDSP
	criAtomExAsr_RegisterEffectInterface(criAfxMcDSPAE600_GetInterfaceWithVersion());
	criAtomExAsr_RegisterEffectInterface(criAfxMcDSPFutzBox_GetInterfaceWithVersion());
	criAtomExAsr_RegisterEffectInterface(criAfxMcDSPML4000ML1_GetInterfaceWithVersion());
	criAtomExAsr_RegisterEffectInterface(criAfxMcDSPSA2_GetInterfaceWithVersion());
#endif

	/* パッドスピーカー数のカウントを開始 */
	int32 NumPadSpeakers = 0;

	/* CriWare設定にて指定された各ASRラックコンフィグに則ってASRラックを作成する */
	for (const FString& ItemString : AtomAsrRackConfigs) {
		/* ラック設定の初期化 */
		CriAtomExAsrRackConfig AsrRackConfig;
		criAtomExAsrRack_SetDefaultConfig(&AsrRackConfig);
		AsrRackConfig.output_channels = AtomAsrOutputChannels;
		AsrRackConfig.output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
		AsrRackConfig.num_buses = CRIATOMEXASR_MAX_BASES;
		AsrRackConfig.sound_renderer_type = CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

		/* サウンドレンダラタイプ指定の有無をチェック */
		int32 Pos = ItemString.Find(TEXT("SoundRendererType="));
		int32 SoundRendererTypeIndex = 0;
		if (Pos > 0) {
			FString Value = ItemString.Mid(Pos + 18);
			SoundRendererTypeIndex = FCString::Atoi(*Value);
			switch (SoundRendererTypeIndex) {
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif /* </cri_delete_if_LE> */
				case static_cast<int32>(EAtomSoundRendererType::Type::Any) :
					/* ANYの場合はASRを割り当て */
					AsrRackConfig.sound_renderer_type = CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR;
					break;
				default:
					AsrRackConfig.sound_renderer_type = static_cast<CriAtomSoundRendererType>(SoundRendererTypeIndex);
			}
		}

		/* ASRラックの作成 */
		CriAtomExAsrRackId NewRackId = criAtomExAsrRack_Create(&AsrRackConfig, NULL, 0);
		AsrRackId.Add(NewRackId);
		
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif /* </cri_delete_if_LE> */
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* I/Oインターフェースの差し替え */
	criFs_SetSelectIoCallback(CriWareFileIo::SelectIo);

#if CRIWARE_USE_ATOM_MONITOR

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* インゲームプレビューの開始 */
	if ((AtomUsesInGamePreview != false) || (AtomOutputsLog != false)) {
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		CriAtomExMonitorConfig MonitorConfig;
		criAtomExMonitor_SetDefaultConfig(&MonitorConfig);
		MonitorConfig.communication_buffer_size = AtomMonitorCommunicationBufferSize;
		criAtomExMonitor_Initialize(&MonitorConfig, NULL, 0);

		/* プロファイラ向けにラウドネスメーターをアタッチ */
		criAtomMeter_AttachLoudnessMeter(NULL, NULL, 0);
	}

	/* ログ出力の開始 */
	if (AtomOutputsLog != false) {
		criAtomExMonitor_SetLogCallback(&criware_atom_logging_func, NULL);
	}
#endif

	/* D-BASの作成 */
	/* 備考）現状D-BASの破棄は明示的に行う必要があるため、IDを保持しておく必要がある。 */
	if ((AtomNumStandardStreamingVoices + AtomNumHcaMxStreamingVoices) > 0) {
		CriAtomExDbasConfig dbas_config;
		criAtomExDbas_SetDefaultConfig(&dbas_config);
		dbas_config.max_bps = criAtomEx_CalculateAdxBitrate(
			AtomStandardStreamingVoiceNumChannels, AtomStandardStreamingVoiceSamplingRate) * AtomNumStandardStreamingVoices;
		dbas_config.max_bps += criAtomEx_CalculateAdxBitrate(
			AtomHcaMxStreamingVoiceNumChannels, AtomHcaMxVoiceSamplingRate) * AtomNumHcaMxStreamingVoices;
		dbas_config.max_streams = AtomNumStandardStreamingVoices + AtomNumHcaMxStreamingVoices;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
		DbasId = criAtomExDbas_Create(&dbas_config, NULL, 0);
	}

	/* メモリ再生用ボイスの確保 */
	if (AtomNumStandardMemoryVoices > 0) {
		CriAtomExStandardVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(&pool_config);
		pool_config.num_voices = AtomNumStandardMemoryVoices;
		pool_config.player_config.max_channels = AtomStandardMemoryVoiceNumChannels;
		pool_config.player_config.max_sampling_rate = AtomStandardMemoryVoiceSamplingRate;
		StandardMemoryVoicePool = criAtomExVoicePool_AllocateStandardVoicePool(&pool_config, NULL, 0);
	}

	/* ストリーム再生用ボイスの確保 */
	if (AtomNumStandardStreamingVoices > 0) {
		CriAtomExStandardVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(&pool_config);
		pool_config.num_voices = AtomNumStandardStreamingVoices;
		pool_config.player_config.max_channels = AtomStandardStreamingVoiceNumChannels;
		pool_config.player_config.max_sampling_rate = AtomStandardStreamingVoiceSamplingRate;
		pool_config.player_config.streaming_flag = CRI_TRUE;
		StandardStreamingVoicePool = criAtomExVoicePool_AllocateStandardVoicePool(&pool_config, NULL, 0);
	}

	/* HCA-MXメモリ再生用ボイスの確保 */
	if (AtomNumHcaMxMemoryVoices > 0) {
		CriAtomExHcaMxVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(&pool_config);
		pool_config.num_voices = AtomNumHcaMxMemoryVoices;
		pool_config.player_config.max_channels = AtomHcaMxMemoryVoiceNumChannels;
		pool_config.player_config.max_sampling_rate = AtomHcaMxVoiceSamplingRate;
		HcaMxMemoryVoicePool = criAtomExVoicePool_AllocateHcaMxVoicePool(&pool_config, NULL, 0);
	}

	/* HCA-MXストリーム再生用ボイスの確保 */
	if (AtomNumHcaMxStreamingVoices > 0) {
		CriAtomExHcaMxVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(&pool_config);
		pool_config.num_voices = AtomNumHcaMxStreamingVoices;
		pool_config.player_config.max_channels = AtomHcaMxStreamingVoiceNumChannels;
		pool_config.player_config.max_sampling_rate = AtomHcaMxVoiceSamplingRate;
		pool_config.player_config.streaming_flag = CRI_TRUE;
		HcaMxStreamingVoicePool = criAtomExVoicePool_AllocateHcaMxVoicePool(&pool_config, NULL, 0);
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	if ((AtomAcfString.Len() > 0) && (AtomAcfString != "None")) {
		/* アセットのロード */
		UCriWareInitializer::AcfAssetReference = FSoftObjectPath(AtomAcfString);
		USoundAtomConfig* AcfObject = Cast<USoundAtomConfig>(UCriWareInitializer::AcfAssetReference.TryLoad());
		if (AcfObject != nullptr) {
			/* ACFデータの取得 */
			int32 AcfDataSize = AcfObject->RawData.GetBulkDataSize();
			AcfObject->RawData.GetCopy((void**)&UCriWareInitializer::AcfData, false);
			if (UCriWareInitializer::AcfData == nullptr) {
				UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load '%s'."), *AtomAcfFileName);
			} else {
				/* ACFデータのロード */
				criAtomEx_RegisterAcfData(UCriWareInitializer::AcfData, AcfDataSize, NULL, 0);
			}
		}
	} else if (AtomAcfFileName.Len() > 0) {
		/* 拡張子の取得 */
		FString FileExt = FPaths::GetExtension(AtomAcfFileName);

		/* 拡張子の有無でACFファイル or ACFアセットの判別を行う。 */
		/* 備考）拡張子なし or *.uasset時はアセットと判定。 */
		if ((FileExt.Len() > 0) && (FileExt != "uasset")) {
			/* ACFファイルパスの作成 */
			/* 備考）ファイル名指定時はファイルの格納先はFsContentDir。 */
			FString AcfFilePath = FsContentDir + AtomAcfFileName;

			/* ACFファイルのロード */
			criAtomEx_RegisterAcfFile(NULL, TCHAR_TO_UTF8(*AcfFilePath), NULL, 0);
		} else {
			/* ACFアセットのロード */
			/* 備考）アセット名指定時はFsContentDirを考慮しない。 */
			USoundAtomConfig* AcfObject = USoundAtomConfig::LoadAcfAsset(AtomAcfFileName);
			if (AcfObject != nullptr) {
				/* ACFデータの取得 */
				int32 AcfDataSize = AcfObject->RawData.GetBulkDataSize();
				AcfObject->RawData.GetCopy((void**)&UCriWareInitializer::AcfData, false);
				if (UCriWareInitializer::AcfData == nullptr) {
					UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load '%s'."), *AtomAcfFileName);
				} else {
					/* ACFデータのロード */
					criAtomEx_RegisterAcfData(UCriWareInitializer::AcfData, AcfDataSize, NULL, 0);
				}
			}
		}
	}

	if (AtomAcfDataTableString.Len() > 0 && AtomAcfDataTableString != "None") {
		UCriWareInitializer::AcfDataTableAssetReference = FSoftObjectPath(AtomAcfDataTableString);
		UCriWareInitializer::AcfDataTableObject = Cast<UDataTable>(UCriWareInitializer::AcfDataTableAssetReference.TryLoad());
	}

	/* AtomListenerの作成 */
	for (int32 i = 0; i < MAX_LISTENERS; i++) {
		AtomListener[i] = new FAtomListener();
		AtomListener[i]->SetDistanceFactor(AtomDistanceFactor);
	}

#if WITH_EDITOR
	if (!UCriWareInitializer::AtomListenerForPreviewEditor) {
		UCriWareInitializer::AtomListenerForPreviewEditor = new FAtomListener();
		UCriWareInitializer::AtomListenerForPreviewEditor->SetDistanceFactor(AtomDistanceFactor);
	}
#endif

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	// Enable bypass system for sending ADX output to UE4 sound renderer.
	if (GetAtomUseUnrealSoundRenderer()) {
		// オーディオ出力の作成
		UnrealSoundRenderer = NewObject<UAtomUnrealSoundRenderer>();
		UnrealSoundRenderer->AddToRoot();
		UnrealSoundRenderer->Init();
	}

	/* コールバックマネージャーの生成 */
	if (IsValid(AtomCallbackManager) == false) {
		AtomCallbackManager = NewObject<UAtomCallbackManager>();
		AtomCallbackManager->AddToRoot();
	}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	/* AtomPerformanceMonitorの作成 */
	AtomPerformanceMonitor = new FAtomPerformanceMonitor();
#endif
}

/* 終了処理 */
void FCriWareStatics::Finalize()
{
	/* 初期化カウンタの更新 */
	InitializationCount--;
	if (InitializationCount != 0) {
		return;
	}

	if (UCriWareInitializer::AcfDataTableObject) {
		UCriWareInitializer::AcfDataTableObject = nullptr;
	}

	UCriWareInitializer::AcfDataTableAssetReference.Reset();
	
#if WITH_EDITOR
	/* ACFリロードコマンドの登録解除 */
	if (Command != nullptr) {
		IConsoleManager::Get().UnregisterConsoleObject(Command);
		Command = nullptr;
	}
#endif

#if defined(XPT_TGT_IOS)
    // AVAudioSession interruption notifications [IOS] only
    [[NSNotificationCenter defaultCenter] removeObserver:AVAudioSessionNotificationObserver];
#endif
    
	/* サスペンド／レジューム時の処理を登録解除 */
	FCoreDelegates::ApplicationWillDeactivateDelegate.RemoveAll(this);
	FCoreDelegates::ApplicationHasReactivatedDelegate.RemoveAll(this);

	/* 定期処理の登録を解除 */
	FCoreDelegates::OnBeginFrame.RemoveAll(this);
	FCoreDelegates::OnEndFrame.RemoveAll(this);

#if CRIWARE_USE_MCDSP
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPAE600_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPFutzBox_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPML4000ML1_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPSA2_GetInterfaceWithVersion());
#endif
	
	/* ライブラリの終了 */
	FinalizeLibrary();
}

/* ライブラリの終了 */
void FCriWareStatics::FinalizeLibrary()
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	/* AtomPerformanceMonitorの破棄 */
	if (AtomPerformanceMonitor != nullptr) {
		delete AtomPerformanceMonitor;
		AtomPerformanceMonitor = nullptr;
	}
#endif

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

	/* 再生の停止を要求 */
	criAtomExPlayer_StopAllPlayersWithoutReleaseTime();

	/* バスフィルタコールバックの登録解除 */
	/* Unregister bus filter callback */
	for (int iter_free_spectrum_callback = 0; iter_free_spectrum_callback < UCriWareInitializer::bus_name.Num(); iter_free_spectrum_callback++) {
		for (int iter_asr_rack_free = 0; iter_asr_rack_free < UCriWareInitializer::asr_rack_id.Num(); iter_asr_rack_free++) {
			criAtomExAsrRack_SetBusFilterCallbackByName(UCriWareInitializer::asr_rack_id[iter_asr_rack_free], TCHAR_TO_UTF8(*UCriWareInitializer::bus_name[iter_free_spectrum_callback]), NULL, NULL, NULL);
		}
	}
	UCriWareInitializer::bus_name.Empty();

	if (UCriWareInitializer::dsp_hn != nullptr) {
		criAtomDspSpectra_Destroy(UCriWareInitializer::dsp_hn);
	}

	/* ボイスプールの破棄 */
	criAtomExVoicePool_FreeAll();

	/* AtomListenerの破棄 */
	for (int32 i = 0; i < MAX_LISTENERS; i++) {
		if (AtomListener[i] != nullptr) {
			delete AtomListener[i];
			AtomListener[i] = nullptr;
		}
	}

#if WITH_EDITOR
	if (UCriWareInitializer::AtomListenerForPreviewEditor) {
		delete UCriWareInitializer::AtomListenerForPreviewEditor;
		UCriWareInitializer::AtomListenerForPreviewEditor = nullptr;
	}
#endif

	/* D-BASの破棄 */
	if (DbasId != -1) {
		criAtomExDbas_Destroy(DbasId);
		DbasId = -1;
	}

	/* ACBのリリース */
	criAtomExAcb_ReleaseAll();

	/* 固定で確保したASRラックの破棄 */
	for (const CriAtomExAsrRackId& ItemRackId : AsrRackId) {
		criAtomExAsrRack_Destroy(ItemRackId);
	}
	AsrRackId.Reset();

	/* ACFデータの解放 */
	if (UCriWareInitializer::AcfData != nullptr) {
		criAtomEx_UnregisterAcf();
		FMemory::Free(UCriWareInitializer::AcfData);
		UCriWareInitializer::AcfData = nullptr;
	}

#if CRIWARE_USE_MCDSP
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPAE600_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPFutzBox_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPML4000ML1_GetInterfaceWithVersion());
	criAtomExAsr_UnregisterEffectInterface(criAfxMcDSPSA2_GetInterfaceWithVersion());
#endif

#if CRIWARE_USE_ATOM_MONITOR
	/* ログ出力の停止 */
	if (AtomOutputsLog != false) {
		criAtomExMonitor_SetLogCallback(NULL, NULL);
	}

	/* インゲームプレビューの終了 */
	if ((AtomUsesInGamePreview != false) || (AtomOutputsLog != false)) {
		criAtomMeter_DetachLoudnessMeter();
		criAtomExMonitor_Finalize();
	}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif /* </cri_delete_if_LE> */

#endif

	// Platform specific module: Atom finalizer.
	auto PlatformAtom = UCriWareInitializer::Platform.Atom();
	if (PlatformAtom) {
		PlatformAtom->FinalizeAtomLibrary();
	}

	/* ライブラリの終了 */
	if (!GetAtomUseUnrealSoundRenderer()) {
		criAtomEx_Finalize_UE4();
	}
	else {
#if defined(XPT_TGT_PC)
		criAtomEx_FinalizeForUserPcmOutput();
#endif
	}

	// Disable bypass system for ADX output to UE4 sound renderer.
	if (IsValid(UnrealSoundRenderer)) {
		UnrealSoundRenderer->RemoveFromRoot();
		UnrealSoundRenderer = nullptr;
	}

	/* コールバックマネジャーの破棄 */
	if (IsValid(AtomCallbackManager) == true) {
		AtomCallbackManager->RemoveFromRoot();
		AtomCallbackManager = nullptr;
	}

	/* アロケータの登録解除 */
	criAtomEx_SetUserAllocator(NULL, NULL, NULL);
	criFs_SetUserAllocator(NULL, NULL, NULL);

	/* エラーコールバックの破棄 */
	UCriWareError::DeleteInstance();

#if defined(CRIWARE_UE4_LE)
	if (UCriWareInitializer::NumInstances == 0)
	{
		return;
	}

	UCriWareInitializer::NumInstances--;

	if (UCriWareInitializer::NumInstances == 0 && UCriWareInitializer::CriWareDllHandle)
	{
		FPlatformProcess::FreeDllHandle(UCriWareInitializer::CriWareDllHandle);
		UCriWareInitializer::CriWareDllHandle = nullptr;
	}
#endif
}

/* フレーム開始時の処理 */
void FCriWareStatics::HandleOnBeginFrame()
{
	/* ルート化されたコンポーネントのTick処理を実行 */
	UAtomComponent::TickRootedComponents();
	FAtomSoundManager::TickComponentForAnimNotify();
	
#if !UE_BUILD_SHIPPING
	static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("cri.ShowProfileInfo"));
	FString Value = CVar->GetString();
	FString lString, rString;
	
	ProfileType = Value.Split(TEXT(" "), &lString, &rString) ? FCString::Atoi(*lString): FCString::Atoi(*Value);
	if (ProfileType == 1 || ProfileType == 2) {
		Value = rString;
		FString SortType, OerderType;
		if (!Value.Split(TEXT(" "), &SortType, &OerderType)) {
			SortType = Value;
			OerderType = "";
		}
		DrawDebugMessages(SortType, OerderType);
	}
#endif
}

/* フレーム終了時の処理 */
void FCriWareStatics::HandleOnEndFrame()
{
	/* リスナの更新 */
	FAtomListener::UpdateAllListeners();

	/* サーバ処理の実行 */
	criAtomEx_ExecuteMain();

	if (GetAtomUseUnrealSoundRenderer()) {
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
		FAudioDevice* InAudioDevice = GEngine->GetActiveAudioDevice().GetAudioDevice();
#else
		FAudioDevice* InAudioDevice = GEngine->GetActiveAudioDevice();
#endif
		if (InAudioDevice) {
			if (IsValid(FCriWareStatics::GetCriWareStatics()->UnrealSoundRenderer)) {
				FCriWareStatics::GetCriWareStatics()->UnrealSoundRenderer->Update(InAudioDevice);
			}
		}
	}
}

/* サスペンド時の処理 */
void FCriWareStatics::HandleApplicationWillDeactivate()
{
#if defined(XPT_TGT_IOS)
	criAtomEx_StopSound_IOS();
#elif defined(XPT_TGT_ANDROID)
	criAtomEx_StopSound_ANDROID();
#endif
}

/* レジューム時の処理 */
void FCriWareStatics::HandleApplicationHasReactivated()
{
#if defined(XPT_TGT_IOS)
	criAtomEx_StartSound_IOS();
#elif defined(XPT_TGT_ANDROID)
	criAtomEx_StartSound_ANDROID();
#endif
}

/* モニタの無効化 */
void FCriWareStatics::DisableMonitor()
{
#if CRIWARE_USE_ATOM_MONITOR
	/* モニタライブラリの終了 */
	if ((AtomUsesInGamePreview != false) || (AtomOutputsLog != false)) {
		criAtomMeter_DetachLoudnessMeter();
		criAtomExMonitor_Finalize();
	}
#endif

	AtomUsesInGamePreview = false;
	AtomOutputsLog = false;
}

void FCriWareStatics::DrawDebugMessages(FString SortType, FString OrderType) {
	TArray<FAtomProfileItem>	Items;
	TArray<FAtomProfileItem>	Sorted_Items;
	EAtomProfileSortType		esort_type;
	EAtomSortOrderType			eorder_type;

	bool bIsCanvasNull = false;

	Items = UAtomProfileData::CriWareAdx2ProfileDataUpdate(GEngine->GetWorld());

	/* カテゴリソート切り替え */
	if (SortType == "distance") {
		esort_type = EAtomProfileSortType::Distance;
	}
	else if (SortType == "name") {
		esort_type = EAtomProfileSortType::Name;
	}
	else if (SortType == "time") {
		esort_type = EAtomProfileSortType::Time;
	}
	else {
		/* DefaultはAtomComponentIDでソート */
		esort_type = EAtomProfileSortType::AtomComponentID;
	}

	/* 昇順・降順でのソートモード切替 */
	if (OrderType == "ascending") {
		eorder_type = EAtomSortOrderType::Ascending;
	}
	else {
		eorder_type = EAtomSortOrderType::Descending;
	}

	/* 取得したデータのソート */
	UAtomProfileData::CriWareAdx2ProfileDataSort(Items, esort_type, eorder_type, Sorted_Items);

	/* デバッグ情報の描画処理 */
	if (Sorted_Items.Num() > 0)
	{
		const int32 key = -1;
		const FString InfoText = FString::Printf(TEXT(" Sorting: %s. Ordering: %s"), (SortType == "") ? TEXT("id") : *SortType, (OrderType == "") ? TEXT("descending") : *OrderType);
		for (int32 SoundIndex = Sorted_Items.Num()-1; SoundIndex >= 0 ; --SoundIndex)
		{
			if (Sorted_Items[SoundIndex].AtomComponentID > 0) { /* ID >= １ */
				if (ProfileType == 1) {
					const FString TheString = FString::Printf(TEXT("%4i. %-15s Location:(%s), DistanceFromListener:%6.2f, PlayingTime:%6.2f, PlayerState:%s, NumPlaying:%4i "),
						Sorted_Items[SoundIndex].AtomComponentID,
						*Sorted_Items[SoundIndex].AtomCueName,
						*Sorted_Items[SoundIndex].AtomComponentLocation.ToString(),
						Sorted_Items[SoundIndex].DistanceFromListener,
						Sorted_Items[SoundIndex].PlayingTime,
						*Sorted_Items[SoundIndex].PlayerState,
						Sorted_Items[SoundIndex].NumSounds);
					GEngine->AddOnScreenDebugMessage(key, 0.0f, FColor::White, *TheString);
				}
				else if (ProfileType == 2) {
					const FString TheString = FString::Printf(TEXT("%4i. %-15s ConcurrencyName:%s, SoundObjectId:%llu, SoundObjectName:%s, EnableVoiceLimitScope:%d, EnableCategoryCueLimitScope:%d "),
						Sorted_Items[SoundIndex].AtomComponentID,
						*Sorted_Items[SoundIndex].AtomCueName,
						*Sorted_Items[SoundIndex].ConcurrencyName,
						Sorted_Items[SoundIndex].SoundObjectId,
						*Sorted_Items[SoundIndex].SoundObjectName,
						(int)(Sorted_Items[SoundIndex].SoundObjectVoiceLimitFlag),
						(int)(Sorted_Items[SoundIndex].SoundObjectCategoryLimitFlag));
					GEngine->AddOnScreenDebugMessage(key, 0.0f, FColor::White, *TheString);
				}
			}
		}
		GEngine->AddOnScreenDebugMessage(key, 0.0f, FColor::Green, *FString::Printf(TEXT("Total sounds: %i, Listener position: %s"), Sorted_Items.Num(), *UCriWareInitializer::GetListeningPoint().ToString()));
		GEngine->AddOnScreenDebugMessage(key, 0.0f, FColor(128, 255, 128), *InfoText);
		GEngine->AddOnScreenDebugMessage(key, 0.0f, FColor::Green, TEXT("Adx2 Active Sounds:"));
	}
}

#if WITH_EDITOR
/* ACFのリロード */
void FCriWareStatics::ReloadAcf(const TArray<FString>& Args)
{
	/* ACFデータの解放 */
	if (UCriWareInitializer::AcfData != nullptr) {
		UE_LOG(LogCriWareRuntime, Log, TEXT("Atom Config is unloaded."));
		criAtomEx_UnregisterAcf();
		FMemory::Free(UCriWareInitializer::AcfData);
		UCriWareInitializer::AcfData = nullptr;
	}

	/* ACFアセットの参照をクリア */
	UCriWareInitializer::AcfAssetReference.Reset();

	/* 引数のチェック */
	if (Args.Num() <= 0) {
		/* 引数未指定時はリロードしない */
		return;
	}

	/* ACFアセットのロード */
	/* 備考）アセット名指定時はFsContentDirを考慮しない。 */
	USoundAtomConfig* AcfObject = USoundAtomConfig::LoadAcfAsset(Args[0]);
	if (AcfObject == nullptr) {
		/* 備考）エラーはUSoundAtomConfig::LoadAcfAsset関数内で表示済み。 */
		return;
	}

	/* ACFデータの取得 */
	int32 AcfDataSize = AcfObject->RawData.GetBulkDataSize();
	AcfObject->RawData.GetCopy((void**)&UCriWareInitializer::AcfData, false);
	if (UCriWareInitializer::AcfData == nullptr) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to load '%s'."), *AcfObject->GetName());
		return;
	}

	/* ACFデータのロード */
	criAtomEx_RegisterAcfData(UCriWareInitializer::AcfData, AcfDataSize, NULL, 0);

	/* ACFアセットの参照の更新 */
	UCriWareInitializer::AcfAssetReference = FSoftObjectPath(AcfObject);

	/* 結果の表示 */
	UE_LOG(LogCriWareRuntime, Log, TEXT("Atom Config '%s' is loaded."), *AcfObject->GetName());
}
#endif

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
static void *criware_alloc_func(void *obj, CriUint32 size)
{
	void *ptr;

	UNUSED(obj);

	LLM_SCOPE(ELLMTag::Audio);

	/* メモリの確保 */
	ptr = FMemory::Malloc(size);

#if STATS
	/* 総メモリ確保サイズの更新 */
	uint32 BytesInUseCount = FMemory::GetAllocSize(ptr);
	INC_MEMORY_STAT_BY(STAT_CriWare_WorkSize, BytesInUseCount);
#endif

	return (ptr);
}

static void criware_free_func(void *obj, void *ptr)
{
	UNUSED(obj);

#if STATS
	/* 総メモリ確保サイズの更新 */
	uint32 BytesInUseCount = FMemory::GetAllocSize(ptr);
	DEC_MEMORY_STAT_BY(STAT_CriWare_WorkSize, BytesInUseCount);
#endif

	/* メモリの解放 */
	FMemory::Free(ptr);

	return;
}

/* File Systemログ出力 */
static void criware_fs_logging_func(void *obj, const char* format, ...)
{
	CriChar8 str[1024];
	va_list	args;

	va_start(args, format);
	CRIWARE_VSPRINTF(str, sizeof(str), format, args);
	va_end(args);

	UE_LOG(LogCriWare, Log, TEXT("%s"), UTF8_TO_TCHAR(str));
}

/* Atomログ出力 */
static void criware_atom_logging_func(void* obj, const CriChar8 *log_string)
{
	UNUSED(obj);

	/* ログの表示 */
	/* Display log */
	UE_LOG(LogCriWare, Log, TEXT("%s"), UTF8_TO_TCHAR(log_string));

	return;
}

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
