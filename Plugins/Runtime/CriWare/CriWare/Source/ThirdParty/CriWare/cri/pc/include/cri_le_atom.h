/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2009-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Atom
 * Module   : Library User's Header
 * File     : cri_atom.h
 *
 ****************************************************************************/
/*!
 *	\file		cri_atom.h
 */

/* 多重定義防止					*/
/* Prevention of redefinition	*/
#ifndef CRI_INCL_CRI_ATOM_H
#define CRI_INCL_CRI_ATOM_H

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "cri_le_xpt.h"
#include <cri_le_file_system.h>

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/* バージョン情報 */
/* Version Number */
#define CRI_ATOM_VER_NAME		"CRI Atom (LE)"
#define CRI_ATOM_VER_NUM		"2.21.141"
#define CRI_ATOM_VER_MAJOR		(2)
#define CRI_ATOM_VER_MINOR		(21)
#define CRI_ATOM_VER_PATCH		(141)
#define CRI_ATOM_VER_RELEASE	(0)
#define CRI_ATOM_VER_REVISION	(0)

/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
#if defined(XPT_TGT_PSP)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(44100)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(44100)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(1)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(2)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_NATIVE)
#elif defined(XPT_TGT_VITA)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_NATIVE)
#elif defined(XPT_TGT_3DS)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(32728)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(32728)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(2)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_NATIVE)
#elif defined(XPT_TGT_WII)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(32000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(32000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(4)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_NATIVE)
#elif defined(XPT_TGT_WIIU)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(6)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_NATIVE)
#elif defined(XPT_TGT_ANDROID) || defined(XPT_TGT_IOS) || defined(XPT_TGT_IPHONE)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#elif defined(XPT_TGT_NACL)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#elif defined(XPT_TGT_ACRODEA)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(22050)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(22050)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(2)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#elif defined(XPT_TGT_JS)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(2)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(44100)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(44100)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#elif defined(XPT_TGT_XBOXONE) || defined(XPT_TGT_PS4) || defined(XPT_TGT_PS5) || defined(XPT_TGT_SCARLETT)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(8)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#elif defined(XPT_TGT_SWITCH)
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(6)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#else
#define CRIATOM_DEFAULT_OUTPUT_CHANNELS				(6)
#define CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_INPUT_MAX_CHANNELS			(2)
#define CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE		(48000)
#define CRIATOM_DEFAULT_DECODE_LATENCY				(0)
#define CRIATOM_DEFAULT_DBAS_MAX_STREAMS			(8)
#define CRIATOM_SOUND_RENDERER_DEFAULT				(CRIATOM_SOUND_RENDERER_ASR)
#endif

/*==========================================================================
 *      CRI Atom Player API
 *=========================================================================*/
/*JP
 * \brief ループ回数制御用
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 */
#define CRIATOMPLAYER_NO_LOOP_LIMITATION	(-1)		/*JP<ループ回数制限なし	*/
#define CRIATOMPLAYER_IGNORE_LOOP			(-2)		/*JP<ループ情報を無視	*/
#define CRIATOMPLAYER_FORCE_LOOP			(-3)		/*JP<強制ループ再生		*/

/*==========================================================================
 *      CRI Atom AWB API
 *=========================================================================*/
/*JP
 * \brief オンメモリAWBハンドルの作成に必要なワーク領域サイズ
 * \ingroup ATOMLIB_AWB
 * \par 説明:
 * オンメモリAWBハンドルの作成に必要なワーク領域サイズです。<br>
 * \sa criAtomAwb_LoadFromMemory
 */
#define CRIATOMAWB_WORKSIZE_FOR_LOADFROMMEMORY	(64)

/*==========================================================================
 *      CRI Atom D-BAS API
 *=========================================================================*/
/*JP
 * \brief Atom D-BAS ID
 * \ingroup ATOMLIB_DBAS
 * \par 説明:
 * ::criAtomDbas_Create 関数に失敗した際に返る値です。 <br>
 * \sa criAtomDbas_Create, criAtomDbas_Destroy
 */
#define CRIATOMDBAS_ILLEGAL_ID	(-1)

/*JP
 * \brief D-BAS作成用のデフォルト初期化最大ビットレート値
 * \ingroup ATOMLIB_AWB
 * \par 説明:
 * D-BAS作成用のデフォルト初期化パラメーター値定義です。<br>
 * 各プラットフォームで定義しているデフォルトの最大ストリーム本数分、
 * ステレオADXデータをストリーミング再生する前提で計算しています。 <br>
 * \sa criAtomDbas_Create, criAtomDbas_CalculateWorkSize, criAtom_CalculateAdxBitrate
 */
#define CRIATOM_DEFAULT_DBAS_MAX_BPS \
	(criAtom_CalculateAdxBitrate(CRIATOM_DEFAULT_INPUT_MAX_CHANNELS,\
								 CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE)\
								 * CRIATOM_DEFAULT_DBAS_MAX_STREAMS)

/*JP
 * \brief D-BAS作成用のデフォルトのバッファー保証数
 * \ingroup ATOMLIB_DBAS
 * \par 説明:
 * D-BAS作成用のデフォルトのバッファー保証数です。
 * ループ先頭、およびループ終端で極端にデータが少なくなる音声データであっても
 * 途切れないようにストリーミング再生可能な安全な値を設定しています。
 * \sa criAtomDbas_Create, criAtomDbas_CalculateWorkSize
 */
#define CRIATOMDBAS_DEFAULT_NUM_SECUREMENT_BUFFERS	(4)

/*JP
 * \brief D-BAS作成時に指定可能なバッファー保証数の下限値
 * \ingroup ATOMLIB_DBAS
 * \par 説明:
 * D-BAS作成時に指定可能なバッファー保証数の下限値です。
 * 途切れずにストリーミング再生するためには、
 * 最低でも2バッファー（ダブルバッファリング）必要なため、
 * 2未満の値に設定する事はできません。
 * \sa criAtomDbas_Create, criAtomDbas_CalculateWorkSize
 */
#define CRIATOMDBAS_MINIMUM_NUM_SECUREMENT_BUFFERS	(2)


/* ========================================================================*/
/*       CRI Atom Streaming Cache API                                      */
/* ========================================================================*/
/*JP
 * \brief 不正なストリーミングキャッシュID値
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \par 説明:
 * ::criAtomStreamingCache_Create 関数に失敗した際に返る値です。 <br>
 * \sa criAtomStreamingCache_Create, criAtomStreamingCache_Destroy
 */
#define CRIATOM_STREAMING_CACHE_ILLEGAL_ID	(0)

/*JP
 * \brief ストリーミングキャッシュにキャッシュするファイル数のデフォルト値
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \par 説明:
 * ストリーミングキャッシュ作成用のデフォルト初期化パラメーター値定義です。<br>
 * キャッシュ可能なファイル数を指定します。<br>
 * デフォルト値は10ファイル分です。<br>
 * \sa CriAtomStreamingCacheConfig
 */
#define CRIATOM_STREAMING_CACHE_DEFAULT_NUM_FILES	(10)

/*JP
 * \brief ストリーミングキャッシュにキャッシュするファイルサイズのデフォルト値
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \par 説明:
 * ストリーミングキャッシュ作成用のデフォルト初期化パラメーター値定義です。<br>
 * キャッシュ可能なファイルサイズを byte単位で指定します。<br>
 * デフォルト値は 1 MB です。<br>
 * \sa CriAtomStreamingCacheConfig
 */
#define CRIATOM_STREAMING_CACHE_DEFAULT_CACHE_SIZE	(1 * 1024 * 1024)

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
/*JP
 * \brief CriAtomConfigへのデフォルトパラメーターをセット
 * \ingroup ATOMLIB_GLOBAL
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtom_Initialize 関数に設定するコンフィグ構造体（ ::CriAtomConfig ）に、
 * デフォルトの値をセットします。<br>
 * \sa
 * CriAtomConfig
*/
#define criAtom_SetDefaultConfig(p_config)	\
{\
	(p_config)->thread_model = CRIATOM_THREAD_MODEL_MULTI;\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->fs_config = NULL;\
	(p_config)->context = NULL;\
	(p_config)->version = CRI_ATOM_VERSION;\
	(p_config)->version_string = CRI_ATOM_VER_NUM;\
	(p_config)->max_players = 16;\
}

/*JP
 * \brief ユーザアロケーターの登録
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	p_malloc_func	メモリ確保関数
 * \param[in]	p_free_func		メモリ解放関数
 * \param[in]	p_obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atom ライブラリにメモリアロケーター（メモリの確保／解放関数）を登録します。<br>
 * 本マクロでアロケーターを登録すると、Atomライブラリがワーク領域を必要とするタイミングで、
 * ユーザが登録したメモリ確保／解放処理が呼び出されることになります。<br>
 * その結果、ワーク領域を必要とする関数（ ::criAtomPlayer_CreateAdxPlayer 関数等）に対し、
 * 個別にワーク領域をセットする処理を省略することが可能になります。<br>
 * （ワーク領域に NULL ポインタ、ワーク領域サイズに 0 バイトを指定した場合でも、
 * アロケーターからの動的メモリ確保によりライブラリが問題なく動作するようになります。）<br>
 * \par 注意:
 * メモリ確保／解放関数のポインタに NULL を指定することで、
 * アロケーターの登録を解除することも可能です。<br>
 * ただし、未解放のメモリ領域が残っている状態で登録を解除すると、
 * エラーコールバックが返され、登録の解除に失敗します。<br>
 * （引き続き登録済みのアロケーターが呼び出されることになります。）<br>
 * <br>
 * 本マクロは内部的に ::criAtom_SetUserMallocFunction 関数と
 * ::criAtom_SetUserFreeFunction 関数を呼び出します。<br>
 * 本関数とこれらの API を併用しないようご注意ください。<br>
 * （本関数の呼び出しにより、上記 API にセットした内容が上書きされます。）<br>
 * <br>
 * また、登録されたメモリアロケーター関数はマルスレッドモード時に複数のスレッドからコール
 * されることがあります。従って、メモリアロケート処理がスレッドセーフでない場合は独自に
 * メモリアロケート処理を排他制御する必要があります。
 */
#define criAtom_SetUserAllocator(p_malloc_func, p_free_func, p_obj)	\
{\
	criAtom_SetUserMallocFunction(p_malloc_func, p_obj);\
	criAtom_SetUserFreeFunction(p_free_func, p_obj);\
}

/*==========================================================================
 *      CRI Atom HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_HCA_MX
 * \par 説明:
 * ::criAtomHcaMx_Initialize 関数に設定するコンフィグ構造体
 * （ ::CriAtomHcaMxConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomHcaMx_Initialize, CriAtomHcaMxConfig
 */
#define criAtomHcaMx_SetDefaultConfig(p_config)	\
{\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->num_mixers = 1;\
	(p_config)->max_players = 16;\
	(p_config)->max_input_channels = CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->output_channels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;\
	(p_config)->output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
}

/*==========================================================================
 *      CRI Atom Player API
 *=========================================================================*/
/*JP
 * \brief CriAtomStandardPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	標準プレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateStandardPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomStandardPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomStandardPlayerConfig, criAtomPlayer_CreateStandardPlayer
 */
#define criAtomPlayer_SetDefaultConfigForStandardPlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomAdxPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	ADXプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateAdxPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomAdxPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer
 */
#define criAtomPlayer_SetDefaultConfigForAdxPlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomHcaPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	HCAプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateHcaPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomHcaPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomHcaPlayerConfig, criAtomPlayer_CreateHcaPlayer
 */
#define criAtomPlayer_SetDefaultConfigForHcaPlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomHcaMxPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	HCA-MXプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateHcaMxPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomHcaMxPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomHcaMxPlayerConfig, criAtomPlayer_CreateHcaMxPlayer
 */
#define criAtomPlayer_SetDefaultConfigForHcaMxPlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
}

/*JP
 * \brief CriAtomWavePlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	WAVEプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateWavePlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomWavePlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomWavePlayerConfig, criAtomPlayer_CreateWavePlayer
 */
#define criAtomPlayer_SetDefaultConfigForWavePlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomAiffPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	AIFFプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateAiffPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomAiffPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomAiffPlayerConfig, criAtomPlayer_CreateAiffPlayer
 */
#define criAtomPlayer_SetDefaultConfigForAiffPlayer(p_config)	\
{\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->streaming_flag		= CRI_FALSE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomRawPcmPlayerConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	RawPCMプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateRawPcmPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomRawPcmPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomRawPcmPlayerConfig, criAtomPlayer_CreateRawPcmPlayer
 */
#define criAtomPlayer_SetDefaultConfigForRawPcmPlayer(p_config)	\
{\
	(p_config)->pcm_format			= CRIATOM_PCM_FORMAT_SINT16;\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
	(p_config)->decode_latency		= CRIATOM_DEFAULT_DECODE_LATENCY;\
	(p_config)->context				= NULL;\
}

/*JP
 * \brief CriAtomInstrumentPlayerConfigへデフォルトパラメーターのセット
 * \ingroup ATOMLIB_PLAYER
 * \param[out]	p_config	インストゥルメントプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomPlayer_CreateRawPcmPlayer 関数に設定するコンフィグ構造体
 * （ ::CriAtomRawPcmPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa criAtomExVoicePool_AllocateInstrumentVoicePool
 */
#define criAtomPlayer_SetDefaultConfigForInstrumentPlayer(p_config)	\
{\
	(p_config)->interface_name		= "";\
	(p_config)->instrument_name		= "";\
	(p_config)->max_channels		= CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate	= CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->sound_renderer_type = CRIATOM_SOUND_RENDERER_DEFAULT;\
}

/*==========================================================================
 *      CRI Atom D-BAS API
 *=========================================================================*/
/*JP
 * \brief CriAtomDbasConfig へのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_DBAS
 * \param[out]	p_config	D-BAS作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomDbas_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomDbasConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomDbasConfig, criAtomDbas_Create, criAtomDbas_CalculateWorkSize
 */
#define criAtomDbas_SetDefaultConfig(p_config)	\
{\
	(p_config)->identifier	= 0;\
	(p_config)->max_streams	= CRIATOM_DEFAULT_DBAS_MAX_STREAMS;\
	(p_config)->max_bps		= CRIATOM_DEFAULT_DBAS_MAX_BPS;\
	(p_config)->max_mana_streams	= 0;\
	(p_config)->max_mana_bps		= 0;\
	(p_config)->num_securement_buffers = CRIATOMDBAS_DEFAULT_NUM_SECUREMENT_BUFFERS;\
}

/* ========================================================================*/
/*       CRI Atom Streaming Cache API                                      */
/* ========================================================================*/
/*JP
 * \brief CriAtomStreamingCacheConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[out]	p_config	ストリーミングキャッシュ作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomStreamingCache_CalculateWorkSize 関数、
 * ::criAtomStreamingCache_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomStreamingCacheConfig ）に対し、デフォルト値をセットします。<br>
 * \sa criAtomStreamingCache_CalculateWorkSize, criAtomStreamingCache_Create
 */
#define criAtomStreamingCache_SetDefaultConfig(p_config)	\
{\
	(p_config)->max_files		= CRIATOM_STREAMING_CACHE_DEFAULT_NUM_FILES;\
	(p_config)->max_path		= CRIFS_CONFIG_DEFAULT_MAX_PATH;\
	(p_config)->cache_size		= CRIATOM_STREAMING_CACHE_DEFAULT_CACHE_SIZE;\
}

/* ========================================================================*/
/*       CRI Atom Meter API                                                */
/* ========================================================================*/

/*JP
 * \brief レベルメーター機能コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ::criAtomMeter_AttachLevelMeter 関数に設定するコンフィグ構造体
 * （ ::CriAtomLevelMeterConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomMeter_AttachLevelMeter, CriAtomLevelMeterConfig
 */
#define criAtomMeter_SetDefaultConfigForLevelMeter(p_config) \
{\
	(p_config)->interval = 50;\
	(p_config)->hold_time = 1000;\
}

/*JP
 * \brief ラウドネスメーター機能コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_ASR
 * \par 説明:
 * ::criAtomMeter_AttachLoudnessMeter 関数に設定するコンフィグ構造体
 * （ ::CriAtomLoudnessMeterConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomMeter_AttachLoudnessMeter, CriAtomLoudnessMeterConfig
 */
#define criAtomMeter_SetDefaultConfigForLoudnessMeter(p_config) \
{\
	(p_config)->short_term_time = 3;\
	(p_config)->integrated_time = 600;\
}

/*JP
 * \brief トゥルーピークメーター機能コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_ASR
 * \par 説明:
 * ::criAtomMeter_AttachTruePeakMeter 関数に設定するコンフィグ構造体
 * （ ::CriAtomTruePeakMeterConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomMeter_AttachTruePeakMeter, CriAtomTruePeakMeterConfig
 */
#define criAtomMeter_SetDefaultConfigForTruePeakMeter(p_config) \
{\
	(p_config)->sample_clipping = CRI_TRUE;\
	(p_config)->interval = 50;\
	(p_config)->hold_time = 1000; \
}

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
/*JP
 * \brief スレッドモデル
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリがどのようなスレッドモデルで動作するかを表します。<br>
 * ライブラリ初期化時（ ::criAtom_Initialize 関数 ）に ::CriAtomConfig 構造体にて
 * 指定します。
 * \sa criAtom_Initialize, CriAtomConfig
 */
typedef enum CriAtomThreadModelTag {
	/*JP
	 * \brief マルチスレッド
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criAtom_Initialize 関数呼び出し時に作成されます。<br>
	 * ライブラリのサーバー処理は、作成されたスレッド上で定期的に実行されます。<br>
	 */
	CRIATOM_THREAD_MODEL_MULTI = 0,
	
	/*JP
	 * \brief マルチスレッド（ユーザ駆動式）
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criAtom_Initialize 関数呼び出し時に作成されます。<br>
	 * サーバー処理自体は作成されたスレッド上で実行されますが、
	 * CRIATOM_THREAD_MODEL_MULTI とは異なり、自動的には実行されません。<br>
	 * ユーザは ::criAtom_ExecuteMain 関数で明示的にサーバー処理を駆動する必要があります。<br>
	 * （  ::criAtom_ExecuteMain 関数を実行すると、スレッドが起動し、サーバー処理が実行されます。）<br>
	 */
	CRIATOM_THREAD_MODEL_MULTI_USER_DRIVEN = 3,
	
	/*JP
	 * \brief ユーザマルチスレッド
	 * \par 説明:
	 * ライブラリ内部ではスレッドを作成しませんが、ユーザが独自に作成したスレッド
	 * からサーバー処理関数を呼び出せるよう、内部の排他制御は行います。<br>
	 * サーバー処理は ::criAtom_ExecuteMain 関数内で同期実行されます。<br>
	 */
	CRIATOM_THREAD_MODEL_USER_MULTI = 1,
	
	/*JP
	 * \brief シングルスレッド
	 * \par 説明:
	 * ライブラリ内部でスレッドを作成しません。また、内部の排他制御も行いません。<br>
	 * サーバー処理は ::criAtom_ExecuteMain 関数内で同期実行されます。<br>
	 * \attention
	 * このモデルを選択した場合、各APIとサーバー処理関数とを同一スレッドから呼び出すようにしてください。<br>
	 */
	CRIATOM_THREAD_MODEL_SINGLE = 2,
	
	/* enum size is 4bytes */
	CRIATOM_THREAD_MODEL_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomThreadModel;

/*JP
 * \brief ライブラリ初期化用コンフィグ構造体
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリの動作仕様を指定するための構造体です。<br>
 * ::criAtom_Initialize 関数の引数に指定します。<br>
 * <br>
 * CRI Atomライブラリは、初期化時に本構造体で指定された設定に応じて、内部リソースを
 * 必要なだけ確保します。<br>
 * ライブラリが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて
 * 変化します。
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtom_SetDefaultConfig マクロで構造体にデフォルト
 * パラメーターをセットした後、 ::criAtom_Initialize 関数に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、
 * ::criAtom_SetDefaultConfig マクロで必ず構造体を初期化してください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtom_Initialize, criAtom_SetDefaultConfig
 */
typedef struct CriAtomConfigTag {
	/*JP
		\brief スレッドモデル
		\par 説明:
		CRI Atomライブラリのスレッドモデルを指定します。<br>
		\sa CriAtomThreadModel
	*/
	CriAtomThreadModel thread_model;

	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		通常、アプリケーションのフレームレートと同じ値を指定します。<br>
		<br>
		CRI Atomライブラリは、ファイル読み込みの管理や、音声データのデコード、音声の出力、
		ステータスの更新等、ライブラリ内部で行う処理のほとんどを1つの関数でまとめて
		行います。<br>
		CRIミドルウェアでは、こういったライブラリ内の処理を一括して行う関数のことを
		"サーバー処理"と呼んでいます。<br>
		<br>
		スレッドモデルが ::CRIATOM_THREAD_MODEL_MULTI の場合、サーバー処理はCRI Atomライブラリ
		が作成するスレッドで、定期的に実行されます。<br>
		スレッドモデルが ::CRIATOM_THREAD_MODEL_SINGLE や ::CRIATOM_THREAD_MODEL_USER_MULTI
		の場合、サーバー処理は ::criAtom_ExecuteMain 関数内で実行されます。<br>
		<br>
		server_frequency には、サーバー処理を実行する頻度を指定します。<br>
		スレッドモデルが ::CRIATOM_THREAD_MODEL_MULTI の場合、CRI Atomライブラリは指定された
		頻度でサーバー処理が実行されるよう、サーバー処理の呼び出し間隔を調節します。<br>
		スレッドモデルが ::CRIATOM_THREAD_MODEL_SINGLE や ::CRIATOM_THREAD_MODEL_USER_MULTI
		の場合、ユーザは ::criAtom_ExecuteMain 関数を server_frequency で指定した頻度以上
		で実行する必要があります。<br>
		<br>
		アプリケーションのフレームレートの変動が大きく、サーバー処理を実行する頻度にバラツキ
		ができてしまう場合には、最悪のフレームレートを想定して server_frequency の値を指定
		するか、またはスレッドモデルに ::CRIATOM_THREAD_MODEL_MULTI を指定してください。
		\par 備考:
		サーバー処理の実行頻度を多くすると、単位サーバー処理当たりの処理量（デコード量等）
		が少なくなります。
		その結果、単位サーバー当たりの処理負荷は小さくなります（負荷が分散されます）が、
		サーバー処理の実行に伴うオーバーヘッドは大きくなります。<br>
		（携帯ゲーム機等、CPUリソースが少ない環境でサーバー処理の実行頻度を多くしすぎた場合、
		サーバー処理の実行に伴うオーバーヘッドが無視できなくなる可能性があります。）<br>
		<br>
		サーバー処理の実行頻度を少なくすると、単位サーバー処理当たりの処理量が多くなります。<br>
		サーバー処理の実行に伴うオーバーヘッドは低減されますが、単位サーバー処理当たりの負荷
		が高くなるため、フレーム落ち等の問題が発生する恐れがあります。<br>
		\attention
		スレッドモデルに ::CRIATOM_THREAD_MODEL_SINGLE や ::CRIATOM_THREAD_MODEL_USER_MULTI
		を指定したにもかかわらず、 ::criAtom_ExecuteMain 関数が server_frequency で
		指定した値以下の頻度でしか実行されなかった場合、再生中の音が途切れる等の問題が
		発生する可能性がありますので、ご注意ください。<br>
		\sa criAtom_ExecuteMain
	*/
	CriFloat32 server_frequency;

	/*JP
		\brief CRI File System の初期化パラメーターへのポインタ
		\par 説明:
		CRI File Systemの初期化パラメーターへのポインタを指定します。
		NULLを指定した場合、デフォルトパラメーターでCRI File Systemを初期化します。
		\sa criAtom_Initialize
	*/
	const CriFsConfig *fs_config;

	/*JP
		\brief プラットフォーム固有の初期化パラメーターへのポインタ
		\par 説明:
		CRI Atomライブラリを動作させるために必要な、
		プラットフォーム固有の初期化パラメーターへのポインタを指定します。
		NULLを指定した場合、デフォルトパラメーターでプラットフォーム毎に必要な初期化を行います。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
		\sa criAtom_Initialize
	*/
	void *context;

	/*JP
		\brief ライブラリバージョン番号
		\par 説明:
		CRI Atomライブラリのバージョン番号です。<br>
		::criAtom_SetDefaultConfig マクロにより、本ヘッダーに定義されているバージョン番号が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	CriUint32 version;

	/*JP
		\brief ライブラリバージョン文字列
		\par 説明:
		CRI Atomライブラリのバージョン文字列です。<br>
		::criAtom_SetDefaultConfig マクロにより、本ヘッダーに定義されているバージョン文字列が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	const CriChar8 *version_string;

	/*JP
		\brief 最大プレーヤー数
		\par 説明:
		アプリケーション中で使用するプレーヤー（CriAtomPlayer）の数を指定します。<br>
		アプリケーション中で ::criAtomPlayer_CreateStandardPlayer 関数を使用してプレーヤーを作成する場合、
		本パラメーターに使用するプレーヤーの数を指定する必要があります。<br>
		<br>
		max_playersには「同時に使用するプレーヤーの最大数」を指定します。<br>
		例えば、 ::criAtomPlayer_CreateStandardPlayer 関数と ::criAtomPlayer_Destroy 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのプレーヤーしか使用しないため、関数の呼び出し回数に関係なくmax_playersに1を指定することが可能です。<br>
		逆に、ある場面でプレーヤーを10個使用する場合には、その他の場面でプレーヤーを全く使用しない場合であっても、
		max_playersに10を指定する必要があります。<br>
		\sa criAtomPlayer_CreateStandardPlayer, criAtomPlayer_Destroy
	*/
	CriSint32 max_players;
} CriAtomConfig;

/*JP
 * \brief メモリ確保関数
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	size	要求メモリサイズ（バイト単位）
 * \return		void*	確保したメモリのアドレス（失敗時はNULL）
 * \par 説明:
 * メモリ確保関数登録用のインターフェースです。<br>
 * CRI Atomライブラリがライブラリ内で行うメモリ確保処理を、
 * ユーザ独自のメモリ確保処理に置き換えたい場合に使用します。<br>
 * \par 備考:
 * コールバック関数が実行される際には、sizeに必要とされるメモリのサイズがセット
 * されています。<br>
 * コールバック関数内でsize分のメモリを確保し、確保したメモリのアドレスを
 * 戻り値として返してください。<br>
 * 尚、引数の obj には、::criAtom_SetUserMallocFunction 関数で登録したユーザ指定
 * オブジェクトが渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを ::criAtom_SetUserMallocFunction 関数の引数にセットしておき、
 * 本コールバック関数の引数を経由して参照してください。<br>
 * \attention
 * メモリの確保に失敗した場合、エラーコールバックが返されたり、呼び出し元の関数が
 * 失敗する可能性がありますのでご注意ください。
 * \sa CriAtomFreeFunc, criAtom_SetUserMallocFunction
 */
typedef void *(CRIAPI *CriAtomMallocFunc)(void *obj, CriUint32 size);

/*JP
 * \brief メモリ解放関数
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	mem		解放するメモリアドレス
 * \return				なし
 * \par 説明:
 * メモリ解放関数登録用のインターフェースです。<br>
 * CRI Atomライブラリ内がライブラリ内で行うメモリ解放処理を、
 * ユーザ独自のメモリ解放処理に置き換えたい場合に使用します。<br>
 * \par 備考:
 * コールバック関数が実行される際には、memに解放すべきメモリのアドレスがセット
 * されています。<br>
 * コールバック関数内でmemの領域のメモリを解放してください。
 * 尚、引数の obj には、::criAtom_SetUserFreeFunction 関数で登録したユーザ指定
 * オブジェクトが渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを ::criAtom_SetUserFreeFunction 関数の引数にセットしておき、
 * 本コールバック関数の引数を経由して参照してください。<br>
 * \sa CriAtomMallocFunc, criAtom_SetUserFreeFunction
 */
typedef void (CRIAPI *CriAtomFreeFunc)(void *obj, void *mem);

/*JP
 * \brief オーディオフレーム開始コールバック関数
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	obj		ユーザ指定オブジェクト
 * \return				なし
 * \par 説明:
 * オーディオフレームの開始時に実行されるコールバック関数です。<br>
 * オーディオフレームは、CRI Atomライブラリ内でサーバー処理を実行するタイミングを示します。<br>
 * コールバック関数の登録には ::criAtom_SetAudioFrameStartCallback 関数を使用します。<br>
 * 登録したコールバック関数は、オーディオフレームの開始時（サーバー処理開始直前）に実行されます。
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルをマルチスレッド（ ::CRIATOM_THREAD_MODEL_MULTI ）
 * に設定した場合、本コールバック関数はCRI Atomライブラリ内で作成されたスレッドから
 * 呼び出されます。<br>
 * ライブラリ初期化時にスレッドモデルをユーザマルチスレッド（ ::CRIATOM_THREAD_MODEL_USER_MULTI ）、
 * またはシングルスレッド（ ::CRIATOM_THREAD_MODEL_SINGLE ）に設定した場合、本コールバック関数
 * ::criAtom_ExecuteMain 関数内で呼び出されます。<br>
 * <br>
 * 尚、引数の obj には、::criAtom_SetAudioFrameStartCallback 関数で登録したユーザ指定
 * オブジェクトが渡されます。<br>
 * \sa criAtom_SetAudioFrameStartCallback
 */
typedef void (CRIAPI *CriAtomAudioFrameStartCbFunc)(void *obj);

/*JP
 * \brief オーディオフレーム終了コールバック関数
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	obj		ユーザ指定オブジェクト
 * \return				なし
 * \par 説明:
 * オーディオフレームの終了時に実行されるコールバック関数です。<br>
 * オーディオフレームは、CRI Atomライブラリ内でサーバー処理を実行するタイミングを示します。<br>
 * コールバック関数の登録には ::criAtom_SetAudioFrameEndCallback 関数を使用します。<br>
 * 登録したコールバック関数は、オーディオフレームの終了時（サーバー処理終了直後）に実行されます。<br>
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルをマルチスレッド（ ::CRIATOM_THREAD_MODEL_MULTI ）
 * に設定した場合、本コールバック関数はCRI Atomライブラリ内で作成されたスレッドから
 * 呼び出されます。<br>
 * ライブラリ初期化時にスレッドモデルをユーザマルチスレッド（ ::CRIATOM_THREAD_MODEL_USER_MULTI ）、
 * またはシングルスレッド（ ::CRIATOM_THREAD_MODEL_SINGLE ）に設定した場合、本コールバック関数
 * ::criAtom_ExecuteMain 関数内で呼び出されます。<br>
 * <br>
 * 尚、引数の obj には、::criAtom_SetAudioFrameEndCallback 関数で登録したユーザ指定
 * オブジェクトが渡されます。<br>
 * \sa criAtom_SetAudioFrameEndCallback
 */
typedef void (CRIAPI *CriAtomAudioFrameEndCbFunc)(void *obj);

/*JP
 * \brief サウンドレンダラタイプ
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * Atomプレーヤーが内部で作成するサウンドレンダラの種別を指定するためのデータ型です。<br>
 * Atomプレーヤー作成時にコンフィグ構造体のパラメーターとして指定します。
 * \attention
 * ::CRIATOM_SOUND_RENDERER_ANY は ::criAtomExPlayer_SetSoundRendererType 関数に対してのみ指定可能です。<br>
 * ボイスプール作成時には使用できません。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer
 */
typedef enum CriAtomSoundRendererTypeTag {
	CRIATOM_SOUND_RENDERER_NATIVE = 1,		/*JP<プラットフォームライブラリへ出力	*/
	CRIATOM_SOUND_RENDERER_ASR = 2,			/*JP<Atom Sound Rendererへ出力			*/
	CRIATOM_SOUND_RENDERER_EXTENDED = 3,

	CRIATOM_SOUND_RENDERER_HW1 = (0 << 2) | CRIATOM_SOUND_RENDERER_NATIVE,		/*JP<機種固有定義1						*/
	CRIATOM_SOUND_RENDERER_HW2 = (1 << 2) | CRIATOM_SOUND_RENDERER_NATIVE,		/*JP<機種固有定義2						*/
	CRIATOM_SOUND_RENDERER_HW3 = (2 << 2) | CRIATOM_SOUND_RENDERER_NATIVE,		/*JP<機種固有定義3						*/
	CRIATOM_SOUND_RENDERER_HW4 = (3 << 2) | CRIATOM_SOUND_RENDERER_NATIVE,		/*JP<機種固有定義4						*/

	CRIATOM_SOUND_RENDERER_HAPTIC = (0 << 2) | CRIATOM_SOUND_RENDERER_EXTENDED,	/*JP<振動								*/
	CRIATOM_SOUND_RENDERER_PSEUDO = (1 << 2) | CRIATOM_SOUND_RENDERER_EXTENDED,	/*JP<無音								*/
	CRIATOM_SOUND_RENDERER_OBJECT = (2 << 2) | CRIATOM_SOUND_RENDERER_EXTENDED,	/*JP<Object Based Audio					*/

	CRIATOM_SOUND_RENDERER_ANY = 0,			/*JP<出力方式を制限しない				*/

	/* enum size is 4bytes */
	CRIATOM_SOUND_RENDERER_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomSoundRendererType;

/*JP
 * \brief スピーカーID
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * 音声を出力するスピーカーを指定するためのIDです。<br>
 * ::criAtomPlayer_SetSendLevel 関数で利用します。
 * \sa criAtomPlayer_SetSendLevel
 */
typedef enum CriAtomSpeakerIdTag {
	CRIATOM_SPEAKER_FRONT_LEFT = 0,				/*JP<フロントレフトスピーカー			*/
	CRIATOM_SPEAKER_FRONT_RIGHT = 1,			/*JP<フロントライトスピーカー			*/
	CRIATOM_SPEAKER_FRONT_CENTER = 2,			/*JP<フロントセンタースピーカー			*/
	CRIATOM_SPEAKER_LOW_FREQUENCY = 3,			/*JP<LFE（≒サブウーハー）				*/
	CRIATOM_SPEAKER_SURROUND_LEFT = 4,			/*JP<サラウンドレフトスピーカー			*/
	CRIATOM_SPEAKER_SURROUND_RIGHT = 5,			/*JP<サラウンドライトスピーカー			*/
	CRIATOM_SPEAKER_SURROUND_BACK_LEFT = 6,		/*JP<サラウンドバックレフトスピーカー	*/
	CRIATOM_SPEAKER_SURROUND_BACK_RIGHT = 7,	/*JP<サラウンドバックライトスピーカー	*/

	/* enum size is 4bytes */
	CRIATOM_SPEAKER_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomSpeakerId;

/*JP
 * \brief パフォーマンス情報
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * パフォーマンス情報を取得するための構造体です。<br>
 * ::criAtom_GetPerformanceInfo 関数で利用します。
 * \sa criAtom_GetPerformanceInfo
 */
typedef struct CriAtomPerformanceInfoTag {
	CriUint32 server_process_count;		/*JP<サーバー処理実行回数									*/
	CriUint32 last_server_time;			/*JP<サーバー処理時間の最終計測値（マイクロ秒単位）		*/
	CriUint32 max_server_time;			/*JP<サーバー処理時間の最大値（マイクロ秒単位）			*/
	CriUint32 average_server_time;		/*JP<サーバー処理時間の平均値（マイクロ秒単位）			*/
	CriUint32 last_server_interval;		/*JP<サーバー処理実行間隔の最終計測値（マイクロ秒単位）	*/
	CriUint32 max_server_interval;		/*JP<サーバー処理実行間隔の最大値（マイクロ秒単位）		*/
	CriUint32 average_server_interval;	/*JP<サーバー処理実行間隔の平均値（マイクロ秒単位）		*/
} CriAtomPerformanceInfo;

/*JP
 * \brief エンコード品質
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atom Encoder, CRI Atom Craftで設定されるエンコード品質のデータ型です。<br>
 * 音声データのビットレートを計算するときに使用します。
 * \sa criAtom_CalculateHcaBitrate, criAtom_CalculateHcaMxBitrate
 */
typedef enum CriAtomEncodeQualityTag {
	CRIATOM_ENCODE_QUALITY_LOWEST = 0,	/*JP<最低品質設定	*/
	CRIATOM_ENCODE_QUALITY_LOW,			/*JP<低品質設定		*/
	CRIATOM_ENCODE_QUALITY_MIDDLE,		/*JP<中品質設定		*/
	CRIATOM_ENCODE_QUALITY_HIGH,		/*JP<高品質設定		*/
	CRIATOM_ENCODE_QUALITY_HIGHEST,		/*JP<最高品質設定	*/

	/* enum size is 4bytes */
	CRIATOM_ENCODE_QUALITY_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomEncodeQuality;

/*JP
 * \brief フォーマット種別
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * 音声データのフォーマットを示すデータ型です。<br>
 * 以下のいずれかの値が利用可能です。<br>
 * - ::CRIATOM_FORMAT_ADX
 * - ::CRIATOM_FORMAT_HCA
 * - ::CRIATOM_FORMAT_HCA_MX
 * - ::CRIATOM_FORMAT_WAVE
 * - ::CRIATOM_FORMAT_RAW_PCM
 * - ::CRIATOM_FORMAT_AIFF
 * - ::CRIATOM_FORMAT_VIBRATION
 * - ::CRIATOM_FORMAT_AUDIO_BUFFER
 * - ::CRIATOM_FORMAT_HW1
 * - ::CRIATOM_FORMAT_HW2
 * 
 */
typedef CriUint32 CriAtomFormat;
#define CRIATOM_FORMAT_NONE			(0x00000000)		/*JP< なし				*/
#define CRIATOM_FORMAT_ADX			(0x00000001)		/*JP< ADX				*/
#define CRIATOM_FORMAT_HCA			(0x00000003)		/*JP< HCA				*/
#define CRIATOM_FORMAT_HCA_MX		(0x00000004)		/*JP< HCA-MX			*/
#define CRIATOM_FORMAT_WAVE			(0x00000005)		/*JP< Wave				*/
#define CRIATOM_FORMAT_RAW_PCM		(0x00000006)		/*JP< Raw PCM			*/
#define CRIATOM_FORMAT_AIFF			(0x00000007)		/*JP< AIFF				*/
#define CRIATOM_FORMAT_VIBRATION	(0x00000008)		/*JP< 振動				*/
#define CRIATOM_FORMAT_AUDIO_BUFFER	(0x00000009)		/*JP< AudioBuffer		*/
#define CRIATOM_FORMAT_INSTRUMENT	(0x0000000C)		/*JP< インストゥルメント*/
#define CRIATOM_FORMAT_HW1			(0x00010001)		/*JP< ハードウェア固有	*/
#define CRIATOM_FORMAT_HW2			(0x00010002)		/*JP< ハードウェア固有	*/

/*JP
 * \brief 音声データフォーマット情報
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * 音声データのフォーマット情報です。<br>
 * ::criAtomPlayer_GetFormatInfo 関数で使用します。<br>
 * \sa criAtomPlayer_GetFormatInfo
 */
typedef struct CriAtomFormatInfoTag {
	CriAtomFormat format;				/*JP< フォーマット種別		*/
	CriSint32 sampling_rate;			/*JP< サンプリング周波数	*/
	CriSint64 num_samples;				/*JP< 総サンプル数			*/
	CriSint64 loop_offset;				/*JP< ループ開始サンプル	*/
	CriSint64 loop_length;				/*JP< ループ区間サンプル数	*/
	CriSint32 num_channels;				/*JP< チャンネル数			*/
	CriUint32 reserved[1];				/*JP< 予約領域				*/
} CriAtomFormatInfo;

/*JP
 * \brief PCMフォーマット
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * PCMデータの型情報です。
 * \sa criAtomPlayer_SetFilterCallback
 */
typedef enum CriAtomPcmFormatTag {
	CRIATOM_PCM_FORMAT_SINT16 = 0,
	CRIATOM_PCM_FORMAT_FLOAT32,

	/* enum size is 4bytes */
	CRIATOM_PCM_FORMAT_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomPcmFormat;

/*JP
 * \brief ストリーミング情報
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * ::criAtom_GetStreamingInfo 関数で取得した時点でのストリーミングの状況です。<br>
 * \sa criAtom_GetStreamingInfo
 */
typedef struct CriAtomStreamingInfoTag {
	/*JP
		\brief 現在のストリーミング数
		\par 説明:
		情報を取得した時点でのストリーミング数です。<br>
		ストリーミング再生の増減に伴い、この値も変化します。<br>
	*/
	CriSint32	num_streaming;	/*JP< 				*/

	/*JP
		\brief 現在のストリーミング総ビットレート
		\par 説明:
		情報を取得した時点での全ストリーミング再生の合計消費ビットレートです。<br>
		ストリーミング再生の増減に伴い、この値も変化します。<br>
		単位は [bps] （bit / 秒）です。<br>
	*/
	CriFloat32	total_bps;

	/*JP
		\brief 現在の最悪再生開始レイテンシ
		\par 説明:
		情報を取得した時点での、新しいストリーミング再生の再生開始レイテンシ
		の予測最悪値です。<br>
		単位は [秒] です。<br>
		この値は遅延の最大値について予測した情報であり、
		新しいストリーミング再生が常にこの値の時間分だけ遅延するわけではありません。<br>
		\attention
		実際には、新しいストリーミング再生が追加された後、<br>
		ストリームデータのビットレートが読み込まれてから正確な遅延時間が再計算されます。<br>
	*/
	CriFloat32	worst_latency;
} CriAtomStreamingInfo;

/*JP
 * \brief パラメーターID
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * パラメーターを指定するためのIDです。<br>
 */
typedef enum CriAtomParameterIdTag {
	CRIATOM_PARAMETER_ID_VOLUME					=  0,	/*JP< ボリューム */
	CRIATOM_PARAMETER_ID_FREQUENCY_RATIO		=  1,	/*JP< 周波数比 */

	/* enum size is 4bytes */
	CRIATOM_PARAMETER_ID_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomParameterId;

/*JP
 * \brief ボイス停止理由
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * ボイスの停止理由を表します。
 */
typedef enum CriAtomVoiceStopReasonTag {
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_STOP = 0,					/*JP< EXプレーヤー停止		*/
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_STOPWITHOUTRELEASE,			/*JP< EXプレーヤー停止		*/
	CRIATOM_VOICE_STOP_REASON_PLAYBACK_STOP,						/*JP< 再生ID指定停止	*/
	CRIATOM_VOICE_STOP_REASON_PLAYBACK_STOPWITHOUTRELEASE,			/*JP< 再生ID指定即時停止	*/
	CRIATOM_VOICE_STOP_REASON_SOUNDPLAYER_DESTROY,					/*JP< サウンドプレーヤー破棄		*/
	CRIATOM_VOICE_STOP_REASON_FADER_STOP,							/*JP< フェーダー停止		*/
	CRIATOM_VOICE_STOP_REASON_PLAYER_STOP,							/*JP< プレーヤー停止		*/
	CRIATOM_VOICE_STOP_REASON_AWB_STOP,								/*JP< AWB停止			*/
	CRIATOM_VOICE_STOP_REASON_STREAMING_CACHE_STOP,					/*JP< ストリーミングキャッシュ停止			*/
	CRIATOM_VOICE_STOP_REASON_PLAYER_FORCE_STOP,					/*JP< プレーヤー停止		*/
	CRIATOM_VOICE_STOP_REASON_PLAYER_DESTROY,						/*JP< プレーヤー破棄		*/
	CRIATOM_VOICE_STOP_REASON_MTPLAYER_STOP,						/*JP< MTプレーヤー破棄		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_POOL_DESTROY,					/*JP< ボイスプール破棄		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_STEAL_CASE1,					/*JP< ボイス奪い取り		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_STEAL_CASE2,					/*JP< ボイス奪い取り		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_STEAL_CASE3,					/*JP< ボイス奪い取り		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_STEAL_CASE4,					/*JP< ボイス奪い取り		*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_VIRTUAL_VOICE_BEYOND_LIFE_TIME,	/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_CANT_CALC_3DPOS,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_INTERNAL_PLAYBACK_CANCEL,			/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_NO_PLAYER_NO_RETRY,				/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_FAILED_RETRY_BEYOND_LIFE_TIME,	/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_PLAYER_STATUS_PLAYEND,			/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_PLAYER_STATUS_ERROR,				/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_IMPOSSIBLE_RETRY,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_PLAYER_STATUS_STOP,				/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_INVALID_SERVER_REQUEST,			/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_SILENT_MODE_STOP,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_SOUNDCOMPLEX_STATUS_ERROR,		/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_NO_ELEMENT_CASE1,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_NO_ELEMENT_CASE2,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_STOP_NOT_PLAYING_ELEMENT,			/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_NOT_ACTIVE_VOICE,					/*JP< サーバー処理			*/
	CRIATOM_VOICE_STOP_REASON_ELEMENT_FREE,							/*JP< エレメント解放		*/
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_STOP_ERROR_HN,				/*JP< エラープレーヤーの停止		*/
	CRIATOM_VOICE_STOP_REASON_ACB_RELEASE,							/*JP< ACB解放		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_ALLOCATE_FAIL,					/*JP< ボイス確保失敗		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_RESET,							/*JP< ボイスリセット		*/
	CRIATOM_VOICE_STOP_REASON_VOICE_VIRTUALIZE,						/*JP< ボイスリバーチャル化		*/
	CRIATOM_VOICE_STOP_REASON_PLAYBACKSOUND_ALLOCATE_FAIL,			/*JP< プレイバックサウンド確保失敗		*/
	CRIATOM_VOICE_STOP_REASON_STOP_ACTION_WITH_BEATSYNC,			/*JP< ビート同期停止アクション		*/
	CRIATOM_VOICE_STOP_REASON_START_CANCEL_WITH_BEATSYNC,			/*JP< ビート同期再生キャンセル		*/
	CRIATOM_VOICE_STOP_REASON_STOP_ACTION,							/*JP< 停止アクション		*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE0,				/*JP< ブロック遷移			*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE1,				/*JP< ブロック遷移			*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE2,				/*JP< ブロック遷移			*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE3,				/*JP< ブロック遷移			*/
	CRIATOM_VOICE_STOP_REASON_CATEGORY_CUE_LIMIT,					/*JP< カテゴリキューリミット		*/
	CRIATOM_VOICE_STOP_REASON_UNSET_ACB,							/*JP< ACB内部解放		*/
	CRIATOM_VOICE_STOP_REASON_SEQUENCE_END,							/*JP< シーケンスエンドマーカー		*/
	CRIATOM_VOICE_STOP_REASON_BLODK_END,							/*JP< ブロックエンド		*/
	CRIATOM_VOICE_STOP_REASON_SEQUENCE_EXECUTE,						/*JP< シーケンスサーバー処理	*/
	CRIATOM_VOICE_STOP_REASON_TRACK_MONO,							/*JP< トラックモノモード処理	*/
	CRIATOM_VOICE_STOP_REASON_FADER_STOP_IMMEDIATE,					/*JP< フェーダー即時停止	*/
	CRIATOM_VOICE_STOP_REASON_CUE_LIMIT,							/*JP< キューリミット処理	*/
	CRIATOM_VOICE_STOP_REASON_STOP_ACB,								/*JP< 全ACB停止処理	*/
	CRIATOM_VOICE_STOP_REASON_SOUND_OBJECT_ADD_PLAYER,				/*JP< サウンドオブジェクトへのプレーヤー追加処理	*/
	CRIATOM_VOICE_STOP_REASON_SOUND_OBJECT_DELETE_PLAYER,			/*JP< サウンドオブジェクトからプレーヤーの削除処理	*/
	CRIATOM_VOICE_STOP_REASON_SOUND_OBJECT_DELETE_ALL_PLAYER,		/*JP< サウンドオブジェクトからプレーヤーの削除処理	*/
	CRIATOM_VOICE_STOP_REASON_UNREGISTER_ACF,						/*JP< ACFのアンレジスト処理	*/
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_DESTROY,						/*JP< CriAtomExPlayerハンドルの破棄	*/
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_ATTACH_FADER,				/*JP< CriAtomExPlayerへのフェーダー付加	*/
	CRIATOM_VOICE_STOP_REASON_EXPLAYER_DETACH_FADER,				/*JP< CriAtomExPlayerへのフェーダー取り外し	*/
	CRIATOM_VOICE_STOP_REASON_DETACH_AWB,							/*JP< AWB解放処理	*/
	CRIATOM_VOICE_STOP_MULTIPLE_PLAYBACK_PROHIBITION_TIME,			/*JP< 多重再生禁止時間内再生	*/
	CRIATOM_VOICE_STOP_REASON_CATEGORY_STOP,						/*JP< カテゴリ停止	*/
	CRIATOM_VOICE_STOP_REASON_CATEGORY_STOPWITHOUTRELEASE,			/*JP< カテゴリ即時停止	*/
	CRIATOM_VOICE_STOP_REASON_NOTE_OFF,								/*JP< タイムライン停止		*/
	CRIATOM_VOICE_STOP_REASON_REGISTER_ACF,							/*JP< ACFの登録処理 */
	CRIATOM_VOICE_STOP_REASON_STOP_ACTION_WITH_FADE,				/*JP< フェード付き停止アクション		*/
	CRIATOM_VOICE_STOP_REASON_RESET_TRACK_PARAMETER,				/*JP< トラックパラメーターのリセット		*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE4,				/*JP< ブロック遷移		*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE5,				/*JP< ブロック遷移		*/
	CRIATOM_VOICE_STOP_REASON_BLOCK_TRANSITION_CASE6,				/*JP< ブロック遷移		*/
	CRIATOM_VOICE_STOP_REASON_NOTE_OFF2,							/*JP< ノート停止		*/
	CRIATOM_VOICE_STOP_REASON_ALL_NOTE_OFF,							/*JP< 全ノート停止		*/
	CRIATOM_VOICE_STOP_REASON_ALL_NOTE_OFF_WITHOUTRELEASE,			/*JP< 全ノート停止		*/
	CRIATOM_VOICE_STOP_REASON_SOUND_SERVER_RESULT_ENVELOPE_LEVEL_ZERO,			/*JP< サーバー処理			*/

	/* initial state */
	CRIATOM_VOICE_STOP_REASON_NONE = 0x7FFFFFFE,
	/* enum size is 4bytes */
	CRIATOM_VOICE_STOP_REASON_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomVoiceStopReason;

 /*JP
  * \brief Ambisonics指定タイプ
  * \ingroup ATOMEXLIB_ASR
  * \par 説明:
  * Atomライブラリが再生に使用するAmbisonicsのオーダータイプを表します。<br>
  * ASR初期化時（ ::criAtomExAsr_Initialize 関数 ）に ::CriAtomExAsrConfig 
  * 構造体にて指定します。
  * \sa criAtomExAsr_Initialize, CriAtomExAsrConfig
  */
typedef enum CriAtomAmbisonicsOrderTypeTag {
	CRIATOMAMBISONICS_ORDER_TYPE_NONE = 0,	/*JP< 未設定 */
	CRIATOMAMBISONICS_ORDER_TYPE_FIRST,		/*JP< 1st Order */
	CRIATOMAMBISONICS_ORDER_TYPE_1P = CRIATOMAMBISONICS_ORDER_TYPE_FIRST,	/*JP< 1 Periphonic(1st Orderと同義) */
	CRIATOMAMBISONICS_ORDER_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomAmbisonicsOrderType;

/*==========================================================================
 *      CRI Atom HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化用コンフィグ構造体
 * \ingroup ATOMLIB_HCA_MX
 * HCA-MXの動作仕様を指定するための構造体です。<br>
 * ::criAtomHcaMx_Initialize 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomHcaMx_SetDefaultConfig マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomHcaMx_Initialize 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomHcaMx_SetDefaultConfig
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomHcaMx_Initialize, criAtomHcaMx_SetDefaultConfig
 */
typedef struct CriAtomHcaMxConfigTag {
	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		\attention
		Atomライブラリ初期化時に指定した値（ ::CriAtomConfig 構造体の
		server_frequency ）と、同じ値をセットする必要があります。<br>
		\sa CriAtomConfig
	*/
	CriFloat32 server_frequency;

	/*JP
		\brief ミキサ数
		\par 説明:
		HCA-MXデコード結果を送信するミキサの数を指定します。<br>
		ミキサを複数作成することで、
		ミキサごとに異なるバスエフェクトを適用することが可能になります。<br>
		\attention
		HCA-MXのデコード処理、および定常状態の処理負荷は、
		ミキサの数に比例して重くなります。<br>
	*/
	CriSint32 num_mixers;

	/*JP
		\brief ミキサに登録可能な最大プレーヤー数
		\par 説明:
		ミキサごとに登録可能なHCA-MXプレーヤーの数を指定します。<br>
	*/
	CriSint32 max_players;

	/*JP
		\brief 入力データの最大チャンネル数
		\par 説明:
		アプリケーション中で再生するHCA-MXデータの最大チャンネル数を指定します。<br>
		再生するデータがモノラルの場合は1を、ステレオの場合は2を指定してください。<br>
		\par 備考:
		HCA-MX初期化時に max_input_channels に指定された数以下の音声データが
		再生可能になります。<br>
		例えば、 max_input_channels に6を指定した場合、5.1ch音声だけでなく、
		モノラル音声やステレオ音声も再生可能になります。<br>
		100個のデータのうち、99個がモノラル、1個がステレオの場合でも、
		max_input_channels には2を指定する必要があります。<br>
	*/
	CriSint32 max_input_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		HCA-MXの出力に指定できる最大サンプリングレートです。<br>
		\par 備考:
		例えば::criAtomHcaMx_SetFrequencyRatio 関数に 2.0f を指定する場合は
		output_sampling_rate * 2 を指定してください。<br>
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief 出力チャンネル数
		\par 説明:
		HCA-MXデータの出力チャンネル数を指定します。<br>
		通常、ターゲット機に接続されたスピーカーの数（出力デバイスの
		最大チャンネル数）を指定します。<br>
		\par 備考:
		モノラル音声のみを再生し、パンをコントロールしない場合には、
		output_channels を1にすることで、処理負荷を下げることが可能です。<br>
		\attention
		output_channels の数を max_input_channels 以下の値に設定することは
		できません。<br>
	*/
	CriSint32 output_channels;

	/*JP
		\brief 出力サンプリングレート
		\par 説明:
		再生するHCA-MXデータのサンプリングレートを指定します。<br>
		HCA-MXは、音単位のサンプリングレート変更を行えません。<br>
		HCA-MXデータを作成する際には、必ず全ての音声データを同一のサンプリング
		レートで作成し、その値を output_sampling_rate に指定してください。<br>
	*/
	CriSint32 output_sampling_rate;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		HCA-MXの出力先サウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;
} CriAtomHcaMxConfig;

/*==========================================================================
 *      CRI Atom AWB API
 *=========================================================================*/
struct CriAtomAwbTag;
/*JP
 * \brief AWBハンドル
 * \ingroup ATOMLIB_AWB
 * \par 説明:
 * 再生データが含まれているAWBファイルのTOC情報を示すハンドルです。<br>
 * ::criAtomAwb_LoadToc 関数で取得します。<br>
 * \sa criAtomAwb_LoadToc
 */
typedef struct CriAtomAwbTag *CriAtomAwbHn;

/*JP
 * \brief AWBステータス
 * \ingroup ATOMLIB_AWB
 * \par 説明:
 * AWBの準備状態を示す値です。<br>
 * ::criAtomAwb_GetStatus 関数で取得します。<br>
 * \sa criAtomAwb_GetStatus
 */
typedef enum CriAtomAwbStatusTag {
	CRIATOMAWB_STATUS_STOP = 0,		/*JP<停止中		*/
	CRIATOMAWB_STATUS_LOADING,		/*JP<ロード中	*/
	CRIATOMAWB_STATUS_COMPLETE,		/*JP<ロード完了	*/
	CRIATOMAWB_STATUS_ERROR,		/*JP<ロード失敗	*/

	/* enum size is 4bytes */
	CRIATOMAWB_STATUS_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomAwbStatus;

/*JP
 * \brief AWBの種別
 * \ingroup ATOMLIB_AWB
 * \par 説明:
 * AWBハンドルがTOC情報のみのハンドルなのか、メモリ上にロードされたAWBハンドルなのかを示す値です。
 * ::criAtomAwb_GetType 関数で取得します。<br>
 * \sa criAtomAwb_GetType
 */
typedef enum CriAtomAwbTypeTag {
	CRIATOMAWB_TYPE_TOC = 0,	/*JP<TOC情報のみのAWBハンドル	*/
	CRIATOMAWB_TYPE_ONMEMORY,	/*JP<オンメモリAWBハンドル		*/
	CRIATOMAWB_TYPE_ERROR,		/*JP<無効なAWBハンドル			*/

	/* enum size is 4bytes */
	CRIATOMAWB_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomAwbType;

/*==========================================================================
 *      CRI Atom Player API
 *=========================================================================*/
/*JP
 * 標準プレーヤー作成用コンフィグ構造体
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * 標準プレーヤー（ADXとHCAが再生可能なプレーヤー）を作成する際に、
 * 動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateStandardPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForStandardPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateStandardPlayer, criAtomPlayer_SetDefaultConfigForStandardPlayer
 */
typedef struct CriAtomStandardPlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateStandardPlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
		最大出力チャンネル数として指定する値と、作成されたAtomプレーヤーで再生可能なデータの
		関係を以下に示します。<br>
		\table "最大出力チャンネル数と再生可能なデータの関係" align=center border=1 cellspacing=0 cellpadding=4
		[最大出力チャンネル数（指定する値）	| 作成されたAtomプレーヤーで再生可能なデータ	]
		[1									| モノラル									]
		[2									| モノラル、ステレオ						]
		[6									| モノラル、ステレオ、5.1ch					]
		[8									| モノラル、ステレオ、5.1ch、7.1ch			]
		\endtable
		<br>
		\par 備考:
		サウンド出力時にハードウェアリソースを使用するプラットフォームにおいては、
		出力チャンネル数を小さくすることで、ハードウェアリソースの消費を抑えることが
		可能です。<br>
		\attention
		指定された最大出力チャンネル数を超えるデータは、再生することはできません。<br>
		例えば、最大出力チャンネル数を1に設定した場合、作成されたAtomプレーヤーで
		ステレオ音声を再生することはできません。<br>
		（モノラルにダウンミックスされて出力されることはありません。）
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateStandardPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートを超えるデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを24000に設定した場合、作成されたAtomプレーヤーで
		48000Hzの音声を再生することはできません。<br>
		（ダウンサンプリングされて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データは各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForAdxPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomStandardPlayerConfig;

/*JP
 * ADXプレーヤー作成用コンフィグ構造体
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * ADXが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateAdxPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForAdxPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateAdxPlayer, criAtomPlayer_SetDefaultConfigForAdxPlayer
 */
typedef struct CriAtomAdxPlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateAdxPlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
		最大出力チャンネル数として指定する値と、作成されたAtomプレーヤーで再生可能なデータの
		関係を以下に示します。<br>
		\table "最大出力チャンネル数と再生可能なデータの関係" align=center border=1 cellspacing=0 cellpadding=4
		[最大出力チャンネル数（指定する値）	| 作成されたAtomプレーヤーで再生可能なデータ	]
		[1									| モノラル									]
		[2									| モノラル、ステレオ						]
		[6									| モノラル、ステレオ、5.1ch					]
		[8									| モノラル、ステレオ、5.1ch、7.1ch			]
		\endtable
		<br>
		\par 備考:
		サウンド出力時にハードウェアリソースを使用するプラットフォームにおいては、
		出力チャンネル数を小さくすることで、ハードウェアリソースの消費を抑えることが
		可能です。<br>
		\attention
		指定された最大出力チャンネル数を超えるデータは、再生することはできません。<br>
		例えば、最大出力チャンネル数を1に設定した場合、作成されたAtomプレーヤーで
		ステレオ音声を再生することはできません。<br>
		（モノラルにダウンミックスされて出力されることはありません。）
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateAdxPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートを超えるデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを24000に設定した場合、作成されたAtomプレーヤーで
		48000Hzの音声を再生することはできません。<br>
		（ダウンサンプリングされて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForAdxPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomAdxPlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * HCAプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * HCAが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateHcaPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForHcaPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateHcaPlayer, criAtomPlayer_SetDefaultConfigForHcaPlayer
 */
typedef struct CriAtomHcaPlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateHcaPlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateHcaPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートを超えるデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを24000に設定した場合、作成されたAtomプレーヤーで
		48000Hzの音声を再生することはできません。<br>
		（ダウンサンプリングされて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForAdxPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomHcaPlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * HCA-MXプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * HCA-MXが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateHcaMxPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForHcaMxPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateHcaMxPlayer, criAtomPlayer_SetDefaultConfigForHcaMxPlayer
 */
typedef struct CriAtomHcaMxPlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateHcaMxPlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateHcaMxPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレートと一致する音声データのみを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートに一致しないデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを48000に設定した場合、作成されたAtomプレーヤーで
		48000Hz以外の音声を再生することはできません。<br>
		（レート変換されて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;
} CriAtomHcaMxPlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * WAVEプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * WAVEが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateWavePlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForWavePlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateWavePlayer, criAtomPlayer_SetDefaultConfigForWavePlayer
 */
typedef struct CriAtomWavePlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateWavePlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateWavePlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートを超えるデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを24000に設定した場合、作成されたAtomプレーヤーで
		48000Hzの音声を再生することはできません。<br>
		（ダウンサンプリングされて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForAdxPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomWavePlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * AIFFプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * AIFFが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateAiffPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForAiffPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateAiffPlayer, criAtomPlayer_SetDefaultConfigForAiffPlayer
 */
typedef struct CriAtomAiffPlayerConfigTag {
	/*JP
		\brief 最大出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateAiffPlayer 関数で作成されたAtomプレーヤーは、max_channelsで指定した
		チャンネル数"以下の"音声データを再生可能です。<br>
	*/
	CriSint32 max_channels;

	/*JP
		\brief 最大サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateAiffPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定された最大サンプリングレートを超えるデータは、再生することはできません。<br>
		例えば、最大サンプリングレートを24000に設定した場合、作成されたAtomプレーヤーで
		48000Hzの音声を再生することはできません。<br>
		（ダウンサンプリングされて出力されることはありません。）
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief ストリーミング再生を行うかどうか
		\par 説明:
		Atomプレーヤーでストリーミング再生（ファイルからの再生）を行うかどうかを指定します。<br>
		streaming_flagにCRI_FALSEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生（ ::criAtomPlayer_SetData 関数で指定したメモリアドレスの再生）のみをサポート
		します。（ファイルからの再生はできません。）<br>
		streaming_flagにCRI_TRUEを指定した場合、作成されたAtomプレーヤーはオンメモリのデータ
		再生に加え、ファイルからの再生（ ::criAtomPlayer_SetFile 関数や
		::criAtomPlayer_SetContentId 関数で指定されたファイルの再生）をサポートします。<br>
		\par 補足:
		streaming_flagをCRI_TRUEにした場合、Atomプレーヤー作成時にファイル読み込み用のリソース
		が確保されます。<br>
		そのため、streaming_flagをCRI_FALSEの場合に比べ、Atomプレーヤーの作成に必要なメモリの
		サイズが大きくなります。
	*/
	CriBool streaming_flag;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForAdxPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomAiffPlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * RawPCMプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * RawPCMが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomPlayer_CreateRawPcmPlayer 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForRawPcmPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomPlayer_CreateRawPcmPlayer, criAtomPlayer_SetDefaultConfigForRawPcmPlayer
 */
typedef struct CriAtomRawPcmPlayerConfigTag {
	/*JP
		\brief PCMフォーマット
		\par 説明:
		Atomプレーヤーで再生する音声のPCMフォーマットを指定します。<br>
		\attention
		指定されたフォーマット以外のRawPCMフォーマットのデータは再生できません。<br>
		再生データがどんなフォーマットであっても、ここで指定されたフォーマットとして再生されます。<br>
	*/
	CriAtomPcmFormat pcm_format;

	/*JP
		\brief 出力チャンネル数
		\par 説明:
		Atomプレーヤーで再生する音声のチャンネル数を指定します。<br>
		::criAtomPlayer_CreateRawPcmPlayer 関数で作成されたAtomプレーヤーは、
		max_channelsで指定したチャンネル数"以下の"音声データを再生可能です。<br>
		\attention
		指定されたチャンネル数以外のRawPCMフォーマットのデータは再生できません。<br>
		再生データがどんなフォーマットであっても、ここで指定されたチャンネル数として再生されます。<br>
	*/
	CriSint32 max_channels;

	/*JP
		\brief サンプリングレート
		\par 説明:
		Atomプレーヤーで再生する音声のサンプリングレートを指定します。<br>
		::criAtomPlayer_CreateRawPcmPlayer 関数で作成されたAtomプレーヤーは、max_sampling_rateで指定した
		サンプリングレート"以下の"音声データを再生可能です。<br>
		<br>
		\par 備考:
		最大サンプリングレートを下げることで、Atomプレーヤー作成時に必要となるワークメモリ
		のサイズを抑えることが可能です。
		\attention
		指定されたサンプリングレートと違うデータは再生できません。<br>
		再生データがどんなフォーマットであっても、ここで指定されたサンプリングレートとして再生されます。<br>
	*/
	CriSint32 max_sampling_rate;

	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		Atomプレーヤーが使用するサウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_DEFAULT を指定した場合、
		音声データはデフォルト設定のサウンドレンダラに転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合、
		音声データはASR（Atom Sound Renderer）に転送されます。<br>
		（ASRの出力先は、ASR初期化時に別途指定。）
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief デコード処理のレイテンシ
		\par 説明:
		デコード処理のレイテンシを指定します。<br>
		decode_latency を 0 に設定した場合、プレーヤーは音声再生開始時に
		音声データのデコードを可能な限り遅延なく行います。<br>
		（オンメモリ再生時は ::criAtomPlayer_Start 関数を実行後、
		最初のサーバー処理内で再生開始に必要な量のデータをデコードし、
		音声の出力を開始します。）<br>
		これに対し decode_latency を 1 以上に設定した場合、
		再生開始に必要なデータのデコードを、複数回のサーバー処理に分割して行います。<br>
		（オンメモリ再生時であっても ::criAtomPlayer_Start 関数を実行後、
		decode_latency に指定した回数サーバー処理が動作するまでは音声の出力が開始されません。）<br>
		\par 備考:
		Atomプレーヤーはサウンドバッファー内のデータ残量を元に、
		サーバー処理当たりの音声データのデコード量を決定しています。<br>
		音声再生開始前はサウンドバッファーが空の状態のため、
		音声再生中に比べて多くのデータ（再生中の 2 〜 4 倍程度）がデコードされます。<br>
		プレーヤー当たりの音声データのデコード処理負荷は小さいため、
		一音一音の発音開始時の処理負荷が問題になることはほとんどありません。<br>
		しかし、アプリケーション中で 1V に大量の発音リクエストを同時に発行した場合、
		全てのプレーヤーの処理負荷のピークが同期し、負荷が目に見えて大きくなる場合があります。<br>
		こういった制御を行うケースでは、 decode_latency の値を増やすことで、
		局所的に処理負荷が高くなる症状を回避することが可能です。<br>
		<br>
		decode_latency のデフォルト値は、ほとんどの環境で 0 に設定されています。<br>
		しかし、携帯ゲーム機等、わずかな負荷変動でもアプリケーションに大きな影響を及ぼす環境では、
		デフォルト値が 1 以上に設定されている可能性があります。<br>
		（実際にセットされる値については ::criAtomPlayer_SetDefaultConfigForRawPcmPlayer
		マクロの適用結果を確認してください。）<br>
		<br>
		現状 decode_latency の値に 4 以上の値を指定することはできません。<br>
		（ decode_latency に 4 以上の値を指定した場合でも、ライブラリ内で 3 に変更されます。）<br>
	*/
	CriSint32 decode_latency;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでプレーヤーを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomRawPcmPlayerConfig;

/*JP
 * \ingroup ATOMLIB_PLAYER
 * インストゥルメントプレーヤー作成用コンフィグ構造体
 * \par 説明:
 * インストゥルメントが再生可能なプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomPlayer_SetDefaultConfigForInstrumentPlayer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 */
typedef struct CriAtomInstrumentPlayerConfigTag {
	const CriChar8				*interface_name;			/*JP< インターフェース名					*/
	const CriChar8				*instrument_name;			/*JP< インストゥルメント名					*/
	CriSint32					max_channels;				/*JP< 最大チャンネル数						*/
	CriSint32					max_sampling_rate;			/*JP< 最大サンプリングレート				*/
	CriAtomSoundRendererType	sound_renderer_type;		/*JP< 出力先のサウンドレンダラタイプ		*/
} CriAtomInstrumentPlayerConfig;

/*JP
 * \brief 再生ステータス
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * Atomプレーヤーの再生状態を示す値です。<br>
 * ::criAtomPlayer_GetStatus 関数で取得可能です。
 * <br>
 * 再生状態は、通常以下の順序で遷移します。<br>
 * -# CRIATOMPLAYER_STATUS_STOP
 * -# CRIATOMPLAYER_STATUS_PREP
 * -# CRIATOMPLAYER_STATUS_PLAYING
 * -# CRIATOMPLAYER_STATUS_PLAYEND
 * 
 * Atomプレーヤー作成直後の状態は、停止状態（ CRIATOMPLAYER_STATUS_STOP ）です。<br>
 * ::criAtomPlayer_SetData 関数等でデータをセットし、 ::criAtomPlayer_Start 関数を
 * 実行すると、再生準備状態（ CRIATOMPLAYER_STATUS_PREP ）に遷移し、再生準備を始めます。<br>
 * データが充分供給され、再生準備が整うと、ステータスは再生中（ CRIATOMPLAYER_STATUS_PLAYING ）
 * に変わり、音声を出力が開始されます。<br>
 * セットされたデータを全て再生し終えた時点で、ステータスは再生完了
 * （ CRIATOMPLAYER_STATUS_PLAYEND ）に変わります。
 * \par 備考
 * 再生中に ::criAtomPlayer_Stop 関数を実行した場合、上記の流れに関係なく、
 * 最終的にステータスは CRIATOMPLAYER_STATUS_STOP に戻ります。<br>
 * （ ::criAtomPlayer_Stop 関数の呼び出しタイミングによっては、 CRIATOMPLAYER_STATUS_STOP
 * に遷移するまでに時間がかかる場合があります。）<br>
 * また、再生中に不正なデータを読み込んだ場合や、ファイルアクセスに失敗した場合も、
 * 上記の流れに関係なく、ステータスは CRIATOMPLAYER_STATUS_ERROR に遷移します。
 * \attention
 * ステータスが CRIATOMPLAYER_STATUS_PREP や CRIATOMPLAYER_STATUS_PLAYING のタイミングでは、
 * データのセット（ ::criAtomPlayer_SetData 関数）や、再生の開始（ ::criAtomPlayer_Start 関数）
 * は行えません。<br>
 * 現在再生中のAtomプレーヤーを停止して別のデータを再生したい場合は、一旦 ::criAtomPlayer_Stop
 * 関数で再生を停止させ、ステータスが CRIATOMPLAYER_STATUS_STOP に遷移してから次のデータを
 * セット／再生する必要があります。
 * \sa criAtomPlayer_GetStatus, criAtomPlayer_SetData, criAtomPlayer_Start, criAtomPlayer_Stop
 */
typedef enum CriAtomPlayerStatusTag {
	CRIATOMPLAYER_STATUS_STOP = 0,		/*JP< 停止中		*/
	CRIATOMPLAYER_STATUS_PREP = 1,		/*JP< 再生準備中	*/
	CRIATOMPLAYER_STATUS_PLAYING = 2,	/*JP< 再生中		*/
	CRIATOMPLAYER_STATUS_PLAYEND = 3,	/*JP< 再生完了		*/
	CRIATOMPLAYER_STATUS_ERROR = 4,		/*JP< エラーが発生	*/

	/* enum size is 4bytes */
	CRIATOMPLAYER_STATUS_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomPlayerStatus;

struct CriAtomPlayerTag;
/*JP
 * \brief Atomプレーヤーハンドル
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * CriAtomPlayerHn は、音声再生用に作られたプレーヤーを操作するためのハンドルです。<br>
 * ::criAtomPlayer_CreateAdxPlayer 関数等で音声再生用のプレーヤーを作成すると、
 * 関数はプレーヤー操作用に、この"Atomプレーヤーハンドル"を返します。
 * <br>
 * Atomプレーヤーとは、コーデックに依存しない再生制御のためのインターフェースを提供する、
 * 抽象化されたプレーヤーオブジェクトです。<br>
 * Atomプレーヤーの作成方法は再生する音声コーデックにより異なりますが、
 * 作成されたプレーヤーの制御については、Atomプレーヤー用のAPIが共通で利用可能です。
 * <br>
 * データのセットや再生の開始、ステータスの取得等、プレーヤーに対して行う操作は、
 * 全てAtomプレーヤーハンドルを介して実行されます。<br>
 * \sa criAtomPlayer_CreateAdxPlayer
 */
typedef struct CriAtomPlayerTag *CriAtomPlayerHn;

/*JP
 * \brief データ要求コールバック関数
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	player	Atomプレーヤーハンドル
 * \return				なし
 * \par 説明:
 * 次に再生するデータを指定するためのコールバック関数です。<br>
 * 複数の音声データをシームレスに連結して再生する際に使用します。<br>
 * <br>
 * コールバック関数の登録には ::criAtomPlayer_SetDataRequestCallback 関数を使用します。<br>
 * 登録したコールバック関数は、Atomプレーヤーが連結再生用のデータを要求するタイミングで
 * 実行されます。<br>
 * （前回のデータを読み込み終えて、次に再生すべきデータを要求するタイミングで
 * コールバック関数が実行されます。）
 * 本関数内で ::criAtomPlayer_SetData 関数等を用いてAtomプレーヤーにデータをセットすると、
 * セットされたデータは現在再生中のデータに続いてシームレスに連結されて再生されます。<br>
 * また、本関数内で ::criAtomPlayer_SetPreviousDataAgain 関数を実行することで、
 * 同一データを繰り返し再生し続けることも可能です。
 * \par 備考:
 * 本関数内でデータを指定しなかった場合、現在のデータを再生し終えた時点で、
 * Atomプレーヤーのステータスが CRIATOMPLAYER_STATUS_PLAYEND に遷移します。<br>
 * <br>
 * タイミング等の問題により、データを指定することができないが、ステータスを
 * CRIATOMPLAYER_STATUS_PLAYEND に遷移させたくない場合には、コールバック関数内で
 * ::criAtomPlayer_DeferCallback 関数を実行してください。<br>
 * ::criAtomPlayer_DeferCallback 関数を実行することで、約1V後に再度データ要求
 * コールバック関数が呼び出されます。（コールバック処理をリトライ可能。）<br>
 * ただし、 ::criAtomPlayer_DeferCallback 関数を実行した場合、再生が途切れる
 * （連結箇所に一定時間無音が入る）可能性があります。<br>
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomPlayer_SetDataRequestCallback, criAtomPlayer_SetData,
 * criAtomPlayer_SetPreviousDataAgain, criAtomPlayer_DeferCallback
 */
typedef void (CRIAPI *CriAtomPlayerDataRequestCbFunc)(void *obj, CriAtomPlayerHn player);

/*JP
 * \brief ステータス変更コールバック関数
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	player	Atomプレーヤーハンドル
 * \return				なし
 * \par 説明:
 * Atomプレーヤーのステータスが変更されるタイミングで実行されるコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomPlayer_SetStatusChangeCallback 関数を使用します。<br>
 * 登録したコールバック関数は、Atomプレーヤーのステータスが更新されるタイミングで
 * 実行されます。<br>
 * 変更されたステータスについては、引数で渡されるAtomプレーヤーハンドル（player）に対し、
 * ::criAtomPlayer_GetStatus 関数を実行することで取得可能です。
 * \par 備考:
 * 厳密には、ステータス遷移〜コールバック関数実行までの間に他の処理が割り込みで動作する
 * 余地があるため、ステータス遷移とコールバック関数実行のタイミングがズレる可能性があります。<br>
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomPlayer_SetStatusChangeCallback, criAtomPlayer_GetStatus
 */
typedef void (CRIAPI *CriAtomPlayerStatusChangeCbFunc)(void *obj, CriAtomPlayerHn player);

/*JP
 * \brief パラメーター変更コールバック関数
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * \param[in]	obj				ユーザ指定オブジェクト
 * \param[in]	player			Atomプレーヤーハンドル
 * \param[in]	id				パラメーターID
 * \param[in]	value			パラメーター値
 * \return				なし
 * \par 説明:
 * Atomプレーヤーのパラメーターが変更されるタイミングで実行されるコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomPlayer_SetParameterChangeCallback 関数を使用します。<br>
 * 登録したコールバック関数は、Atomプレーヤーのパラメーターが更新されるタイミングで実行されます。<br>
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomPlayer_SetParameterChangeCallback
 */
typedef void (CRIAPI *CriAtomPlayerParameterChangeCbFunc)(void *obj,
	CriAtomPlayerHn player, CriAtomParameterId id, CriFloat32 value);

/*JP
 * \brief 波形フィルターコールバック関数
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * \param[in]		obj				ユーザ指定オブジェクト
 * \param[in]		format			PCMの形式
 * \param[in]		num_channels	チャンネル数
 * \param[in]		num_samples		サンプル数
 * \param[in,out]	data			PCMデータのチャンネル配列
 * \return						なし
 * \par 説明:
 * デコード結果の PCM データを受け取るコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomPlayer_SetFilterCallback 関数を使用します。<br>
 * コールバック関数を登録すると、 Atom プレーヤーが音声データをデコードする度に、
 * コールバック関数が実行されるようになります。<br>
 * <br>
 * フィルターコールバック関数には、 PCM データのフォーマットやチャンネル数、
 * 参照可能なサンプル数、 PCM データを格納した領域のアドレスが返されます。<br>
 * コールバック内では PCM データの値を直接参照可能になるので、
 * 再生中の音声の振幅をチェックするといった用途に利用可能です。<br>
 * <br>
 * また、コールバック関数内で PCM データを加工すると、再生音に反映されるため、
 * PCM データに対してユーザ独自のエフェクトをかけることも可能です。<br>
 * （ただし、タイムストレッチ処理のようなデータ量が増減する加工を行うことはできません。）<br>
 * \par 備考:
 * PCM データはチャンネル単位で分離されています。<br>
 * （インターリーブされていません。）<br>
 * 第 6 引数（ data 配列）には、各チャンネルの PCM データ配列の先頭アドレスが格納されています。<br>
 * （二次元配列の先頭アドレスではなく、チャンネルごとの PCM データ配列の先頭アドレスを格納した
 * 一次元のポインタ配列です。）<br>
 * <br>
 * プラットフォームによって、 PCM データのフォーマットは異なります。<br>
 * 実行環境のデータフォーマットについては、第 3 引数（ format ）で判別可能です。<br>
 * PCM データのフォーマットが 16 bit 整数型の場合、 format は CRIATOM_PCM_FORMAT_SINT16 となり、
 * PCM データのフォーマットが 32 bit 浮動小数点数型の場合、 format は CRIATOM_PCM_FORMAT_FLOAT32 となります。<br>
 * それぞれのケースで PCM データの値域は異なりますのでご注意ください。<br>
 * - CRIATOM_PCM_FORMAT_SINT16 時は -32768 〜 +32767
 * - CRIATOM_PCM_FORMAT_FLOAT32 時は -1.0f 〜 +1.0f
 * 
 * （デコード時点ではクリッピングが行われていないため、 CRIATOM_PCM_FORMAT_FLOAT32
 * 時は上記範囲をわずかに超えた値が出る可能性があります。）<br>
 * \attention
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生する可能性があります。<br>
 * \sa criAtomPlayer_SetFilterCallback
 */
typedef void (CRIAPI *CriAtomPlayerFilterCbFunc)(void *obj, CriAtomPcmFormat format,
	CriSint32 num_channels, CriSint32 num_samples, void *data[]);

/*JP
 * \brief ロード要求コールバック関数
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	binder	ファイルロード先バインダー
 * \param[in]	path	ファイルパス
 * \param[in]	offset	ロード開始位置
 * \param[in]	length	ロード要求サイズ
 * \return				なし
 * \par 説明:
 * Atomプレーヤーのファイルロード状態を監視するための、デバッグ用のコールバック関数です。<br>
 * コールバック関数の登録には ::criAtomPlayer_SetLoadRequestCallback 関数を使用します。<br>
 * <br>
 * 登録したコールバック関数は、Atomプレーヤーが音声データのロード要求を発行するタイミングで実行されます。<br>
 * \par 備考:
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomPlayer_SetLoadRequestCallback
 */
typedef void (CRIAPI *CriAtomPlayerLoadRequestCbFunc)(void *obj,
	CriFsBinderHn binder, const CriChar8 *path, CriSint64 offset, CriSint64 length);

/*==========================================================================
 *      CRI Atom D-BAS API
 *=========================================================================*/
/*JP
 * \brief Atom D-BAS ID
 * \ingroup ATOMLIB_DBAS
 * \par 説明:
 * CriAtomDbasId は、D-BAS管理用のIDです。<br>
 * ::criAtomDbas_Create 関数でD-BASを作成すると取得できます。
 * <br>
 * アプリケーションがこのD-BAS IDを利用するのは、D-BASの破棄時のみです。
 * \sa criAtomDbas_Create, criAtomDbas_Destroy
 */
typedef CriSint32 CriAtomDbasId;

/*JP
 * \brief D-BAS作成パラメーター構造体
 * \ingroup ATOMLIB_DBAS
 * \par 説明:
 * ::criAtomDbas_Create 関数の引数に指定する、D-BASの作成パラメーター構造体です。<br>
 * <br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomDbas_SetDefaultConfig
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomDbas_Create, criAtomDbas_CalculateWorkSize, criAtomDbas_SetDefaultConfig
 */
typedef struct CriAtomDbasConfigTag {
	/*JP
		\brief D-BAS 識別子
		\par 説明:
		アプリケーション側がD-BASを作成する際に指定する識別子です。<br>
		アプリケーション側がどのD-BASを使うか明示的に指定する際に使用します。<br>
	*/
	CriUint32 identifier;				/*JP< D-BAS 識別子	*/
	/*JP
		\brief 最大ストリーミング数
		\par 説明:
		D-BASで管理する瞬間最大ストリーミング本数を指定します。<br>
		オーディオだけでなく、Sofdec2で再生するムービーデータのストリーミング本数も加味する必要があります。<br>
		例えば、シーンAではオーディオデータを２本、
		シーンBではオーディオデータを１本とムービーデータを２本、ストリーミング再生するとします。<br>
		この場合、瞬間最大ストリーミング本数はシーンBの３本を設定してください。<br>
		つまり、アプリケーション全体を通して、最悪状態のストリーミング本数を想定した値を設定してください。
	*/
	CriSint32 max_streams;
	/*JP
		\brief 最大ビットレート
		\par 説明:
		ストリーミング全体における瞬間最大ビットレートを指定します。<br>
		この値には、アプリケーション全体を通して、
		ストリーミング再生するデータの消費ビットレートのピーク値を設定してください。<br>
		オーディオだけでなく、Sofdec2で再生するムービーデータの消費ビットレートも加味する必要があります。<br>
		例えば、シーンAではオーディオデータを４本、シーンBではムービーデータを１本、ストリーミング再生するとします。<br>
		この時、オーディオデータ４本分の消費ビットレートよりもムービーデータ１本の消費ビットレートが大きい場合、<br>
		ムービーデータの消費ビットレートを設定してください。<br>
		つまり、アプリケーション全体を通して、最悪状態の消費ビットレートを想定した値を設定してください。
	*/
	CriSint32 max_bps;
	/*JP
		\brief CRI Mana側で再生する最大ストリーミング数
		\par 説明:
		CRI Mana側で再生する瞬間最大ストリーミング本数を指定します。<br>
		D-BASのメモリ使用量の計算では、max_streams からこの値を減じたストリーミング本数を、<br>
		CRI Atomの最大ストリーミング本数として扱います。<br>
		CRI Mana側でストリーミング再生を行わない場合は 0 に設定してください。<br>
	*/
	CriSint32 max_mana_streams;
	/*JP
		\brief CRI Mana側で再生する最大ビットレート
		\par 説明:
		CRI Mana側で再生する瞬間最大ビットレートを指定します。<br>
		D-BASのメモリ使用量の計算では、max_bps からこの値を減じたビットレートを、<br>
		CRI Atomの最大ビットレートとして扱います。<br>
		CRI Mana側でストリーミング再生を行わない場合は 0 に設定してください。<br>
	*/
	CriSint32 max_mana_bps;
	/*JP
		\brief １ストリームに割り当てる最低保証バッファー数
		\par 説明:
		１ストリームに割り当てる最低保証バッファー数を指定します。単位は[個]です。<br>
		ADX2内部ではバッファーをブロック単位で管理しているため、
		ファイル終端やループ先頭等の半端なデータサイズに対しても、
		バッファーブロックを１つ分割り当てます。<br>
		ワンショットのストリーミング再生では、
		ダブルバッファリングでデータを読むだけの単純な処理であっても、
		ストリームが途切れる事はありません。<br>
		一方、ループ付きデータの場合では、ループ終端のわずかなデータに１ブロック、
		ループ先頭のわずかなデータにも１ブロックを使ってしまうと、<br>
		バッファリング済みのデータが極端に少ないにもかかわらず、
		次のデータを読み込むバッファーが空かないためストリームが途切れてしまいます。<br>
		本パラメーターは、D-BASが確保するストリーミングバッファーサイズに影響を与えます。<br>
		音が途切れない事を十分に確認できていれば、
		本パラメーターの下限値は ::CRIATOMDBAS_MINIMUM_NUM_SECUREMENT_BUFFERS です。<br>
	*/
	CriSint32 num_securement_buffers;
} CriAtomDbasConfig;

/* ========================================================================*/
/*       CRI Atom Streaming Cache API                                      */
/* ========================================================================*/
/*JP
 * \brief ストリーミングキャッシュID
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \par 説明:
 * CriAtomStreamingCacheId は、ストリーミングキャッシュ管理用IDです。<br>
 * ::criAtomStreamingCache_Create 関数でストリーミングキャッシュを作成すると取得できます。<br>
 * \sa criAtomStreamingCache_Create
 */
typedef CriUintPtr CriAtomStreamingCacheId;

/*JP
 * \brief ストリーミングキャッシュ作成用コンフィグ構造体
 * \ingroup ATOMLIB_PLAYER
 * \par 説明:
 * プレーヤーにストリーミングキャッシュを作成する際に、
 * キャッシュ可能なファイルサイズ等を登録するための構造体です。<br>
 * ::criAtomStreamingCache_CalculateWorkSize 関数、
 * ::criAtomStreamingCache_Create 関数の引数に指定します。<br>
 * <br>
 * \attention
 * 将来的にメンバが増える可能性があるため、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomStreamingCache_CalculateWorkSize, criAtomStreamingCache_Create
 */
typedef struct CriAtomStreamingCacheConfigTag {
	/*JP
		\brief キャッシュするファイルの最大パス長
		\par 説明:
		ストリーミングキャッシュでキャッシュするファイルの最大パス長を指定します。<br>
	*/
	CriSint32 max_path;
	/*JP
		\brief キャッシュ可能なファイルの最大数
		\par 説明:
		ストリーミングキャッシュでキャッシュするファイル数を指定します。<br>
	*/
	CriSint32 max_files;
	/*JP
		\brief キャッシュ可能なファイルサイズ
		\par 説明:
		ストリーミングキャッシュでキャッシュ可能なファイルサイズを指定します。<br>
		このパラメーターで指定した以上のファイルをキャッシュすることはできません。<br>
		また、ストリーミングキャッシュの必要ワークサイズは、
		このパラメーターで指定したサイズ以上のサイズを要求されます。<br>
	*/
	CriSint32 cache_size;
} CriAtomStreamingCacheConfig;

/* ========================================================================*/
/*       CRI Atom DSP API                                                  */
/* ========================================================================*/

/*JP
 * \brief ピッチシフタアタッチ用パラメーター構造体
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * ピッチシフタDSPをアタッチする際に指定するパラメーターです。<br>
 * ::criAtomExVoicePool_AttachDspPitchShifter 関数に
 * ::CriAtomExDspPitchShifterConfig 構造体のメンバとして指定します。<br>
 * \sa criAtomExVoicePool_AttachDspPitchShifter
 */
typedef struct CriAtomDspPitchShifterConfigTag {
	/*JP
		\brief ピッチシフトモード
		\par 説明:
		ピッチシフトの処理方法（アルゴリズム）を指定します。<br>
		音声によって設定を変更すると音質が向上することがあります。<br>
		下記は指定可能な値と対応するモード名です。<br>
		0: Music<br>
		1: Vocal<br>
		2: SoundEffect<br>
		3: Speech<br>
	*/
	CriSint32 mode;

	/*JP
		\brief ウインドウサイズ
		\par 説明:
		ピッチシフトの処理単位です。<br>
		音声によって設定を変更すると音質が向上することがあります。<br>
		128,256,512,1024,2048のいずれかが設定可能です。<br>
	*/
	CriSint32 window_size;

	/*JP
		\brief オーバーラップ回数
		\par 説明:
		ピッチシフトの結果のオーバーラップ回数です。<br>
		多く設定するほど品質が向上しますが、処理負荷とのトレードオフです。<br>
		1,2,4,8のいずれかが設定可能です。<br>
	*/
	CriSint32 overlap_times;
} CriAtomDspPitchShifterConfig;

/*JP
 * \brief ピッチシフタ用パラメーター
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * ピッチシフタDSPに指定するパラメーターです。<br>
 * ::criAtomExPlayer_SetDspParameter 関数の param_id に指定します。
 * \sa criAtomExPlayer_SetDspParameter
 */
typedef enum CriAtomDspPitchShifterParameterIdTag {
	/*JP
		\brief ピッチ
		\par 説明:
		ピッチシフタのピッチシフト量です。<br>
		単位はセントです。<br>
		設定可能な値の範囲は -2400 〜 2400 までです。<br>
		\par 備考:
		原音と比べて 1200 で 2倍、-1200 で 1/2倍 のピッチシフトになります。<br>
	*/
	CRIATOMDSP_PITCHSHIFTER_PARAM_PITCH		= 0,

	/*JP
		\brief フォルマント
		\par 説明:
		ピッチシフタのフォルマントシフト量です。<br>
		単位はセントです。<br>
		設定可能な値の範囲は -2400 〜 2400 までです。<br>
		\par 備考:
		原音と比べて 1200 で 2倍、-1200 で 1/2倍 のフォルマントシフトになります。<br>
		\attention
		フォルマントシフトが有効になるのはピッチシフトモードが Vocal か Speech の<br>
		場合のみです。<br>
	*/
	CRIATOMDSP_PITCHSHIFTER_PARAM_FORMANT	= 1,

	/*JP
		\brief ピッチシフトモード
		\par 説明:
		ピッチシフトの処理方法（アルゴリズム）を指定します。<br>
		音声によって設定を変更すると音質が向上することがあります。<br>
		下記は指定可能な値と対応するモード名です。<br>
		0: Music<br>
		1: Vocal<br>
		2: SoundEffect<br>
		3: Speech<br>
	*/
	CRIATOMDSP_PITCHSHIFTER_PARAM_MODE		= 2
} CriAtomDspPitchShifterParameterId;

/*JP
 * \brief タイムストレッチ用パラメーター構造体
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * タイムストレッチDSPをアタッチする際に指定するパラメーターです。<br>
 * ::criAtomExVoicePool_AttachDspTimeStretch 関数に
 * ::CriAtomExDspTimeStretchConfig 構造体のメンバとして指定します。<br>
 * \sa criAtomExVoicePool_AttachDspTimeStretch
 */
typedef struct CriAtomDspTimeStretchConfigTag {
	CriSint32 reserved;
} CriAtomDspTimeStretchConfig;

/*JP
 * \brief タイムストレッチ用パラメーター
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * タイムストレッチDSPに指定するパラメーターです。<br>
 * ::criAtomExPlayer_SetDspParameter 関数の param_id に指定します。
 * \sa criAtomExPlayer_SetDspParameter
 */
typedef enum CriAtomDspTimeStretchParameterIdTag {
	/*JP
		\brief ストレッチ比率
		\par 説明:
		再生時間の倍率です。<br>
		元データの再生時刻に ratio を掛けた値がストレッチ結果の再生時間となります。<br>
		設定可能な値の範囲は 0.5f 〜 2.0f までです。<br>
		\attention
		設定する値は再生速度ではなく「再生時間」に対する倍率です。<br>
		ストレッチの割合を再生速度で指定する場合、再生速度の倍率の逆数を設定してください。<br>
	*/
	CRIATOMDSP_TIMESTRETCH_PARAM_RATIO		= 0,

	/*JP
		\brief フレーム時間
		\par 説明:
		タイムストレッチする際のフレーム時間(単位:ミリ秒)です。<br>
		再生する音の種類によって調整することで品質を向上させられます。<br>
		設定可能な値の範囲は 10 〜 60 までです。<br>
		\par 備考:
		ボイス音声は 20msec 辺り、音楽は 50msec 辺りで良好な品質になります。<br>
	*/
	CRIATOMDSP_TIMESTRETCH_PARAM_FRAME_TIME	= 1,

	/*JP
		\brief 処理品質
		\par 説明:
		タイムストレッチ処理の品質です。<br>
		高いほど品質が上がりますが、CPU負荷とのトレードオフです。<br>
		設定可能な値の範囲は 0 〜 10 までです。<br>
		\par 備考:
		人の声は低めでも十分で、音楽をタイムストレッチする場合は、
		高く設定するほど良好になります。<br>
	*/
	CRIATOMDSP_TIMESTRETCH_PARAM_QUALITY	= 2
} CriAtomDspTimeStretchParameterId;

/*JP
 * \brief スペクトラムアナライザ作成用パラメーター構造体
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * スペクトラムアナライザをアタッチする際に指定するパラメーターです。<br>
 * ::criAtomDspSpectra_Create 関数の引数に使用します。<br>
 * \sa criAtomDspSpectra_Create
 */
typedef struct CriAtomDspSpectraConfigTag {
	/*JP
		\brief 帯域分割数
		\par 説明:
		周波数軸をいくつの帯域に分割して計測するかを指定します。<br>
		::criAtomDspSpectra_GetLevels 関数の戻り値（ CriFloat32 配列）は、
		本パラメーターで指定した数と同じ長さになります。<br>
	*/
	CriUint32 num_bands;
} CriAtomDspSpectraConfig;

/* スペクトラムアナライザハンドル */
struct CriAtomDspSpectraObj;
typedef struct CriAtomDspSpectraObj *CriAtomDspSpectraHn;

/* ========================================================================*/
/*       CRI Atom Meter API                                                */
/* ========================================================================*/

/*JP
 * \brief レベルメーター機能追加用コンフィグ構造体
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * レベルメーター機能を追加するための構造体です。<br>
 * ::criAtomMeter_AttachLevelMeter 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomMeter_SetDefaultConfigForLevelMeter マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomMeter_AttachLevelMeter 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomMeter_SetDefaultConfigForLevelMeter
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomMeter_AttachLevelMeter
 */
typedef struct {
	/*JP
		\brief 測定間隔（ミリ秒単位）
		\par 説明:
		測定結果を更新する間隔です。<br>
	*/
	CriSint32 interval;

	/*JP
		\brief ピークホールド時間（ミリ秒単位）
		\par 説明:
		ピーク値がより大きい値で更新されたとき、下がらないようにホールドする時間です。<br>
	*/
	CriSint32 hold_time;
} CriAtomLevelMeterConfig;

/*JP
 * \brief レベル情報
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * レベル情報を取得するための構造体です。<br>
 * ::criAtomMeter_GetLevelInfo 関数で利用します。
 * \par 備考:
 * 各レベル値の単位はdBです。<br>
 * \sa criAtomMeter_GetLevelInfo
 */
typedef struct CriAtomLevelInfoTag {
	/*JP
		\brief 有効チャンネル数
		\par 説明:
		測定結果が有効なチャンネル数です。<br>
	*/
	CriSint32 num_channels;
	
	/*JP
		\brief RMSレベル
		\par 説明:
		測定間隔間の音声振幅のRMS（二乗平均平方根）を計算した値です。<br>
		音圧レベルとして扱われます。
	*/
	CriFloat32 rms_levels[8];
	
	/*JP
		\brief ピークレベル
		\par 説明:
		測定間隔間の音声振幅の最大値です。<br>
	*/
	CriFloat32 peak_levels[8];
	
	/*JP
		\brief ピークホールドレベル
		\par 説明:
		ホールドしているピークレベル値です。<br>
	*/
	CriFloat32 peak_hold_levels[8];
} CriAtomLevelInfo;

/*JP
 * \brief ラウドネスメーター機能追加用コンフィグ構造体
 * \ingroup ATOMLIB_METER
 * ラウドネスメーター機能を追加するための構造体です。<br>
 * ::criAtomMeter_AttachLoudnessMeter 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomMeter_SetDefaultConfigForLoudnessMeter マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomMeter_AttachLoudnessMeter 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomMeter_SetDefaultConfigForLoudnessMeter
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomMeter_AttachLoudnessMeter
 */
typedef struct {
	/*JP
		\brief ショートターム測定時間
		\par 説明:
		短期の平均ラウドネスの測定時間（秒単位）です。<br>
		標準は3秒です。<br>
	*/
	CriSint32 short_term_time;

	/*JP
		\brief インテグレーテッド測定時間
		\par 説明:
		長期の平均ラウドネスの測定時間（秒単位）です。<br>
		インテグレーテッド値はコンテンツ単位の平均ラウドネスです。<br>
	*/
	CriSint32 integrated_time;
} CriAtomLoudnessMeterConfig;

/*JP
 * \brief ラウドネス情報
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ラウドネス情報を取得するための構造体です。<br>
 * ::criAtomMeter_GetLoudnessInfo 関数で利用します。
 * \par 備考:
 * 各レベル値の単位はLKFSです。<br>
 * \sa criAtomMeter_GetLoudnessInfo
 */
typedef struct CriAtomLoudnessInfoTag {
	/*JP
		\brief 測定カウント
		\par 説明:
		測定した回数です。<br>
		0.1秒に1回測定されます。<br>
	*/
	CriSint32		count;
	/*JP
		\brief モーメンタリー値
		\par 説明:
		瞬間のラウドネスレベルです。<br>
	*/
	CriFloat32		momentary;
	/*JP
		\brief ショートターム値
		\par 説明:
		短期のラウドネス平均レベルです。<br>
	*/
	CriFloat32		short_term;
	/*JP
		\brief インテグレーテッド値
		\par 説明:
		長期のラウドネス平均レベルです。<br>
	*/
	CriFloat32		integrated;
} CriAtomLoudnessInfo;

/*JP
 * \brief トゥルーピークメーター機能追加用コンフィグ構造体
 * \ingroup ATOMLIB_METER
 * トゥルーピークメーター機能を追加するための構造体です。<br>
 * ::criAtomMeter_AttachTruePeakMeter 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomMeter_SetDefaultConfigForTruePeakMeter マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomMeter_AttachTruePeakMeter 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomMeter_SetDefaultConfigForTruePeakMeter
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomMeter_AttachTruePeakMeter
 */
typedef struct {
	/*JP
		\brief クリッピング
		\par 説明:
		波形のサンプルを測定前にクリップするフラグです。<br>
		波形のサンプルを測定前にクリップするフラグです。<br>
	*/
	CriBool sample_clipping;

	/*JP
		\brief 測定間隔（ミリ秒単位）
		\par 説明:
		測定結果を更新する間隔です。<br>
	*/
	CriSint32 interval;

	/*JP
		\brief ホールド時間（ミリ秒単位）
		\par 説明:
		ピーク値がより大きい値で更新されたとき、下がらないようにホールドする時間です。<br>
	*/
	CriSint32 hold_time;
} CriAtomTruePeakMeterConfig;

/*JP
 * \brief トゥルーピーク情報
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * トゥルーピーク情報を取得するための構造体です。<br>
 * ::criAtomMeter_GetTruePeakInfo 関数で利用します。
 * \par 備考:
 * 各レベル値の単位はdBです。<br>
 * \sa criAtomMeter_GetTruePeakInfo
 */
typedef struct CriAtomTruePeakInfoTag {
	/*JP
		\brief 有効チャンネル数
		\par 説明:
		測定結果が有効なチャンネル数です。<br>
	*/
	CriSint32		num_channels;
	
	/*JP
		\brief トゥルーピークレベル
		\par 説明:
		トゥルーピークメーターの測定結果です。<br>
	*/
	CriFloat32		levels[8];
	
	/*JP
		\brief ピークホールドレベル
		\par 説明:
		ホールドしているピークレベルです。<br>
	*/
	CriFloat32		hold_levels[8];
} CriAtomTruePeakInfo;

/*==========================================================================
 *      CRI Atom Instrument API
 *=========================================================================*/
/*JP
 * \brief バージョン情報付きインターフェース型
 * \par 説明:
 * インストゥルメントインターフェース登録関数の引数型です。
 * \sa  criAtomInstrument_RegisterInstrumentInterface, criAtomInstrument_UnregisterInstrumentInterface
 */
typedef const struct CriAinstInterfaceWithVersionTag* CriAtomAinstInterfaceWithVersionPtr;

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
/*JP
 * \brief ライブラリのバージョン番号やビルド情報を返します。
 * \ingroup ATOMLIB_GLOBAL
 * \return	const CriChar8*	ライブラリ情報文字列
 * \par 説明:
 * ライブラリのバージョン、ビルドした日時、プラットフォームの情報が表示されます。
 */
const CriChar8* CRIAPI criAtom_GetVersionString(void);

/*JP
 * \brief ライブラリ初期化用ワーク領域サイズの計算
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * CRI Atomライブラリを使用するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * CRI Atomライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtom_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa CriAtomConfig, criAtom_Initialize
 */
CriSint32 CRIAPI criAtom_CalculateWorkSize(const CriAtomConfig *config);

/*JP
 * \brief ライブラリの初期化
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * CRI Atomライブラリを初期化します。<br>
 * ライブラリの機能を利用するには、必ずこの関数を実行する必要があります。<br>
 * （ライブラリの機能は、本関数を実行後、 ::criAtom_Finalize 関数を実行するまでの間、
 * 利用可能です。）<br>
 * <br>
 * ライブラリを初期化する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザはCRI Atomライブラリにメモリ確保関数を登録しておきます。<br>
 * workにNULL、work_sizeに0を指定して本関数を呼び出すことで、
 * ライブラリは登録済みのメモリ確保関数を使用して必要なメモリを自動的に確保します。<br>
 * ユーザがワーク領域を用意する必要はありません。<br>
 * 初期化時に確保されたメモリは、終了処理時（ ::criAtom_Finalize 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtom_CalculateWorkSize 関数で取得可能です。<br>
 * 初期化処理の前に ::criAtom_CalculateWorkSize 関数で取得したサイズ分のメモリを予め
 * 確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域はライブラリの終了処理（ ::criAtom_Finalize 関数）
 * を行うまでの間、ライブラリ内で利用され続けます。<br>
 * ライブラリの終了処理を行う前に、ワーク領域のメモリを解放しないでください。<br>
 * \par 例:
 * 【User Allocator方式によるライブラリの初期化】<br>
 * User Allocator方式を用いる場合、ライブラリの初期化／終了の手順は以下の以下の通りです。<br>
 * 	-# 初期化処理実行前に、 ::criAtom_SetUserMallocFunction 関数と
 * ::criAtom_SetUserFreeFunction 関数を用いてメモリ確保／解放関数を登録する。<br>
 * 	-# 初期化用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ::criAtom_Initialize 関数で初期化処理を行う。<br>
 * （workにはNULL、work_sizeには0を指定する。）<br>
 * 	-# アプリケーション終了時に ::criAtom_Finalize 関数で終了処理を行う。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * // 独自のメモリ確保関数
 * void *user_malloc(void *obj, CriUint32 size)
 * {
 * 	void *mem;
 *
 * 	// メモリの確保
 * 	mem = malloc(size);
 *
 * 	return (mem);
 * }
 *
 * // 独自のメモリ解放関数を用意
 * void user_free(void *obj, void *mem)
 * {
 * 	// メモリの解放
 * 	free(mem);
 *
 * 	return;
 * }
 *
 * main()
 * {
 * 	CriAtomConfig config;	// ライブラリ初期化用コンフィグ構造体
 * 		:
 * 	// 独自のメモリ確保関数を登録
 * 	criAtom_SetUserMallocFunction(user_malloc, NULL);
 *
 * 	// 独自のメモリ解放関数を登録
 * 	criAtom_SetUserFreeFunction(user_free, NULL);
 *
 * 	// ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * 	criAtom_SetDefaultConfig(&config);
 *
 * 	// ライブラリの初期化
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリは、登録したメモリ確保関数を使って確保される。
 * 	criAtom_Initialize(&config, NULL, 0);
 * 		:
 * 	// アプリケーションのメイン処理
 * 		:
 * 	// アプリケーションを終了する際に終了処理を行う
 * 	// →初期化時に確保されたメモリは、登録したメモリ解放関数を使って解放される。
 * 	criAtom_Finalize();
 * 		:
 * }
 * \endcode
 * <br>
 * 【Fixed Memory方式によるライブラリの初期化】<br>
 * Fixed Memory方式を用いる場合、ライブラリの初期化／終了の手順は以下の以下の通りです。<br>
 * 	-# 初期化用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ライブラリの初期化に必要なワーク領域のサイズを、 ::criAtom_CalculateWorkSize
 * 関数を使って計算する。<br>
 * 	-# ワーク領域サイズ分のメモリを確保する。<br>
 * 	-# ::criAtom_Initialize 関数で初期化処理を行う。<br>
 * （workには確保したメモリのアドレスを、work_sizeにはワーク領域のサイズを指定する。）<br>
 * 	-# アプリケーション終了時に ::criAtom_Finalize 関数で終了処理を行う。<br>
 * 	-# ワーク領域のメモリを解放する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 	CriAtomConfig config;	// ライブラリ初期化用コンフィグ構造体
 * 	void *work;				// ワーク領域アドレス
 * 	CriSint32 work_size;	// ワーク領域サイズ
 * 		:
 * 	// ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * 	criAtom_SetDefaultConfig(&config);
 *
 * 	// ライブラリの初期化に必要なワーク領域のサイズを計算
 * 	work_size = criAtom_CalculateWorkSize(&config);
 *
 * 	// ワーク領域用にメモリを確保
 * 	work = malloc((size_t)work_size);
 *
 * 	// ライブラリの初期化
 * 	// →確保済みのワーク領域を指定する。
 * 	criAtom_Initialize(&config, NULL, 0);
 * 		:
 * 	// アプリケーションのメイン処理
 * 	// →この間、確保したメモリは保持し続ける。
 * 		:
 * 	// アプリケーションを終了する際に終了処理を行う
 * 	criAtom_Finalize();
 *
 * 	// 必要なくなったワーク領域を解放する
 * 	free(work);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、初期化用コンフィグ構造体の内容に応じて
 * 変化します。<br>
 * また、必要なワーク領域のサイズは、プラットフォームによっても異なります。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 現状、ストリーム再生の有無に関係なく、CRI Atomライブラリの初期化前に必ず
 * CRI File Systemライブラリを初期化しておく必要があります。<br>
 * CRI File Systemライブラリの初期化が行われていない場合は、
 * CRI Atomライブラリ内部でCRI File Systemライブラリを初期化します。<br>
 * その際の初期化パラメーターはcriFs_SetDefaultConfig処理マクロで設定される値です。
 * <br>
 * 本関数を実行後、必ず対になる ::criAtom_Finalize 関数を実行してください。<br>
 * また、 ::criAtom_Finalize 関数を実行するまでは、本関数を再度実行することはできません。<br>
 * \sa CriAtomConfig, criAtom_Finalize, criAtom_SetUserMallocFunction,
 * criAtom_SetUserFreeFunction, criAtom_CalculateWorkSize
 */
void CRIAPI criAtom_Initialize(const CriAtomConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ライブラリの終了
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリを終了します。<br>
 * \attention
 * ::criAtom_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtom_Initialize
 */
void CRIAPI criAtom_Finalize(void);

/*JP
 * \brief ライブラリ初期化状態の取得
 * \ingroup ATOMLIB_GLOBAL
 * \return	CriBool		初期化中かどうか
 * \retval	CRI_FALSE	未初期化状態
 * \retval	CRI_TRUE	初期化済み
 * \par 説明:
 * CRI Atomライブラリが既に初期化されているかどうかをチェックします。<br>
 * \sa criAtom_Initialize, criAtom_Finalize
 */
CriBool CRIAPI criAtom_IsInitialized(void);

/*JP
 * \brief オーディオ出力が有効かどうかのチェック
 * \ingroup ATOMLIB_GLOBAL
 * \return	CriBool		オーディオ出力が有効かどうか
 * \retval	CRI_TRUE	有効
 * \retval	CRI_FALSE	無効
 * \par 説明:
 * オーディオ出力が有効化どうかをチェックします。<br>
 * CRI Atomライブラリ初期化時、サウンドデバイスが利用可能であった場合、
 * 本関数はCRI_TRUEを返します。<br>
 * CRI Atomライブラリ初期化時に、サウンドデバイスが利用不可能であった場合、
 * 本関数はCRI_FALSEを返します。<br>
 * \par 補足:
 * サウンドデバイスが無効な場合でも、Atomライブラリは音声を出力せずに動作します。<br>
 * （音声データ消費量をタイマを元に計算し、可能な限り音声出力が有効な場合と同等の動作をエミュレートします。）<br>
 * そのため、音声出力デバイスが使用できないケースであっても、
 * アプリケーション側でAtomライブラリのAPI呼び出しを回避する必要はありません。<br>
 * （PC環境等、ユーザがサウンドデバイスを無効化しているケースに対し通知を行いたい場合に、
 * 本関数を使用してください。）<br>
 * \attention
 * 本関数は、「Atomライブラリ初期化時点でオーディオデバイスが利用可能だったかどうか」を返します。<br>
 * ライブラリ初期化後にユーザがサウンドデバイスを抜き差しするケースについては、本関数では検知できません。<br>
 * （各機種固有のAPIを使用する必要があります。）<br>
 * <br>
 * オーディオ出力が無効な状態でAtomライブラリを初期化後、
 * ユーザがオーディオデバイスを有効化したとしても、Atomライブラリは音声出力を行いません。<br>
 * （オーディオデバイスが刺されたことをAtomライブラリが自動で検出することはありません。）<br>
 * アプリケーション実行中にオーディオデバイスを有効化したい場合には、
 * Atomライブラリの初期化処理をやり直す必要があります。<br>
 * \sa criAtom_Initialize
 */
CriBool CRIAPI criAtom_IsAudioOutputActive(void);

/*JP
 * \brief マルチスレッド用サーバー処理の実行
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリの内部状態を更新します。<br>
 * アプリケーションは、この関数を定期的に実行する必要があります。<br>
 * <br>
 * サーバー処理を実行すべき回数は、ライブラリ初期化時のパラメーターに依存します。<br>
 * ライブラリ初期化時にスレッドモデルを ::CRIATOM_THREAD_MODEL_MULTI に設定した場合、
 * リアルタイム性の要求される処理は全てCRI Atomライブラリ内で定期的に自動実行されるため、
 * 本関数の呼び出し頻度は少なくても問題は発生しません。<br>
 * （最低でも毎秒1回程度実行されていれば、音切れ等の問題が発生することはありません。）<br>
 * ライブラリ初期化時にスレッドモデルを ::CRIATOM_THREAD_MODEL_SINGLE や
 * ::CRIATOM_THREAD_MODEL_USER_MULTI に設定した場合、ファイルの読み込み管理や、
 * データのデコード、音声の出力等、音声再生に必要な処理のほぼ全てが本関数内で実行されます。<br>
 * また、音声再生処理に同期して、CRI File Systemライブラリのファイルアクセスとデータ展開処理を実行します。<br>
 * そのため、ライブラリ初期化時に指定したサーバー処理の実行頻度（ ::CriAtomConfig 構造体の
 * server_frequency ）を下回る頻度で本関数を実行した場合や、
 * 大きいデータの読み込み、圧縮ファイルの読み込み等を行う場合、
 * 音切れ等の問題が発生する可能性があるので注意してください。<br>
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルを ::CRIATOM_THREAD_MODEL_MULTI に設定した場合でも、
 * 本関数を実行する必要があります。<br>
 * （スレッドモデルを ::CRIATOM_THREAD_MODEL_MULTI の場合、ステータス更新等、ごく一部の
 * <br>
 * CRI File Systemライブラリのサーバー処理は、CRI Atomライブラリ内部で実行されます。<br>、
 * そのため、本関数を実行している場合、アプリケーション側で別途CRI File Systemライブラリ
 * のサーバー処理を呼び出す必要はありません。<br>
 * \sa criAtom_ExecuteAudioProcess
 */
void CRIAPI criAtom_ExecuteMain(void);

/*JP
 * \brief ユーザーマルチスレッド用サーバー処理の実行
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリのみを更新します。<br>
 * スレッドモデルが::CRIATOM_THREAD_MODEL_USER_MULTIの場合、
 * アプリケーションは、この関数を定期的に実行する必要があります。<br>
 *
 * <br>
 * ファイルの読み込み管理や、データのデコード、音声の出力等、
 * 音声再生に必要な処理のほぼ全てが本関数内で実行されます。<br>
 * そのため、ライブラリ初期化時に指定したサーバー処理の実行頻度（ ::CriAtomConfig 構造体の
 * server_frequency ）を下回る頻度で本関数を実行した場合、音切れ等の問題が発生する可能性
 * があります。<br>
 * また、本関数は::criAtom_ExecuteMain 関数と異なり、CRI File Systemライブラリのサーバー処理を実行しません。<br>
 * アプリケーションが必要なサーバー処理を正しい順序で実行してください。<br>
 * \par 備考:
 * ::CRIATOM_THREAD_MODEL_SINGLE に設定した場合、サーバー処理の排他制御が行われないので、
 * 複数のスレッドから呼び出さないようにしてください。<br>
 * \sa criAtom_ExecuteMain
 */
void CRIAPI criAtom_ExecuteAudioProcess(void);

/*JP
 * \brief メモリ確保関数の登録
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	func		メモリ確保関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atomライブラリにメモリ確保関数を登録します。<br>
 * CRI Atomライブラリ内がライブラリ内で行うメモリ確保処理を、
 * ユーザ独自のメモリ確保処理に置き換えたい場合に使用します。<br>
 * <br>
 * 本関数の使用手順は以下のとおりです。<br>
 * (1) ::CriAtomMallocFunc インターフェースに副ったメモリ確保関数を用意する。<br>
 * (2) ::criAtom_SetUserMallocFunction 関数を使用し、CRI Atomライブラリに対して
 * メモリ確保関数を登録する。<br>
 * <br>
 * 具体的なコードの例は以下のとおりです。
 * \par 例:
 * \code
 * // 独自のメモリ確保関数を用意
 * void *user_malloc(void *obj, CriUint32 size)
 * {
 * 	void *mem;
 *
 * 	// メモリの確保
 * 	mem = malloc(size);
 *
 * 	return (mem);
 * }
 *
 * main()
 * {
 * 		:
 * 	// メモリ確保関数の登録
 * 	criAtom_SetUserMallocFunction(user_malloc, NULL);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 引数の obj に指定した値は、 ::CriAtomMallocFunc に引数として渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを本関数の引数にセットしておき、コールバック関数で引数を経由
 * して参照してください。<br>
 * \attention
 * メモリ確保関数を登録する際には、合わせてメモリ解放関数（ ::CriAtomFreeFunc ）を
 * 登録する必要があります。
 * \sa CriAtomMallocFunc, criAtom_SetUserFreeFunction
 */
void CRIAPI criAtom_SetUserMallocFunction(CriAtomMallocFunc func, void *obj);

/*JP
 * \brief メモリ解放関数の登録
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	func		メモリ解放関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atomライブラリにメモリ解放関数を登録します。<br>
 * CRI Atomライブラリ内がライブラリ内で行うメモリ解放処理を、
 * ユーザ独自のメモリ解放処理に置き換えたい場合に使用します。<br>
 * <br>
 * 本関数の使用手順は以下のとおりです。<br>
 * (1) ::CriAtomFreeFunc インターフェースに副ったメモリ解放関数を用意する。<br>
 * (2) ::criAtom_SetUserFreeFunction 関数を使用し、CRI Atomライブラリに対して
 * メモリ解放関数を登録する。<br>
 * <br>
 * 具体的なコードの例は以下のとおりです。
 * \par 例:
 * \code
 * // 独自のメモリ解放関数を用意
 * void user_free(void *obj, void *mem)
 * {
 * 	// メモリの解放
 * 	free(mem);
 *
 * 	return;
 * }
 *
 * main()
 * {
 * 		:
 * 	// メモリ解放関数の登録
 * 	criAtom_SetUserFreeFunction(user_free, NULL);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 引数の obj に指定した値は、 ::CriAtomFreeFunc に引数として渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを本関数の引数にセットしておき、コールバック関数で引数を経由
 * して参照してください。<br>
 * \attention
 * メモリ解放関数を登録する際には、合わせてメモリ確保関数（ ::CriAtomMallocFunc ）を
 * 登録する必要があります。
 * \sa CriAtomFreeFunc, criAtom_SetUserMallocFunction
 */
void CRIAPI criAtom_SetUserFreeFunction(CriAtomFreeFunc func, void *obj);

/*JP
 * \brief オーディオフレーム開始コールバック関数の登録
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	func		オーディオフレーム開始コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atomライブラリにオーディオフレーム開始コールバックを登録します。<br>
 * オーディオフレームは、CRI Atomライブラリ内でサーバー処理を実行するタイミングを示します。<br>
 * 本関数で登録したコールバック関数は、オーディオフレームの開始時（サーバー処理開始直前）に
 * 実行されます。
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルをマルチスレッド（ ::CRIATOM_THREAD_MODEL_MULTI ）
 * に設定した場合、コールバック関数はCRI Atomライブラリ内で作成されたスレッドから
 * 呼び出されます。<br>
 * ライブラリ初期化時にスレッドモデルをユーザマルチスレッド（ ::CRIATOM_THREAD_MODEL_USER_MULTI ）、
 * またはシングルスレッド（ ::CRIATOM_THREAD_MODEL_SINGLE ）に設定した場合、コールバック関数
 * ::criAtom_ExecuteMain 関数内で呼び出されます。<br>
 * <br>
 * 引数の obj に指定した値は、 ::CriAtomAudioFrameStartCbFunc に引数として渡されます。<br>
 * \attention
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 */
void CRIAPI criAtom_SetAudioFrameStartCallback(
	CriAtomAudioFrameStartCbFunc func, void *obj);

/*JP
 * \brief オーディオフレーム終了コールバック関数の登録
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	func		オーディオフレーム終了コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atomライブラリにオーディオフレーム終了コールバックを登録します。<br>
 * オーディオフレームは、CRI Atomライブラリ内でサーバー処理を実行するタイミングを示します。<br>
 * 本関数で登録したコールバック関数は、オーディオフレームの終了時（サーバー処理終了直後）に
 * 実行されます。
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルをマルチスレッド（ ::CRIATOM_THREAD_MODEL_MULTI ）
 * に設定した場合、コールバック関数はCRI Atomライブラリ内で作成されたスレッドから
 * 呼び出されます。<br>
 * ライブラリ初期化時にスレッドモデルをユーザマルチスレッド（ ::CRIATOM_THREAD_MODEL_USER_MULTI ）、
 * またはシングルスレッド（ ::CRIATOM_THREAD_MODEL_SINGLE ）に設定した場合、コールバック関数
 * ::criAtom_ExecuteMain 関数内で呼び出されます。<br>
 * <br>
 * 引数の obj に指定した値は、 ::CriAtomAudioFrameEndCbFunc に引数として渡されます。<br>
 * \attention
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 */
void CRIAPI criAtom_SetAudioFrameEndCallback(
	CriAtomAudioFrameEndCbFunc func, void *obj);

/*JP
 * \brief サーバー処理の割り込みを防止
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * サーバー処理の割り込み抑止します。<br>
 * 本関数実行後、::criAtom_Unlock 関数実行までの間、サーバー処理の動作が抑止されます。<br>
 * 複数のAPIを同一オーディオフレーム内で確実に実行したい場合には、本関数でサーバー処理の
 * 割り込みを防止し、それらの関数を実行してください。
 * \par 例:
 * \code
 * 	：
 * // サーバー処理の割り込みを防止
 * criAtom_Lock();
 *
 * // 複数の音声を同時に再生開始
 * criAtomPlayer_Start(player1);
 * criAtomPlayer_Start(player2);
 * criAtomPlayer_Start(player3);
 * criAtomPlayer_Start(player4);
 *
 * // サーバー処理の割り込み防止を解除
 * criAtom_Unlock();
 * 	：
 * \endcode
 * \attention
 * 上記の例のように、複数のプレーヤーで同時に再生をスタートする場合でも、
 * ストリーム再生時は同時に発音が開始されるとは限りません。<br>
 * （バッファリングに伴う再生遅延があるため。）<br>
 * <br>
 * 本関数実行後、長時間::criAtom_Unlock 関数を呼ばない場合、音声再生が途切れる恐れがあります。<br>
 * サーバー処理の割り込みを防止する区間は、最小限に抑える必要があります。
 * \sa criAtom_Unlock
 */
void CRIAPI criAtom_Lock(void);

/*JP
 * \brief サーバー処理の割り込み防止を解除
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * ::criAtom_Lock 関数による、サーバー処理の割り込み防止を解除します。
 * \sa criAtom_Lock
 */
void CRIAPI criAtom_Unlock(void);

/*JP
 * \brief チャンネルマッピングパターンの指定
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	nch		マッピングパターンを変更するチャンネル数
 * \param[in]	type	マッピングパターン
 * \par 説明:
 * 音声データの各チャンネルと出力スピーカーの対応付けを変更します。<br>
 * <br>
 * [5ch音声データについて]
 * 5ch音声データを再生した場合、デフォルト状態では各チャンネルが
 * L, R, C, Ls, Rs の順で出力されます。<br>
 * これに対し、::criAtom_SetChannelMapping(5, 1); を実行した場合、
 * 5ch音声データの各チャンネルが L, R, LFE, Ls, Rs の順で出力されるようになります。<br>
 * <br>
 * [6ch音声データについて]
 * 6ch音声データを再生した場合、デフォルト状態では各チャンネルが
 * L, R, C, LFE, Ls, Rs の順で出力されます。<br>
 * これに対し、::criAtom_SetChannelMapping(6, 1); を実行した場合、
 * 6ch音声データの各チャンネルが L, C, R, Ls, Rs ,LFEの順で出力されるようになります。<br>
 * \par 備考:
 * 現状、本関数では5chと6chの音声データのマッピングパターンしか変更できません。<br>
 */
void CRIAPI criAtom_SetChannelMapping(CriSint32 nch, CriUint32 type);

/*JP
 * \brief パフォーマンスモニター機能の追加
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * パフォーマンス計測機能を追加し、パフォーマンス計測処理を開始します。<br>
 * 本関数を実行後、 ::criAtom_GetPerformanceInfo 関数を実行することで、
 * サーバー処理の負荷や、サーバー処理の実行間隔等、ライブラリのパフォーマンス情報を
 * 取得することが可能です。
 * \sa criAtom_GetPerformanceInfo, criAtom_DetachPerformanceMonitor
 * \par 例:
 * \code
 * 	// パフォーマンス情報取得用構造体
 * 	CriAtomPerformanceInfo info;
 *
 * 	// ライブラリの初期化
 * 	criAtom_Initialize(…);
 *
 * 	// パフォーマンスモニター機能の追加
 * 	criAtom_AttachPerformanceMonitor();
 *
 * 	// パフォーマンスモニターのリセット
 * 	criAtom_ResetPerformanceMonitor();
 *
 * 	// パフォーマンス計測区間
 * 	…
 *
 * 	// パフォーマンス情報の取得
 * 	criAtom_GetPerformanceInfo(&info);
 *
 * 	// 計測結果の表示
 * 	printf(
 * 		"Max CPU Load            : %d (us)\n"	\
 * 		"Average CPU Load        : %d (us)\n"	\
 * 		"Max Server Interval     : %d (us)\n"	\
 * 		"Average Server Interval : %d (us)\n",
 * 		info.max_server_time, info.average_server_time,
 * 		info.max_server_interval, info.average_server_interval
 * 	);
 * \endcode
 */
void CRIAPI criAtom_AttachPerformanceMonitor(void);

/*JP
 * \brief パフォーマンスモニター機能の削除
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * パフォーマンス計測処理を終了し、パフォーマンス計測機能を削除します。
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 */
void CRIAPI criAtom_DetachPerformanceMonitor(void);

/*JP
 * \brief パフォーマンスモニターのリセット
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * 現在までの計測結果を破棄します。<br>
 * パフォーマンスモニターは、 ::criAtom_AttachPerformanceMonitor 関数実行直後
 * からパフォーマンス情報の取得を開始し、計測結果を累積します。<br>
 * これから計測する区間に対し、以前の計測結果を以降の計測結果に含めたくない場合には、
 * 本関数を実行し、累積された計測結果を一旦破棄する必要があります。
 */
void CRIAPI criAtom_ResetPerformanceMonitor(void);

/*JP
 * \brief パフォーマンス情報の取得
 * \ingroup ATOMLIB_GLOBAL
 * \par 説明:
 * パフォーマンス情報を取得します。<br>
 * 本関数は、 ::criAtom_AttachPerformanceMonitor 関数実行後から
 * ::criAtom_DetachPerformanceMonitor 関数を実行するまでの間、利用可能です。<br>
 * \sa criAtom_AttachPerformanceMonitor, criAtom_DetachPerformanceMonitor
 */
void CRIAPI criAtom_GetPerformanceInfo(CriAtomPerformanceInfo *info);

/*JP
 * \brief ADXデータのビットレート計算
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * ADXデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 */
CriSint32 CRIAPI criAtom_CalculateAdxBitrate(
	CriSint32 num_channels, CriSint32 sampling_rate);

/*JP
 * \brief HCAデータのビットレート計算
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \param[in]	quality			データのエンコード品質
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * HCAデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * qualityにはCRI Atom CraftまたはCRI Atom Encoderで設定したエンコード品質を指定します。
 */
CriSint32 CRIAPI criAtom_CalculateHcaBitrate(
	CriSint32 num_channels, CriSint32 sampling_rate, CriAtomEncodeQuality quality);

/*JP
 * \brief HCA-MXデータのビットレート計算
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \param[in]	quality			データのエンコード品質
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * HCA-MXデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * qualityにはCRI Atom CraftまたはCRI Atom Encoderで設定したエンコード品質を指定します。
 */
CriSint32 CRIAPI criAtom_CalculateHcaMxBitrate(
	CriSint32 num_channels, CriSint32 sampling_rate, CriAtomEncodeQuality quality);

/*JP
 * \brief ストリーミング情報の取得
 * \ingroup ATOMLIB_GLOBAL
 * \param[out]	streaming_info	ストリーミング情報保存先のポインタ
 * \retval		CRI_TRUE	値を取得できた
 * \retval		CRI_FALSE	値を取得できなかった
 * \par 説明:
 * CRI Atomライブラリのストリーミング管理モジュールからストリーミング情報を取得します。<br>
 * 本関数は、呼び出された時点のストリーミング情報を streaming_info に保存します。<br>
 * \attention
 * Atomサーバー内の処理と一部排他制御しているため、
 * 優先度逆転によりAtomサーバーを止めてしまわないように注意してください。<br>
 * 一部のプラットフォームでは、ストリーミング情報を取得できません。<br>
 * 本関数の戻り値を確認してください。<br>
 * エラーが原因でストリーミング情報を取得できなかった場合については、<br>
 * エラーコールバックが発生していないかを確認してください。
 * \sa CriAtomStreamingInfo
 */
CriBool CRIAPI criAtom_GetStreamingInfo(CriAtomStreamingInfo* streaming_info);

/*JP
 * \brief ファイルI/Oの空き時間を使ったストリーミング読み込みを行うかどうか
 * \ingroup ATOMLIB_GLOBAL
 * \param[in]	flag	CRI_TRUE=ファイルI/Oの空き時間を使って読み込む
 * \retval		CRI_TRUE	正常に処理が完了
 * \retval		CRI_FALSE	エラーが発生
 * \par 説明:
 * CRI Atomライブラリのストリーミング管理モジュールに対して、<br>
 * ファイルI/Oの空き時間を使ってストリーミング読み込みを行うかどうかを設定します。<br>
 * CRI_TRUEを設定すると、CRI Atomライブラリのストリーミング管理モジュールは
 * ファイルI/Oの空き時間を使って、空きバッファーに対してデータを余分に読み込みます。<br>
 * CRI_FALSEを設定すると、CRI Atomライブラリのストリーミング管理モジュールは
 * ファイルI/Oの空き時間を使わなくなり、余分なストリーミング読み込みを行わなくなります。<br>
 * デフォルトではCRI_TRUEを設定した状態です。<br>
 * \par 備考：
 * ファイルI/Oの空き時間を使い、空きバッファーに対してデータを余分に読み込んでおくことで、
 * シークの発生頻度を減らす事ができ、総合的なファイルI/Oの効率が向上します。<br>
 * 一方、通常ファイルのロード処理は、ストリーミングの読み込みよりも優先度が低いため、
 * 空きバッファーが大きすぎると通常ファイルのロード処理を大幅に遅延させてしまいます。<br>
 * \attention
 * Atomサーバー内の処理と一部排他制御しているため、
 * 優先度逆転によりAtomサーバーを止めてしまわないように注意してください。
 */
CriBool CRIAPI criAtom_SetFreeTimeBufferingFlagForDefaultDevice(CriBool flag);


/*==========================================================================
 *      CRI Atom HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化用ワーク領域サイズの計算
 * \ingroup ATOMLIB_HCA_MX
 * \param[in]	config		HCA-MX初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCA-MXの初期化に必要なワーク領域のサイズを取得します。<br>
 * ::criAtom_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomHcaMx_Initialize 関数でHCA-MXの初期化を行う場合、
 * 本関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * HCA-MXの初期化に必要なワークメモリのサイズは、HCA-MX初期化用コンフィグ
 * 構造体（ ::CriAtomHcaMxConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomHcaMx_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtom_SetUserAllocator, criAtomHcaMx_Initialize
 */
CriSint32 CRIAPI criAtomHcaMx_CalculateWorkSize(const CriAtomHcaMxConfig *config);

/*JP
 * \brief ワーク領域サイズ計算用コンフィグ構造体の設定
 * \ingroup ATOMLIB_HCA_MX
 * \param[in]	config		HCA-MX初期化用コンフィグ構造体
 * \par 説明:
 * ワーク領域サイズの計算用に、HCA-MX初期化用コンフィグ構造体
 * （ ::CriAtomHcaMxConfig 構造体）を仮登録します。<br>
 * <br>
 * HCA-MXプレーヤーの作成に必要なワーク領域のサイズは、
 * HCA-MX初期化時（ ::criAtomHcaMx_Initialize 関数実行時）
 * に設定する構造体のパラメーターによって変化します。<br>
 * そのため、通常はプレーヤーの作成に必要なワーク領域サイズを計算する前に、
 * HCA-MXを初期化する必要があります。<br>
 * 本関数を使用してHCA-MX初期化用コンフィグ構造体を登録した場合、
 * ::criAtomPlayer_CalculateWorkSizeForHcaMxPlayer
 * 関数が初期化処理なしに使用可能となります。<br>
 * \par 備考:
 * 引数（ config ）に NULL を指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForHcaMxPlayer
 * 適用時と同じパラメーター）でワーク領域サイズを計算します。<br>
 * <br>
 * 現状、本関数で一旦コンフィグ構造体を設定すると、
 * 設定前の状態（未初期化状態でのワーク領域サイズ計算をエラーとする動作）
 * に戻すことができなくなります。<br>
 * （関数を再度実行してパラメーターを上書きすることは可能です。）<br>
 * \attention
 * 本関数で登録した初期化用コンフィグ構造体は、
 * HCA-MX未初期化状態でのワーク領域サイズ計算にしか使用されません。<br>
 * HCA-MX初期化後には本関数に設定したパラメーターではなく、
 * 初期化時に指定されたパラメーターがワーク領域サイズの計算に使用されます。<br>
 * （本関数で登録する構造体のパラメーターと、
 * HCA-MX初期化時に使用する構造体のパラメーターが異なる場合、
 * ワーク領域サイズが不足し、ハンドルの作成に失敗する恐れがあります。）<br>
 * \par 例:
 * \code
 * 	CriAtomHcaMxConfig hca_mx_config;
 *
 * 	// ワーク領域計算用にHCA-MX初期化設定を仮登録
 * 	criAtomHcaMx_SetDefaultConfig(&hca_mx_config);
 * 	criAtomHcaMx_SetConfigForWorkSizeCalculation(&hca_mx_config);
 *
 * 	// HCA-MXプレーヤー作成用ワーク領域サイズの計算
 * 	hca_mx_vp_work_size = criAtomPlayer_CalculateWorkSizeForHcaMxPlayer(NULL);
 * 		：
 * \endcode
 * \sa criAtomPlayer_CalculateWorkSizeForHcaMxPlayer, criAtomPlayer_SetDefaultConfigForHcaMxPlayer
 */
void CRIAPI criAtomHcaMx_SetConfigForWorkSizeCalculation(const CriAtomHcaMxConfig *config);

/*JP
 * \brief HCA-MXの初期化
 * \ingroup ATOMLIB_HCA_MX
 * \param[in]	config	HCA-MX初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * HCA-MXの初期化を行います。<br>
 * 本関数を実行することで、HCA-MXデータの出力機能が起動されます。<br>
 * \par 備考:
 * HCA-MXの初期化に必要なワークメモリのサイズは、HCA-MX初期化用コンフィグ
 * 構造体（ ::CriAtomHcaMxConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomHcaMx_SetDefaultConfig 適用時と同じパラメーター）で初期化処理を行います。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * <br>
 * 本関数を実行後、必ず対になる ::criAtomHcaMx_Finalize 関数を実行してください。<br>
 * また、 ::criAtomHcaMx_Finalize 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa criAtom_SetUserAllocator, criAtomHcaMx_CalculateWorkSize
 */
void CRIAPI criAtomHcaMx_Initialize(
	const CriAtomHcaMxConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCA-MXの終了
 * \ingroup ATOMLIB_HCA_MX
 * \par 説明:
 * HCA-MXの終了処理を行います。<br>
 * 本関数を実行することで、HCA-MXデータの出力が停止されます。<br>
 * ::criAtom_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * HCA-MX初期化時に確保されたメモリ領域が解放されます。<br>
 * （HCA-MX初期化時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtom_SetUserAllocator, criAtomHcaMx_Initialize
 */
void CRIAPI criAtomHcaMx_Finalize(void);

/*JP
 * \brief ミキサのバスセンドレベル設定
 * \ingroup ATOMLIB_HCA_MX
 * \param[in]	mixer_id	ミキサID
 * \param[in]	bus_name	バス名
 * \param[in]	level		センドレベル値（0.0f〜1.0f）
 * \par 説明:
 * ミキサのバスセンドレベルを設定します。<br>
 * デフォルト状態では、HCA-MXのデコード結果はミキサに格納された後、
 * バス0へ1.0fのレベルで送信されます。<br>
 * 本関数を使用することで、デコード結果を他のバスへもセンドすることが可能になります。<br>
 * （ミキサごとに異なるバスエフェクトを適用可能になります。）<br>
 */
void CRIAPI criAtomHcaMx_SetBusSendLevelByName(
	CriSint32 mixer_id, const CriChar8* bus_name, CriFloat32 level);

/*JP
 * \brief ミキサの出力周波数調整比の設定
 * \ingroup ATOMLIB_HCA_MX
 * \param[in]	mixer_id	ミキサID
 * \param[in]	ratio		センドレベル値（0.25f〜4.0f）
 * \par 説明:
 * ミキサの出力周波数調整比を設定します。<br>
 * 周波数調整比は、音声データの周波数と再生周波数の比率で、再生速度の倍率と等価です。<br>
 * 周波数比が1.0fを超える場合、音声データは原音より高速に再生され、
 * 1.0f未満の場合は、音声データは原音より低速で再生されます。<br>
 * 本関数を使用することで、対象のミキサを使用する全てのプレーヤーの再生速度を
 * 変更することができます（個々のプレーヤーの再生速度は変更できません）。<br>
 */
void CRIAPI criAtomHcaMx_SetFrequencyRatio(CriSint32 mixer_id, CriFloat32 ratio);

/*==========================================================================
 *      CRI Atom AWB API
 *=========================================================================*/
/*JP
 * \brief AWBファイルのTOC情報ロード用ワーク領域サイズの計算
 * \ingroup ATOMLIB_AWB
 * \param[in]	num			AWBファイルに含まれるコンテンツ数
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * AWBファイルのTOC情報をロードするために十分なワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomAwb_LoadToc, criAtomAwb_LoadTocAsync
 */
CriSint32 CRIAPI criAtomAwb_CalculateWorkSizeForLoadToc(CriSint32 num);

/*JP
 * \brief AWBファイルのTOC情報ロード（同期版）
 * \ingroup ATOMLIB_AWB
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		AWBファイル名
 * \param[in]	work		AWBファイルのTOC情報ロード用ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomAwbHn AWBハンドル
 * \par 説明:
 * 音声再生の音源として使用するAWBファイルのTOC情報をロードします。<br>
 * ロード完了まで本関数は復帰しませんので、シーンの切り替えや、
 * 負荷変動が許容できるタイミングで実行してください。<br>
 * ロードに成功すると、戻り値に有効なAWBハンドルが返りますので、
 * ::criAtomPlayer_SetWaveId 関数に指定して使用してください。<br>
 * 使い終わったAWBハンドルは、::criAtomAwb_Release 関数で解放してください。<br>
 * TOC情報のロードに失敗した場合はNULLが返ります。<br>
 * \par 備考:
 * 第三引数にNULL、第四引数に0を指定して実行すると、
 * 必要なワーク領域を関数内部で動的に確保します。
 * 動的に確保した領域は、::criAtomAwb_Release 関数で解放されます。
 * \attention
 * AWBハンドルは内部的にバインダー（ CriFsBinderHn ）、およびローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * AWBファイルのTOC情報をロードする場合、AWBハンドル数分のバインダー、およびローダーが
 * 確保できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * \sa criAtomPlayer_SetWaveId, criAtomAwb_Release, criAtomAwb_LoadTocById
 */
CriAtomAwbHn CRIAPI criAtomAwb_LoadToc(
	CriFsBinderHn binder, const CriChar8 *path, void *work, CriSint32 work_size);

/*JP
 * \brief ID指定によるAWBファイルのTOC情報ロード（同期版）
 * \ingroup ATOMLIB_AWB
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			AWBファイルが格納されているCPKコンテンツID
 * \param[in]	work		AWBファイルのTOC情報ロード用ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomAwbHn AWBハンドル
 * \par 説明:
 * ::criAtomAwb_LoadToc 関数とほぼ同様の機能を持つ関数です。
 * ::criAtomAwb_LoadToc 関数と異なる点は、
 * パス指定ではなくCPK内のコンテンツID指定でAWBファイルのTOC情報をロードする点です。<br>
 * \sa criAtomPlayer_SetWaveId, criAtomAwb_Release, criAtomAwb_LoadToc
 */
CriAtomAwbHn CRIAPI criAtomAwb_LoadTocById(
	CriFsBinderHn binder, CriUint16 id, void *work, CriSint32 work_size);

/*JP
 * \brief AWBファイルのTOC情報ロード（非同期版）
 * \ingroup ATOMLIB_AWB
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		AWBファイル名
 * \param[in]	work		AWBファイルのTOC情報ロード用ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomAwbHn AWBハンドル
 * \par 説明:
 * 音声再生の音源として使用するAWBファイルのTOC情報をロードします。<br>
 * 本関数はロード要求を発行する非同期関数なので、
 * ロードの完了をアプリケーション側で待つ必要があります。<br>
 * ::criAtomAwb_GetStatus 関数でAWBハンドルのステータスを定期的に取得し、
 * ロードの完了を確認してください。<br>
 * ロードの完了を待っている間はAWBハンドルのステータス更新のために、
 * 定期的に::criAtom_ExecuteMain 関数を実行する必要があります。<br>
 * ロード要求の発行に成功すると戻り値に有効なAWBハンドルが返ります。<br>
 * ロードが正しく完了した後は、::criAtomPlayer_SetWaveId 関数に指定して使用してください。<br>
 * 使い終わったAWBハンドルは、::criAtomAwb_Release 関数で解放してください。<br>
 * TOC情報のロード要求の発行に失敗した場合はNULLが返ります。<br>
 * \par 備考:
 * 第三引数にNULL、第四引数に0を指定して実行すると、
 * 必要なワーク領域を関数内部で動的に確保します。
 * 動的に確保した領域は、::criAtomAwb_Release 関数で解放されます。<br>
 * 本関数で取得したAWBハンドルのステータスがエラー状態（::CRIATOMAWB_STATUS_ERROR）になった場合も、
 * ::criAtomAwb_Release 関数で解放してください。
 * \attention
 * AWBハンドルは内部的にバインダー（ CriFsBinderHn ）、およびローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * AWBファイルのTOC情報をロードする場合、AWBハンドル数分のバインダー、およびローダーが
 * 確保できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * \sa criAtomPlayer_SetWaveId, criAtomAwb_Release, criAtomAwb_GetStatus, criAtomAwb_LoadTocAsyncById
 */
CriAtomAwbHn CRIAPI criAtomAwb_LoadTocAsync(
	CriFsBinderHn binder, const CriChar8 *path, void *work, CriSint32 work_size);

/*JP
 * \brief ID指定によるAWBファイルのTOC情報ロード（非同期版）
 * \ingroup ATOMLIB_AWB
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			AWBファイルが格納されているCPKコンテンツID
 * \param[in]	work		AWBファイルのTOC情報ロード用ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomAwbHn AWBハンドル
 * \par 説明:
 * ::criAtomAwb_LoadTocAsync 関数とほぼ同様の機能を持つ関数です。
 * ::criAtomAwb_LoadTocAsync 関数と異なる点は、
 * パス指定ではなくCPK内のコンテンツID指定でAWBファイルのTOC情報をロードする点です。<br>
 * \sa criAtomPlayer_SetWaveId, criAtomAwb_Release, criAtomAwb_GetStatus, criAtomAwb_LoadTocAsync
 */
CriAtomAwbHn CRIAPI criAtomAwb_LoadTocAsyncById(
	CriFsBinderHn binder, CriUint16 id, void *work, CriSint32 work_size);

/*JP
 * \brief オンメモリAWBハンドルの作成
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb_mem			AWBファイルを読み込んだメモリ領域へのポインタ
 * \param[in]	awb_mem_size	AWBファイルサイズ
 * \param[in]	work			オンメモリAWB用ワーク領域へのポインタ
 * \param[in]	work_size		オンメモリAWB用ワーク領域サイズ
 * \return		CriAtomAwbHn オンメモリAWBハンドル
 * \par 説明:
 * メモリ上に読み込まれたAWBファイルイメージから、オンメモリAWBハンドルを作成します。<br>
 * 同じオンメモリAWBファイルイメージから複数のオンメモリAWBハンドルを作成することができます。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザがワーク領域を用意する必要はありません。<br>
 * workにNULL、work_sizeに0を指定するだけで、必要なメモリを登録済みのメモリ確保関数から確保します。<br>
 * オンメモリAWBハンドル作成時に動的に確保されたメモリは、<br>
 * オンメモリAWB破棄時（ ::criAtomAwb_Release 関数実行時）に解放されます。<br>
 * Fixed Memor方式を用いる場合は、::CRIATOMAWB_WORKSIZE_FOR_LOADFROMMEMORY 関数を使って
 * 必要なワーク領域サイズを求めてください。<br>
 * ワーク領域とは異なり、awb_mem は必ずユーザの責任で管理する必要がある点には注意してください。<br>
 * <br>
 * \attention
 * 本関数が成功すると、 awb_memで渡されたメモリ領域をオンメモリAWBデータ用に書き換えます。<br>
 * そのため、複数スレッドから::CRIATOMAWB_WORKSIZE_FOR_LOADFROMMEMORY 関数を呼び出している場合は、<br>
 * 排他処理によりスレッドの実行順が入れ替わる場合があります。<br>
 * なお、awb_mem で指すメモリ領域は ::criAtomAwb_Release 関数実行後に手動で解放してください。
 * <br>
 * AWBハンドルは内部的にバインダー（ CriFsBinderHn ）を確保します。<br>
 * AWBファイルのTOC情報をロードする場合、AWBハンドル数分のバインダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * \sa CRIATOMAWB_WORKSIZE_FOR_LOADFROMMEMORY,criAtomAwb_Release
 */
CriAtomAwbHn CRIAPI criAtomAwb_LoadFromMemory(
	void *awb_mem, CriSint32 awb_mem_size, void *work, CriSint32 work_size);

/*JP
 * \brief AWBハンドルの種別を示す値を取得
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb				情報取得先のAWBハンドル
 * \return		CriAtomAwbType 	AWBハンドルの種別を示す値
 * \par 説明:
 * AWBハンドルがTOC情報のみであるか、オンメモリAWBハンドルなのかを示す値を取得します。
 * 本関数が失敗した場合は::CRIATOMAWB_TYPE_ERRORを返します。<br>
 * \sa criAtomAwb_GetWaveDataInfo, criAtomPlayer_SetData,
 */
CriAtomAwbType CRIAPI criAtomAwb_GetType(CriAtomAwbHn awb);

/*JP
 * \brief AWBのTOC情報から波形データのファイル情報を取得
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb			情報取得先のAWBハンドル
 * \param[in]	id			波形データID
 * \param[out]	offset		波形データのオフセット（Byte）
 * \param[out]	size		波形データのサイズ（Byte）
 * \return		なし
 * \par 説明:
 * AWBハンドルからidで指定した波形データのファイルオフセットとサイズを取得します。<br>
 * 取得したオフセットとサイズは、AWBファイルから波形データを直接読み込む場合に使用します。<br>
 * \attention
 * 本関数を実行する前に、AWBハンドルの種別を::criAtomAwb_GetType 関数で確認してください。<br>
 * AWBハンドルの種別が::CRIATOMAWB_TYPE_TOCと異なる場合、または不正なAWBハンドルだった場合、本関数は失敗し、エラーコールバックが発生します。<br>
 * 本関数が失敗した場合、出力値であるoffsetとsizeの値は不定です。<br>
 * \sa criAtomAwb_GetType, criAtomAwb_GetWaveDataInfo, criAtomPlayer_SetData,criAtomAwb_GetType
 */
CriBool CRIAPI criAtomAwb_GetWaveFileInfo(
	CriAtomAwbHn awb, CriSint32 id, CriSint64 *offset, CriUint32 *size);

/*JP
 * \brief オンメモリAWBから波形データの情報を取得
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb				情報取得先のAWBハンドル
 * \param[in]	id				波形データID
 * \param[out]	wave_data_start	波形データの先頭ポインタ（Byte）
 * \param[out]	size			波形データのサイズ（Byte）
 * \return		なし
 * \par 説明:
 * オンメモリAWBからidで指定した波形データの先頭ポインタとサイズを取得します。<br>
 * オンメモリAWBから波形データを再生する場合、通常は::criAtomPlayer_SetWaveId 関数で十分なので、そちらも参照してください。<br>
 * \attention
 * 本関数を実行する前に、AWBハンドルの種別を::criAtomAwb_GetType 関数で確認してください。<br>
 * AWBハンドルの種別が異なる場合、または不正なAWBハンドルだった場合、本関数は失敗し、エラーコールバックが発生します。<br>
 * 本関数が失敗した場合、出力値であるwave_data_startとsizeの値は不定です。<br>
 *
 * \sa criAtomAwb_GetType, criAtomAwb_GetWaveFileInfo, criAtomPlayer_SetData,criAtomPlayer_SetWaveId
 *
 */
void CRIAPI criAtomAwb_GetWaveDataInfo(CriAtomAwbHn awb, CriSint32 id, void **wave_data_start, CriUint32 *size);

/*JP
 * \brief AWBハンドルを介してAWBファイルに含まれるコンテンツ数を取得
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb				情報取得先のAWBハンドル
 * \return		コンテンツファイル数（0〜65535）
 * \par 説明:
 * AWBハンドルを介してAWBファイルに含まれているコンテンツ数（波形データ数）を取得します。<br>
 * コンテンツファイル数の値の有効範囲は1〜65535です。<br>
 * エラーが発生した場合は 0 を返します。<br>
 * \sa criAtomAwb_LoadToc, criAtomAwb_LoadFromMemory
 */
CriUint16 CRIAPI criAtomAwb_GetNumContents(CriAtomAwbHn awb);

/*JP
 * \brief AWBハンドルの解放
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb	AWBハンドル
 * \return		なし
 * \par 説明:
 * AWBハンドルを解放します。<br>
 * 使い終わったAWBハンドルは、本関数で解放してください。<br>
 * 解放したAWBハンドルは無効なハンドルになるので、使用しないでください。<br>
 * \attention
 * 本関数を実行すると、指定したAWBデータを参照しているAtomプレーヤーが存在しないか、
 * ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * 本関数を ::criAtom_Lock 関数でロックしてから実行してください。<br>
 * <br>
 * AtomExプレーヤーを使用してAWBファイルを再生する場合、
 * 再生中に本関数でAWBハンドルを破棄してはいけません。<br>
 * 必ずAtomExプレーヤーを停止させてさせてから本関数を実行してください。<br>
 * \sa criAtomAwb_LoadToc, criAtomAwb_LoadTocAsync, criAtomAwb_GetStatus
 */
void CRIAPI criAtomAwb_Release(CriAtomAwbHn awb);

/*JP
 * \brief AWBハンドルが即時解放可能かどうかのチェック
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb	AWBハンドル
 * \return		CriBool		AWBの状態（CRI_TRUE = 即時解放可能、CRI_FALSE = 再生中のプレーヤーあり）
 * \par 説明:
 * AWBハンドルを即座に解放可能かどうかをチェックします。<br>
 * 本関数が CRI_FALSE を返すタイミングで ::criAtomAwb_Release 関数を実行すると、
 * AWBハンドルを参照しているプレーヤーに対する停止処理が行われます。<br>
 * （ストリーム再生用のAWBハンドルの場合、ファイル読み込み完了を待つため、
 * ::criAtomAwb_Release 関数内で長時間処理がブロックされる可能性があります。）<br>
 * \attention
 * 本関数を実行すると、指定したAWBデータを参照しているAtomプレーヤーが存在しないか、
 * ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * 本関数を ::criAtom_Lock 関数でロックしてから実行してください。<br>
 * \sa criAtomAwb_Release
 */
CriBool CRIAPI criAtomAwb_IsReadyToRelease(CriAtomAwbHn awb);

/*JP
 * \brief AWBハンドルのステータス取得
 * \ingroup ATOMLIB_AWB
 * \param[in]	awb AWBハンドル
 * \return		CriAtomAwbStatus AWBハンドルの状態を示す値
 * \par 説明:
 * AWBハンドルのステータスを取得します。<br>
 * 本関数で取得するAWBハンドルのステータスは、::criAtom_ExecuteMain 関数を
 * 実行することで更新されます。<br>
 * \sa criAtomAwb_LoadToc, criAtomAwb_LoadTocAsync
 */
CriAtomAwbStatus CRIAPI criAtomAwb_GetStatus(CriAtomAwbHn awb);

/*==========================================================================
 *      CRI Atom Player API
 *=========================================================================*/
/*JP
 * \brief 標準プレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		標準プレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 標準プレーヤー（ADXとHCAを再生可能なプレーヤー）を作成するために必要な、
 * ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomStandardPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForStandardPlayer 適用時と同じパラメーター）
 * でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomStandardPlayerConfig, criAtomPlayer_CreateStandardPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForStandardPlayer(
	const CriAtomStandardPlayerConfig *config);

/*JP
 * \brief 標準プレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		標準プレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * ADXとHCAが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、ADXデータとHCAデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForStandardPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザがワーク領域を用意する必要はありません。<br>
 * workにNULL、work_sizeに0を指定するだけで、必要なメモリを登録済みのメモリ確保関数から確保します。<br>
 * 標準プレーヤー作成時に確保されたメモリは、標準プレーヤー破棄時（ ::criAtomPlayer_Destroy
 * 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtomPlayer_CalculateWorkSizeForStandardPlayer 関数で取得可能です。<br>
 * 標準プレーヤー作成前に ::criAtomPlayer_CalculateWorkSizeForStandardPlayer 関数で取得した
 * サイズ分のメモリを予め確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域は標準プレーヤーの破棄
 * （ ::criAtomPlayer_Destroy 関数）を行うまでの間、ライブラリ内で利用され続けます。<br>
 * 標準プレーヤーの破棄を行う前に、ワーク領域のメモリを解放しないでください。<br>
 * \par 例:
 * 【User Allocator方式による標準プレーヤーの作成】<br>
 * User Allocator方式を用いる場合、標準プレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# 標準プレーヤー作成前に、 ::criAtom_SetUserMallocFunction 関数と
 * ::criAtom_SetUserFreeFunction 関数を用いてメモリ確保／解放関数を登録する。<br>
 * 	-# 標準プレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ::criAtomPlayer_CreateStandardPlayer 関数で標準プレーヤーを作成する。<br>
 * （workにはNULL、work_sizeには0を指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomPlayer_Destroy 関数で標準プレーヤーを破棄する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * // 独自のメモリ確保関数
 * void *user_malloc(void *obj, CriUint32 size)
 * {
 * 	void *mem;
 *
 * 	// メモリの確保
 * 	mem = malloc(size);
 *
 * 	return (mem);
 * }
 *
 * // 独自のメモリ解放関数を用意
 * void user_free(void *obj, void *mem)
 * {
 * 	// メモリの解放
 * 	free(mem);
 *
 * 	return;
 * }
 *
 * main()
 * {
 * 	CriAtomStandardPlayerConfig config;	// 標準プレーヤー作成用コンフィグ構造体
 * 	CriAtomPlayerHn player;				// Atomプレーヤーハンドル
 * 		:
 * 	// 独自のメモリ確保関数を登録
 * 	criAtom_SetUserMallocFunction(user_malloc, NULL);
 *
 * 	// 独自のメモリ解放関数を登録
 * 	criAtom_SetUserFreeFunction(user_free, NULL);
 *
 * 	// 標準プレーヤー作成用コンフィグ構造体を設定
 * 	memset(&config, 0, sizeof(config));
 * 	config.max_channels = 2;			// ステレオ再生可能なプレーヤーを作成する
 * 	config.max_sampling_rate = 48000;	// 最大で48000Hzの音声を再生する
 *
 * 	// 標準プレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリは、登録したメモリ確保関数を使って確保される。
 * 	player = criAtomPlayer_CreateStandardPlayer(&config, NULL, 0);
 * 		:
 * 	// 音声再生処理
 * 		:
 * 	// 標準プレーヤーが不要になった時点で破棄
 * 	// →標準プレーヤー作成時にライブラリ内で確保されたメモリが解放される。
 * 	criAtomPlayer_Destroy(player);
 * 		:
 * }
 * \endcode
 * ※ライブラリ初期化時にメモリ確保／解放関数を登録済みの場合、標準プレーヤー作成時
 * に再度関数を登録する必要はありません。<br>
 * <br>
 * 【Fixed Memory方式による標準プレーヤーの作成】<br>
 * Fixed Memory方式を用いる場合、標準プレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# 標準プレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# 標準プレーヤーの作成に必要なワーク領域のサイズを、
 * ::criAtomPlayer_CalculateWorkSizeForStandardPlayer 関数を使って計算する。<br>
 * 	-# ワーク領域サイズ分のメモリを確保する。<br>
 * 	-# ::criAtomPlayer_CreateStandardPlayer 関数で標準プレーヤーを作成する。<br>
 * （workには確保したメモリのアドレスを、work_sizeにはワーク領域のサイズを指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomPlayer_Destroy 関数で標準プレーヤーを破棄する。<br>
 * 	-# ワーク領域のメモリを解放する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 	CriAtomStandardPlayerConfig config;	// 標準プレーヤー作成用コンフィグ構造体
 * 	CriAtomPlayerHn player;				// Atomプレーヤーハンドル
 * 	void *work;							// ワーク領域アドレス
 * 	CriSint32 work_size;				// ワーク領域サイズ
 * 		:
 * 	// 標準プレーヤー作成用コンフィグ構造体を設定
 * 	memset(&config, 0, sizeof(config));
 * 	config.max_channels = 2;			// ステレオ再生可能なプレーヤーを作成する
 * 	config.max_sampling_rate = 48000;	// 最大で48000Hzの音声を再生する
 *
 * 	// 標準プレーヤーの作成に必要なワーク領域のサイズを計算
 * 	work_size = criAtomPlayer_CalculateWorkSizeForStandardPlayer(&config);
 *
 * 	// ワーク領域用にメモリを確保
 * 	work = malloc((size_t)work_size);
 *
 * 	// 標準プレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →確保済みのワーク領域を指定する。
 * 	player = criAtomPlayer_CreateStandardPlayer(&config, work, work_size);
 * 		:
 * 	// 音声再生処理
 * 	// →この間、確保したメモリは保持し続ける。
 * 		:
 * 	// 標準プレーヤーが不要になった時点で破棄
 * 	criAtomPlayer_Destroy(player);
 *
 * 	// 必要なくなったワーク領域を解放する
 * 	free(work);
 * 		:
 * }
 * \endcode
 * ::criAtomPlayer_CreateStandardPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * 標準プレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * 標準プレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomStandardPlayerConfig, criAtomPlayer_CalculateWorkSizeForStandardPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateStandardPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateStandardPlayer(
	const CriAtomStandardPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ADXプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		ADXプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ADX再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomAdxPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForAdxPlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForAdxPlayer(
	const CriAtomAdxPlayerConfig *config);

/*JP
 * \brief ADXプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		ADXプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * ADXが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、ADXデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForAdxPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザがワーク領域を用意する必要はありません。<br>
 * workにNULL、work_sizeに0を指定するだけで、必要なメモリを登録済みのメモリ確保関数から確保します。<br>
 * ADXプレーヤー作成時に確保されたメモリは、ADXプレーヤー破棄時（ ::criAtomPlayer_Destroy
 * 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtomPlayer_CalculateWorkSizeForAdxPlayer 関数で取得可能です。<br>
 * ADXプレーヤー作成前に ::criAtomPlayer_CalculateWorkSizeForAdxPlayer 関数で取得した
 * サイズ分のメモリを予め確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域はADXプレーヤーの破棄
 * （ ::criAtomPlayer_Destroy 関数）を行うまでの間、ライブラリ内で利用され続けます。<br>
 * ADXプレーヤーの破棄を行う前に、ワーク領域のメモリを解放しないでください。<br>
 * \par 例:
 * 【User Allocator方式によるADXプレーヤーの作成】<br>
 * User Allocator方式を用いる場合、ADXプレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# ADXプレーヤー作成前に、 ::criAtom_SetUserMallocFunction 関数と
 * ::criAtom_SetUserFreeFunction 関数を用いてメモリ確保／解放関数を登録する。<br>
 * 	-# ADXプレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ::criAtomPlayer_CreateAdxPlayer 関数でADXプレーヤーを作成する。<br>
 * （workにはNULL、work_sizeには0を指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomPlayer_Destroy 関数でADXプレーヤーを破棄する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * // 独自のメモリ確保関数
 * void *user_malloc(void *obj, CriUint32 size)
 * {
 * 	void *mem;
 *
 * 	// メモリの確保
 * 	mem = malloc(size);
 *
 * 	return (mem);
 * }
 *
 * // 独自のメモリ解放関数を用意
 * void user_free(void *obj, void *mem)
 * {
 * 	// メモリの解放
 * 	free(mem);
 *
 * 	return;
 * }
 *
 * main()
 * {
 * 	CriAtomAdxPlayerConfig config;	// ADXプレーヤー作成用コンフィグ構造体
 * 	CriAtomPlayerHn player;			// Atomプレーヤーハンドル
 * 		:
 * 	// 独自のメモリ確保関数を登録
 * 	criAtom_SetUserMallocFunction(user_malloc, NULL);
 *
 * 	// 独自のメモリ解放関数を登録
 * 	criAtom_SetUserFreeFunction(user_free, NULL);
 *
 * 	// ADXプレーヤー作成用コンフィグ構造体を設定
 * 	memset(&config, 0, sizeof(config));
 * 	config.max_channels = 2;			// ステレオ再生可能なプレーヤーを作成する
 * 	config.max_sampling_rate = 48000;	// 最大で48000Hzの音声を再生する
 *
 * 	// ADXプレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリは、登録したメモリ確保関数を使って確保される。
 * 	player = criAtomPlayer_CreateAdxPlayer(&config, NULL, 0);
 * 		:
 * 	// 音声再生処理
 * 		:
 * 	// ADXプレーヤーが不要になった時点で破棄
 * 	// →ADXプレーヤー作成時にライブラリ内で確保されたメモリが解放される。
 * 	criAtomPlayer_Destroy(player);
 * 		:
 * }
 * \endcode
 * ※ライブラリ初期化時にメモリ確保／解放関数を登録済みの場合、ADXプレーヤー作成時
 * に再度関数を登録する必要はありません。<br>
 * <br>
 * 【Fixed Memory方式によるADXプレーヤーの作成】<br>
 * Fixed Memory方式を用いる場合、ADXプレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# ADXプレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ADXプレーヤーの作成に必要なワーク領域のサイズを、
 * ::criAtomPlayer_CalculateWorkSizeForAdxPlayer 関数を使って計算する。<br>
 * 	-# ワーク領域サイズ分のメモリを確保する。<br>
 * 	-# ::criAtomPlayer_CreateAdxPlayer 関数でADXプレーヤーを作成する。<br>
 * （workには確保したメモリのアドレスを、work_sizeにはワーク領域のサイズを指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomPlayer_Destroy 関数でADXプレーヤーを破棄する。<br>
 * 	-# ワーク領域のメモリを解放する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 	CriAtomAdxPlayerConfig config;	// ADXプレーヤー作成用コンフィグ構造体
 * 	CriAtomPlayerHn player;			// Atomプレーヤーハンドル
 * 	void *work;						// ワーク領域アドレス
 * 	CriSint32 work_size;			// ワーク領域サイズ
 * 		:
 * 	// ADXプレーヤー作成用コンフィグ構造体を設定
 * 	memset(&config, 0, sizeof(config));
 * 	config.max_channels = 2;			// ステレオ再生可能なプレーヤーを作成する
 * 	config.max_sampling_rate = 48000;	// 最大で48000Hzの音声を再生する
 *
 * 	// ADXプレーヤーの作成に必要なワーク領域のサイズを計算
 * 	work_size = criAtomPlayer_CalculateWorkSizeForAdxPlayer(&config);
 *
 * 	// ワーク領域用にメモリを確保
 * 	work = malloc((size_t)work_size);
 *
 * 	// ADXプレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →確保済みのワーク領域を指定する。
 * 	player = criAtomPlayer_CreateAdxPlayer(&config, work, work_size);
 * 		:
 * 	// 音声再生処理
 * 	// →この間、確保したメモリは保持し続ける。
 * 		:
 * 	// ADXプレーヤーが不要になった時点で破棄
 * 	criAtomPlayer_Destroy(player);
 *
 * 	// 必要なくなったワーク領域を解放する
 * 	free(work);
 * 		:
 * }
 * \endcode
 * ::criAtomPlayer_CreateAdxPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ADXプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ADXプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CalculateWorkSizeForAdxPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateAdxPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateAdxPlayer(
	const CriAtomAdxPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCAプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		HCAプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCA再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomHcaPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForHcaPlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomHcaPlayerConfig, criAtomPlayer_CreateHcaPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForHcaPlayer(
	const CriAtomHcaPlayerConfig *config);

/*JP
 * \brief HCAプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		HCAプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * HCAが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、HCAデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForHcaPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * 各方式の詳細については、別途 ::criAtomPlayer_CreateAdxPlayer 関数の説明をご参照ください。<br>
 * <br>
 * ::criAtomPlayer_CreateHcaPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * HCAプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * HCAプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomHcaPlayerConfig, criAtomPlayer_CalculateWorkSizeForHcaPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateHcaPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateHcaPlayer(
	const CriAtomHcaPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCA-MXプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		HCA-MXプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCA-MX再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomHcaMxPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForHcaMxPlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはHCA-MX初期化時（ ::criAtomHcaMx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、HCA-MXを初期化しておく必要があります。<br>
 * \sa CriAtomHcaMxPlayerConfig, criAtomPlayer_CreateHcaMxPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForHcaMxPlayer(
	const CriAtomHcaMxPlayerConfig *config);

/*JP
 * \brief HCA-MXプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		HCA-MXプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * HCA-MXが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、HCA-MXデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForHcaMxPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * 各方式の詳細については、別途 ::criAtomPlayer_CreateAdxPlayer 関数の説明をご参照ください。<br>
 * <br>
 * ::criAtomPlayer_CreateHcaMxPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数を実行する前に、HCA-MXを初期化しておく必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * HCA-MXプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * HCA-MXプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomHcaMxPlayerConfig, criAtomPlayer_CalculateWorkSizeForHcaMxPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateHcaMxPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateHcaMxPlayer(
	const CriAtomHcaMxPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief WAVEプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		WAVEプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * WAVE再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomWavePlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForWavePlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomWavePlayerConfig, criAtomPlayer_CreateWavePlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForWavePlayer(
	const CriAtomWavePlayerConfig *config);

/*JP
 * \brief WAVEプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		WAVEプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * WAVEが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、WAVEデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForWavePlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * 各方式の詳細については、別途 ::criAtomPlayer_CreateAdxPlayer 関数の説明をご参照ください。<br>
 * <br>
 * ::criAtomPlayer_CreateWavePlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * WAVEプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * WAVEプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * <br>
 * 現状、Waveファイルのチャンク解析は厳密には行っていません。<br>
 * チャンクの並び順がFORMチャンク、COMMチャンク、SSNDチャンクではない場合や、
 * その他のチャンクを含むWaveファイルは、解析に失敗する可能性があります。<br>
 * また、現時点で対応しているフォーマットは、モノラルまたはステレオの
 * 16bit 非圧縮データのみです。<br>
 * \sa CriAtomWavePlayerConfig, criAtomPlayer_CalculateWorkSizeForWavePlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateWavePlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateWavePlayer(
	const CriAtomWavePlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief AIFFプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		AIFFプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * AIFF再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomAiffPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForAiffPlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomAiffPlayerConfig, criAtomPlayer_CreateAiffPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForAiffPlayer(
	const CriAtomAiffPlayerConfig *config);

/*JP
 * \brief AIFFプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		AIFFプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * AIFFが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、AIFFデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForAiffPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * 各方式の詳細については、別途 ::criAtomPlayer_CreateAdxPlayer 関数の説明をご参照ください。<br>
 * <br>
 * ::criAtomPlayer_CreateAiffPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * AIFFプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * AIFFプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * <br>
 * 現状、AIFFファイルのチャンク解析は厳密には行っていません。<br>
 * チャンクの並び順がFORMチャンク、COMMチャンク、SSNDチャンクではない場合や、
 * その他のチャンクを含むAIFFファイルは、解析に失敗する可能性があります。<br>
 * また、現時点で対応しているフォーマットは、モノラルまたはステレオの
 * 16bit 非圧縮データのみです。<br>
 * \sa CriAtomAiffPlayerConfig, criAtomPlayer_CalculateWorkSizeForAiffPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateAiffPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateAiffPlayer(
	const CriAtomAiffPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief RawPCMプレーヤー作成用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		RawPCMプレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * RawPCM再生用プレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomRawPcmPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomPlayer_SetDefaultConfigForRawPcmPlayer 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtom_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomRawPcmPlayerConfig, criAtomPlayer_CreateRawPcmPlayer
 */
CriSint32 CRIAPI criAtomPlayer_CalculateWorkSizeForRawPcmPlayer(
	const CriAtomRawPcmPlayerConfig *config);

/*JP
 * \brief RawPCMプレーヤーの作成
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	config		RawPCMプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * RawPCMが再生可能なプレーヤーを作成します。<br>
 * 本関数で作成されたAtomプレーヤーには、RawPCMデータのデコード機能が付加されています。<br>
 * <br>
 * 作成されたプレーヤーで再生できる音声のフォーマットは、第一引数（config）に指定した
 * パラメーターによって決まります。<br>
 * 例えば、configのmax_sampling_rateに24000を設定した場合、作成されたプレーヤーでは
 * 24kHzを超えるサンプリングレートの音声データは再生できなくなります。<br>
 * configにNULLを指定した場合、デフォルト設定（ ::criAtomPlayer_SetDefaultConfigForRawPcmPlayer
 * 適用時と同じパラメーター）でプレーヤーを作成します。
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * 各方式の詳細については、別途 ::criAtomPlayer_CreateAdxPlayer 関数の説明をご参照ください。<br>
 * <br>
 * ::criAtomPlayer_CreateRawPcmPlayer 関数を実行すると、Atomプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomPlayerHn ）が返されます。<br>
 * データやデコーダーのセット、再生の開始、ステータスの取得等、Atomプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * 作成されたAtomプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomPlayer_SetData 関数を使用して、Atomプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomPlayer_SetFile 関数または ::criAtomPlayer_SetContentId
 * 関数を使用する。）<br>
 * -# ::criAtomPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * ストリーム再生用のAtomプレーヤーは、内部的にローダー（ CriFsLoaderHn ）を確保します。<br>
 * ストリーム再生用のAtomプレーヤーを作成する場合、プレーヤーハンドル数分のローダーが確保
 * できる設定でAtomライブラリ（またはCRI File Systemライブラリ）を初期化する
 * 必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * RawPCMプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * RawPCMプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomRawPcmPlayerConfig, criAtomPlayer_CalculateWorkSizeForRawPcmPlayer,
 * CriAtomPlayerHn, criAtomPlayer_Destroy,
 * criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_SetContentId,
 * criAtomPlayer_Start, criAtomPlayer_CreateRawPcmPlayer
 */
CriAtomPlayerHn CRIAPI criAtomPlayer_CreateRawPcmPlayer(
	const CriAtomRawPcmPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief Atomプレーヤーの破棄
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * Atomプレーヤーを破棄します。<br>
 * 本関数を実行した時点で、Atomプレーヤー作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定したAtomプレーヤーハンドルも無効になります。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 音声再生中のAtomプレーヤーを破棄しようとした場合、本関数内で再生停止を
 * 待ってからリソースの解放が行われます。<br>
 * （ファイルから再生している場合は、さらに読み込み完了待ちが行われます。）<br>
 * そのため、本関数内で処理が長時間（数フレーム）ブロックされる可能性があります。<br>
 * Atomプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomPlayer_CreateAdxPlayer, CriAtomPlayerHn
 */
void CRIAPI criAtomPlayer_Destroy(CriAtomPlayerHn player);

/*JP
 * \brief 音声データのセット（オンメモリデータの指定）
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤーハンドル
 * \param[in]	buffer			バッファーアドレス
 * \param[in]	buffer_size		バッファーサイズ
 * \par 説明:
 * メモリ上に配置された音声データを、Atomプレーヤーに関連付けます。<br>
 * 本関数でメモリアドレスとサイズを指定後、 ::criAtomPlayer_Start 関数で再生を
 * 開始すると、指定されたデータが再生されます。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたデータの情報は、他のデータがセットされるまでAtomプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * データ要求コールバック関数（ ::CriAtomPlayerDataRequestCbFunc ）内で本関数を実行すると、
 * 前回セットした音声の終端に連結して次のデータが再生されます。<br>
 * 例えば、以下のコードを実行すると、buffer1のデータとbuffer2のデータがシームレスに
 * 連結して再生されます。<br>
 * （その後はbuffer2のデータが繰り返し再生されます。）<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// 続けて再生するデータをセット
 * 	criAtomPlayer_SetData(player, buffer2, buffer_size2);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 *
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer1, buffer_size1);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * データ要求コールバック関数内で ::criAtomPlayer_SetFile 関数を実行することで、
 * オンメモリデータとファイルを連結して再生することも可能です。<br>
 * （ただし、先に再生するオンメモリデータが短すぎる場合、次に再生するファイルの
 * 読み込みが間に合わず、音声が途切れる可能性があります。）<br>
 * \attention
 * プレーヤーが記憶するのはバッファーのアドレスとサイズのみです。<br>
 * （バッファー内のデータがコピーされるわけではありません。）<br>
 * そのため、指定したデータの再生が終了するまでの間、
 * アプリケーション側でバッファーを保持し続ける必要があります。<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_SetData(
	CriAtomPlayerHn player, void *buffer, CriSint32 buffer_size);

/*JP
 * \brief 音声データのセット（ファイルの指定）
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		ファイルパス
 * \par 説明:
 * 音声ファイルをAtomプレーヤーに関連付けます。<br>
 * 本関数でファイルを指定後、 ::criAtomPlayer_Start 関数で再生を開始すると、
 * 指定されたファイルがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomPlayer_Start 関数実行後です。<br>
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声ファイルをセット
 * 	criAtomPlayer_SetFile(player, NULL, "sample.adx");
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * データ要求コールバック関数（ ::CriAtomPlayerDataRequestCbFunc ）内で本関数を実行すると、
 * 前回セットした音声の終端に連結して次のデータが再生されます。<br>
 * 例えば、以下のコードを実行すると、"sample1.adx"と"sample2.adx"とがシームレスに
 * 連結して再生されます。<br>
 * （その後は"sample2.adx"が繰り返し再生されます。）<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// 続けて再生するファイルをセット
 * 	criAtomPlayer_SetFile(player, NULL, "sample2.adx");
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 *
 * 	// 音声ファイルをセット
 * 	criAtomPlayer_SetFile(player, NULL, "sample1.adx");
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、第二引数（binder）にバインダーを指定することで、
 * CPKファイル内のコンテンツを再生することも可能です。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// CPKファイルをバインド
 * 	criFsBinder_BindCpk(binder, "sample.cpk", work, work_size, &bind_id);
 *
 * 	// バインド完了待ち
 * 	for (;;) {
 * 		// ステータスのチェック
 * 		criFsBinder_GetStatus(binder, &status);
 * 		if (status == CRIFSBINDER_STATUS_COMPLETE) {
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criFs_ExecuteMain();
 *
 * 		// Vsync待ち等
 * 			:
 * 	}
 * 		:
 * 	// 音声ファイルをセット
 * 	// sample.cpk内のcontent.adxをセット
 * 	criAtomPlayer_SetFile(player, binder, "content.adx");
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * データ要求コールバック関数内で ::criAtomPlayer_SetData 関数を実行することで、
 * ファイルとオンメモリデータを連結して再生することも可能です。
 * \attention
 * ファイルからの再生を行う場合には、ストリーミング再生に対応した
 * Atomプレーヤーを使用する必要があります。<br>
 * （ ::CriAtomAdxPlayerConfig のstreaming_flagにCRI_TRUEを設定して
 * Atomプレーヤーを作成する必要があります。）<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer, criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_SetFile(
	CriAtomPlayerHn player, CriFsBinderHn binder, const CriChar8 *path);

/*JP
 * \brief 音声データのセット（CPKコンテンツIDの指定）
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			コンテンツID
 * \par 説明:
 * コンテンツをAtomプレーヤーに関連付けます。<br>
 * CRI File Systemライブラリを使用してCPKファイル内のコンテンツファイルを
 * ID指定で再生するために使用します。<br>
 * 本関数にバインダーとコンテンツIDを指定後、 ::criAtomPlayer_Start 関数で再生を
 * 開始すると、指定されたコンテンツファイルがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomPlayer_Start 関数実行後です。<br>
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// CPKファイルをバインド
 * 	criFsBinder_BindCpk(binder, "sample.cpk", work, work_size, &bind_id);
 *
 * 	// バインド完了待ち
 * 	for (;;) {
 * 		// ステータスのチェック
 * 		criFsBinder_GetStatus(binder, &status);
 * 		if (status == CRIFSBINDER_STATUS_COMPLETE) {
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criFs_ExecuteMain();
 *
 * 		// Vsync待ち等
 * 			:
 * 	}
 * 		:
 * 	// 音声ファイルをセット
 * 	// sample.cpk内の1番のコンテンツをセット
 * 	criAtomPlayer_SetContentId(player, binder, 1);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * データ要求コールバック関数（ ::CriAtomPlayerDataRequestCbFunc ）内で本関数を実行すると、
 * 前回セットした音声の終端に連結して次のデータが再生されます。<br>
 * 例えば、以下のコードを実行すると、1番のデータと2番のデータとがシームレスに
 * 連結して再生されます。<br>
 * （その後は2番のデータが繰り返し再生されます。）<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// バインダーの取得
 * 	binder = (CriFsBinderHn)obj;
 *
 * 	// 続けて再生するファイルをセット
 * 	// →バインダー内の2番のコンテンツをセット
 * 	criAtomPlayer_SetContentId(player, binder, 2);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, binder);
 *
 * 	// 音声ファイルをセット
 * 	// →バインダー内の1番のコンテンツをセット
 * 	criAtomPlayer_SetContentId(player, binder, 1);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * データ要求コールバック関数内で ::criAtomPlayer_SetData 関数を実行することで、
 * ファイルとオンメモリデータを連結して再生することも可能です。
 * \attention
 * ファイルからの再生を行う場合には、ストリーミング再生に対応した
 * Atomプレーヤーを使用する必要があります。<br>
 * （ ::CriAtomAdxPlayerConfig のstreaming_flagにCRI_TRUEを設定して
 * Atomプレーヤーを作成する必要があります。）<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer, criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_SetContentId(
	CriAtomPlayerHn player, CriFsBinderHn binder, CriSint32 id);

/*JP
 * \brief 音声データのセット（音声データIDの指定）
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	awb			AWBハンドル
 * \param[in]	id			波形データID
 * \par 説明:
 * 再生する波形データをAtomプレーヤーに関連付けます。<br>
 * 本関数にAWBハンドルと波形データIDを指定後、 ::criAtomPlayer_Start 関数で再生を
 * 開始すると、指定した波形データがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomPlayer_Start 関数実行後です。<br>
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// AWBのTOC情報をロードしてAWBハンドルを作成
 * 	awb = criAtomAwb_LoadToc(NULL, "sample.awb", NULL, 0);
 * 		:
 * 	// 波形データをセット
 * 	// AWB内の1番の波形データをセット
 * 	criAtomPlayer_SetWaveId(player, awb, 1);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * データ要求コールバック関数（ ::CriAtomPlayerDataRequestCbFunc ）内で本関数を実行すると、
 * 前回セットした音声の終端に連結して次のデータが再生されます。<br>
 * 例えば、以下のコードを実行すると、1番のデータと2番のデータとがシームレスに
 * 連結して再生されます。<br>
 * （その後は2番のデータが繰り返し再生されます。）<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// AWBハンドルの取得
 * 	awb = (CriAtomAwbHn)obj;
 *
 * 	// 続けて再生するファイルをセット
 * 	// →AWB内の2番の波形データをセット
 * 	criAtomPlayer_SetWaveId(player, awb, 2);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, awb);
 *
 * 	// 波形データをセット
 * 	// →AWB内の1番の波形データをセット
 * 	criAtomPlayer_SetWaveId(player, awb, 1);
 *
 * 	// セットされた波形データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * データ要求コールバック関数内で ::criAtomPlayer_SetData 関数を実行することで、
 * ファイルとオンメモリデータを連結して再生することも可能です。
 * \attention
 * ファイルからの再生を行う場合には、ストリーミング再生に対応した
 * Atomプレーヤーを使用する必要があります。<br>
 * （ ::CriAtomAdxPlayerConfig のstreaming_flagにCRI_TRUEを設定して
 * Atomプレーヤーを作成する必要があります。）<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer, criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_SetWaveId(
	CriAtomPlayerHn player, CriAtomAwbHn awb, CriSint32 id);

/*JP
 * \brief 同一音声データの再セット
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * 前回再生したデータを、再度再生するようAtomプレーヤーに指示します。<br>
 * \par 例:
 * 以下の処理により、同一音声データを無限にループ再生可能です。<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// 前回再生したデータを再セット
 * 	criAtomPlayer_SetPreviousDataAgain(player);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 *
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \attention
 * 本関数はデータ要求コールバック関数内でのみ使用します。<br>
 * （データ要求コールバック関数外でも実行可能ですが、その場合何の効果もありません。）<br>
 * \sa criAtomPlayer_SetDataRequestCallback
 */
void CRIAPI criAtomPlayer_SetPreviousDataAgain(CriAtomPlayerHn player);

/*JP
 * \brief コールバック関数の再実行要求
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * データ要求コールバック関数の処理を先延ばしします。<br>
 * データ要求コールバック関数が実行された時点で、次に再生する音声データが
 * まだ決まっていない場合、本関数を実行することで、コールバック関数をリトライ
 * することが可能になります。<br>
 * （数ミリ秒後に再度データ要求コールバック関数が呼ばれます。）
 * \par 備考:
 * データ要求コールバック関数内で何もしなかった場合、Atomプレーヤーのステータスは
 * CRIATOMPLAYER_STATUS_PLAYEND に遷移します。<br>
 * しかし、データ要求コールバック関数内で本関数を実行した場合、Atomプレーヤーの
 * ステータスは CRIATOMPLAYER_STATUS_PLAYING を維持し続けます。
 * \attention
 * 本関数を実行した場合、Atomプレーヤーのステータスは CRIATOMPLAYER_STATUS_PLAYING
 * を維持し続けますが、音声出力は途切れる可能性があります。<br>
 * （データの読み込みが間に合わない場合、前回再生した音声と、次にセットする音声
 * との間に、無音が入る可能性があります。）<br>
 * <br>
 * 本関数はデータ要求コールバック関数内でのみ使用可能です。<br>
 * （データ要求コールバック関数外で実行した場合、エラーが発生します。）<br>
 * \sa criAtomPlayer_SetDataRequestCallback
 */
void CRIAPI criAtomPlayer_DeferCallback(CriAtomPlayerHn player);

/*JP
 * \brief 再生の開始
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * 音声データの再生処理を開始します。<br>
 * 本関数を実行する前に、事前に ::criAtomPlayer_SetData 関数等を使用し、再生する
 * 音声データをAtomプレーヤーにセットしておく必要があります。<br>
 * 例えば、オンメモリの音声データを再生する場合には、以下のように事前に
 * ::criAtomPlayer_SetData 関数を使って音声データをセットした後、本関数を実行する
 * 必要があります。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 本関数実行後、再生の進み具合（発音が開始されたか、再生が完了したか等）がどうなって
 * いるかは、ステータスを取得することで確認が可能です。<br>
 * ステータスの取得には、 ::criAtomPlayer_GetStatus 関数を使用します。<br>
 * ::criAtomPlayer_GetStatus 関数は以下の5通りのステータスを返します。<br>
 * 	-# CRIATOMPLAYER_STATUS_STOP
 * 	-# CRIATOMPLAYER_STATUS_PREP
 * 	-# CRIATOMPLAYER_STATUS_PLAYING
 * 	-# CRIATOMPLAYER_STATUS_PLAYEND
 * 	-# CRIATOMPLAYER_STATUS_ERROR
 * 	
 * Atomプレーヤーを作成した時点では、Atomプレーヤーのステータスは停止状態
 * （ CRIATOMPLAYER_STATUS_STOP ）です。<br>
 * 再生する音声データをセット後、本関数を実行することで、Atomプレーヤーのステータスが
 * 準備状態（ CRIATOMPLAYER_STATUS_PREP ）に変更されます。<br>
 * （CRIATOMPLAYER_STATUS_PREP は、データ供給やデコードの開始を待っている状態です。）<br>
 * 再生の開始に充分なデータが供給された時点で、Atomプレーヤーはステータスを
 * 再生状態（ CRIATOMPLAYER_STATUS_PLAYING ）に変更し、音声の出力を開始します。<br>
 * セットされたデータを全て再生し終えると、Atomプレーヤーはステータスを再生終了状態
 * （ CRIATOMPLAYER_STATUS_PLAYEND ）に変更します。<br>
 * 尚、再生中にエラーが発生した場合には、Atomプレーヤーはステータスをエラー状態
 * （ CRIATOMPLAYER_STATUS_ERROR ）に変更します。<br>
 * <br>
 * Atomプレーヤーのステータスをチェックし、ステータスに応じて処理を切り替えることで、
 * 音声の再生状態に連動したプログラムを作成することが可能です。<br>
 * 例えば、音声の再生完了を待って処理を進めたい場合には、以下のようなコードになります。
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 *
 * 	// 再生完了待ち
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomPlayer_GetStatus(player);
 *
 * 		// ステータスのチェック
 * 		if (status == CRIATOMPLAYER_STATUS_PLAYEND) {
 * 			// 再生終了時はループを抜ける
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criAtom_ExecuteMain();
 *
 * 		// 画面表示の更新等
 * 			:
 * 	}
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 再生開始後、実際に音声が出力されるまでには、タイムラグがあります。<br>
 * オンメモリのデータ再生時（ ::criAtomPlayer_SetData 関数でデータをセットした場合）は、
 * 本関数実行後、最初にサーバー処理が実行されたタイミングでステータスが
 * CRIATOMPLAYER_STATUS_PLAYING に遷移します。<br>
 * しかし、ストリーミング再生時は、再生を維持するために必要なデータが充分バッファリング
 * されるまでの間、CRIATOMPLAYER_STATUS_PREP を維持し続けます。<br>
 * （必要充分なデータが供給された時点で、 CRIATOMPLAYER_STATUS_PLAYING に遷移します。）<br>
 * <br>
 * 尚、ステータスが CRIATOMPLAYER_STATUS_PLAYING に遷移するタイミングは、
 * あくまで"サウンドライブラリに対して再生指示を発行する"タイミングになります。<br>
 * そのため、実際にスピーカーから音が出るタイミングは、各プラットフォームのサウンド
 * ライブラリの処理時間に依存します。<br>
 * <br>
 * ストリーミング再生時に発音が開始されるタイミングは、同時にストリーミング再生を行う
 * 音声の数や、デバイスの読み込み速度によって変化します。<br>
 * ストリーミング再生時に意図としたタイミングで発音を開始させたい場合には、
 * ::criAtomPlayer_Pause 関数で事前にポーズをかけておき、Atomプレーヤーのステータスが
 * CRIATOMPLAYER_STATUS_PLAYING に遷移した時点で、ポーズを解除してください。<br>
 * （ポーズをかけた状態でステータスが CRIATOMPLAYER_STATUS_PLAYING に遷移した場合、
 * ポーズ解除後最初のサーバー処理が実行されたタイミングで、発音が開始されます。<br>
 * <br>
 * 具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// 音声ファイルをセット
 * 	criAtomPlayer_SetData(player, NULL, "sample.adx");
 *
 * 	// 再生開始前にポーズをかけておく
 * 	criAtomPlayer_Pause(player, CRI_TRUE);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 *
 * 	// ステータスがCRIATOMPLAYER_STATUS_PLAYINGに遷移するのを待つ
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomPlayer_GetStatus(player);
 *
 * 		// ステータスのチェック
 * 		if (status == CRIATOMPLAYER_STATUS_PLAYING) {
 * 			// CRIATOMPLAYER_STATUS_PLAYING状態になった時点でループを抜ける
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criAtom_ExecuteMain();
 *
 * 		// 画面表示の更新等
 * 			:
 * 	}
 *
 * 	// ポーズの解除
 * 	// →次のサーバー処理が実行されるタイミングで発音が開始される
 * 	criAtomPlayer_Pause(player, CRI_FALSE);
 * 		:
 * }
 * \endcode
 * \attention
 * 既に再生を開始したAtomプレーヤーに対して本関数を実行することはできません。<br>
 * （ADXライブラリとは異なり、再生中のAtomプレーヤーに対して再度再生の開始を指示した場合、
 * エラーになります。）<br>
 * Atomプレーヤーに対して再生を指示する場合には、必ず事前にステータスをチェックし、
 * ステータスが準備中（ CRIATOMPLAYER_STATUS_PREP ）や再生中（ CRIATOMPLAYER_STATUS_PLAYING ）
 * になっていないことをご確認ください。
 * \sa criAtomPlayer_SetData, criAtomPlayer_SetFile, criAtomPlayer_GetStatus,
 * criAtomPlayer_Pause, criAtom_ExecuteMain
 */
void CRIAPI criAtomPlayer_Start(CriAtomPlayerHn player);

/*JP
 * \brief 再生の停止
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * 再生の停止要求を発行します。<br>
 * 音声再生中のAtomプレーヤーに対して本関数を実行すると、Atomプレーヤーは再生を停止
 * （ファイルの読み込みや、発音を止める）し、ステータスを停止状態
 * （ CRIATOMPLAYER_STATUS_STOP ）に遷移します。<br>
 * 既に停止しているAtomプレーヤー（ステータスが CRIATOMPLAYER_STATUS_PLAYEND や
 * CRIATOMPLAYER_STATUS_ERROR のAtomプレーヤー） に対して本関数を実行すると、
 * Atomプレーヤーのステータスを CRIATOMPLAYER_STATUS_STOP に変更します。
 * \attention
 * 音声再生中のAtomプレーヤーに対して本関数を実行した場合、ステータスが即座に
 * CRIATOMPLAYER_STATUS_STOP になるとは限りません。<br>
 * （停止状態になるまでに、時間がかかる場合があります。）<br>
 * そのため、本関数で再生を停止後、続けて別の音声データを再生する場合には、
 * 必ずステータスが CRIATOMPLAYER_STATUS_STOP に遷移したことを確認してから
 * 次のデータをセット（または再生の開始）を行ってください。<br>
 * <br>
 * \code
 * main()
 * {
 * 		:
 * 	// 再生の停止を要求
 * 	criAtomPlayer_Stop(player);
 *
 * 	// ステータスがCRIATOMPLAYER_STATUS_STOPに遷移するのを待つ
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomPlayer_GetStatus(player);
 *
 * 		// ステータスのチェック
 * 		if (status == CRIATOMPLAYER_STATUS_STOP) {
 * 			// CRIATOMPLAYER_STATUS_STOP状態になった時点でループを抜ける
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criAtom_ExecuteMain();
 *
 * 		// 画面表示の更新等
 * 			:
 * 	}
 *
 * 	// 別の音声ファイルをセット
 * 	criAtomPlayer_SetData(player, NULL, "sample.adx");
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \sa criAtomPlayer_Start, criAtomPlayer_GetStatus
 */
void CRIAPI criAtomPlayer_Stop(CriAtomPlayerHn player);

/*JP
 * \brief 再生のポーズ／ポーズ解除
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	flag		動作フラグ（CRI_TRUE = ポーズ、CRI_FALSE = ポーズ解除）
 * \par 説明:
 * 再生をポーズ（一時停止）したり、ポーズを解除します。<br>
 * ポーズするか、ポーズを解除するかは、引数のflagで指定します。<br>
 * flagにCRI_TRUEを指定した場合、再生はポーズされます。<br>
 * flagにCRI_FALSEを指定した場合、ポーズが解除されます。<br>
 * Atomプレーヤーがポーズされているかどうかは ::criAtomPlayer_IsPaused 関数を使用する
 * ことで確認が可能です。<br>
 * <br>
 * 本関数は主に以下の2通りの用途に利用します。<br>
 * 	- 音声出力の一時停止／一時停止解除。
 * 	- ストリーミング再生の頭出し。
 * 	
 * <br>
 * 【音声出力の一時停止／一時停止解除について】
 * 再生中のAtomプレーヤーに対してポーズを行うと、その時点で音声の出力を中断します。<br>
 * ポーズされたAtomプレーヤーに対してポーズ解除を行うと、ポーズ時に中断された箇所から
 * 再生が再開されます。<br>
 * <br>
 * 【ストリーミング再生の頭出しについて】
 * ポーズ処理は再生開始前のAtomプレーヤーに対しても有効です。<br>
 * 再生開始前のAtomプレーヤーに対してポーズをかけた場合、ポーズされたAtomプレーヤーに
 * ::criAtomPlayer_Start 関数で再生指示しても、音声の出力は行われません。<br>
 * しかし、再生準備は行われるため、データが充分に供給されていれば、ステータスは
 * CRIATOMPLAYER_STATUS_PLAYING まで遷移します。<br>
 * <br>
 * ステータスが CRIATOMPLAYER_STATUS_PLAYING の状態でポーズされているAtomプレーヤー
 * については、ポーズ解除を行ったタイミングで発音を開始させることが可能です。<br>
 * そのため、以下の処理手順を踏むことで、ストリーミング再生の発音タイミングを
 * 他のアクションに同期させることが可能です。<br>
 * 	-# ::criAtomPlayer_Pause 関数でAtomプレーヤーをポーズさせる。
 * 	-# ::criAtomPlayer_Start 関数でAtomプレーヤーに再生開始を指示する。
 * 	-# Atomプレーヤーのステータスが CRIATOMPLAYER_STATUS_PLAYING になるのを待つ。
 * 	-# 発音を開始したいタイミングで ::criAtomPlayer_Pause 関数を実行し、ポーズを解除する。
 * 	
 * <br>
 * 具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// 音声ファイルをセット
 * 	criAtomPlayer_SetData(player, NULL, "sample.adx");
 *
 * 	// 再生開始前にポーズをかけておく
 * 	criAtomPlayer_Pause(player, CRI_TRUE);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 *
 * 	// ステータスがCRIATOMPLAYER_STATUS_PLAYINGに遷移するのを待つ
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomPlayer_GetStatus(player);
 *
 * 		// ステータスのチェック
 * 		if (status == CRIATOMPLAYER_STATUS_PLAYING) {
 * 			// CRIATOMPLAYER_STATUS_PLAYING状態になった時点でループを抜ける
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criAtom_ExecuteMain();
 *
 * 		// 画面表示の更新等
 * 			:
 * 	}
 *
 * 	// ポーズの解除
 * 	// →次のサーバー処理が実行されるタイミングで発音が開始される
 * 	criAtomPlayer_Pause(player, CRI_FALSE);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 厳密には、 ::criAtomPlayer_Pause 関数実行後、最初にサーバー処理が動作した時点で
 * ポーズ処理が行われます。<br>
 * そのため、サーバー処理が実行される前にポーズ⇒ポーズ解除の操作が行われた場合を
 * 行うと、音声が止まることなく再生が進むことになります。
 * <br>
 * 尚、ポーズされたAtomプレーヤーに対して再度ポーズを行ったり、ポーズされていない
 * Atomプレーヤーに対してポーズ解除を行っても、エラーは発生しません。<br>
 * （何も処理されずに関数を抜けます。）
 * \sa criAtomPlayer_IsPaused, criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_Pause(CriAtomPlayerHn player, CriBool flag);

/*JP
 * \brief ポーズされているかどうかのチェック
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriBool		ポーズ状態（CRI_TRUE = ポーズされている、CRI_FALSE = ポーズされていない）
 * \par 説明:
 * Atomプレーヤーがポーズされているかどうかをチェックします。<br>
 * ポーズされているかどうかは、引数のflagにセットされる値で判定します。<br>
 * flagがCRI_TRUEだった場合、Atomプレーヤーはポーズされています。<br>
 * flagがCRI_FALSEだった場合、Atomプレーヤーはポーズされていません。<br>
 * \par 備考:
 * 本関数は ::criAtomPlayer_Pause 関数で指定された動作フラグをそのまま返します。<br>
 * （ ::criAtomPlayer_Pause 関数の第2引数にセットした値がflagとして返されます。）<br>
 * そのため、本関数の結果と実際に音声出力が停止しているかどうかは、必ずしも一致するとは
 * 限りません。<br>
 * （ ::criAtomPlayer_Pause 関数の実行タイミングと、実際に音声出力が停止するタイミングに
 * タイムラグが存在するため。）
 * \sa criAtomPlayer_Pause
 */
CriBool CRIAPI criAtomPlayer_IsPaused(CriAtomPlayerHn player);

/*JP
 * \brief ステータスの取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriAtomPlayerStatus	ステータス
 * \par 説明:
 * Atomプレーヤーのステータスを取得します。<br>
 * ステータスはAtomプレーヤーの再生状態を示す値で、以下の5通りの値が存在します。<br>
 * -# CRIATOMPLAYER_STATUS_STOP
 * -# CRIATOMPLAYER_STATUS_PREP
 * -# CRIATOMPLAYER_STATUS_PLAYING
 * -# CRIATOMPLAYER_STATUS_PLAYEND
 * -# CRIATOMPLAYER_STATUS_ERROR
 * 
 * Atomプレーヤーを作成した時点では、Atomプレーヤーのステータスは停止状態
 * （ ::CRIATOMPLAYER_STATUS_STOP ）です。<br>
 * 再生する音声データをセット後、::criAtomPlayer_Start 関数を実行することで、
 * Atomプレーヤーのステータスが準備状態（ ::CRIATOMPLAYER_STATUS_PREP ）に変更されます。<br>
 * （ ::CRIATOMPLAYER_STATUS_PREP は、データ供給やデコードの開始を待っている状態です。）<br>
 * 再生の開始に充分なデータが供給された時点で、Atomプレーヤーはステータスを
 * 再生状態（ ::CRIATOMPLAYER_STATUS_PLAYING ）に変更し、音声の出力を開始します。<br>
 * セットされたデータを全て再生し終えると、Atomプレーヤーはステータスを再生終了状態
 * （ ::CRIATOMPLAYER_STATUS_PLAYEND ）に変更します。<br>
 * 尚、再生中にエラーが発生した場合には、Atomプレーヤーはステータスをエラー状態
 * （ ::CRIATOMPLAYER_STATUS_ERROR ）に変更します。<br>
 * <br>
 * Atomプレーヤーのステータスをチェックし、ステータスに応じて処理を切り替えることで、
 * 音声の再生状態に連動したプログラムを作成することが可能です。<br>
 * 例えば、音声の再生完了を待って処理を進めたい場合には、以下のようなコードになります。
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 *
 * 	// 再生完了待ち
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomPlayer_GetStatus(player);
 *
 * 		// ステータスのチェック
 * 		if (status == CRIATOMPLAYER_STATUS_PLAYEND) {
 * 			// 再生終了時はループを抜ける
 * 			break;
 * 		}
 *
 * 		// サーバー処理の実行
 * 		criAtom_ExecuteMain();
 *
 * 		// 画面表示の更新等
 * 			:
 * 	}
 * 		:
 * }
 * \endcode
 * \par 備考:
 * デバイスからのデータ読み込みに失敗した場合や、データエラーが発生した場合
 * （不正なデータを読み込んだ場合）、Atomプレーヤーのステータスはエラー状態になります。<br>
 * データ読み込みエラー発生時にアプリケーションでエラーメッセージ等を表示する場合には、
 * ステータスが CRIATOMPLAYER_STATUS_ERROR になっていないかどうかをチェックし、
 * 適宜エラーメッセージの表示を行ってください。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// ステータスの取得
 * 	status = criAtomPlayer_GetStatus(player);
 *
 * 	// ステータスのチェック
 * 	if (status == CRIATOMPLAYER_STATUS_ERROR) {
 * 		// CRIATOMPLAYER_STATUS_ERRORになった時点でエラーメッセージを表示する
 * 			:
 * 	}
 * 		:
 * }
 * \endcode
 * \sa criAtomPlayer_Start
 */
CriAtomPlayerStatus CRIAPI criAtomPlayer_GetStatus(CriAtomPlayerHn player);

/*JP
 * \brief チャンネル数の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriSint32	チャンネル数
 * \par 説明:
 * Atomプレーヤーで再生中の音声について、チャンネル数を取得します。<br>
 * <br>
 * チャンネル数が取得できなかった場合、本関数は -1 を返します。<br>
 * \attention
 * 再生時刻は、プレーヤーのステータスが ::CRIATOMPLAYER_STATUS_PLAYING
 * になるまで取得できません。<br>
 * （ ::CRIATOMPLAYER_STATUS_PREP 時に本関数を実行した場合、エラー値が返されます。）<br>
 */
CriSint32 CRIAPI criAtomPlayer_GetNumChannels(CriAtomPlayerHn player);

/*JP
 * \brief 再生済みサンプル数の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤーハンドル
 * \param[out]	num_played		再生済みサンプル数（サンプル数単位）
 * \param[out]	sampling_rate	サンプリングレート（Hz単位）
 * \return		CriBool			サンプル数が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * Atomプレーヤーで再生中の音声について、再生済みのサンプル数、
 * およびサンプリングレートを取得します。<br>
 * 再生時刻はサンプル数単位、サンプリングレートはHz単位です。<br>
 * <br>
 * サンプル数が正しく取得できた場合、戻り値は CRI_TRUE になります。<br>
 * 再生済みサンプル数が取得できなかった場合、戻り値は CRI_FALSE になります。<br>
 * （同時に、 sampling_rate は -1 になります。）<br>
 * \par 備考
 * 取得する必要のない引数については、 NULL を指定可能です。<br>
 * 例えば、サンプリングレートのみを取得したい場合、第2引数（ num_played ）
 * には NULL を指定可能です。
 * <br>
 * 本関数が返す再生済みサンプル数は、出力済み音声データの累積値です。<br>
 * そのため、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じてサンプル数が巻き戻ることはありません。<br>
 * また、 ::criAtomPlayer_Pause 関数でポーズをかけた場合、
 * 再生済みサンプル数のカウントアップも停止します。<br>
 * （ポーズを解除すればカウントアップが再開されます。）
 * \attention
 * 再生済みサンプル数は、プレーヤーのステータスが ::CRIATOMPLAYER_STATUS_PLAYING
 * になるまで取得できません。<br>
 * （ ::CRIATOMPLAYER_STATUS_PREP 時に本関数を実行した場合、エラー値が返されます。）<br>
 * <br>
 * 再生サンプル数の精度は、プラットフォームのサウンドライブラリに依存します。
 */
CriBool CRIAPI criAtomPlayer_GetNumPlayedSamples(
	CriAtomPlayerHn player, CriSint64 *num_played, CriSint32 *sampling_rate);

/*JP
 * \brief サウンドバッファへの書き込みサンプル数の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤハンドル
 * \param[out]	num_rendered	書き込み済みサンプル数（サンプル数単位）
 * \param[out]	sampling_rate	サンプリングレート（Hz単位）
 * \return		CriBool			サンプル数が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * Atomプレーヤで再生中の音声について、サウンドバッファへの書き込み済みのサンプル数、
 * およびサンプリングレートを取得します。<br>
 * ::criAtomPlayer_GetNumPlayedSamples 関数と異なり、
 * サウンドバッファに書き込まれた未出力の音声データのサンプル数を含む値を返します。
 * <br>
 * サンプル数が正しく取得できた場合、戻り値は CRI_TRUE になります。<br>
 * 書き込み済みサンプル数が取得できなかった場合、戻り値は CRI_FALSE になります。<br>
 * （同時に、 sampling_rate は -1 になります。）<br>
 * \par 備考
 * 取得する必要のない引数については、 NULL を指定可能です。<br>
 * 例えば、サンプリングレートのみを取得したい場合、第2引数（ num_rendered ）
 * には NULL を指定可能です。
 * <br>
 * 本関数が返すサンプル数は、書き込み済みサンプル数の累積値です。<br>
 * そのため、ループ再生やシームレス連結再生を行った場合でも、
 * 再生位置に応じてサンプル数が巻き戻ることはありません。<br>
 * また、 ::criAtomPlayer_Pause 関数でポーズをかけた場合、
 * 書き込み済みサンプル数のカウントアップも停止します。<br>
 * （ポーズを解除すればカウントアップが再開されます。）
 * \attention
 * 書き込み済みサンプル数は、プレーヤのステータスが ::CRIATOMPLAYER_STATUS_PLAYING
 * になるまで取得できません。<br>
 * （ ::CRIATOMPLAYER_STATUS_PREP 時に本関数を実行した場合、エラー値が返されます。）<br>
 * <br>
 * 書き込み済みサンプル数の精度は、プラットフォームのサウンドライブラリに依存します。
 * \sa criAtomPlayer_GetNumPlayedSamples
 */
CriBool CRIAPI criAtomPlayer_GetNumRenderedSamples(
	CriAtomPlayerHn player, CriSint64 *num_rendered, CriSint32 *sampling_rate);

/*JP
 * \brief デコードデータサイズの取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤーハンドル
 * \return		CriSint64		デコードデータ量（単位はバイト）
 * \par 説明:
 * Atomプレーヤー内でデコードした音声データのバイト数を返します。<br>
 * \par 備考
 * 本関数が返すデコード量は、再生開始時点からの累積値です。<br>
 * そのため、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じてデコード量が巻き戻ることはありません。<br>
 * また、 ::criAtomPlayer_Pause 関数でポーズをかけた場合、
 * デコード量のカウントアップも停止します。<br>
 * （ポーズを解除すればカウントアップが再開されます。）
 * \attention
 * HCA-MXを使用する場合や、圧縮された音声データを直接ハードウェアに送信するプラットフォーム
 * （デコード処理がプラットフォームSDKに隠蔽されているコーデック）
 * については、本関数でデコード量を取得できません。<br>
 */
CriSint64 CRIAPI criAtomPlayer_GetDecodedDataSize(CriAtomPlayerHn player);

/*JP
 * \brief デコードサンプル数の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤーハンドル
 * \return		CriSint64		デコードサンプル数
 * \par 説明:
 * Atomプレーヤー内でデコードした音声データのバイト数を返します。<br>
 * \par 備考
 * 本関数が返すデコードサンプル数は、再生開始時点からの累積値です。<br>
 * そのため、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じてデコードサンプル数が巻き戻ることはありません。<br>
 * また、 ::criAtomPlayer_Pause 関数でポーズをかけた場合、
 * デコードサンプル数のカウントアップも停止します。<br>
 * （ポーズを解除すればカウントアップが再開されます。）
 * \attention
 * HCA-MXを使用する場合や、圧縮された音声データを直接ハードウェアに送信するプラットフォーム
 * （デコード処理がプラットフォームSDKに隠蔽されているコーデック）
 * については、本関数でデコードサンプル数を取得できません。<br>
 */
CriSint64 CRIAPI criAtomPlayer_GetNumDecodedSamples(CriAtomPlayerHn player);

/*JP
 * \brief 再生時刻の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriSint64	再生時刻（ミリ秒単位）
 * \par 説明:
 * Atomプレーヤーで再生中の音声について、現在の再生時刻を取得します。<br>
 * 再生時刻の単位はミリ秒単位です。<br>
 * <br>
 * 引数に誤りがある場合（ player が NULL の場合）、本関数は -1 を返します。<br>
 * 停止中や再生準備中等、再生時刻が取得できないタイミングで本関数を実行した場合、
 * 本関数は 0 を返します。<br>
 * \par 備考
 * 再生時刻は再生済みサンプル数を元に計算されています。<br>
 * そのため、 ::criAtomPlayer_SetFrequencyRatio 関数を用いてピッチを上げた場合、
 * 再生時刻は実時間よりも早く進みます。<br>
 * （ピッチを下げた場合、再生時刻は実時刻よりも遅く進みます。）<br>
 * <br>
 * 本関数が返す再生時刻は、出力済み音声データの累積値です。<br>
 * そのため、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じて時刻が巻き戻ることはありません。<br>
 * また、 ::criAtomPlayer_Pause 関数でポーズをかけた場合、
 * 再生時刻のカウントアップも停止します。<br>
 * （ポーズを解除すればカウントアップが再開されます。）
 * \attention
 * 再生時刻は、プレーヤーのステータスが ::CRIATOMPLAYER_STATUS_PLAYING
 * になるまで取得できません。<br>
 * （ ::CRIATOMPLAYER_STATUS_PREP 時に本関数を実行した場合、 0 が返されます。）<br>
 * <br>
 * 再生時刻の精度は、プラットフォームのサウンドライブラリに依存します。
 * \sa criAtomPlayer_GetStatus, criAtomPlayer_SetFrequencyRatio
 */
CriSint64 CRIAPI criAtomPlayer_GetTime(CriAtomPlayerHn player);

/*JP
 * \brief 再生音声のフォーマット情報の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[out]	info		フォーマット情報
 * \return		CriBool		情報が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomPlayer_Start 関数で再生された音声のフォーマット情報を取得します。<br>
 * <br>
 * フォーマット情報が取得できた場合、本関数は CRI_TRUE を返します。<br>
 * フォーマット情報が取得できなかった場合、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみフォーマット情報を取得可能です。<br>
 * 再生開始前や再生準備中に本関数を実行すると、フォーマット情報の取得に失敗します。<br>
 * \sa criAtomPlayer_Start, criAtomPlayer_GetStatus
 */
CriBool CRIAPI criAtomPlayer_GetFormatInfo(
	CriAtomPlayerHn player, CriAtomFormatInfo *info);

/*JP
 * \brief 入力バッファー内データ残量の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriSint32	入力バッファー内のデータ残量（Byte単位）
 * \par 説明:
 * Atomプレーヤーの入力バッファー内のデータ残量を取得します。<br>
 * \par 備考:
 * 本関数は情報取得用途にのみに利用可能なデバッグ関数です。<br>
 * <br>
 * 音途切れの不具合が発生した際、本関数を使用して再生中のプレーヤーの
 * 入力バッファーにデータが残っているかどうかをチェック可能です。<br>
 * プレーヤーのステータスが ::CRIATOMPLAYER_STATUS_PLAYING にもかかわらず、
 * データ残量が長時間 0 の場合、何らかの異常によりデータの供給が
 * ブロックされている可能性があります。<br>
 */
CriSint32 CRIAPI criAtomPlayer_GetInputBufferRemainSize(CriAtomPlayerHn player);

/*JP
 * \brief 出力バッファー内データ残量の取得
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriSint32	出力バッファー内のデータ残量（サンプル数単位）
 * \par 説明:
 * Atomプレーヤーの出力バッファー内のデータ残量を取得します。<br>
 * \par 備考:
 * 本関数は情報取得用途にのみに利用可能なデバッグ関数です。<br>
 * <br>
 * 音途切れの不具合が発生した際、本関数を使用して再生中のプレーヤーの
 * 出力バッファーにデータが残っているかどうかをチェック可能です。<br>
 * プレーヤーのステータスが ::CRIATOMPLAYER_STATUS_PLAYING にもかかわらず、
 * データ残量が長時間 0 の場合、何らかの異常によりデコード処理が
 * 行われていない可能性があります。<br>
 * \attention
 * 本関数は、音声データをAtomライブラリ内でデコードするケースについてのみ有効です。<br>
 * 圧縮された音声データを直接ハードウェアに送信するプラットフォーム
 * （デコード処理がプラットフォームSDKに隠蔽されているコーデック）
 * については、本関数でデータ残量を取得できません。<br>
 */
CriSint32 CRIAPI criAtomPlayer_GetOutputBufferRemainSamples(CriAtomPlayerHn player);

/*JP
 * \brief 再生開始位置の指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	start_time_ms	再生開始位置（ミリ秒指定）
 * \par 説明:
 * Atomプレーヤーで再生する音声について、再生を開始する位置を指定します。<br>
 * 音声データを途中から再生したい場合、再生開始前に本関数で再生開始位置を
 * 指定する必要があります。<br>
 * <br>
 * 再生開始位置の指定はミリ秒単位で行います。<br>
 * 例えば、 start_time_ms に 10000 をセットして本関数を実行すると、
 * 次に再生する音声データは 10 秒目の位置から再生されます。
 * \par 備考
 * 本関数で再生位置を指定した場合でも、指定した時刻ぴったりの位置から再生が
 * 開始されるとは限りません。<br>
 * （使用する音声コーデックによっては、指定時刻の少し手前から再生が開始されます。）<br>
 * <br>
 * 音声データ途中からの再生は、音声データ先頭からの再生に比べ、発音開始の
 * タイミングが遅くなります。<br>
 * これは、一旦音声データのヘッダーを解析後、指定位置にジャンプしてからデータを読み
 * 直して再生を開始するためです。
 * \attention
 * start_time_ms には64bit値をセット可能ですが、現状、32bit以上の再生時刻を
 * 指定することはできません。<br>
 * <br>
 * 音声再生中に本関数を実行しても、再生中の音声の再生位置は変更されません。<br>
 * 本関数で設定した値は、 ::criAtomPlayer_Start 関数で音声の再生を開始する
 * タイミングでのみ参照されます。<br>
 * <br>
 * 機種固有の音声フォーマットについても、再生開始位置を指定できない場合があります。<br>
 * \sa criAtomPlayer_Start
 */
void CRIAPI criAtomPlayer_SetStartTime(CriAtomPlayerHn player, CriSint64 start_time_ms);

/*JP
 * \brief ボリュームの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	vol			ボリューム値
 * \par 説明:
 * 出力音声のボリュームを指定します。<br>
 * 本関数を使用することで、Atomプレーヤーで再生する音声のボリュームを自由に
 * 変更可能です。<br>
 * <br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * (1.0f / 65536.0f) 以下の値を指定した場合、音声はミュートされます（無音になります）。
 * \備考:
 * ボリューム値には0.0f以上の値が設定可能です。<br>
 * （Atomライブラリ Ver.1.21.07より、
 * ボリューム値に1.0fを超える値を指定できるようになりました。）<br>
 * 1.0fを超える値をセットした場合、<b>プラットフォームによっては</b>、
 * 波形データを元素材よりも大きな音量で再生可能です。<br>
 * ボリューム値に (1.0f / 65536.0f) 以下の値を指定した場合、値は0.0fにクリップされます。<br>
 * （ボリューム値に負の値を設定した場合でも、
 * 波形データの位相が反転されることはありません。）<br>
 * <br>
 * 本関数の設定値と、以下の関数のボリューム設定値は独立して制御されます。<br>
 * 	- ::criAtomPlayer_SetChannelVolume
 * 	- ::criAtomPlayer_SetSendLevel
 * 	
 * 例えば、本関数に0.5fを、 ::criAtomPlayer_SetChannelVolume
 * 関数にも0.5fを設定した場合、
 * 出力音声のボリュームは原音を0.25f倍したボリュームで出力されます。<br>
 * （0.5f×0.5f＝0.25fの演算が行われます。）<br>
 * \attention
 * 1.0fを超えるボリュームを指定する場合、以下の点に注意する必要があります。<br>
 *  - プラットフォームごとに挙動が異なる可能性がある。
 *  - 音割れが発生する可能性がある。
 * 	
 * <br>
 * 本関数に1.0fを超えるボリューム値を設定した場合でも、
 * 音声が元の波形データよりも大きな音量で再生されるかどうかは、
 * プラットフォームや音声圧縮コーデックの種別によって異なります。<br>
 * そのため、マルチプラットフォームタイトルでボリュームを調整する場合には、
 * 1.0fを超えるボリューム値を使用しないことをおすすめします。<br>
 * （1.0fを超えるボリューム値を指定した場合、同じ波形データを再生した場合でも、
 * 機種ごとに異なる音量で出力される可能性があります。）<br>
 * <br>
 * また、音量を上げることが可能な機種であっても、
 * ハードウェアで出力可能な音量には上限があるため、
 * 音割れによるノイズが発生する可能性があります。<br>
 * \sa criAtomPlayer_GetVolume
 */
void CRIAPI criAtomPlayer_SetVolume(CriAtomPlayerHn player, CriFloat32 vol);

/*JP
 * \brief ボリュームの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \return		CriFloat32	ボリューム値
 * \par 説明:
 * 出力音声のボリュームを取得します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * \sa criAtomPlayer_SetVolume
 */
CriFloat32 CRIAPI criAtomPlayer_GetVolume(CriAtomPlayerHn player);

/*JP
 * \brief チャンネル単位のボリューム指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	ch			チャンネル番号
 * \param[in]	vol			ボリューム値（0.0f〜1.0f）
 * \par 説明:
 * 出力音声のボリュームをチャンネル単位で指定します。<br>
 * 本関数を使用することで、Atomプレーヤーで再生する音声のボリュームを、
 * チャンネル単位で自由に変更可能です。<br>
 * <br>
 * 第2引数のチャンネル番号は"音声データのチャンネル番号"を指定します。<br>
 * （出力スピーカーのIDではありません。）<br>
 * 例えば、モノラル音声の0番のボリュームを変更した場合、
 * スピーカーから出力される音声のボリューム全てが変更されます。<br>
 * （ ::criAtomPlayer_SetVolume 関数を実行するのと同じ動作をします。）<br>
 * これに対し、ステレオ音声の0番のボリュームを変更すると、デフォルト設定
 * ではレフトスピーカーから出力される音声のボリュームのみが変更されます。<br>
 * （ ::criAtomPlayer_SetSendLevel 関数を併用している場合は、
 * 必ずしもレフトスピーカーから出力される音量のボリュームが変更される
 * とは限りません。）<br>
 * <br>
 * ボリューム値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。
 * \備考:
 * ボリューム値に1.0fを超える値を指定した場合、値は1.0fにクリップされます。<br>
 * （原音より大きな音量で音声が再生されることはありません。）<br>
 * 同様に、ボリューム値に0.0f未満の値を指定した場合も、値は0.0fにクリップされます。<br>
 * （位相が反転されることはありません。）
 * <br>
 * 本関数の設定値と、以下の関数のボリューム設定値は独立して制御されます。<br>
 * 	- ::criAtomPlayer_SetVolume
 * 	- ::criAtomPlayer_SetSendLevel
 * 例えば、本関数に0.5fを、 ::criAtomPlayer_SetVolume 関数にも0.5fを設定した場合、
 * 出力音声のボリュームは原音を0.25f倍したボリュームで出力されます。<br>
 * （0.5f×0.5f＝0.25fの演算が行われます。）
 * \sa criAtomPlayer_SetVolume, criAtomPlayer_SetSendLevel, criAtomPlayer_SetPanAdx1Compatible
 */
void CRIAPI criAtomPlayer_SetChannelVolume(
	CriAtomPlayerHn player, CriSint32 ch, CriFloat32 vol);

/*JP
 * \brief センドレベルの設定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	ch			チャンネル番号
 * \param[in]	spk			スピーカーID
 * \param[in]	level		ボリューム値（0.0f〜1.0f）
 * \par 説明:
 * センドレベルを指定します。<br>
 * センドレベルは、音声データの各チャンネルの音声を、どのスピーカーから
 * どの程度の音量で出力するかを指定するための仕組みです。<br>
 * <br>
 * 第2引数のチャンネル番号は"音声データのチャンネル番号"を指定します。<br>
 * 第3引数のスピーカーIDには、指定したチャンネル番号のデータをどのスピーカーから
 * 出力するかを指定し、第4引数の送信時のボリュームを指定します。<br>
 * ボリューム値は、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。
 * <br>
 * 例えば、音声データのチャンネル0番のデータをライトスピーカーから
 * フルボリューム（1.0f）で出力したい場合、指定は以下のようになります。
 * \code
 * criAtomPlayer_SetSendLevel(player, 0, CRIATOM_SPEAKER_FRONT_RIGHT, 1.0f);
 * \endcode
 * チャンネル単位のボリューム指定（ ::criAtomPlayer_SetChannelVolume 関数）
 * と異なり、本関数では1つのチャンネルのデータを複数のスピーカーから異なる
 * ボリュームで出力することが可能です。<br>
 * 例えば、チャンネル1番の音声をレフトスピーカーから0.3f、ライトスピーカー
 * から0.5f、センタースピーカーから0.7fで出力したい場合、指定は以下のようになります。
 * \code
 * criAtomPlayer_SetSendLevel(player, 1, CRIATOM_SPEAKER_FRONT_LEFT, 0.3f);
 * criAtomPlayer_SetSendLevel(player, 1, CRIATOM_SPEAKER_FRONT_RIGHT, 0.5f);
 * criAtomPlayer_SetSendLevel(player, 1, CRIATOM_SPEAKER_FRONT_CENTER, 0.7f);
 * \endcode
 * 尚、セットされたセンドレベルの値は ::criAtomPlayer_ResetSendLevel 関数で
 * リセットすることが可能です。<br>
 * \備考:
 * センドレベルの設定には「自動設定」「手動設定」の2通りが存在します。<br>
 * Atomプレーヤーを作成した直後や、 ::criAtomPlayer_ResetSendLevel 関数で
 * センドレベルをクリアした場合、センドレベルの設定は「自動設定」となります。<br>
 * 本関数を実行した場合、センドレベルの設定は「手動設定」となります。<br>
 * <br>
 * 「自動設定」の場合、Atomプレーヤーは以下のように音声をルーティングします。<br>
 * <br>
 * 【モノラル音声を再生する場合】<br>
 * チャンネル0の音声を左右のスピーカーから約0.7f（-3dB）のボリュームで出力します。<br>
 * <br>
 * 【ステレオ音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、
 * チャンネル1の音声をライトスピーカーから出力します。<br>
 * <br>
 * 【4ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をサラウンドレフトスピーカーから、
 * チャンネル3の音声をサラウンドライトスピーカーからでそれぞれ出力します。<br>
 * <br>
 * 【5ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をセンタースピーカーから、
 * チャンネル3の音声をサラウンドレフトスピーカーから、
 * チャンネル4の音声をサラウンドライトスピーカーからそれぞれ出力します。<br>
 * （ 5ch音声を再生する場合、 ::criAtom_SetChannelMapping
 * 関数で別の並び順に変更することも可能です。）<br>
 * <br>
 * 【5.1ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をセンタースピーカーから、チャンネル3の音声をLFEから、
 * チャンネル4の音声をサラウンドレフトスピーカーから、
 * チャンネル5の音声をサラウンドライトスピーカーからそれぞれ出力します。<br>
 * （ 6ch音声を再生する場合、 ::criAtom_SetChannelMapping
 * 関数で別の並び順に変更することも可能です。）<br>
 * <br>
 * 【7.1ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をセンタースピーカーから、チャンネル3の音声をLFEから、
 * チャンネル4の音声をサラウンドレフトスピーカーから、
 * チャンネル5の音声をサラウンドライトスピーカーから、<br>
 * チャンネル6の音声をサラウンドバックレフトスピーカーから、
 * チャンネル7の音声をサラウンドバックライトスピーカーからそれぞれ出力します。<br>
 * <br>
 * これに対し、本関数を用いて「手動設定」を行った場合、音声データのチャンネル数に
 * 関係なく、指定されたルーティングで音声が出力されます。<br>
 * （センドレベルを設定していないチャンネルの音声は出力されません。）<br>
 * センドレベルの設定をクリアし、ルーティングを「自動設定」の状態に戻したい場合は、
 * ::criAtomPlayer_ResetSendLevel 関数を実行してください。<br>
 * <br>
 * ボリューム値に1.0fを超える値を指定した場合、値は1.0fにクリップされます。<br>
 * （原音より大きな音量で音声が再生されることはありません。）<br>
 * 同様に、ボリューム値に0.0f未満の値を指定した場合も、値は0.0fにクリップされます。<br>
 * （位相が反転されることはありません。）
 * <br>
 * 本関数の設定値と、以下の関数のボリューム設定値は独立して制御されます。<br>
 * 	- ::criAtomPlayer_SetVolume
 * 	- ::criAtomPlayer_SetChannelVolume
 * 例えば、本関数に0.5fを、 ::criAtomPlayer_SetVolume 関数にも0.5fを設定した場合、
 * 出力音声のボリュームは原音を0.25f倍したボリュームで出力されます。<br>
 * （0.5f×0.5f＝0.25fの演算が行われます。）
 * \attention
 * 再生する音声データがマルチチャンネルのデータであっても、センドレベルが一部の
 * チャンネルのみにしか設定されていない場合、センドレベルの設定されていない
 * チャンネルの音声は出力されません。<br>
 * <br>
 * 本関数と ::criAtomPlayer_SetPanAdx1Compatible 関数を併用しないでください。<br>
 * ::criAtomPlayer_SetPanAdx1Compatible 関数が、内部的に本関数を呼び出すため、
 * 両者を併用した場合、後から実行した関数により設定が上書きされる可能性があります。<br>
 * 音源の定位をコントロールする際には、本関数かまたは ::criAtomPlayer_SetPanAdx1Compatible 関数
 * のいずれか一方のみをご利用ください。<br>
 * （3Dパンを利用する場合は本関数を、2Dパンのみを行う場合は ::criAtomPlayer_SetPanAdx1Compatible
 * 関数をご利用ください。）
 * <br>
 * 本関数は一部の機種でのみ利用が可能です。<br>
 * （プラットフォームのサウンドライブラリの仕様によっては実装が困難な場合が
 * あるため、全ての環境で利用できるワケではありません。）<br>
 * 本関数が利用可能かどうかは、別途マニュアルの機種依存情報のページをご参照ください。
 * \sa criAtomPlayer_SetVolume, criAtomPlayer_SetChannelVolume, criAtomPlayer_SetPanAdx1Compatible,
 * criAtomPlayer_ResetSendLevel, criAtom_SetChannelMapping
 */
void CRIAPI criAtomPlayer_SetSendLevel(
	CriAtomPlayerHn player, CriSint32 ch, CriAtomSpeakerId spk, CriFloat32 level);

/*JP
 * \brief センドレベルのリセット
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * センドレベルの設定をリセットします。<br>
 * 本関数を実行することで、過去にセットされたセンドレベル設定が全てクリアされます。<br>
 * \備考:
 * センドレベルの設定には「自動設定」「手動設定」の2通りが存在します。<br>
 * Atomプレーヤーを作成した直後や、本関数でセンドレベルをリセットした場合、
 * センドレベルの設定は「自動設定」となります。<br>
 * （自動設定時のルーティングについては、 ::criAtomPlayer_SetSendLevel
 * 関数の説明を参照してください。）<br>
 * \attention
 * 本関数と ::criAtomPlayer_ResetPan 関数を併用しないでください。<br>
 * ::criAtomPlayer_ResetPan 関数が、内部的に本関数を呼び出すため、
 * 両者を併用した場合、後から実行した関数により設定が上書きされる可能性があります。
 * \sa criAtomPlayer_SetSendLevel, criAtomPlayer_ResetPan
 */
void CRIAPI criAtomPlayer_ResetSendLevel(CriAtomPlayerHn player);

/*JP
 * \brief パンの設定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	ch			チャンネル番号
 * \param[in]	pan			パン設定値（-1.0f〜1.0f）
 * \par 説明:
 * パン（音源の定位位置）を指定します。<br>
 * 本関数を実行することで、モノラル音声やステレオ音声に対し、音源の定位位置を自由
 * にコントロールすることが可能です。<br>
 * <br>
 * 第2引数のチャンネル番号は"音声データのチャンネル番号"を指定します。<br>
 * 第3引数のパン設定値には、指定したチャンネル番号のデータの定位をどの位置にする
 * かを指定します。<br>
 * パン設定値は、-1.0f〜1.0fの範囲で実数値を指定します。<br>
 * 音源は、負の値を指定すると中央より左側（値が小さいほど左寄り）、0.0fを指定すると
 * 中央、正の値を指定すると中央より右側（値が大きいほど右寄り）に定位します。<br>
 * （キリのいい値では、-1.0fが左端、0.0fが中央、1.0fが右端になります。）<br>
 * -1.0fと1.0fの間では、音源の位置はリニアに変化します。
 * つまり、パン設定値を一定量ずつ変化させながら-1.0〜1.0まで変更した場合、
 * 音源は左端から右端へ一定速度で移動することになります。<br>
 * \par 備考:
 * パンの設定には「自動設定」「手動設定」の2通りが存在します。<br>
 * Atomプレーヤーを作成した直後や、 ::criAtomPlayer_ResetPan 関数で
 * パンをクリアした場合、パンの設定は「自動設定」となります。<br>
 * 本関数を実行した場合、パンの設定は「手動設定」となります。<br>
 * <br>
 * 「自動設定」の場合、Atomプレーヤーは以下のように音声をルーティングします。<br>
 * <br>
 * 【モノラル音声を再生する場合】<br>
 * チャンネル0の音声を左右のスピーカーから約0.7f（-3dB）のボリュームで出力します。<br>
 * <br>
 * 【ステレオ音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、
 * チャンネル1の音声をライトスピーカーから出力します。<br>
 * <br>
 * これに対し、本関数を用いて「手動設定」を行った場合、音声データのチャンネル数に
 * 関係なく、指定されたルーティングで音声が出力されます。<br>
 * パンの設定をクリアし、ルーティングを「自動設定」の状態に戻したい場合は、
 * ::criAtomPlayer_ResetPan 関数を実行してください。<br>
 * \attention
 * 本関数でパンをコントロール可能なのは、モノラル音声とステレオ音声のみです。<br>
 * 3ch以上の音声に対してパンをコントロールしたい場合には、 ::criAtomPlayer_SetSendLevel
 * 関数を使用する必要があります。<br>
 * <br>
 * 再生する音声データがステレオの場合、チャンネル0番とチャンネル1番のそれぞれの
 * について、独立してパンをコントロールすることが可能です。<br>
 * ただし、設定されたパンがモノラル音声向けなのか、ステレオ音声向けなのかは区別
 * されないため、ステレオ設定用にパン設定を行ったAtomプレーヤーでモノラル音声を再生
 * した場合、意図としない位置に音源が定位する可能性があります。<br>
 * <br>
 * 再生する音声データがステレオにもかかわらず、どちらか一方のチャンネルに対して
 * しかパンが設定されていない場合、パンを設定していないチャンネルの音声の定位位置
 * は 0.0f （中央からの出力）になります。<br>
 * ステレオ音声のパンをコントロールする際には、必ず両方のチャンネルについてパンの
 * 設定を行ってください。<br>
 * <br>
 * 本関数と ::criAtomPlayer_SetSendLevel 関数を併用しないでください。<br>
 * 本関数が内部的に ::criAtomPlayer_SetSendLevel 関数を呼び出すため、
 * 両者を併用した場合、後から実行した関数により設定が上書きされる可能性があります。<br>
 * 音源の定位をコントロールする際には、本関数かまたは ::criAtomPlayer_SetSendLevel 関数
 * のいずれか一方のみをご利用ください。<br>
 * （3Dパンを利用する場合は ::criAtomPlayer_SetSendLevel 関数を、2Dパンのみを行う場合は
 * 本関数をご利用ください。）
 * \sa criAtomPlayer_SetVolume, criAtomPlayer_SetChannelVolume, criAtomPlayer_SetPanAdx1Compatible
 * criAtomPlayer_ResetPan
 */
void CRIAPI criAtomPlayer_SetPanAdx1Compatible(
	CriAtomPlayerHn player, CriSint32 ch, CriFloat32 pan);

/*JP
 * \brief パンのリセット
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \par 説明:
 * パンの設定をリセットします。<br>
 * 本関数を実行することで、過去にセットされたパン設定が全てクリアされます。<br>
 * \備考:
 * パンの設定には「自動設定」「手動設定」の2通りが存在します。<br>
 * Atomプレーヤーを作成した直後や、本関数でパンをリセットした場合、
 * パンの設定は「自動設定」となります。<br>
 * （自動設定時のルーティングについては、 ::criAtomPlayer_SetPanAdx1Compatible
 * 関数の説明を参照してください。）<br>
 * \attention
 * 本関数と ::criAtomPlayer_ResetSendLevel 関数を併用しないでください。<br>
 * 本関数が内部的に ::criAtomPlayer_ResetSendLevel 関数を呼び出すため、
 * 両者を併用した場合、後から実行した関数により設定が上書きされる可能性があります。
 * \sa criAtomPlayer_SetPanAdx1Compatible, criAtomPlayer_ResetSendLevel
 */
void CRIAPI criAtomPlayer_ResetPan(CriAtomPlayerHn player);

/*JP
 * \brief 周波数調整比の設定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	ratio		周波数調整比
 * \par 説明:
 * 音声の周波数調整比を設定します。<br>
 * 周波数調整比は、音声データの周波数と再生周波数の比率で、再生速度の倍率と等価です。<br>
 * 周波数比が1.0fを超える場合、音声データは原音より高速に再生され、
 * 1.0f未満の場合は、音声データは原音より低速で再生されます。<br>
 * <br>
 * 周波数比は、音声のピッチにも影響します。<br>
 * 例えば、周波数比を1.0fで再生した場合、音声データは原音通りのピッチで再生されますが、
 * 周波数比を2.0fに変更した場合、ピッチは1オクターブ上がます。<br>
 * （再生速度が2倍になるため。）<br>
 * \par 例:
 * \code
 * // 1/2の速度（-1オクターブ）で音声を再生するよう指定
 * criAtomPlayer_SetFrequencyRatio(player, 0.5f);
 * \endcode
 * \attention
 * 周波数比に1.0fを超える値を設定した場合、再生する音声のデータが通常より
 * 速く消費されるため、音声データの供給や、データのデコードが間に合わなくなる
 * 可能性があります。<br>
 * （音切れ等の問題が発生する可能性があります。）<br>
 * 周波数比に1.0fを超える値を設定する場合には、Atomプレーヤー作成時に指定する
 * 最大サンプリングレートの値を、周波数比を考慮した値に設定してください。<br>
 * （Atomプレーヤー作成時に指定する ::CriAtomAdxPlayerConfig 構造体
 * の max_sampling_rate の値に、「原音のサンプリングレート×周波数比」で
 * 計算される値を指定する必要があります。）<br>
 * \code
 * main()
 * {
 * 	CriAtomAdxPlayerConfig config;	// Atomプレーヤー作成用コンフィグ構造体
 * 	CriAtomAdxPlayerHn player;		// Atomプレーヤーハンドル
 * 		:
 * 	// Atomプレーヤー作成用コンフィグ構造体を設定
 * 	memset(&config, 0, sizeof(config));
 * 	config.max_channels = 2;			// ステレオ再生可能なプレーヤーを作成する
 *
 * 	// 48000Hzの音声を1.5倍速で再生する場合
 * 	// 48000×1.5＝72000Hzの設定でAtomプレーヤーを作成する
 * 	config.max_sampling_rate = 72000;	// 最大で72000Hzの音声を再生する
 *
 * 	// Atomプレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリはライブラリ内で動的に確保される。
 * 	player = criAtomPlayer_CreateAdxPlayer(&config, NULL, 0);
 * 		:
 * 	// 周波数比を変更する
 * 	criAtomPlayer_SetFrequencyRatio(player, 1.5f);
 * 		:
 * }
 * \endcode
 * 本関数は一部の機種でのみ利用が可能です。<br>
 * （プラットフォームのサウンドライブラリの仕様によっては実装が困難な場合が
 * あるため、全ての環境で利用できるワケではありません。）<br>
 * 本関数が利用可能かどうかは、別途マニュアルの機種依存情報のページをご参照ください。
 * \sa CriAtomAdxPlayerConfig, criAtomPlayer_CreateAdxPlayer, criAtomPlayer_SetMaxFrequencyRatio
 */
void CRIAPI criAtomPlayer_SetFrequencyRatio(CriAtomPlayerHn player, CriFloat32 ratio);

/*JP
 * \brief 最大周波数調整比の設定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	ratio		最大周波数調整比
 * \par 説明:
 * 音声の最大周波数調整比を設定します。<br>
 * 本関数で最大周波数調整比を指定することで、指定範囲内でのピッチ変更が即座に反映されるようになります。<br>
 * \par 備考:
 * Atom Ver.2.10.00以前のライブラリでは、ピッチを上げた際に音が途切れる
 * （再生速度が速くなった結果、音声データの供給が足りなくなる）ケースがありました。<br>
 * この対策として、Atom Ver.2.10.00ではピッチを上げても音が途切れないよう、
 * 音声を充分にバッファリングしてからピッチを上げるよう動作を変更しています。<br>
 * 修正により、ピッチ操作によって音が途切れることはなくなりましたが、
 * ピッチを上げる際にバッファリングを待つ時間分だけピッチ変更が遅れる形になるため、
 * 音の変化が以前のバージョンと比べて緩慢になる可能性があります。<br>
 * （短時間にピッチを上げ下げするケースにおいて、音の鳴り方が変わる可能性があります。）<br>
 * <br>
 * 本関数で最大周波数調整比をあらかじめ設定した場合、
 * 指定された速度を想定して常にバッファリングが行われるようになるため、
 * （指定された範囲内の周波数においては）バッファリングなしにピッチ変更が即座に行われます。<br>
 * 短時間にピッチを上げ下げするケースについては、
 * 予想される最大周波数調整比をあらかじめ本関数で設定してから再生を行ってください。<br>
 * \sa criAtomPlayer_SetFrequencyRatio
 */
void CRIAPI criAtomPlayer_SetMaxFrequencyRatio(CriAtomPlayerHn player, CriFloat32 ratio);

/*JP
 * \brief ループ回数の制限
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	count		ループ制限回数
 * \par 説明:
 * 波形データのループ再生回数を制限します。<br>
 * 例えば、countに1を指定した場合、ループ波形データは1回のみループして再生を終了します。<br>
 * （ループエンドポイントに到達後、1回だけループスタート位置に戻ります。）<br>
 * \par 備考:
 * デフォルト状態では、ループポイント付きの音声データは無限にループ再生されます。<br>
 * ループ回数を一旦制限した後、ループ回数を再度無限回に戻したい場合には、
 * count に ::CRIATOMPLAYER_NO_LOOP_LIMITATION を指定してください。<br>
 * <br>
 * count に ::CRIATOMPLAYER_IGNORE_LOOP を指定することで、
 * ループポイント付きの音声データをループさせずに再生することも可能です。<br>
 * \attention
 * ループ制限回数の指定は、音声再生開始前に行う必要があります。<br>
 * 再生中に本関数を実行しても、ループ回数は変更されません。<br>
 * 再生中の任意のタイミングでループ再生を停止したい場合、
 * ループ再生ではなく、シームレス連結再生で制御を行ってください。<br>
 * <br>
 * 本関数で指定したループ制限回数は、
 * あらかじめループポイントが設定された波形データを再生する場合にのみ適用されます。<br>
 * 波形データ自体にループポイントが設定されていない場合、
 * 本関数を実行しても何の効果もありません。<br>
 * <br>
 * 本関数を使用してループ回数を指定した場合でも、
 * ループ終了時にループエンドポイント以降の波形データが再生されることはありません。<br>
 * （指定回数分ループした後、ループエンドポイントで再生が停止します。）<br>
 * <br>
 * 例外的に、以下の条件を満たす場合に限り、（ループはされませんが）
 * ワンショットでループポイント以降のデータを含めて再生することが可能です。<br>
 * 	- criatomencd.exe で -nodelterm を指定してデータをエンコードする。
 * 	- 本関数に ::CRIATOMPLAYER_IGNORE_LOOP を指定してから再生を行う。
 * 	
 * <br>
 * 本関数でループ回数を制限できるのは、ADXコーデックとHCAコーデックのみです。<br>
 * プラットフォーム依存の音声コーデックに対して本関数を実行しないでください。<br>
 * （再生が終了しない、ノイズが発生する等の問題が発生します。）<br>
 */
void CRIAPI criAtomPlayer_LimitLoopCount(CriAtomPlayerHn player, CriSint32 count);

/*JP
 * \brief HCA-MXデコード先ミキサIDの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	mixer_id	ミキサID
 * \par 説明:
 * HCA-MXのデコード先ミキサIDを指定します。<br>
 * \attention
 * 本関数は ::criAtomPlayer_CreateHcaMxPlayer
 * 関数で作成されたプレーヤーに対してのみ効果があります。<br>
 * （他の関数で作成されたプレーヤーに対しては、何の効果もありません。）<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa criAtomPlayer_CreateHcaMxPlayer
 */
void CRIAPI criAtomPlayer_SetHcaMxMixerId(CriAtomPlayerHn player, CriSint32 mixer_id);

/*JP
 * \brief ASRラックIDの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	rack_id		ラックID
 * \par 説明:
 * ボイスの出力先のラックIDを指定します。<br>
 * \attention
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 */
void CRIAPI criAtomPlayer_SetAsrRackId(CriAtomPlayerHn player, CriSint32 rack_id);

/*JP
 * \brief RawPCMフォーマットの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player			Atomプレーヤーハンドル
 * \param[in]	pcm_format		RawPCMのデータフォーマット
 * \param[in]	num_channels	チャンネル数
 * \param[in]	sampling_rate	サンプリングレート
 * \par 説明:
 * RawPCMのデータフォーマット情報を指定します。<br>
 * \attention
 * 本関数は ::criAtomPlayer_CreateRawPcmPlayer
 * 関数で作成されたプレーヤーに対してのみ効果があります。<br>
 * （他の関数で作成されたプレーヤーに対しては、何の効果もありません。）<br>
 * <br>
 * 本関数は停止中のプレーヤーに対してのみ実行可能です。<br>
 * \sa criAtomPlayer_CreateRawPcmPlayer
 */
void CRIAPI criAtomPlayer_SetRawPcmFormat(CriAtomPlayerHn player,
	CriAtomPcmFormat pcm_format, CriSint32 num_channels, CriSint32 sampling_rate);

/*JP
 * \brief データ要求コールバック関数の登録
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	func		データ要求コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * データ要求コールバック関数の登録を行います。<br>
 * <br>
 * データ要求コールバックは、複数の音声データをシームレスに連結して再生する際に
 * 使用します。<br>
 * 登録したコールバック関数は、Atomプレーヤーが連結再生用のデータを要求するタイミングで
 * 実行されます。<br>
 * （前回のデータを読み込み終えて、次に再生すべきデータを要求するタイミングで
 * コールバック関数が実行されます。）<br>
 * 登録したコールバック関数内で ::criAtomPlayer_SetData 関数等を用いてAtomプレーヤーに
 * データをセットすると、セットされたデータは現在再生中のデータに続いてシームレスに
 * 連結されて再生されます。<br>
 * また、コールバック関数内で ::criAtomPlayer_SetPreviousDataAgain 関数を実行することで、
 * 同一データを繰り返し再生し続けることも可能です。<br>
 * \par 備考:
 * 登録したコールバック関数内でデータを指定しなかった場合、現在のデータを再生し
 * 終えた時点で、Atomプレーヤーのステータスが CRIATOMPLAYER_STATUS_PLAYEND に遷移します。<br>
 * <br>
 * タイミング等の問題により、データを指定することができないが、ステータスを
 * CRIATOMPLAYER_STATUS_PLAYEND に遷移させたくない場合には、コールバック関数内で
 * ::criAtomPlayer_DeferCallback 関数を実行してください。<br>
 * ::criAtomPlayer_DeferCallback 関数を実行することで、約1V後に再度データ要求
 * コールバック関数が呼び出されます。（コールバック処理をリトライ可能。）<br>
 * ただし、 ::criAtomPlayer_DeferCallback 関数を実行した場合、再生が途切れる
 * （連結箇所に一定時間無音が入る）可能性があります。<br>
 * \par 例:
 * 以下のコードを実行すると、buffer1のデータとbuffer2のデータがシームレスに
 * 連結して再生されます。<br>
 * （その後はbuffer2のデータが繰り返し再生されます。）<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// 続けて再生するデータをセット
 * 	criAtomPlayer_SetData(player, buffer2, buffer_size2);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 *
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer1, buffer_size1);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 以下の処理により、同一音声データを無限にループ再生可能です。<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomPlayerHn player)
 * {
 * 	// 前回再生したデータを再セット
 * 	criAtomPlayer_SetPreviousDataAgain(player);
 * }
 *
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 *
 * 	// 音声データをセット
 * 	criAtomPlayer_SetData(player, buffer, buffer_size);
 *
 * 	// セットされた音声データを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \attention
 * データ要求コールバック関数内で長時間処理をブロックすると、音切れ等の問題が
 * 発生しますので、ご注意ください。<br>
 * <br>
 * シームレス連結再生をサポートしないコーデックを使用している場合、
 * データ要求コールバック関数内で次のデータをセットしても、
 * データは続けて再生されません。<br>
 * （HCA-MXやプラットフォーム固有の音声圧縮コーデックを使用している場合、
 * シームレス連結再生はできません。）<br>
 * <br>
 * シームレス連結再生に使用する波形データのフォーマットは、
 * 全て同じにする必要があります。<br>
 * 具体的には、以下のパラメーターが同じである必要があります。<br>
 * 	- コーデック
 * 	- チャンネル数
 * 	- サンプリングレート
 * 	
 * パラメーターが異なる波形を連結しようとした場合、
 * 意図としない速度で音声データが再生されたり、
 * エラーコールバックが発生する等の問題が発生します。<br>
 * <br>
 * コールバック関数内でループ付きの波形データをセットした場合でも、
 * ループ再生は行われません。<br>
 * （ループポイントが無視され、再生が終了します。）<br>
 * <br>
 * コールバック関数内でAtomプレーヤーを破棄しないでください。<br>
 * コールバックを抜けた後も、しばらくの間はサーバー処理内で当該ハンドルのリソース
 * が参照されるため、アクセス違反等の重大な問題が発生する可能性があります。
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomPlayerDataRequestCbFunc, criAtomPlayer_SetData,
 * criAtomPlayer_SetPreviousDataAgain, criAtomPlayer_DeferCallback
 */
void CRIAPI criAtomPlayer_SetDataRequestCallback(
	CriAtomPlayerHn player, CriAtomPlayerDataRequestCbFunc func, void *obj);

/*JP
 * \brief ステータス変更コールバック関数の登録
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	func		ステータス変更コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ステータス変更コールバック関数を登録します。<br>
 * 登録したコールバック関数は、Atomプレーヤーのステータスが更新されるタイミングで
 * 実行されます。<br>
 * 変更されたステータスについては、コールバック関数の引数として渡されるAtomプレーヤー
 * ハンドルに対し、 ::criAtomPlayer_GetStatus 関数を実行することで取得可能です。<br>
 * <br>
 * ステータス変更コールバックを利用することで、Atomプレーヤーのステータス変更に
 * 合わせて特定の処理を行うことが可能になります。<br>
 * 例えば、以下のようなコードで、ステータスが CRIATOMPLAYER_STATUS_ERROR になった
 * 場合にリードエラーメッセージを表示することが可能です。<br>
 * \code
 * // ステータス変更コールバック関数
 * void on_status_change(void *obj, CriAtomPlayerHn player)
 * {
 * 	CriAtomPlayerStatus status;
 *
 * 	// ステータスの取得
 * 	status = criAtomPlayer_GetStatus(player);
 * 	if (status == CRIATOMPLAYER_STATUS_ERROR) {
 * 		// リードエラー発生時の処理
 * 			:
 * 	}
 * }
 *
 * main()
 * {
 * 		:
 * 	// ステータス変更コールバック関数の登録
 * 	criAtomPlayer_SetStatusChangeCallback(player, on_status_change, NULL);
 *
 * 	// 音声ファイルをセット
 * 	criAtomPlayer_SetFile(player, NULL, "sample.adx");
 *
 * 	// セットされた音声ファイルを再生
 * 	criAtomPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 厳密には、ステータス遷移〜コールバック関数実行までの間に他の処理が割り込みで動作する
 * 余地があるため、ステータス遷移とコールバック関数実行のタイミングがズレる可能性があります。<br>
 * \attention
 * ステータス変更コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * ステータス変更コールバック関数を抜けるまでは、Atomプレーヤーのステータスが
 * 変更されることはありません。<br>
 * そのため、ステータス変更コールバック関数内でAtomプレーヤーのステータス遷移を
 * 待つ処理を行うと、デッドロックが発生し、処理が先に進まなくなります。<br>
 * <br>
 * コールバック関数内でAtomプレーヤーを破棄しないでください。<br>
 * コールバックを抜けた後も、しばらくの間はサーバー処理内で当該ハンドルのリソース
 * が参照されるため、アクセス違反等の重大な問題が発生する可能性があります。
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \sa criAtomPlayer_GetStatus
 */
void CRIAPI criAtomPlayer_SetStatusChangeCallback(
	CriAtomPlayerHn player, CriAtomPlayerStatusChangeCbFunc func, void *obj);

/*JP
 * \brief パラメーター変更コールバック関数の登録
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	func		パラメーター変更コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * パラメーター変更コールバック関数を登録します。<br>
 * 登録したコールバック関数は、Atomプレーヤーのパラメーターが更新されるタイミングで実行されます。<br>
 * \attention
 * パラメーター変更コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数内でAtomプレーヤーを破棄しないでください。<br>
 * コールバックを抜けた後も、しばらくの間はサーバー処理内で当該ハンドルのリソース
 * が参照されるため、アクセス違反等の重大な問題が発生する可能性があります。
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 */
void CRIAPI criAtomPlayer_SetParameterChangeCallback(
	CriAtomPlayerHn player, CriAtomPlayerParameterChangeCbFunc func, void *obj);

/*JP
 * \brief 波形フィルターコールバック関数の登録
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	func		波形フィルターコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * デコード結果の PCM データを受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、 Atom プレーヤーが音声データをデコードしたタイミングで呼び出されます。<br>
 * \attention
 * ステータス変更コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * HCA-MXコーデックやプラットフォーム固有の音声圧縮コーデックを使用している場合、
 * フィルターコールバックは利用できません。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomPlayerFilterCbFunc
 */
void CRIAPI criAtomPlayer_SetFilterCallback(
	CriAtomPlayerHn player, CriAtomPlayerFilterCbFunc func, void *obj);

/*JP
 * \brief ロード要求コールバック関数の登録
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	func		ロード要求コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ロード要求コールバック関数の登録を行います。<br>
 * <br>
 * ロード要求コールバックは、Atomプレーヤーのファイルロード状態を監視する際に使用します。<br>
 * （デバッグ目的の関数なので、通常本関数を使用する必要はありません。）<br>
 * \attention
 * ロード要求コールバック関数内で長時間処理をブロックすると、音切れ等の問題が
 * 発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数内でAtomプレーヤーを破棄しないでください。<br>
 * コールバックを抜けた後も、しばらくの間はサーバー処理内で当該ハンドルのリソース
 * が参照されるため、アクセス違反等の重大な問題が発生する可能性があります。
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomPlayerLoadRequestCbFunc
 */
void CRIAPI criAtomPlayer_SetLoadRequestCallback(
	CriAtomPlayerHn player, CriAtomPlayerLoadRequestCbFunc func, void *obj);

/*==========================================================================
 *      Functions for HCA Streaming
 *=========================================================================*/

/*JP
 * \brief HCAフォーマットの指定
 * \ingroup ATOMLIB_PLAYER
 * \param[in]	player				Atomプレーヤー
 * \param[in]	num_channels		チャンネル数
 * \param[in]	sampling_rate		サンプリング周波数
 * \param[in]	bitrate				ビットレート
 * \par 説明:
 * HCAデータのフォーマット情報を設定します。<br>
 * 本関数を実行することで、ヘッダーレスのHCAデータを再生することが可能になります。<br>
 */
void CRIAPI criAtomPlayer_SetHcaFormat(CriAtomPlayerHn player,
	CriSint32 num_channels, CriSint32 sampling_rate, CriSint32 bitrate);

/*==========================================================================
 *      CRI Atom D-BAS API
 *=========================================================================*/
/*JP
 * \brief D-BAS作成用ワークサイズの計算
 * \ingroup ATOMLIB_DBAS
 * \param[in]	config		D-BAS作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	D-BAS作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * D-BAS作成用パラメーターに基づいて、D-BASの作成に必要ワークサイズを計算します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 設定によっては、D-BASが2GB以上のワークサイズを必要とする場合があり、<br>
 * その際はエラーになり、 -1 を返します。<br>
 * エラーが発生した場合は、max_streamsかmax_bpsの値を低く設定してください。<br>
 * \sa criAtomDbas_Create
 */
CriSint32 CRIAPI criAtomDbas_CalculateWorkSize(const CriAtomDbasConfig *config);

/*JP
 * \brief D-BASの作成
 * \ingroup ATOMLIB_DBAS
 * \param[in]	config			D-BAS作成用コンフィグ構造体へのポインタ
 * \param[in]	work			D-BAS作成用ワーク領域へのポインタ
 * \param[in]	work_size		D-BAS作成用ワークサイズ
 * \return		CriAtomDbasId	D-BAS管理用ID
 * \par 説明:
 * D-BAS作成用パラメーターに基づいて、D-BASを作成します。<br>
 * 作成に成功すると、D-BASをライブラリに登録し、有効な管理用IDを返します。<br>
 * D-BASの作成に失敗した場合、本関数は ::CRIATOMDBAS_ILLEGAL_ID を返します。<br>
 * （エラーの原因はエラーコールバックに返されます。）<br>
 * <br>
 * 取得したIDは::criAtomDbas_Destroy 関数で使用します。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomDbas_CalculateWorkSize, criAtomDbas_Destroy
 */
CriAtomDbasId CRIAPI criAtomDbas_Create(
	const CriAtomDbasConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief D-BASの破棄
 * \ingroup ATOMLIB_DBAS
 * \param[in]	atom_dbas_id	D-BAS管理用ID
 * \par 説明:
 * ::criAtomDbas_Create 関数で取得した管理用IDを指定して、D-BASを破棄します。<br>
 * \sa criAtomDbas_Create
 */
void CRIAPI criAtomDbas_Destroy(CriAtomDbasId atom_dbas_id);

/*JP
 * \brief ストリーム再生中のAtomプレーヤーハンドルを取得
 * \ingroup ATOMLIB_DBAS
 * \param[in]	dbas_id			D-BAS管理用ID
 * \param[out]	players			プレーヤーハンドル受け取り用配列
 * \param[in]	length			プレーヤーハンドル受け取り用配列要素数
 * \return		CriSint32		プレーヤー数
 * \retval		0以上			正常に処理が完了
 * \retval		-1				エラーが発生
 * \par 説明:
 * ストリーム再生中のAtomプレーヤーハンドルを取得します。<br>
 * プレーヤーハンドルの取得に成功すると、
 * 第3引数（players配列）にプレーヤーハンドルのアドレスが保存され、
 * プレーヤーハンドル数が戻り値として返されます。<br>
 * \par 備考:
 * 第3引数（players配列）にNULL、第4引数（length）に0を指定することで、
 * ストリーム再生中のプレーヤーの数だけを戻り値として取得可能です。<br>
 * \attention
 * プレーヤー数を取得してからハンドルを取得する場合、
 * プレーヤー数取得とハンドル取得の間にサーバー処理が割り込まないよう、
 * criAtom_Lock 関数で排他制御を行う必要があります。<br>
 * （サーバー処理のタイミングで、プレーヤー数が変わる可能性があります。）<br>
 * <br>
 * 配列要素数がストリーム再生中のプレーヤー数に満たない場合、
 * 本関数はエラー値（-1）を返します。<br>
 */
CriSint32 CRIAPI criAtomDbas_GetStreamingPlayerHandles(
	CriAtomDbasId dbas_id, CriAtomPlayerHn *players, CriSint32 length);

/* ========================================================================*/
/*       CRI Atom Streaming Cache API                                      */
/* ========================================================================*/
/*JP
 * \brief ストリーミングキャッシュ作成に必要なワークサイズの計算
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	config		ストリーミングキャッシュ作成用構造体
 * return		CriSint32	ストリーミングキャッシュ作成に必要なワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ストリーミングキャッシュ作成に必要なワークサイズを計算します。<br>
 * configで与えられるパラメーターに依存し、必要なワークサイズは増加します。<br>
 * \sa criAtomStreamingCache_Create
 */
CriSint32 CRIAPI criAtomStreamingCache_CalculateWorkSize(
	const CriAtomStreamingCacheConfig* config);

/*JP
 * \brief ストリーミングキャッシュの作成
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	config		ストリーミングキャッシュ作成用構造体
 * \param[in]	work		ストリーミングキャッシュ作成用ワーク
 * \param[in]	work_size	ストリーミングキャッシュ作成用ワークサイズ
 * return		CriAtomStreamingCacheId	ストリーミングキャッシュID
 * \par 説明:
 * ストリーミングキャッシュを作成します。<br>
 * Atomプレーヤーにストリーミングキャッシュを設定することで、
 * ストリーミング再生を行いつつメモリ上にファイル全体を保持（キャッシュ）します。<br>
 * 同じファイルの2回目以降の再生では、キャッシュを使ったメモリ再生に自動的に切り替わります。<br>
 * また、再生データがループデータを持っていた場合、
 * ループ以降の再生は自動的にメモリ再生で行われるようになります。<br>
 * 本機能はAtomプレーヤーがストリーミング再生を行う場合のみ機能します。<br>
 * 本関数に失敗した場合、CRIATOM_STREAMING_CACHE_ILLEGAL_IDが返ります。<br>
 * \attention
 * ファイル全体をキャッシュする事が前提ですので、キャッシュ用に割り当てられたメモリサイズが
 * ストリーミング再生対象とするどのファイルサイズよりも小さい場合、
 * 一切キャッシュされません。
 * \sa criAtomStreamingCache_CalculateWorkSize, criAtomStreamingCache_Destroy,
 */
CriAtomStreamingCacheId CRIAPI criAtomStreamingCache_Create(
	const CriAtomStreamingCacheConfig* config, void* work, CriSint32 work_size);

/*JP
 * \brief ストリーミングキャッシュの破棄
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id		ストリーミングキャッシュID
 * \par 説明:
 * 指定したストリーミングキャッシュを破棄します。<br>
 * \attention
 * 指定したストリーミングキャッシュを利用しているプレーヤーが存在しない状態で、
 * 本関数を実行してください。
 * \sa criAtomStreamingCache_Create
 */
void CRIAPI criAtomStreamingCache_Destroy(CriAtomStreamingCacheId stm_cache_id);

/*JP
 * \brief ストリーミングキャッシュのキャッシュ内容をクリア
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	cache_id		ストリーミングキャッシュID
 * \par 説明:
 * 指定したストリーミングキャッシュの内容をクリアします。<br>
 * キャッシュは古い順にクリアされます。<br>
 * 指定したストリーミングキャッシュを使用中のプレーヤーが存在する場合、
 * キャッシュのクリアは途中で中断されます。<br>
 * \attention
 * 一番古いキャッシュを使用中のプレーヤーが存在する場合、本関数を実行しても
 * キャッシュは一切クリアされません。
 * \sa criAtomStreamingCache_Create
 */
void CRIAPI criAtomStreamingCache_Clear(CriAtomStreamingCacheId cache_id);

/*JP
 * \brief WaveID指定でキャッシュ済み検索
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id		ストリーミングキャッシュID
 * \param[in]	awb					AWBハンドル
 * \param[in]	id					WaveID
 * \return		CriBool				キャッシュ済みであればCRI_TRUE、それ以外はCRI_FALSE
 * \par 説明:
 * 指定したストリーミングキャッシュ中に、指定の音声データがキャッシュされているかを検索します。<br>
 * 指定の音声データがキャッシュされている状態であればCRI_TRUEを、
 * キャッシュされていない状態であればCRI_FALSEを返します。<br>
 * \attention
 * AWBハンドルがメモリ再生用の場合、本関数は音声データの有無にかかわらずCRI_TRUEを返します。<br>
 * \sa criAtomStreamingCache_Create
 */
CriBool CRIAPI criAtomStreamingCache_IsCachedWaveId(
	CriAtomStreamingCacheId stm_cache_id, CriAtomAwbHn awb, CriSint32 id);

/*JP
 * \brief パス指定でキャッシュ済み検索
 * \ingroup ATOMLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id		ストリーミングキャッシュID
 * \param[in]	src_binder			音声データファイル読み込み元のバインダーハンドル
 * \param[in]	path				音声データファイルのパス
 * \return		CriBool				キャッシュ済みであればCRI_TRUE、それ以外はCRI_FALSE
 * \par 説明:
 * 指定したストリーミングキャッシュ中に、指定の音声データがキャッシュされているかを検索します。<br>
 * 指定の音声データがキャッシュされている状態であればCRI_TRUEを、
 * キャッシュされていない状態であればCRI_FALSEを返します。<br>
 * \sa criAtomStreamingCache_Create
 */
CriBool CRIAPI criAtomStreamingCache_IsCachedFile(
	CriAtomStreamingCacheId stm_cache_id, CriFsBinderHn src_binder, const CriChar8 *path);

/*==========================================================================
 *      CRI Atom DSP API
 *=========================================================================*/
/*JP
 * \brief セント値からDSPパラメーターへの変換
 * \ingroup ATOMLIB_DSP
 * \param[in]	cent		セント値
 * \return		CriFloat32	DSPパラメーター値
 * \par 説明:
 * -1200〜1200の範囲を0.0f〜1.0fの範囲に正規化します。<br>
 */
CriFloat32 criAtomDsp_ConvertParameterFromCent(CriFloat32 cent);

/*JP
 * \brief スペクトラムアナライザ作成に必要なワーク領域サイズを計算
 * \ingroup ATOMLIB_DSP
 * \param[in]	config		スペクトラムアナライザ作成パラメーター
 * \return		CriSint32	必要なワーク領域のサイズ（単位はバイト）
 * \par 説明:
 * スペクトラムアナライザの作成に必要なワークサイズを計算します。<br>
 * configで与えられるパラメーターに依存し、必要なワークサイズは変化します。<br>
 * \par 備考:
 * ワーク領域サイズの計算に失敗した場合、本関数は負値を返します。<br>
 * （失敗の原因はエラーコールバックで通知されます。）<br>
 * \sa CriAtomDspSpectraConfig, criAtomDspSpectra_Create
 */
CriSint32 criAtomDspSpectra_CalculateWorkSize(const CriAtomDspSpectraConfig *config);

/*JP
 * \brief スペクトラムアナライザの作成
 * \ingroup ATOMLIB_DSP
 * \param[in]	config		スペクトラムアナライザ作成パラメーター
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomDspSpectraHn	スペクトラムアナライザハンドル
 * \par 説明:
 * スペクトラムアナライザを作成します。<br>
 * スペクトラムアナライザは、PCMデータを解析し、
 * 帯域ごとの信号の強さを計測するモジュールです。<br>
 * <br>
 * PCMデータの入力には、 ::criAtomDspSpectra_Process 関数を使用します。<br>
 * 解析結果の取得には、 ::criAtomDspSpectra_GetLevels 関数を使用します。<br>
 * <br>
 * 不要になったスペクトラムアナライザは、 ::criAtomDspSpectra_Destroy
 * 関数で明示的に破棄する必要があります。<br>
 * \par 備考:
 * スペクトラムアナライザの作成に失敗した場合、本関数はNULLを返します。<br>
 * （失敗の原因はエラーコールバックで通知されます。）
 * <br>
 * ::criAtom_SetUserAllocator によるアロケーター登録を行わずに本関数を実行する場合、
 * ::criAtomDspSpectra_CalculateWorkSize
 * 関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にセットしたワーク領域は、 ::criAtomDspSpectra_Destroy
 * 関数を実行するまでの間、アプリケーションで保持する必要があります。<br>
 * （ ::criAtomDspSpectra_Destroy 関数実行前に、ワーク領域のメモリを解放しないでください。）<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa CriAtomDspSpectraConfig, criAtomDspSpectra_CalculateWorkSize, criAtomDspSpectra_Destroy
 */
CriAtomDspSpectraHn criAtomDspSpectra_Create(
	const CriAtomDspSpectraConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief スペクトラムアナライザの破棄
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * スペクトラムアナライザを破棄します。<br>
 * スペクトラムアナライザ作成時に確保されたメモリ領域が解放されます。<br>
 * （スペクトラムアナライザ作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomDspSpectra_Create
 */
void criAtomDspSpectra_Destroy(CriAtomDspSpectraHn spectra);

/*JP
 * \brief スペクトラムアナライザのリセット
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * スペクトラムアナライザをリセットします。<br>
 * 本関数を実行した時点で、 ::criAtomDspSpectra_Process
 * 関数にセットしたPCMの情報がクリアされます。<br>
 * \par 備考:
 * ::criAtomDspSpectra_GetLevels 関数の戻り値をゼロクリアしたい場合、
 * 本関数を実行してください。<br>
 * \sa criAtomDspSpectra_Process, criAtomDspSpectra_GetLevels
 */
void criAtomDspSpectra_Reset(CriAtomDspSpectraHn spectra);

/*JP
 * \brief スペクトラム解析
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * PCMデータを解析します。<br>
 * 解析結果は ::criAtomDspSpectra_GetLevels 関数で取得可能です。<br>
 * \par 備考:
 * 入力するデータ列（pcm）の値は -1.0f 〜 +1.0f の範囲を想定しています。<br>
 * ただ、±1の範囲を超える値を入力した場合でも、criAtomDspSpectra_GetLevels
 * 関数が返す値が大きくなるだけなので、
 * データ入力時点でクリッピングを行う必要はありません。<br>
 * 本関数は内部で1024点のサンプルが蓄積されるのを待ってからFFT処理を行う為、
 * スペクトラムは1024サンプル入力毎に更新されます。
 * \sa criAtomDspSpectra_GetLevels
 */
void criAtomDspSpectra_Process(CriAtomDspSpectraHn spectra,
	CriUint32 num_channels, CriUint32 num_samples, CriFloat32 *pcm[]);

/*JP
 * \brief スペクトル解析結果の取得
 * \ingroup ATOMLIB_DSP
 * \par 説明:
 * ::criAtomDspSpectra_Process 関数でセットしたPCMデータの、解析結果を返します。<br>
 * <br>
 * 解析結果は CriFloat32 型の配列です。<br>
 * 配列の要素数は、 ::criAtomDspSpectra_Create 関数実行時に
 * CriAtomDspSpectraConfig::num_bands で指定した数になります。<br>
 * 0 番目の要素が最低帯域の振幅値、 (num_bands - 1) 番目の要素が最高帯域の振幅値です。<br>
 * \par 備考:
 * 複数チャンネルのPCMデータを解析した場合、
 * 全てのチャンネルのPCMデータを一旦ミックスし、ミックス結果に対し解析を行います。<br>
 * そのため、 criAtomDspSpectra_Process 関数に複数チャンネルの音声データをセットした場合でも、
 * 本関数は長さは num_bands の1次元配列を返します。<br>
 * \attention
 * criAtomDspSpectra_GetLevels 関数が返す値は、帯域ごとの振幅値です。<br>
 * 解析結果を市販のスペクトルアナライザのように表示させたい場合、
 * 本関数が返す値をデシベル値に変換する必要があります。<br>
 * \sa criAtomDspSpectra_Process
 */
const CriFloat32* criAtomDspSpectra_GetLevels(CriAtomDspSpectraHn spectra);

/* ========================================================================*/
/*       CRI Atom Meter API                                                */
/* ========================================================================*/

/*JP
 * \brief レベルメーター機能用のワークサイズの計算
 * \ingroup ATOMLIB_METER
 * \param[in]	config			レベルメーター追加用のコンフィグ構造体
 * \return		CriSint32		必要なワーク領域サイズ
 * \par 説明:
 * レベルメーター追加に必要なワーク領域サイズを計算します。<br>
 * config にNULLを指定するとデフォルト設定で計算されます。<br>
 * \sa criAtomMeter_AttachLevelMeter
 */
CriSint32 CRIAPI criAtomMeter_CalculateWorkSizeForLevelMeter(
	const CriAtomLevelMeterConfig *config);

/*JP
 * \brief レベルメーター機能の追加
 * \ingroup ATOMLIB_METER
 * \param[in]	config			レベルメーター追加用のコンフィグ構造体
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \par 説明:
 * ライブラリにレベルメーター機能を追加します。<br>
 * config にNULLを指定するとデフォルト設定でレベルメーターが追加されます。<br>
 * work にNULL、work_size に0を指定すると、登録されたユーザアロケーターによって
 * ワーク領域が確保されます。<br>
 * \sa criAtomMeter_GetLevelInfo
 */
void CRIAPI criAtomMeter_AttachLevelMeter(
	const CriAtomLevelMeterConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief レベルメーター機能の解除
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ライブラリのレベルメーター機能を解除します。<br>
 * \sa criAtomMeter_AttachLevelMeter
 */
void CRIAPI criAtomMeter_DetachLevelMeter(void);

/*JP
 * \brief レベル情報の取得
 * \ingroup ATOMLIB_METER
 * \param[out]	info			レベル情報の構造体
 * \par 説明:
 * レベルメーターの結果を取得します。<br>
 * 指定するバスには ::criAtomMeter_AttachLevelMeter 関数であらかじめ
 * レベルメーター機能を追加しておく必要があります。<br>
 * \sa criAtomMeter_AttachLevelMeter
 */
void CRIAPI criAtomMeter_GetLevelInfo(CriAtomLevelInfo *info);

/*JP
 * \brief ラウドネスメーター機能用のワークサイズの計算
 * \ingroup ATOMLIB_METER
 * \param[in]	config			ラウドネスメーター追加用のコンフィグ構造体
 * \return		CriSint32		必要なワーク領域サイズ
 * \par 説明:
 * ITU-R BS.1770-3規格のラウドネスメーター追加に必要なワーク領域サイズを計算します。<br>
 * config にNULLを指定するとデフォルト設定で計算されます。<br>
 * \sa criAtomMeter_AttachLoudnessMeter
 */
CriSint32 CRIAPI criAtomMeter_CalculateWorkSizeForLoudnessMeter(const CriAtomLoudnessMeterConfig *config);

/*JP
 * \brief ラウドネスメーター機能の追加
 * \ingroup ATOMLIB_METER
 * \param[in]	config			ラウドネスメーター追加用のコンフィグ構造体
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \par 説明:
 * ライブラリにITU-R BS.1770-3規格のラウドネスメーター機能を追加します。<br>
 * config にNULLを指定するとデフォルト設定でラウドネスメーターが追加されます。<br>
 * work にNULL、work_size に0を指定すると、登録されたユーザアロケーターによって
 * ワーク領域が確保されます。<br>
 * \sa criAtomMeter_GetLoudnessInfo
 */
void CRIAPI criAtomMeter_AttachLoudnessMeter(const CriAtomLoudnessMeterConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ラウドネスメーター機能の解除
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ライブラリのラウドネスメーター機能を解除します。<br>
 * \sa criAtomMeter_AttachLoudnessMeter
 */
void CRIAPI criAtomMeter_DetachLoudnessMeter(void);

/*JP
 * \brief ラウドネス情報の取得
 * \ingroup ATOMLIB_METER
 * \param[out]	info		ラウドネス情報の構造体
 * \par 説明:
 * ラウドネスメーターの測定結果を取得します。
 * 本関数を呼び出す前にライブラリへラウドネスメーターを追加しておく必要があります。
 * \sa criAtomMeter_AttachLoudnessMeter
 */
void CRIAPI criAtomMeter_GetLoudnessInfo(CriAtomLoudnessInfo *info);

/*JP
 * \brief ラウドネスメーターのリセット
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ラウドネスメーターの蓄積データをリセットします。
 * 本関数を呼び出す前にライブラリへラウドネスメーターを追加しておく必要があります。
 * \sa criAtomMeter_AttachLoudnessMeter
 */
void CRIAPI criAtomMeter_ResetLoudnessMeter(void);

/*JP
 * \brief トゥルーピークメーター機能用のワークサイズの計算
 * \ingroup ATOMLIB_METER
 * \param[in]	config			トゥルーピークメーター追加用のコンフィグ構造体
 * \return		CriSint32		必要なワーク領域サイズ
 * \par 説明:
 * ITU-R BS.1770-3規格のトゥルーピークメーター追加に必要なワーク領域サイズを計算します。<br>
 * config にNULLを指定するとデフォルト設定で計算されます。<br>
 * \sa criAtomMeter_AttachTruePeakMeter
 */
CriSint32 CRIAPI criAtomMeter_CalculateWorkSizeForTruePeakMeter(const CriAtomTruePeakMeterConfig *config);

/*JP
 * \brief トゥルーピークメーター機能の追加
 * \ingroup ATOMLIB_METER
 * \param[in]	config			トゥルーピークメーター追加用のコンフィグ構造体
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \par 説明:
 * ライブラリにITU-R BS.1770-3規格のトゥルーピークメーター機能を追加します。<br>
 * config にNULLを指定するとデフォルト設定でトゥルーピークメーターが追加されます。<br>
 * work にNULL、work_size に0を指定すると、登録されたユーザアロケーターによって
 * ワーク領域が確保されます。<br>
 * \sa criAtomMeter_GetTruePeakInfo
 */
void CRIAPI criAtomMeter_AttachTruePeakMeter(const CriAtomTruePeakMeterConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief トゥルーピークメーター機能の解除
 * \ingroup ATOMLIB_METER
 * \par 説明:
 * ライブラリのトゥルーピークメーター機能を解除します。<br>
 * \sa criAtomMeter_AttachLoudnessMeter
 */
void CRIAPI criAtomMeter_DetachTruePeakMeter(void);

/*JP
 * \brief トゥルーピーク情報の取得
 * \ingroup ATOMLIB_METER
 * \param[out]	info		トゥルーピーク情報の構造体
 * \par 説明:
 * トゥルーピークメーターの測定結果を取得します。
 * 本関数を呼び出す前にライブラリへトゥルーピークメーターを追加しておく必要があります。
 * \sa criAtomMeter_AttachTruePeakMeter
 */
void CRIAPI criAtomMeter_GetTruePeakInfo(CriAtomTruePeakInfo *info);

/* ========================================================================*/
/*       CRI Atom Instrument API                                           */
/* ========================================================================*/
/*JP
 * \brief ユーザ定義インストゥルメントインターフェースの登録
 * \param[in]	ainst_interface	ユーザ定義インストゥルメントのバージョン情報付きインターフェース
 * \return						登録に成功したか？（CRI_TRUE:登録に成功した, CRI_FALSE:登録に失敗した）
 * \par 説明:
 * ユーザ定義インストゥルメントインターフェースをAtomライブラリに登録します。<br>
 * ユーザ定義インストゥルメントインターフェースを登録したインストゥルメントはインストゥルメントトラックの再生にに使用できるようになります。<br>
 * 以下の条件に該当する場合は、ユーザ定義インストゥルメントインターフェースの登録に失敗し、エラーコールバックが返ります:
 *  - 同一のエフェクト名を持つユーザ定義インストゥルメントインターフェースが既に登録されている
 *  - Atomが使用しているユーザ定義インストゥルメントインターフェースと異なる
 *  - ユーザ定義エフェクトインターフェースの登録数上限（ ::CRIATOMEXASR_MAX_NUM_USER_EFFECT_INTERFACES ）に達した
 * \par 注意:
 * ユーザ定義インストゥルメントインターフェースは、インストゥルメントトラックを再生する前に<br>
 * 本関数によって登録を行って下さい。<br>
 * Atomライブラリ使用中にインターフェースの登録解除を行う場合は、 ::criAtomInstrument_UnregisterInstrumentInterface を使用して下さい。
 * \sa criAtomInstrument_UnregisterInstrumentInterface 
 */
CriBool CRIAPI criAtomInstrument_RegisterInstrumentInterface(CriAtomAinstInterfaceWithVersionPtr ainst_interface);

/*JP
 * \brief ユーザ定義インストゥルメントインターフェースの登録解除
 * \param[in]	ainst_interface	ユーザ定義インストゥルメントのバージョン情報付きインターフェース
 * \par 説明:
 * インストゥルメントインターフェースの登録を解除します。<br>
 * 登録を解除したインストゥルメントはインストゥルメントトラックを再生する際に使用できなくなります。<br>
 * 登録処理を行っていないインストゥルメントインターフェースの登録を解除することはできません（エラーコールバックが返ります）。
 * \par 注意:
 * 登録を行ったユーザ定義インストゥルメントインターフェースはプレーヤーの再生中に参照され続けるため、<br>
 * 全てのプレーヤーが停止させた後で、本関数を実行してください。<br>
 * Atomライブラリの終了時（::criAtom_Finalize 関数の呼び出し時）には全てのユーザ定義インストゥルメントインターフェースの登録が解除されます。
 * \sa  criAtomInstrument_RegisterInstrumentInterface
 */
void CRIAPI criAtomInstrument_UnregisterInstrumentInterface(CriAtomAinstInterfaceWithVersionPtr ainst_interface);

/***************************************************************************
 *      暫定API（使用はお控え下さい）
 *      Tentative API (Please don't use it)
 ***************************************************************************/
/* 以下に宣言されている関数はAtomの内部処理用、ゲームエンジンとの連携等にて
 * 暫定的に使用されているAPIです。
 * 今後のアップデートにて予告なく変更・削除が行われるため、使用はお控え下さい。
 */
typedef void (CRIAPI *CriAtomPlayerDataEndCbFunc)(void *obj, void *buffer, CriSint32 size);
typedef void (CRIAPI *CriAtomPlayerCbFunc)(void *obj, CriAtomPlayerHn player);
typedef void (CRIAPI *CriAtomPlayerDecodeCbFunc)(void *obj, CriAtomPcmFormat format,
	CriSint32 num_channels, CriSint32 num_samples, void *data[]);
void CRIAPI criAtomPlayer_SetDecodeCallback(
	CriAtomPlayerHn player, CriAtomPlayerDecodeCbFunc func, void *obj);
void CRIAPI criAtomPlayer_DiscardSamples(CriAtomPlayerHn player, CriSint32 num_discard);
typedef CriSint32 CriAtomWaveType;

#ifdef __cplusplus
}
#endif

/***************************************************************************
 *      旧バージョンとの互換用
 *      For compatibility with old version
 ***************************************************************************/

#define CRI_ATOM_VERSION				(0xFFFFFFFF)
/* レンダラーの出力Ch数設定に応じて、自動でダウンミックスするため下記関数は無効にしています */
#define criAtomHcaMx_SetBusSendLevel(mixer_id, bus_no, level) \
	criAtomExHcaMx_SetBusSendLevel(mixer_id, bus_no, level)

#ifdef __cplusplus
extern "C" {
#endif

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 本関数実行時、常に 0xFFFFFFFF が返却されます。
 * ::criAtom_GetVersionString 関数の使用してください。
 */
CriUint32 CRIAPI criAtom_GetVersionNumber(void);

#ifdef __cplusplus
}
#endif

#endif	/* CRI_INCL_CRI_ATOM_H */

/* --- end of file --- */
