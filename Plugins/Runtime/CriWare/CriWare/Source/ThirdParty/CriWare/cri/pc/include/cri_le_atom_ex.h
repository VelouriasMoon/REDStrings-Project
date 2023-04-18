/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2010-2016 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Atom
 * Module   : AtomEx.
 * File     : cri_atom_ex.h
 *
 ****************************************************************************/
/*!
 *	\file		cri_atom_ex.h
 */

/* 多重定義防止					*/
/* Prevention of redefinition	*/
#ifndef CRI_INCL_CRI_ATOM_EX_H
#define CRI_INCL_CRI_ATOM_EX_H

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include <cri_le_xpt.h>
#include <cri_le_atom.h>
#include <cri_le_file_system.h>

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/* バージョン情報 */
/* Version Number */
#define CRIATOMEX_VER_NAME		"CRI AtomEx"
#define CRIATOMEX_VER_NUM		"2.21.11"
#define CRIATOMEX_VER_MAJOR		(2)
#define CRIATOMEX_VER_MINOR		(21)
#define CRIATOMEX_VER_PATCH		(11)
#define CRIATOMEX_VER_RELEASE	(0)
#define CRIATOMEX_VER_REVISION	(0)
#define CRIATOMEX_VER_OPTION

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief バーチャルボイス数の設定可能上限
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * バーチャルボイスの設定可能上限値です。
 * CriAtomExConfig::max_virtual_voices の値は、この値以下に設定する必要があります。
 * \sa CriAtomExConfig
 */
#define CRIATOMEX_MAX_VIRTUAL_VOICES	(32767)

/*==========================================================================
 *      CRI AtomEx ACF API
 *=========================================================================*/
/*JP
 * \brief AISACコントロールIDの無効値
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * AISACコントロールIDの無効値です。<br>
 * \sa CriAtomExAisacControlId, criAtomExPlayer_SetAisacControlById, criAtomExAcf_GetAisacControlIdByName, criAtomExAcf_GetAisacControlNameById
 */
#define CRIATOMEX_INVALID_AISAC_CONTROL_ID	(0xffff)

/*JP
 * \brief 最大DSPバス数
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバス設定で設定可能な最大バス数です。<br>
 * \sa CriAtomExAcfDspSettingInfo, CriAtomExAcfDspBusInfo
 */
#define CRIATOMEXACF_MAX_BUSES			(64)

/*JP
 * \brief 最大DSP FX数
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバス設定で設定可能な最大DSP FX数です。<br>
 * \sa CriAtomExAcfDspBusInfo
 */
#define CRIATOMEXACF_MAX_FXES			(8)

/*JP
 * \brief キューリミット無効値
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * キューリミット数の無効値です。<br>
 * \sa CriAtomExCategoryInfo
 */
#define CRIATOMEXACF_INVALID_CUE_LIMITS		(0xffffffff)

/*JP
 * \brief 各種名前文字列の最大文字数
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * キュー名やグローバルAISAC名等、各種名前文字列の最大文字数です。<br>
 * \par 備考:
 * ツール側での入力制限が「バイト数」ではなく「文字数」で行われていて、
 * かつ全角文字はShift_JISとして扱われているため、
 * 全角文字を使用した場合のバイト数は最大128バイトとなります。
 */
#define CRIATOMEXACF_MAX_NAME_STRING_COUNT	(64)

/*==========================================================================
 *      CRI AtomEx Voice Pool API
 *=========================================================================*/
/*JP
 * \brief デフォルトボイス数
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * ボイスプール当たりのボイス数のデフォルト値です。<br>
 * ボイスプール作成時にデフォルト値設定を使用すると、
 * ::CRIATOMEX_DEFAULT_VOICES_PER_POOL 数分のボイスが確保されます。<br>
 * \sa criAtomExVoicePool_SetDefaultConfigForStandardVoicePool
 */
#define CRIATOMEX_DEFAULT_VOICES_PER_POOL	(8)

/*==========================================================================
 *      CRI AtomEx Player API
 *=========================================================================*/
/*JP
 * \brief グループ制限なし
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * ボイスリミットグループによる制限を解除するための定数です。<br>
 * ::criAtomExPlayer_SetGroupNumber 関数に対してこの値を指定すると、
 * 指定されたプレーヤーはボイスリミットグループによる制限を受けなくなります。<br>
 * （空きボイスがあるか、または自身より低プライオリティのボイスがあれば、
 * ボイスリミットグループに関係なくボイスを取得します。）
 * \sa criAtomExPlayer_SetGroupNumber
 */
#define CRIATOMEXPLAYER_NO_GROUP_LIMITATION	(-1)

/*JP
 * \brief ループ回数制御用
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 */
#define CRIATOMEXPLAYER_NO_LOOP_LIMITATION	(CRIATOMPLAYER_NO_LOOP_LIMITATION)	/*JP<ループ回数制限なし	*/
#define CRIATOMEXPLAYER_IGNORE_LOOP			(CRIATOMPLAYER_IGNORE_LOOP)			/*JP<ループ情報を無視	*/
#define CRIATOMEXPLAYER_FORCE_LOOP			(CRIATOMPLAYER_FORCE_LOOP)			/*JP<強制ループ再生		*/

/*JP
 * \brief プレーヤーに指定可能な最大ASRラック数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * 1つのプレーヤーに対して指定可能なASRラックの最大数です。
 * \sa criAtomExPlayer_SetAsrRackIdArray
 */
#define CRIATOMEXPLAYER_MAX_ASR_RACKS		(8)

/*==========================================================================
 *      CRI AtomEx Playback API
 *=========================================================================*/
/*JP
 * \brief 無効な再生ID
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で音声の再生を開始した際、
 * ボイスリミットコントロール等によりボイスが確保できなかった場合に返される、
 * 無効な再生IDです。<br>
 * \par 備考:
 * 再生 ID を指定する API に対して本 ID をセットした場合でも、
 * エラーコールバックは発生しません。<br>
 * （何もされずに関数からリターンします。）<br>
 * そのため、 ::criAtomExPlayer_Start 関数の結果にかかわらず、
 * 再生 ID を使用した処理を常時行っても、特に問題ありません。<br>
 * \sa CriAtomExPlaybackId, criAtomExPlayer_Start
 */
#define CRIATOMEX_INVALID_PLAYBACK_ID	(0xFFFFFFFF)

/*JP
 * \brief 無効なブロックインデックス
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * ::criAtomExPlayback_GetCurrentBlockIndex 関数で再生中の音声のカレントブロック
 * インデックスを取得した際、再生中の音声がブロックシーケンスではない場合に
 * 返される無効なインデックスです。<br>
 * \sa criAtomExPlayback_GetCurrentBlockIndex
 */
#define CRIATOMEX_INVALID_BLOCK_INDEX	(0xFFFFFFFF)

/*==========================================================================
 *      CRI AtomEx Fader API
 *=========================================================================*/
/*JP
 * \brief フェードアウト処理の無効化指定値
 * \ingroup ATOMEXLIB_FADER
 * \par 説明:
 * フェーダーのフェードアウト処理を無効化するための値です。<br>
 * ::criAtomExPlayer_SetFadeOutTime 関数の第2引数に本パラメーターをセットすることで、
 * フェードアウト処理を無効化することが可能です。<br>
 * \sa criAtomExPlayer_SetFadeOutTime
 */
#define CRIATOMEX_IGNORE_FADE_OUT		(-1)

/*==========================================================================
 *      CRI AtomEx D-BAS API
 *=========================================================================*/
/*JP
 * \brief AtomEx D-BAS ID
 * \ingroup ATOMEXLIB_DBAS
 * \par 説明:
 * ::criAtomExDbas_Create 関数に失敗した際に返る値です。 <br>
 * \sa criAtomExDbas_Create, criAtomExDbas_Destroy
 */
#define CRIATOMEXDBAS_ILLEGAL_ID		(CRIATOMDBAS_ILLEGAL_ID)

/* ========================================================================*/
/*       CRI AtomEx Streaming Cache API                                    */
/* ========================================================================*/
/*JP
 * \brief 不正なストリーミングキャッシュID値
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \par 説明:
 * ::criAtomExStreamingCache_Create 関数に失敗した際に返る値です。 <br>
 * \sa criAtomExStreamingCache_Create, criAtomExStreamingCache_Destroy
 */
#define CRIATOMEX_STREAMING_CACHE_ILLEGAL_ID	(CRIATOM_STREAMING_CACHE_ILLEGAL_ID)

/*==========================================================================
 *      CRI AtomEx 3D API
 *=========================================================================*/
/*JP
 * \brief 3D音源のランダム化における各種算出方法に関するパラメーター数の最大値
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * ::CriAtomEx3dSourceRandomPositionConfig::calculation_parameters 配列における
 * 最大要素数です。
 * \sa CriAtomEx3dSourceRandomPositionConfig
 */
#define CRIATOMEX3DSOURCE_MAX_RANDOM_POSITION_CALCULATION_PARAMETERS	(3)

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief ユーザアロケーターの登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	p_malloc_func	メモリ確保関数
 * \param[in]	p_free_func		メモリ解放関数
 * \param[in]	p_obj			ユーザ指定オブジェクト
 * \par 説明:
 * CRI Atom ライブラリにメモリアロケーター（メモリの確保／解放関数）を登録します。<br>
 * 本マクロでアロケーターを登録すると、Atomライブラリがワーク領域を必要とするタイミングで、
 * ユーザが登録したメモリ確保／解放処理が呼び出されることになります。<br>
 * その結果、ワーク領域を必要とする関数（ ::criAtomExPlayer_Create 関数等）に対し、
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
 * 本マクロは内部的に ::criAtom_SetUserAllocator マクロや
 * ::criAtom_SetUserMallocFunction 関数、 ::criAtom_SetUserFreeFunction
 * 関数を呼び出します。<br>
 * 本関数とこれらの API を併用しないようご注意ください。<br>
 * （本関数の呼び出しにより、上記 API にセットした内容が上書きされます。）<br>
 * <br>
 * また、登録されたメモリアロケーター関数はマルスレッドモード時に複数のスレッドからコール
 * されることがあります。従って、メモリアロケート処理がスレッドセーフでない場合は独自に
 * メモリアロケート処理を排他制御する必要があります。
 */
#define criAtomEx_SetUserAllocator(p_malloc_func, p_free_func, p_obj)	\
	criAtom_SetUserAllocator((p_malloc_func), (p_free_func), (p_obj))

/*JP
 * \brief ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomEx_Initialize 関数に設定するコンフィグ構造体（ ::CriAtomExConfig ）に、
 * デフォルトの値をセットします。<br>
 * \sa
 * CriAtomExConfig
 */
#define criAtomEx_SetDefaultConfig(p_config)	\
{\
	(p_config)->thread_model = CRIATOMEX_THREAD_MODEL_MULTI;\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->parameter_update_interval = 1;\
	(p_config)->enable_atom_sound_disabled_mode = CRI_FALSE;\
	(p_config)->max_virtual_voices = 16;\
	(p_config)->max_parameter_blocks = 1024;\
	(p_config)->max_voice_limit_groups = 16;\
	(p_config)->max_categories = 16;\
	(p_config)->max_aisacs = 8;\
	(p_config)->categories_per_playback = 4;\
	(p_config)->max_sequences = (p_config)->max_virtual_voices;\
	(p_config)->max_tracks = (p_config)->max_virtual_voices * 2;\
	(p_config)->max_track_items = (p_config)->max_virtual_voices * 2;\
	(p_config)->max_aisac_auto_modulations = 0;\
	(p_config)->max_pitch = 2400.0f;\
	(p_config)->max_faders = 4;\
	(p_config)->coordinate_system = CRIATOMEX_COORDINATE_SYSTEM_LEFT_HANDED;\
	(p_config)->enable_auto_matching_in_pan_type_auto = CRI_FALSE;\
	(p_config)->enable_category_override_by_ex_player = CRI_FALSE;\
	(p_config)->sequence_prepare_ratio = 1.5;\
	(p_config)->rng_if = NULL;\
	(p_config)->fs_config = NULL;\
	(p_config)->acf_info = NULL;\
	(p_config)->context = NULL;\
	(p_config)->version = CRI_ATOM_VERSION;\
	(p_config)->version_ex = CRIATOMEX_VERSION;\
	(p_config)->version_string = CRI_ATOM_VER_NUM;\
	(p_config)->version_ex_string = CRIATOMEX_VER_NUM;\
}

/*JP
 * \brief パフォーマンスモニター機能の追加
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * パフォーマンス計測機能を追加し、パフォーマンス計測処理を開始します。<br>
 * 本関数を実行後、 ::criAtomEx_GetPerformanceInfo 関数を実行することで、
 * サーバー処理の負荷や、サーバー処理の実行間隔等、ライブラリのパフォーマンス情報を
 * 取得することが可能です。
 * \sa criAtomEx_GetPerformanceInfo, criAtomEx_DetachPerformanceMonitor
 * \par 例:
 * \code
 * 	// パフォーマンス情報取得用構造体
 * 	CriAtomExPerformanceInfo info;
 * 	
 * 	// ライブラリの初期化
 * 	criAtomEx_Initialize(…);
 * 	
 * 	// パフォーマンスモニター機能の追加
 * 	criAtomEx_AttachPerformanceMonitor();
 * 	
 * 	// パフォーマンスモニターのリセット
 * 	criAtomEx_ResetPerformanceMonitor();
 * 	
 * 	// パフォーマンス計測区間
 * 	…
 * 	
 * 	// パフォーマンス情報の取得
 * 	criAtomEx_GetPerformanceInfo(&info);
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
#define criAtomEx_AttachPerformanceMonitor()	criAtom_AttachPerformanceMonitor()

/*JP
 * \brief パフォーマンスモニター機能の削除
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * パフォーマンス計測処理を終了し、パフォーマンス計測機能を削除します。
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 */
#define criAtomEx_DetachPerformanceMonitor()	criAtom_DetachPerformanceMonitor()

/*JP
 * \brief パフォーマンスモニターのリセット
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 現在までの計測結果を破棄します。<br>
 * パフォーマンスモニターは、 ::criAtomEx_AttachPerformanceMonitor 関数実行直後
 * からパフォーマンス情報の取得を開始し、計測結果を累積します。<br>
 * 以前の計測結果を以降の計測結果に含めたくない場合には、
 * 本関数を実行し、累積された計測結果を一旦破棄する必要があります。
 */
#define criAtomEx_ResetPerformanceMonitor()		criAtom_ResetPerformanceMonitor()

/*JP
 * \brief パフォーマンス情報の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * パフォーマンス情報を取得します。<br>
 * 本関数は、 ::criAtomEx_AttachPerformanceMonitor 関数実行後から
 * ::criAtomEx_DetachPerformanceMonitor 関数を実行するまでの間、利用可能です。<br>
 * \sa criAtomEx_AttachPerformanceMonitor, criAtomEx_DetachPerformanceMonitor
 */
#define criAtomEx_GetPerformanceInfo(p_info)	criAtom_GetPerformanceInfo(p_info)

/*JP
 * \brief チャンネルマッピングパターンの指定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	nch		マッピングパターンを変更するチャンネル数
 * \param[in]	type	マッピングパターン
 * \par 説明:
 * 音声データの各チャンネルと出力スピーカーの対応付けを変更します。<br>
 * 例えば、5ch音声データを再生した場合、デフォルト状態では各チャンネルが 
 * L, R, C, Ls, Rs の順で出力されます。<br>
 * これに対し、::criAtomEx_SetChannelMapping(5, 1); を実行した場合、
 * 5ch音声データの各チャンネルが L, R, LFE, Ls, Rs の順で出力されるようになります。<br>
 * \par 備考:
 * 現状、本関数は5ch音声データのマッピングパターン変更にしか対応していません。<br>
 */
#define criAtomEx_SetChannelMapping(nch, type)	\
	criAtom_SetChannelMapping((nch), (type))

/*JP
 * \brief ADXデータのビットレート計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * ADXデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 */
#define criAtomEx_CalculateAdxBitrate(num_channels, sampling_rate) \
	criAtom_CalculateAdxBitrate(num_channels, sampling_rate)

/*JP
 * \brief HCAデータのビットレート計算
 * \ingroup ATOMEXLIB_GLOBAL
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
#define criAtomEx_CalculateHcaBitrate(num_channels, sampling_rate, quality) \
	criAtom_CalculateHcaBitrate(num_channels, sampling_rate, quality)

/*JP
 * \brief HCA-MXデータのビットレート計算
 * \ingroup ATOMEXLIB_GLOBAL
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
#define criAtomEx_CalculateHcaMxBitrate(num_channels, sampling_rate, quality) \
	criAtom_CalculateHcaMxBitrate(num_channels, sampling_rate, quality)

/*JP
 * \brief Waveデータのビットレート計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \param[in]	num_bits		サンプル当たりのビット数
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * Waveデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 */
#define criAtomEx_CalculateWaveBitrate(num_channels, sampling_rate, num_bits)	\
	criAtom_CalculateWaveBitrate(num_channels, sampling_rate, num_bits)

/*JP
 * \brief AIFFデータのビットレート計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	num_channels	データのチャンネル数
 * \param[in]	sampling_rate	データのサンプリングレート
 * \param[in]	num_bits		サンプル当たりのビット数
 * \return		CriSint32		ビットレート[bps]
 * \par 説明:
 * AIFFデータのビットレートを計算します。<br>
 * 計算に失敗すると本関数は-1を返します。<br>
 * 計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 */
#define criAtomEx_CalculateAiffBitrate(num_channels, sampling_rate, num_bits)	\
	criAtom_CalculateAiffBitrate(num_channels, sampling_rate, num_bits)

/*==========================================================================
 *      CRI AtomEx HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_HCA_MX
 * \par 説明:
 * ::criAtomExHcaMx_Initialize 関数に設定するコンフィグ構造体
 * （ ::CriAtomExHcaMxConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomExHcaMx_Initialize, CriAtomExHcaMxConfig
 */
#define criAtomExHcaMx_SetDefaultConfig(p_config)	\
{\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->num_mixers = 1;\
	(p_config)->max_voices = 16;\
	(p_config)->max_input_channels = CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->output_channels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;\
	(p_config)->output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_DEFAULT;\
}

/*==========================================================================
 *      CRI AtomEx Voice Pool API
 *=========================================================================*/
/*JP
 * \brief 標準ボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	標準ボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateStandardVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExStandardVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExStandardVoicePoolConfig, criAtomExVoicePool_AllocateStandardVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForStandardPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief ADXボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	ADXボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateAdxVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExAdxVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExAdxVoicePoolConfig, criAtomExVoicePool_AllocateAdxVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForAdxVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForAdxPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief HCAボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	HCAボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateHcaVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExHcaVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExHcaVoicePoolConfig, criAtomExVoicePool_AllocateHcaVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForHcaVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForHcaPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief HCA-MXボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	HCA-MXボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateHcaMxVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExHcaMxVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExHcaMxVoicePoolConfig, criAtomExVoicePool_AllocateHcaMxVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForHcaMxPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief Waveボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	Waveボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateWaveVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExWaveVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExWaveVoicePoolConfig, criAtomExVoicePool_AllocateWaveVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForWaveVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForWavePlayer(&(p_config)->player_config);\
}

/*JP
 * \brief AIFFボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	AIFFボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateAiffVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExAiffVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExAiffVoicePoolConfig, criAtomExVoicePool_AllocateAiffVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForAiffVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForAiffPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief RawPCMボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	RawPCMボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateRawPcmVoicePool 関数に設定するコンフィグ構造体
 * （ ::CriAtomExRawPcmVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExRawPcmVoicePoolConfig, criAtomExVoicePool_AllocateRawPcmVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForRawPcmPlayer(&(p_config)->player_config);\
}

/*JP
 * \brief インストゥルメントボイスプール作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[out]	p_config	RawPCMボイスプール作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExVoicePool_AllocateInstrumentVoicePool 関数に設定するコンフィグ構造体
 * （ ::  CriAtomExInstrumentVoicePoolConfig ）に、デフォルトの値をセットします。<br>
 * \par 注意:
 * デフォルト値のままではプールの作成に失敗します。<br>
 * ユーザが登録したインターフェースのインストゥルメント名を設定する必要があります。
 * \sa  CriAtomExInstrumentVoicePoolConfig, criAtomExVoicePool_AllocateInstrumentVoicePool
 */
#define criAtomExVoicePool_SetDefaultConfigForInstrumentVoicePool(p_config)	\
{\
	(p_config)->identifier = 0;\
	(p_config)->num_voices = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	criAtomPlayer_SetDefaultConfigForInstrumentPlayer(&(p_config)->player_config);\
}
/*==========================================================================
 *      CRI AtomEx Player API
 *=========================================================================*/
/*JP
 * \brief プレーヤー作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_PLAYER
 * \param[out]	p_config	AtomExプレーヤー作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExPlayer_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomExPlayerConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create
 */
#define criAtomExPlayer_SetDefaultConfig(p_config)	\
{\
	(p_config)->voice_allocation_method = CRIATOMEX_ALLOCATE_VOICE_ONCE;\
	(p_config)->max_path_strings = 1;\
	(p_config)->max_path = 0;\
	(p_config)->updates_time = CRI_TRUE;\
	(p_config)->enable_audio_synced_timer = CRI_FALSE;\
	(p_config)->max_aisacs = 8;\
}

/*==========================================================================
 *      CRI AtomEx Fader API
 *=========================================================================*/
/*JP
 * \brief フェーダーアタッチ用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_FADER
 * \param[out]	p_config	フェーダーアタッチ用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExPlayer_AttachFader 関数に設定するコンフィグ構造体
 * （ ::CriAtomExFaderConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExFaderConfig, criAtomExPlayer_AttachFader
 */
#define criAtomExFader_SetDefaultConfig(p_config)	\
{\
	(p_config)->reserved = 0;\
}

/*==========================================================================
 *      CRI AtomEx D-BAS API
 *=========================================================================*/
/*JP
 * \brief CriAtomExDbasConfig へのデフォルトパラメーターのセット
 * \ingroup ATOMEXLIB_DBAS
 * \param[out]	p_config	D-BAS作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExDbas_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomExDbasConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExDbasConfig, criAtomExDbas_Create, criAtomExDbas_CalculateWorkSize
 */
#define criAtomExDbas_SetDefaultConfig(p_config)	\
	criAtomDbas_SetDefaultConfig(p_config)

/*JP
 * \brief D-BAS作成用ワークサイズの計算
 * \ingroup ATOMEXLIB_DBAS
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
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExDbas_Create, criAtomEx_Initialize
 */
#define criAtomExDbas_CalculateWorkSize(config)	\
	criAtomDbas_CalculateWorkSize(config)

/*JP
 * \brief D-BASの作成
 * \ingroup ATOMEXLIB_DBAS
 * \param[in]	config			D-BAS作成用コンフィグ構造体へのポインタ
 * \param[in]	work			D-BAS作成用ワーク領域へのポインタ
 * \param[in]	work_size		D-BAS作成用ワークサイズ
 * \return		CriAtomExDbasId	D-BAS管理用ID
 * \par 説明:
 * D-BAS作成用パラメーターに基づいて、D-BASを作成します。<br>
 * 作成に成功すると、D-BASをライブラリに登録し、有効な管理用IDを返します。<br>
 * D-BASの作成に失敗した場合、本関数は ::CRIATOMEXDBAS_ILLEGAL_ID を返します。<br>
 * （エラーの原因はエラーコールバックに返されます。）<br>
 * <br>
 * 取得したIDは::criAtomExDbas_Destroy 関数で使用します。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExDbas_CalculateWorkSize, criAtomExDbas_Destroy
 */
#define criAtomExDbas_Create(config, work, work_size)	\
	criAtomDbas_Create((config), (work), (work_size))

/*JP
 * \brief D-BASの破棄
 * \ingroup ATOMEXLIB_DBAS
 * \param[in]	atom_dbas_id	D-BAS管理用ID
 * \par 説明:
 * ::criAtomExDbas_Create 関数で取得した管理用IDを指定して、D-BASを破棄します。<br>
 * \sa criAtomExDbas_Create
 */
#define criAtomExDbas_Destroy(atom_dbas_id)	\
	criAtomDbas_Destroy(atom_dbas_id);

/*JP
 * \brief ストリーム再生中のAtomプレーヤーハンドルを取得
 * \ingroup ATOMEXLIB_DBAS
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
#define criAtomExDbas_GetStreamingPlayerHandles(dbas_id, players, length)	\
	criAtomDbas_GetStreamingPlayerHandles((dbas_id), (players), (length))

/* ========================================================================*/
/*       CRI AtomEx Streaming Cache API                                    */
/* ========================================================================*/
/*JP
 * \brief CriAtomExStreamingCacheConfigへのデフォルトパラメーターのセット
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[out]	p_config	ストリーミングキャッシュ作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExStreamingCache_CalculateWorkSize 関数、
 * ::criAtomExStreamingCache_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomExStreamingCacheConfig ）に対し、デフォルト値をセットします。<br>
 * \sa criAtomExStreamingCache_CalculateWorkSize, criAtomExStreamingCache_Create
 */
#define criAtomExStreamingCache_SetDefaultConfig(p_config)	\
	criAtomStreamingCache_SetDefaultConfig(p_config)

/*JP
 * \brief ストリーミングキャッシュ作成に必要なワークサイズの計算
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	p_config	ストリーミングキャッシュ作成用構造体
 * \return		CriSint32	ストリーミングキャッシュ作成に必要なワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ストリーミングキャッシュ作成に必要なワークサイズを計算します。<br>
 * configで与えられるパラメーターに依存し、必要なワークサイズは増加します。<br>
 * \sa criAtomExStreamingCache_Create
 */
#define criAtomExStreamingCache_CalculateWorkSize(p_config)	\
	criAtomStreamingCache_CalculateWorkSize(p_config)

/*JP
 * \brief ストリーミングキャッシュの作成
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	config		ストリーミングキャッシュ作成用構造体
 * \param[in]	work		ストリーミングキャッシュ作成用ワーク
 * \param[in]	work_size	ストリーミングキャッシュ作成用ワークサイズ
 * return		CriAtomExStreamingCacheId	ストリーミングキャッシュID
 * \par 説明:
 * ストリーミングキャッシュを作成します。<br>
 * Atomプレーヤーにストリーミングキャッシュを設定することで、
 * ストリーミング再生を行いつつメモリ上にファイル全体を保持（キャッシュ）します。<br>
 * 同じファイルの2回目以降の再生では、キャッシュを使ったメモリ再生に自動的に切り替わります。<br>
 * また、再生データがループデータを持っていた場合、
 * ループ以降の再生は自動的にメモリ再生で行われるようになります。<br>
 * 本機能はAtomプレーヤーがストリーミング再生を行う場合のみ機能します。<br>
 * 本関数に失敗した場合、CRIATOMEX_STREAMING_CACHE_ILLEGAL_IDが返ります。<br>
 * \attention
 * ファイル全体をキャッシュする事が前提ですので、キャッシュ用に割り当てられたメモリサイズが
 * ストリーミング再生対象とするどのファイルサイズよりも小さい場合、
 * 一切キャッシュされません。
 * \sa criAtomExStreamingCache_CalculateWorkSize, criAtomExStreamingCache_Destroy,
 */
#define criAtomExStreamingCache_Create(config, work, work_size)	\
	criAtomStreamingCache_Create((config), (work), (work_size));

/*JP
 * \brief ストリーミングキャッシュの破棄
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id		ストリーミングキャッシュID
 * \par 説明:
 * 指定したストリーミングキャッシュを破棄します。<br>
 * \attention
 * 指定したストリーミングキャッシュを利用しているプレーヤーが存在しない状態で、
 * 本関数を実行してください。
 * \sa criAtomExStreamingCache_Create
 */
#define criAtomExStreamingCache_Destroy(stm_cache_id)	\
	criAtomStreamingCache_Destroy(stm_cache_id)

/*JP
 * \brief ストリーミングキャッシュのキャッシュ内容をクリア
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	cache_id		ストリーミングキャッシュID
 * \par 説明:
 * 指定したストリーミングキャッシュの内容をクリアします。<br>
 * キャッシュは古い順にクリアされます。<br>
 * 指定したストリーミングキャッシュを使用中のプレーヤーが存在する場合、
 * キャッシュのクリアは途中で中断されます。<br>
 * \attention
 * 一番古いキャッシュを使用中のプレーヤーが存在する場合、本関数を実行しても
 * キャッシュは一切クリアされません。
 * \sa criAtomExStreamingCache_Create
 */
#define criAtomExStreamingCache_Clear(cache_id)	\
	criAtomStreamingCache_Clear(cache_id)

/*JP
 * \brief WaveID指定でキャッシュ済み検索
 * \ingroup ATOMEXLIB_STREAMING_CACHE
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
 * \sa criAtomExStreamingCache_Create
 */
#define criAtomExStreamingCache_IsCachedWaveId(stm_cache_id, awb, id)	\
	criAtomStreamingCache_IsCachedWaveId((stm_cache_id), (awb), (id))

/*JP
 * \brief パス指定でキャッシュ済み検索
 * \ingroup ATOMEXLIB_STREAMING_CACHE
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
#define criAtomExStreamingCache_IsCachedFile(stm_cache_id, src_binder, path)	\
	criAtomStreamingCache_IsCachedFile((stm_cache_id), (src_binder), (path))

/*==========================================================================
 *      CRI AtomEx 3D API
 *=========================================================================*/
/*JP
 * \brief 3D音源ハンドル作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3D音源ハンドル作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * 3D音源ハンドル作成用コンフィグ構造体（ ::CriAtomEx3dSourceConfig ）に、デフォルトの値をセットします。
 * \sa
 * CriAtomEx3dSourceConfig
 */
#define criAtomEx3dSource_SetDefaultConfig(p_config)	\
{\
	(p_config)->enable_voice_priority_decay = CRI_FALSE;\
	(p_config)->random_position_list_max_length = 0;\
}

/*JP
 * \brief 3D音源ハンドルリスト作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3D音源ハンドルリスト作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * 3D音源ハンドルリスト作成用コンフィグ構造体（ ::CriAtomEx3dSourceListConfig ）に、デフォルトの値をセットします。
 * \sa
 * CriAtomEx3dSourceListConfig
 */
#define criAtomEx3dSourceList_SetDefaultConfig(p_config)	\
{\
	(p_config)->reserved = 0;\
}

/*JP
 * \brief 3Dリスナーハンドル作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3Dリスナーハンドル作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * 3Dリスナーハンドル作成用コンフィグ構造体（ ::CriAtomEx3dListenerConfig ）に、デフォルトの値をセットします。
 * \sa
 * CriAtomEx3dListenerConfig
 */
#define criAtomEx3dListener_SetDefaultConfig(p_config)	\
{\
	(p_config)->reserved = 0;\
}

/*JP
 * \brief 3Dリージョンハンドル作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3Dリージョンハンドル作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * 3Dリージョンハンドル作成用コンフィグ構造体（ ::CriAtomEx3dRegionConfig ）に、デフォルトの値をセットします。
 * \sa
 * CriAtomEx3dRegionConfig
 */
#define criAtomEx3dRegion_SetDefaultConfig(p_config)	\
{\
	(p_config)->reserved = 0;\
}

/*JP
 * \brief 3Dトランシーバーハンドル作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3Dトランシーバーハンドル作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * 3Dトランシーバーハンドル作成用コンフィグ構造体（ ::CriAtomEx3dTransceiverConfig ）に、デフォルトの値をセットします。
 * \sa
 * CriAtomEx3dTransceiverConfig
 */
#define criAtomEx3dTransceiver_SetDefaultConfig(p_config)	\
{\
	(p_config)->reserved = 0;\
}

/*JP
 * \brief 3D音源の位置のランダム化に関するコンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_3D
 * \param[out]	p_config	3D音源の位置のランダム化に関するコンフィグ構造体へのポインタ
 * \par 説明:
 * 3D音源の位置のランダム化に関するコンフィグ構造体（ ::CriAtomEx3dSourceRandomPositionConfig ）に、デフォルトの値をセットします。
 * \sa CriAtomEx3dSourceRandomPositionConfig
 */
#define criAtomEx3dSource_SetDefaultConfigForRandomPosition(p_config)	\
{\
	(p_config)->follows_original_source = CRI_FALSE;\
	(p_config)->calculation_type = CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_RECTANGLE;\
	(p_config)->calculation_parameters[0] = 1.0f;\
	(p_config)->calculation_parameters[1] = 1.0f;\
	(p_config)->calculation_parameters[2] = 0.0f;\
}

/*JP
 * \brief 3D音源の最小距離／最大距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	min_attenuation_distance		最小距離
 * \param[in]	max_attenuation_distance		最大距離
 * \par 説明:
 * 3D音源の最小距離／最大距離を設定します。<br>
 * 最小距離は、これ以上音量が大きくならない距離を表します。最大距離は、最小音量になる距離を表します。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 最小距離：0.0f
 * 	- 最大距離：0.0f
 * 	
 * デフォルト値は、::criAtomEx3dSource_ChangeDefaultMinMaxAttenuationDistance 関数にて変更可能です。<br>
 * データ側に当該パラメーターが設定されている場合に本関数を呼び出すと、データ側の値を上書き（無視）して適用されます。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultMinMaxDistance
 */
#define criAtomEx3dSource_SetMinMaxDistance(ex_3d_source, min_attenuation_distance, max_attenuation_distance) \
	criAtomEx3dSource_SetMinMaxAttenuationDistance((ex_3d_source), (min_attenuation_distance), (max_attenuation_distance))

/*JP
 * \brief 3D音源の最小距離／最大距離のデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	min_attenuation_distance		最小距離
 * \param[in]	max_attenuation_distance		最大距離
 * \par 説明:
 * 3D音源の最小距離／最大距離のデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * 最小距離／最大距離の初期値が本関数で設定した値となります。<br>
 * \attention
 * 当該パラメーターに関して「ツール側で値が変更されていない（デフォルト状態）」データの場合、暗黙的にデフォルト値が適用されます。<br>
 * そのため、本関数でデフォルト値を変更すると、ツールでの編集時に意図していたパラメーターと異なってしまう可能性があります。<br>
 * 但し、以下に該当するデータは本関数の影響を受けません。<br>
 * 	- ツールのプロパティにて、最小距離／最大距離の初期値設定を0.0以外に設定している
 * 	- インゲームプレビュー用にビルドしている
 * 	
 * \sa criAtomEx3dSource_SetMinMaxDistance
 */
#define criAtomEx3dSource_ChangeDefaultMinMaxDistance(min_attenuation_distance, max_attenuation_distance) \
	criAtomEx3dSource_ChangeDefaultMinMaxAttenuationDistance((min_attenuation_distance), (max_attenuation_distance))

/*==========================================================================
 *      CRI AtomEx DSP API
 *=========================================================================*/

/*JP
 * \brief ピッチシフタDSPのアタッチ用コンフィグにデフォルト値をデフォルトセット
 * \ingroup ATOMEXLIB_DSP
 * \param[out]	p_config	ピッチシフタDSPのアタッチ用コンフィグへのポインタ
 * \par 説明:
 * ピッチシフタDSPのアタッチ用コンフィグ（ ::CriAtomExDspPitchShifterConfig ）に、
 * デフォルトの値をセットします。
 * \sa CriAtomExDspPitchShifterConfig, criAtomExVoicePool_AttachDspPitchShifter
 */
#define criAtomExVoicePool_SetDefaultConfigForDspPitchShifter(p_config)	\
{\
	(p_config)->num_dsp = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	(p_config)->max_channels = CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate = CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->specific.mode = 0;\
	(p_config)->specific.window_size = 1024;\
	(p_config)->specific.overlap_times = 4;\
}

/*JP
 * \brief タイムストレッチDSPのアタッチ用コンフィグにデフォルト値をデフォルトセット
 * \ingroup ATOMEXLIB_DSP
 * \param[out]	p_config	タイムストレッチDSPのアタッチ用コンフィグへのポインタ
 * \par 説明:
 * タイムストレッチDSPのアタッチ用コンフィグ（ ::CriAtomExDspTimeStretchConfig ）に、
 * デフォルトの値をセットします。
 * \sa CriAtomExDspTimeStretchConfig, criAtomExVoicePool_AttachDspTimeStretch
 */
#define criAtomExVoicePool_SetDefaultConfigForDspTimeStretch(p_config)	\
{\
	(p_config)->num_dsp = CRIATOMEX_DEFAULT_VOICES_PER_POOL;\
	(p_config)->max_channels = CRIATOM_DEFAULT_INPUT_MAX_CHANNELS;\
	(p_config)->max_sampling_rate = CRIATOM_DEFAULT_INPUT_MAX_SAMPLING_RATE;\
	(p_config)->specific.reserved = 0;\
}

/*==========================================================================
 *      CRI AtomEx Tween API
 *=========================================================================*/
/*JP
 * \brief トゥイーン作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_TWEEN
 * \param[out]	p_config	コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExTween_Create 関数に設定するコンフィグ構造体（ ::CriAtomExTweenConfig ）に、
 * デフォルトの値をセットします。<br>
 * \sa
 * CriAtomExTweenConfig
 */
#define criAtomExTween_SetDefaultConfig(p_config)	\
{\
	(p_config)->id.parameter_id = CRIATOMEX_PARAMETER_ID_VOLUME;\
	(p_config)->parameter_type = CRIATOMEX_PARAMETER_TYPE_BASIC;\
}

/*==========================================================================
 *      CRI AtomEx Sound Object API
 *=========================================================================*/
/*JP
 * \brief サウンドオブジェクト作成用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[out]	p_config	サウンドオブジェクト作成用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomExSoundObject_Create 関数に設定するコンフィグ構造体
 * （ ::CriAtomExSoundObjectConfig ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExSoundObjectConfig, criAtomExSoundObject_Create
 */
#define criAtomExSoundObject_SetDefaultConfig(p_config)	\
{\
	(p_config)->enable_voice_limit_scope = CRI_FALSE;\
	(p_config)->enable_category_cue_limit_scope = CRI_FALSE;\
}

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief メモリ確保関数
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * アロケーター登録時に使用するメモリ確保関数の型です。
 * \sa criAtomEx_SetUserAllocator
 */
typedef CriAtomMallocFunc CriAtomExMallocFunc;

/*JP
 * \brief メモリ解放関数
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * アロケーター登録時に使用するメモリ解放関数の型です。
 * \sa criAtomEx_SetUserAllocator
 */
typedef CriAtomFreeFunc CriAtomExFreeFunc;

/*JP
 * \brief スレッドモデル
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * Atomライブラリがどのようなスレッドモデルで動作するかを表します。<br>
 * ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）に ::CriAtomExConfig 
 * 構造体にて指定します。
 * \sa criAtomEx_Initialize, CriAtomExConfig
 */
typedef enum CriAtomExThreadModelTag {
	/*JP
	 * \brief マルチスレッド
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criAtomEx_Initialize 関数呼び出し時に作成されます。<br>
	 * ライブラリのサーバー処理は、作成されたスレッド上で定期的に実行されます。<br>
	 */
	CRIATOMEX_THREAD_MODEL_MULTI = 0,
	
	/*JP
	 * \brief マルチスレッド（ユーザ駆動式）
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criAtomEx_Initialize 関数呼び出し時に作成されます。<br>
	 * サーバー処理自体は作成されたスレッド上で実行されますが、
	 * CRIATOMEX_THREAD_MODEL_MULTI とは異なり、自動的には実行されません。<br>
	 * ユーザは ::criAtomEx_ExecuteMain 関数で明示的にサーバー処理を駆動する必要があります。<br>
	 * （  ::criAtomEx_ExecuteMain 関数を実行すると、スレッドが起動し、サーバー処理が実行されます。）<br>
	 */
	CRIATOMEX_THREAD_MODEL_MULTI_USER_DRIVEN = 3,
	
	/*JP
	 * \brief ユーザマルチスレッド
	 * \par 説明:
	 * ライブラリ内部ではスレッドを作成しませんが、ユーザが独自に作成したスレッド
	 * からサーバー処理関数を呼び出せるよう、内部の排他制御は行います。<br>
	 * サーバー処理は ::criAtomEx_ExecuteMain 関数内で同期実行されます。<br>
	 */
	CRIATOMEX_THREAD_MODEL_USER_MULTI = 1,
	
	/*JP
	 * \brief シングルスレッド
	 * \par 説明:
	 * ライブラリ内部でスレッドを作成しません。また、内部の排他制御も行いません。<br>
	 * サーバー処理は ::criAtomEx_ExecuteMain 関数内で同期実行されます。<br>
	 * \attention
	 * このモデルを選択した場合、各APIとサーバー処理関数とを同一スレッドから呼び出すようにしてください。<br>
	 */
	CRIATOMEX_THREAD_MODEL_SINGLE = 2,
	
	/* enum size is 4bytes */
	CRIATOMEX_THREAD_MODEL_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExThreadModel;

/*JP
 * \brief 座標系
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * Atomライブラリが3Dポジション計算を行う際、どの座標系を使用するかを表します。<br>
 * ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）に ::CriAtomExConfig 
 * 構造体にて指定します。
 * \sa criAtomEx_Initialize, CriAtomExConfig
 */
typedef enum CriAtomExCoordinateSystemTag {
	/*JP
	 * \brief 左手座標系
	 * \par 説明:
	 * xの正方向が右、yの正方向が上、zの正方向が奥となるような、左手デカルト座標系です。
	 */
	CRIATOMEX_COORDINATE_SYSTEM_LEFT_HANDED = 0,
	
	/*JP
	 * \brief 右手座標系
	 * \par 説明:
	 * xの正方向が右、yの正方向が上、zの正方向が手前となるような、右手デカルト座標系です。
	 */
	CRIATOMEX_COORDINATE_SYSTEM_RIGHT_HANDED = 1,
	
	/* enum size is 4bytes */
	CRIATOMEX_COORDINATE_SYSTEM_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExCoordinateSystem;

/*JP
 * \brief ACF指定タイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * Atomライブラリの初期化処理内でACF登録を行う際の、ACF情報の指定タイプを表します。<br>
 * ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）に ::CriAtomExConfig 
 * 構造体の ::CriAtomExAcfRegistrationInfo にて指定します。
 * \sa criAtomEx_Initialize, CriAtomExConfig, CriAtomExAcfRegistrationInfo
 */
typedef enum CriAtomExAcfLocationInfoTypeTag {
	CRIATOMEX_ACF_LOCATION_INFO_TYPE_NONE = 0,	/*JP< 未設定 */
	CRIATOMEX_ACF_LOCATION_INFO_TYPE_NAME,		/*JP< ファイル名 */
	CRIATOMEX_ACF_LOCATION_INFO_TYPE_ID,		/*JP< コンテンツID */
	CRIATOMEX_ACF_LOCATION_INFO_TYPE_DATA,		/*JP< オンメモリデータ */
	CRIATOMEX_ACF_LOCATION_INFO_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAcfLocationInfoType;

/*JP
 * \brief 疑似乱数生成器（Random Number Generator）ハンドル
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef void *CriAtomExRngHn;

/*JP
 * \brief 疑似乱数生成器（Random Number Generator）インターフェース
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef struct CriAtomExRngInterfaceTag {
	/*JP
	 * \brief ワーク領域サイズの計算
	 * \return	CriSint32	ワーク領域サイズ
	 * \par 説明:
	 * 疑似乱数生成器を作成するために必要な、ワーク領域のサイズを取得します。<br>
	 */
	CriSint32 (*CalculateWorkSize)(void);

	/*JP
	 * \brief 疑似乱数生成器の作成
	 * \param[in]	work			ワーク領域
	 * \param[in]	work_size		ワーク領域サイズ
	 * \return		CriAtomExRngHn	疑似乱数生成器ハンドル
	 * \par 説明:
	 * 疑似乱数生成器を作成します。<br>
	 * 疑似乱数生成器の作成に失敗した場合はNULLを返します。<br>
	 */
	CriAtomExRngHn (*Create)(void* work, CriSint32 work_size);

	/*JP
	 * \brief 疑似乱数生成器の破棄
	 * \param[in]	rng		疑似乱数生成器ハンドル
	 * \par 説明:
	 * 疑似乱数生成器を破棄します。<br>
	 */
	void (*Destroy)(CriAtomExRngHn rng);

	/*JP
	 * \brief 疑似乱数の生成
	 * \param[in]	rng			疑似乱数生成器ハンドル
	 * \param[in]	min			最小値
	 * \param[in]	max			最大値
	 * \return		CriSint32	疑似乱数
	 * \par 説明:
	 * 新しい疑似乱数を生成します。<br>
	 * 生成された疑似乱数はmin以上max以下である必要があります。（min,maxは範囲に含む）
	 */
	CriSint32 (*Generate)(CriAtomExRngHn rng, CriSint32 min, CriSint32 max);

	/*JP
	 * \brief 乱数種の設定
	 * \param[in]	rng			疑似乱数生成器ハンドル
	 * \param[in]	seed		乱数種
	 * \par 説明:
	 * 擬似乱数生成の元となる乱数種を設定します。<br>
	 */
	void (*SetSeed)(CriAtomExRngHn rng, CriUint32 seed);

} CriAtomExRngInterface;

/*JP
 * \brief ACF位置情報
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * Atomライブラリの初期化処理内でACF登録を行う際の、ACFデータの指定情報です。<br>
 * ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）に ::CriAtomExConfig 
 * 構造体のacf_infoメンバに設定します。
 * \par 備考
 * データ指定のタイプによって、設定すべき情報が異なります。<br>
 * 適切なtypeを設定し、共用体infoの中の対応構造体に設定を行ってください。<br>
 * \code
 * CriAtomExConfig config;
 * CriAtomExAcfLocationInfo acf_info;
 *
 * criAtomEx_SetDefaultConfig(&config);
 * 
 * acf_info.type = CRIATOMEX_ACF_LOCATION_INFO_TYPE_NAME;
 * acf_info.name.binder = NULL;
 * acf_info.name.path = "sounddata/project.scf";
 *
 * config.acf_info = &acf_info;
 *
 * criAtomEx_Initialize(&config);
 *
 * \endcode
 * \sa criAtomEx_Initialize, CriAtomExConfig
 */
typedef struct CriAtomExAcfRegistrationInfoTag {
	/*JP 指定タイプ */
	CriAtomExAcfLocationInfoType type;

	/*JP ACF位置情報共用体 */
	union CriAtomExAcfLocationInfoTag {
		/*JP ファイル名指定時情報 */
		struct CriAtomExAcfLocationInfoNameTag {
			CriFsBinderHn binder;	/*JP< バインダーハンドル */
			const CriChar8 *path;	/*JP< ACFファイルパス */
		} name;
		/*JP ファイルID指定時情報 */
		struct CriAtomExAcfLocationInfoIdTag {
			CriFsBinderHn binder;	/*JP< バインダーハンドル */
			CriSint32 id;			/*JP< コンテンツID */
		} id;
		/*JP オンメモリデータ指定時情報 */
		struct CriAtomExAcfLocationInfoDataTag {
			void *buffer;			/*JP< メモリアドレス */
			CriSint32 size;			/*JP< サイズ */
		} data;
	} info;	
} CriAtomExAcfRegistrationInfo;

/*JP
 * \brief Atomライブラリ初期化用コンフィグ構造体
 * \ingroup ATOMEXLIB_GLOBAL
 * CRI Atomライブラリの動作仕様を指定するための構造体です。<br>
 * ::criAtomEx_Initialize 関数の引数に指定します。<br>
 * <br>
 * CRI Atomライブラリは、初期化時に本構造体で指定された設定に応じて、内部リソースを
 * 必要なだけ確保します。<br>
 * ライブラリが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて
 * 変化します。
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomEx_SetDefaultConfig マクロで構造体にデフォルト
 * パラメーターをセットした後、 ::criAtomEx_Initialize 関数に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomEx_SetDefaultConfig マクロを使用しない
 * 場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomEx_Initialize, criAtomEx_SetDefaultConfig
 */
typedef struct CriAtomExConfigTag {
	/*JP
		\brief スレッドモデル
		\par 説明:
		CRI Atomライブラリのスレッドモデルを指定します。<br>
		\sa CriAtomExThreadModel
	*/
	CriAtomExThreadModel thread_model;
	
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
		スレッドモデルが ::CRIATOMEX_THREAD_MODEL_MULTI の場合、サーバー処理は
		CRI Atomライブラリが作成するスレッドで、定期的に実行されます。<br>
		スレッドモデルが ::CRIATOMEX_THREAD_MODEL_SINGLE や ::CRIATOMEX_THREAD_MODEL_USER_MULTI 
		の場合、サーバー処理は ::criAtomEx_ExecuteMain 関数内で実行されます。<br>
		<br>
		server_frequency には、サーバー処理を実行する頻度を指定します。<br>
		スレッドモデルが ::CRIATOMEX_THREAD_MODEL_MULTI の場合、CRI Atomライブラリは指定された
		頻度でサーバー処理が実行されるよう、サーバー処理の呼び出し間隔を調節します。<br>
		スレッドモデルが ::CRIATOMEX_THREAD_MODEL_SINGLE や ::CRIATOMEX_THREAD_MODEL_USER_MULTI 
		の場合、ユーザは ::criAtomEx_ExecuteMain 関数を server_frequency で指定した頻度以上
		で実行する必要があります。<br>
		<br>
		アプリケーションのフレームレートの変動が大きく、サーバー処理を実行する頻度にバラツキ
		ができてしまう場合には、最悪のフレームレートを想定して server_frequency の値を指定
		するか、またはスレッドモデルに ::CRIATOMEX_THREAD_MODEL_MULTI を指定してください。
		\par 備考:
		Atomライブラリのサーバー処理では、以下のような処理が行われます。<br>
		- 発音リクエストの処理（ボイスの取得等）
		- パラメーターの更新（ボリュームやパン、ピッチ等の変更の適用）
		- 音声データのデコードと出力
		
		サーバー処理の実行頻度を多くすると、単位サーバー処理当たりの音声データデコード量が少なくなります。<br>
		その結果、単位サーバー当たりの処理負荷は小さくなります（負荷が分散されます）が、
		サーバー処理の実行に伴うオーバーヘッドは大きくなります。<br>
		（スレッドの起床回数やパラメーターの更新回数が多くなります。）<br>
		<br>
		サーバー処理の実行頻度を少なくすると、スレッドの起床や発音リクエストの処理、
		パラメーターの更新処理の回数が減り、アプリケーション全体の処理負荷は下がります。<br>
		反面、データをリロードする頻度が下がるため、単位サーバー処理当たりデコード量は増え、
		デコード結果を保持するためのバッファーサイズが余分に必要になります。<br>
		また、発音リクエストを処理する頻度が下がるため、
		発音リクエストから音声出力開始までにかかる時間は長くなります。<br>
		\attention
		スレッドモデルに ::CRIATOMEX_THREAD_MODEL_SINGLE や ::CRIATOMEX_THREAD_MODEL_USER_MULTI 
		を指定したにもかかわらず、 ::criAtomEx_ExecuteMain 関数が server_frequency で
		指定した値以下の頻度でしか実行されなかった場合、再生中の音が途切れる等の問題が
		発生する可能性がありますので、ご注意ください。<br>
		\sa criAtomEx_ExecuteMain
	*/
	CriFloat32 server_frequency;
	
	/*JP
		\brief パラメーター更新間隔
		\par 説明:
		サーバー処理実行時にパラメーターの更新処理を行う間隔を指定します。<br>
		parameter_update_interval の値を変更することで、
		サーバー処理の実行回数を変えることなくパラメーター更新頻度を下げることが可能です。<br>
		<br>
		parameter_update_interval には、パラメーターの更新処理を何サーバーごとに行うかを指定します。<br>
		例えば、 parameter_update_interval を 2 に設定すると、
		サーバー処理 2 回に対し、 1 回だけパラメーターの変更が行われます。<br>
		（パラメーターの更新頻度が 1/2 になります。）<br>
		\par 備考:
		サーバー処理周波数（ server_frequency ）を下げると、
		サーバー処理の実行回数が減るため、アプリケーション全体の処理負荷は下がりますが、
		サーバー処理同士の間隔が開くため、バッファリングすべきデータの量が増加します。<br>
		その結果、バッファリングのために必要なメモリのサイズは増加します。<br>
		<br>
		これに対し、サーバー処理周波数を変更せずにパラメーター更新間隔（ parameter_update_interval ）
		の値を上げた場合、メモリサイズを増加させずに負荷を下げることが可能となります。<br>
		ただし、サーバー処理の駆動に伴う処理のオーバーヘッド（スレッドの起床負荷等）
		は削減されないため、サーバー処理の回数を減らす場合に比べ、負荷削減の効果は薄いです。<br>
		\par 注意:
		parameter_update_interval の値を変更した場合、
		発音リクエストの処理頻度も少なくなります。<br>
		そのため、 parameter_update_interval の値を変更すると、
		発音リクエストから音声出力開始までにかかる時間が長くなります。<br>
	*/
	CriSint32 parameter_update_interval;
	
	/*JP
		\brief CRI Atom Library以外を使った音声出力を行うことを指定するフラグ
		\par 説明:
		CRI Atom Libraryを使用せずに音声出力する際にCRI_TRUEを指定します。<br>
		::criAtomEx_SetDefaultConfig マクロでは、CRI Atom Libraryを指定するため、CRI_FALSEが指定されます。<br>
		CRI Atom Library以外の音声出力ライブラリを用いる場合は、本フラグにCRI_TRUEを指定してから、criAtomEx_Initializeを
		実行するようにしてください。
		\attention
		本フラグを切り替える際には、AtomライブラリをcriAtomEx_Finalizeで終了してから、フラグの内容を変更し、再度
		criAtomEx_Initializeにて初期化処理を行うようにしてください。<br>
	*/
	CriBool enable_atom_sound_disabled_mode;
	
	/*JP
		\brief 最大バーチャルボイス数
		\par 説明:
		アプリケーションで同時に発音制御を行うボイスの数です。<br>
		Atomライブラリは、初期化時に max_virtual_voices で指定された数分だけ
		発音管理に必要なリソースを確保します。<br>
		\par 備考:
		max_virtual_voices で指定された数以上の音声を同時に発音することはできません。<br>
		また、 max_virtual_voices 分の発音リクエストを行ったとしても、実際に
		発音される音声の数は、必ずしも max_virtual_voices に一致するとは限りません。<br>
		実際に発音可能な音声の数は、ボイスプールで確保されたボイス数や、
		ターゲット機で利用可能なハードウェアボイスの数に依存します。<br>
		<br>
		バーチャルボイス数の目安は、「最大同時発音数＋1V当たりの発音リクエスト数」です。<br>
		バーチャルボイス数が最大同時発音数より少ない場合や、
		発音数とリクエスト数の合計が最大バーチャルボイスを超える場合、
		エラーコールバック関数に警告が返される可能性があります。<br>
		<br>
		CRIATOMEX_RETRY_VOICE_ALLOCATION を指定して AtomEx プレーヤーを作成する場合、
		上記よりもさらに多くのバーチャルボイスを必要とする可能性があります。<br>
	*/
	CriSint32 max_virtual_voices;
	
	/*JP
		\brief 最大パラメーターブロック数
		\par 説明:
		音声再生時にパラメーター管理を行うための領域の数です。<br>
		Atomライブラリは、初期化時に max_parameter_blocks で指定された数分だけ
		パラメーター管理に必要なリソースを確保します。<br>
		\par 備考:
		1つのキューを再生するのに必要なパラメーターブロック数は、
		再生するキューの内容によって変化します。<br>
		（操作するパラメーターの数に比例して必要なパラメーターブロック数は増加します。）<br>
		<br>
		パラメーターブロック数が不足した場合、再生するキューに対して
		一部のパラメーターが設定されないことになります。<br>
		（ボリュームやピッチ、フィルター等が意図した値にならない可能性があります。）<br>
		アプリケーション実行中にパラメーターブロック数不足のエラーが発生した場合、
		max_parameter_blocks の値を増やしてください。<br>
	*/
	CriSint32 max_parameter_blocks;
	
	/*JP
		\brief 最大ボイスリミットグループ数
		\par 説明:
		アプリケーションで作成するボイスリミットグループの数です。<br>
		Atomライブラリは、初期化時に max_voice_limit_groups で指定された数分
		のボイスリミットグループを作成できるリソースを確保します。<br>
		\attention
		max_voice_limit_groups で指定された数以上のボイスリミットグループを
		作成することはできません。<br>
		オーサリングツール上で作成したボイスリミットグループの数が 
		max_voice_limit_groups を超える場合、ACFファイルのロードに失敗します。<br>
	*/
	CriSint32 max_voice_limit_groups;

	/*JP
		\brief 最大カテゴリ数
		\par 説明:
		アプリケーションで作成するカテゴリの数です。<br>
		Atomライブラリは、初期化時に max_categories で指定された数分
		のカテゴリを作成できるリソースを確保します。<br>
		\attention
		max_categories で指定された数以上のカテゴリを作成することはできません。<br>
		オーサリングツール上で作成したカテゴリの数が 
		max_categories を超える場合、ACFファイルのロードに失敗します。<br>
	*/
	CriSint32 max_categories;

	/*JP
		\brief 最大AISAC数
		\par 説明:
		一つのキューに紐づけることができるAISACの最大数です。<br>
		Atomライブラリは、初期化時と AtomExPlayer 作成時に
		max_aisacs で指定された数分のAISACを参照できるリソースを確保します。<br>
		max_aisacs に指定する値の上限は55です。
	*/
	CriUint8 max_aisacs;

	/*JP
		\brief 再生単位でのカテゴリ参照数
		\par 説明:
		再生単位で参照可能なカテゴリの数です。<br>
		Atomライブラリは、初期化時に categories_per_playback で指定された数分
		のカテゴリを参照できるリソースを確保します。<br>
		指定可能な最大値は ::CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK です。
		\attention
		categories_per_playback で指定された数以上のカテゴリをキューやプレーヤーから参照することはできません。<br>
		オーサリングツール上で作成したキューの参照カテゴリ数が 
		categories_per_playback を超える場合、ACFファイルのロードに失敗します。<br>
	*/
	CriSint32 categories_per_playback;

	/*JP
		\brief 最大再生シーケンス数
		\par 説明:
		アプリケーションで同時に再生するシーケンスの数です。<br>
		Atomライブラリは、初期化時に max_sequences で指定された数と max_virtual_voices で指定された数の総和分
		のシーケンスを再生できるリソースを確保します。<br>
		\attention
		Ver.2.00以降のライブラリでは全てのキューがシーケンスとして再生されるため、 max_sequences に加えて
		 max_virtual_voices 数分のリソースが確保されます。<br>
		max_sequences で指定された数以上のシーケンスを再生することはできません。<br>
		エラーコールバックが発生した場合、この値を大きくしてください。<br>
	*/
	CriSint32 max_sequences;

	/*JP
		\brief 最大再生トラック数
		\par 説明:
		アプリケーションで同時再生するシーケンス内のトラック総数です。<br>
		Atomライブラリは、初期化時に max_tracks で指定された数と max_virtual_voices で指定された数の総和分
		のトラックを再生できるリソースを確保します。<br>
		\attention
		Ver.2.00以降のライブラリでは全てのキューがシーケンスとして再生されるため、 max_tracks に加えて
		 max_virtual_voices 数分のリソースが確保されます。<br>
		max_tracks で指定された数以上のトラックを再生することはできません。<br>
		エラーコールバックが発生した場合、この値を大きくしてください。<br>
	*/
	CriUint32 max_tracks;

	/*JP
		\brief 最大トラックアイテム数
		\par 説明:
		アプリケーションで同時再生するシーケンス内のイベントの総数です。<br>
		Atomライブラリは、初期化時に max_track_items で指定された数と max_virtual_voices で指定された数の総和分
		のトラックアイテムを作成できるリソースを確保します。<br>
		\attention
		Ver.2.00以降のライブラリでは全てのキューがシーケンスとして再生されるため、 max_track_items に加えて
		 max_virtual_voices 数分のリソースが確保されます。<br>
		max_track_items で指定された数以上のトラックアイテムを
		作成することはできません。<br>
		トラックアイテムは波形や、ループイベント等のシーケンストラック再生時に
		管理が必要なイベントです。<br>
		エラーコールバックが発生した場合、この値を大きくしてください。<br>
	*/
	CriUint32 max_track_items;
	
	/*JP
		\brief 最大AISACオートモジュレーション数（仕様停止）
		\par 説明:
		Ver.2.00.00以降のライブラリでは使用停止となりました。
		ライブラリ内部での本メンバへの参照は行われません。<br>
	*/
	CriUint32 max_aisac_auto_modulations;

	/*JP
		\brief ピッチ変更の上限値
		\par 説明:
		Atomライブラリ内で適用されるピッチ変更の上限値を設定します。<br>
		max_pitchに設定された値以上のピッチ変更が、ライブラリ内でクリップされます。<br>
		<br>
		ピッチはセント単位で指定します。<br>
		1セントは1オクターブの1/1200です。半音は100セントです。<br>
		<br>
		例えば、 max_pitch に 1200.0f を設定した場合、
		1200セントを超えるピッチが設定されたキューを再生したとしても、
		ピッチが1200セントに抑えられて再生されます。<br>
		\par 備考:
		キューに設定されたピッチに、AISACによるピッチ変更やドップラー効果が追加適用された場合、
		予期せぬレベルまでピッチが上がる恐れがあります。<br>
		（ピッチに比例して単位時間当たりのデコード量が増加するため、
		ピッチが高すぎる音を大量に鳴らした場合、処理負荷が急増する恐れがあります。）<br>
		<br>
		本パラメーターであらかじめピッチ上限を設定しておくことで、
		想定外の負荷変動を回避することが可能となります。<br>
		例えば、 max_pitch に 1200.0f を設定した場合、
		アプリケーション中でどのような操作を行ったとしてもピッチが1200セント
		（＝2倍速再生）までに抑えられるため、
		単位時間あたりのデコード量は最大でも通常時の2倍までに制限されます。<br>
		\par 注意:
		max_pitchには 0.0f 以上の値を設定する必要があります。<br>
		（ 0.0f を指定した場合、ピッチの変更は一切行われなくなります。）<br>
	*/
	CriFloat32 max_pitch;

	/*JP
		\brief 最大フェーダー数
		\par 説明:
		Atomライブラリ内で使用するフェーダーの上限値を設定します。<br>
		ここで設定し、初期化時に確保したフェーダーはTrackTransitionBySelectorデータ再生時にライブライ内部で使用します。<br>
	*/
	CriUint32 max_faders;

	/*JP
		\brief 3Dポジション計算を行う際の座標系
		\par 説明:
		Atomライブラリが3Dポジション計算を行う際、どの座標系を使用するかを設定します。
	*/
	CriAtomExCoordinateSystem coordinate_system;

	/*JP
		\brief パンタイプがオートの場合における、リスナーのオートマッチング機能の有効化
		\par 説明:
		パンタイプがオートの場合、リスナーのオートマッチング機能を有効化するかを設定します。
		\par 備考：
		パンタイプが3Dポジショニングの場合はリスナーのオートマッチング機能は常に有効です。
	*/
	CriBool enable_auto_matching_in_pan_type_auto;

	/*JP
		\brief AtomExPlayerによるカテゴリの上書きの有効化
		\par 説明:
		AtomExPlayerに::criAtomExPlayer_SetCategoryById関数や::criAtomExPlayer_SetCategoryByName関数
		を用いてカテゴリをセットした場合にキューのカテゴリ設定を上書きする機能を有効化します。
		\par 備考：
		CRI Atom Ver.2.20.31未満のライブラリは、プレーヤーに対してカテゴリ設定を行うと、
		キューに設定されていたカテゴリが上書きにより無効になっていました。
		Ver.2.20.31未満の挙動に戻す必要がある場合には本フラグにCRI_FALSEを設定してください。
	*/
	CriBool enable_category_override_by_ex_player;

	/*JP
		\brief シーケンス先読み割合の指定
		\par 説明:
		シーケンサーが1サーバー処理で読み込む量の割合を指定します。
		1.5fを指定すると次のサーバー処理が行われる予想時刻からさらに0.5サーバー分を先読みします。
		最大で3.0f、最小で1.1fが指定可能です。範囲を超える場合はクリップされます。
		\par 備考:
		サーバー周期の揺れによって発生する発音タイミングのずれが発生しづらくなります。
	*/
	CriFloat32 sequence_prepare_ratio;

	/*JP
	 * \brief 疑似乱数生成器インターフェース
	 * \par 説明:
	 * CRI Atomライブラリで使用する疑似乱数生成器インターフェースを指定します。<br>
	 * NULLを指定した場合は、デフォルトの疑似乱数生成器を使用します。<br>
	 */
	const CriAtomExRngInterface *rng_if;

	/*JP
		\brief CRI File System の初期化パラメーターへのポインタ
		\par 説明:
		CRI File Systemの初期化パラメーターへのポインタを指定します。
		NULLを指定した場合、デフォルトパラメーターでCRI File Systemを初期化します。
		\sa criAtomEx_Initialize
	*/
	const CriFsConfig *fs_config;

	/*JP
		\brief ACF情報へのポインタ
		\par 説明:
		初期化時にACFの登録を行う際にACF情報へのポインタを指定します。
		NULLを指定した場合、初期化時にACFの登録は行われません。
		本メンバを設定して初期化処理内でACFの登録を行う場合、 ::CriAtomExConfig 構造体の
		max_voice_limit_groups, max_categories, categories_per_playbackの各メンバ値は
		ACF設定値と比較して大きい方の値が初期化用設定値として使用されます。
		CriAtomEx初期化時にACFの登録を行った場合、環境によっては CriAtomExAsr, CriAtomExHcaMx
		等のモジュール初期化にも一部ACF内の設定値が使用されます。<br>
		ACF内の設定値を使用せずにこれらのモジュールを初期化したい場合は、本メンバを使用せずに
		ライブラリの初期化を行い、その後ACFの登録を行ってください。<br>
		\attention
		本メンバを設定する場合、初期化処理内でのACFデータの登録とACFデータを元に初期化に
		必要なワークを動的に確保するため、初期化関数呼び出し前にメモリアロケーター関数の登録と
		エラーコールバック関数の登録が必要になります。<br>
		本メンバを使用する場合、ワーク領域の確保は登録されたメモリアロケーター関数を使用して行います。
		取得済みメモリ領域を使用しての初期化は行えません。<br>
		\sa criAtomEx_Initialize, criAtomEx_SetUserAllocator
	*/
	const CriAtomExAcfRegistrationInfo *acf_info;

	/*JP
		\brief プラットフォーム固有の初期化パラメーターへのポインタ
		\par 説明:
		CRI Atomライブラリを動作させるために必要な、
		プラットフォーム固有の初期化パラメーターへのポインタを指定します。
		NULLを指定した場合、デフォルトパラメーターでプラットフォーム毎に必要な初期化を行います。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
		\sa criAtomEx_Initialize
	*/
	void *context;

	/*JP
		\brief ライブラリバージョン番号
		\par 説明:
		CRI Atom ライブラリのバージョン番号です。<br>
		::criAtomEx_SetDefaultConfig マクロにより、 cri_atom.h ヘッダーに定義されているバージョン番号が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	CriUint32 version;

	/*JP
		\brief モジュールバージョン番号
		\par 説明:
		CRI Atom Ex のバージョン番号です。<br>
		::criAtomEx_SetDefaultConfig マクロにより、本ヘッダーに定義されているバージョン番号が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	CriUint32 version_ex;

	/*JP
		\brief ライブラリバージョン文字列
		\par 説明:
		CRI Atom ライブラリのバージョン文字列です。<br>
		::criAtomEx_SetDefaultConfig マクロにより、 cri_atom.h ヘッダーに定義されているバージョン文字列が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	const CriChar8 *version_string;

	/*JP
		\brief モジュールバージョン文字列
		\par 説明:
		CRI Atom Ex のバージョン文字列です。<br>
		::criAtomEx_SetDefaultConfig マクロにより、本ヘッダーに定義されているバージョン文字列が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	const CriChar8 *version_ex_string;
} CriAtomExConfig;

/*JP
 * \brief パフォーマンス情報
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * パフォーマンス情報を取得するための構造体です。<br>
 * ::criAtomEx_GetPerformanceInfo 関数で利用します。
 * \sa criAtomEx_GetPerformanceInfo
 */
typedef CriAtomPerformanceInfo CriAtomExPerformanceInfo;

/*JP
 * \brief 波形データID
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 波形データIDは、ユーザがオーサリングツール上でAWBコンテンツに対して割り当てた一意のIDです。<br>
 * 波形データIDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExPlayer_SetWaveId
 */
typedef CriSint32 CriAtomExWaveId;

/*JP
 * \brief 振動ID
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 振動IDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 */
typedef CriSint32 CriAtomExVibrationId;

/*JP
 * \brief フォーマット種別
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * AtomExプレーヤーで再生する音声のフォーマットを指定するためのデータ型です。<br>
 * ::criAtomExPlayer_SetFormat 関数で利用します。<br>
 * \sa criAtomExPlayer_SetFormat
 */
typedef CriAtomFormat CriAtomExFormat;
#define CRIATOMEX_FORMAT_NONE			(CRIATOM_FORMAT_NONE)			/*JP< なし					*/
#define CRIATOMEX_FORMAT_ADX			(CRIATOM_FORMAT_ADX)			/*JP< ADX					*/
#define CRIATOMEX_FORMAT_HCA			(CRIATOM_FORMAT_HCA)			/*JP< HCA					*/
#define CRIATOMEX_FORMAT_HCA_MX			(CRIATOM_FORMAT_HCA_MX)			/*JP< HCA-MX				*/
#define CRIATOMEX_FORMAT_WAVE			(CRIATOM_FORMAT_WAVE)			/*JP< Wave					*/
#define CRIATOMEX_FORMAT_AIFF			(CRIATOM_FORMAT_AIFF)			/*JP< AIFF					*/
#define CRIATOMEX_FORMAT_RAW_PCM		(CRIATOM_FORMAT_RAW_PCM)		/*JP< RawPCM				*/
#define CRIATOMEX_FORMAT_VIBRATION		(CRIATOM_FORMAT_VIBRATION)		/*JP< 振動					*/
#define CRIATOMEX_FORMAT_AUDIO_BUFFER	(CRIATOM_FORMAT_AUDIO_BUFFER)	/*JP< オーディオバッファー	*/
#define CRIATOMEX_FORMAT_HW1			(CRIATOM_FORMAT_HW1)			/*JP< ハードウェア固有1		*/
#define CRIATOMEX_FORMAT_HW2			(CRIATOM_FORMAT_HW2)			/*JP< ハードウェア固有2		*/

/*JP
 * \brief 音声データフォーマット情報
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 音声データのフォーマット情報です。<br>
 * \par 備考:
 * メモリ上に配置された音声データについては、 ::criAtomEx_AnalyzeAudioHeader 
 * 関数を実行することで音声データのフォーマット情報を取得可能です。<br>
 * 再生中の音声データのフォーマットについては
 * ::criAtomExPlayback_GetFormatInfo 関数で取得可能です。<br>
 * \sa criAtomEx_AnalyzeAudioHeader, criAtomExPlayback_GetFormatInfo
 */
typedef struct CriAtomExFormatInfoTag {
	CriAtomExFormat format;				/*JP< フォーマット種別		*/
	CriSint32 sampling_rate;			/*JP< サンプリング周波数	*/
	CriSint64 num_samples;				/*JP< 総サンプル数			*/
	CriSint64 loop_offset;				/*JP< ループ開始サンプル	*/
	CriSint64 loop_length;				/*JP< ループ区間サンプル数	*/
	CriSint32 num_channels;				/*JP< チャンネル数			*/
	CriUint32 reserved[1];				/*JP< 予約領域				*/
} CriAtomExFormatInfo;

/*JP
 * \brief ポーズ解除対象
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ポーズを解除する対象を指定するためのデータ型です。<br>
 * ::criAtomExPlayer_Resume 関数、および ::criAtomExPlayback_Resume
 * 関数の引数として使用します。
 * \sa criAtomExPlayer_Resume, criAtomExPlayback_Resume
 */
typedef enum CriAtomExResumeModeTag {
	CRIATOMEX_RESUME_ALL_PLAYBACK = 0,			/*JP< 一時停止方法に関係なく再生を再開					*/
	CRIATOMEX_RESUME_PAUSED_PLAYBACK = 1,		/*JP< Pause 関数でポーズをかけた音声のみ再生を再開		*/
	CRIATOMEX_RESUME_PREPARED_PLAYBACK = 2,		/*JP< Prepare 関数で再生準備を指示した音声の再生を開始	*/
	CRIATOMEX_RESUME_MODE_RESERVED = 3,
	CRIATOMEX_RESUME_MODE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExResumeMode;

/*JP
 * \brief バイクアッドフィルターのタイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * バイクアッドフィルターのタイプを指定するためのデータ型です。<br>
 * ::criAtomExPlayer_SetBiquadFilterParameters 関数で利用します。
 * \sa criAtomExPlayer_SetBiquadFilterParameters
 */
typedef enum CriAtomExBiquadFilterTypeTag {
	CRIATOMEX_BIQUAD_FILTER_TYPE_OFF = 0,			/*JP<フィルター無効			*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_LOWPASS = 1,		/*JP<ローパスフィルター		*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_HIGHPASS = 2,		/*JP<ハイパスフィルター		*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_NOTCH = 3,			/*JP<ノッチフィルター			*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_LOWSHELF = 4,		/*JP<ローシェルフフィルター	*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_HIGHSHELF = 5,		/*JP<ハイシェルフフィルター	*/
	CRIATOMEX_BIQUAD_FILTER_TYPE_PEAKING = 6,		/*JP<ピーキングフフィルター	*/

	/* enum size is 4bytes */
	CRIATOMEX_BIQUAD_FILTER_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExBiquadFilterType;

/*JP
 * \brief 無音時処理モード
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 無音時処理モードを指定するためのデータ型です。<br>
 * ::criAtomExPlayer_SetSilentMode 関数で利用します。<br>
 * 無音となったかどうかは、以下のいずれかが値が0になったかどうかで判断します。<br>
 * 	- ボリューム
 * 	- 3Dパンニングの演算結果によるボリューム
 * 	- 3Dポジショニングの演算結果によるボリューム
 * 	
 * \attention
 * センドレベルや2Dパンの設定値では無音と判断されない点にご注意ください。<br>
 * \sa criAtomExPlayer_SetSilentMode
 */
typedef enum CriAtomExSilentModeTag {
	/*JP
	 * \brief 何もしない
	 * \par 説明:
	 * 無音となっても特別な処理は行いません。（デフォルト値）
	 */
	CRIATOMEX_SILENT_MODE_NORMAL = 0,

	/*JP
	 * \brief 停止する
	 * \par 説明:
	 * 無音となった際は自動的に停止します。
	 */
	CRIATOMEX_SILENT_MODE_STOP = 1,

	/*JP
	 * \brief バーチャル化する
	 * \par 説明:
	 * 無音となった際は自動的にバーチャル化します。
	 */
	CRIATOMEX_SILENT_MODE_VIRTUAL = 2,

	/*JP
	 * \brief 再発音型でバーチャル化する
	 * \par 説明:
	 * 無音となった際は自動的に再発音型でバーチャル化します。
	 */
	CRIATOMEX_SILENT_MODE_VIRTUAL_RETRIGGER = 3,

	/* enum size is 4bytes */
	CRIATOMEX_SILENT_MODE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExSilentMode;

/*JP
 * \brief パンタイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * どのようにして定位計算を行うかを指定するためのデータ型です。<br>
 * ::criAtomExPlayer_SetPanType 関数で利用します。<br>
 * \sa criAtomExPlayer_SetPanType
 */
typedef enum CriAtomExPanTypeTag {
	/*JP
	 * \brief 不明
	 * \par 説明:
	 * パンタイプが判明していない状態です。
	 * ::criAtomExAcb_GetCueInfoByName 関数などにて、 ACB Ver.1.35.00 未満の
	 * ACB データ内のキューの情報（ ::CriAtomExCueInfo ）を取得した場合に得られます。
	 * \attention
	 * ::criAtomExPlayer_SetPanType 関数にて指定すると、エラーが発生します。
	 */
	CRIATOMEX_PAN_TYPE_UNKNOWN = -1,
	/*JP
	 * \brief パン3D
	 * \par 説明:
	 * パン3Dで定位を計算します。
	 */
	CRIATOMEX_PAN_TYPE_PAN3D = 0,
	/*JP
	 * \brief 3Dポジショニング
	 * \par 説明:
	 * 3Dポジショニングで定位を計算します。
	 */
	CRIATOMEX_PAN_TYPE_3D_POS,
	/*JP
	 * \brief 自動
	 * \par 説明:
	 * AtomExプレーヤーに3D音源／3Dリスナーが設定されている場合は3Dポジショニングで、
	 * 設定されていない場合はパン3Dで、それぞれ定位を計算します。
	 */
	CRIATOMEX_PAN_TYPE_AUTO,
	/* enum size is 4bytes */
	CRIATOMEX_PAN_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPanType;

/*JP
 * \brief パンニング時の出力スピーカータイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 定位計算を行う際、出力としてどのスピーカーを使用するかを表します。<br>
 * ::criAtomExPlayer_ChangeDefaultPanSpeakerType 関数、::criAtomExPlayer_SetPanSpeakerType 関数で利用します。<br>
 * \par 備考:
 * ステレオスピーカーのプラットフォームでは、どれを選んだとしても最終的にはステレオにダウンミックスされます。
 * \sa criAtomExPlayer_SetPanSpeakerType
 */
typedef enum CriAtomExPanSpeakerTypeTag {
	/*JP
	 * \brief 4chパンニング
	 * \par 説明:
	 * L, R, Ls, Rsを使用してパンニングを行います。<br>
	 * 
	 */
	CRIATOMEX_PAN_SPEAKER_TYPE_4CH = 0,

	/*JP
	 * \brief 5chパンニング
	 * \par 説明:
	 * L, R, C, Ls, Rsを使用してパンニングを行います。
	 */
	CRIATOMEX_PAN_SPEAKER_TYPE_5CH = 1,

	/*JP
	 * \brief 6chパンニング
	 * \par 説明:
	 * L, R, Ls, Rs, Lsb, Rsbを使用してパンニングを行います。
	 */
	CRIATOMEX_PAN_SPEAKER_TYPE_6CH = 2,

	/*JP
	 * \brief 7chパンニング
	 * \par 説明:
	 * L, R, C, Ls, Rs, Lsb, Rsbを使用してパンニングを行います。
	 */
	CRIATOMEX_PAN_SPEAKER_TYPE_7CH = 3,

	/* enum size is 4bytes */
	CRIATOMEX_PAN_SPEAKER_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPanSpeakerType;

/*JP
 * \brief パンニング時の角度タイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * マルチチャンネル素材の定位計算を行う際、各入力チャンネルをどのような角度として扱うかを表します。<br>
 * ::criAtomExPlayer_SetPanAngleType 関数で利用します。<br>
 * \sa criAtomExPlayer_SetPanAngleType
 */
typedef enum CriAtomExPanAngleTypeTag {
	/*JP
	 * \brief オフセット
	 * \par 説明:
	 * 設定されているパン3D角度を中心として、スピーカーの配置を元にしたオフセット値を各チャンネル毎に加えて、
	 * それぞれの入力チャンネルで個別にパンニング計算を行います。<br>
	 * 例えばステレオ素材でパン3D角度を0度と設定した場合、Lチャンネルは-30度となりそのままLスピーカーから出力され、
	 * Rチャンネルは+30度となりそのままRスピーカーから出力されます。
	 * またパン3D角度を+30度と設定した場合、Lチャンネルは0度、Rチャンネルは60度の位置に定位しているものとして、
	 * パンニング計算が行われます。
	 */
	CRIATOMEX_PAN_ANGLE_TYPE_OFFSET = 0,
	/*JP
	 * \brief 固定
	 * \par 説明:
	 * 入力チャンネル数に応じて、各チャンネルが該当スピーカー位置に固定して存在しているものとして、
	 * 各スピーカー間のバランスを計算するような形でパンニング計算を行います。<br>
	 * 例えばステレオ素材でパン3D角度を0度と設定した場合、LチャンネルはLスピーカーから約0.7倍で出力され、
	 * Rチャンネルはスピーカーから約0.7倍で出力されます。
	 * またパン3D角度を+30度と設定した場合、Lチャンネルはまったく出力されず、RチャンネルはRスピーカーからそのまま出力されます。<br>
	 * \par 備考:
	 * この挙動はCRI Audioの頃のパン3Dと同等です。<br>
	 * どのスピーカーにどのチャンネルを割り当てるかは、::criAtomExPlayer_SetDrySendLevel 関数で設定するドライセンドレベルでの扱いと同様です。
	 * \sa criAtomExPlayer_SetDrySendLevel
	 */
	CRIATOMEX_PAN_ANGLE_TYPE_FIX = 1,
	/*JP
	 * \brief 環境音ミックス
	 * \par 説明:
	 * 特殊なパン角度タイプです。使用しないでください。
	 */
	CRIATOMEX_PAN_ANGLE_TYPE_AMBIENCE_MIX = 4,
	/*JP
	 * \brief 環境音直線補間
	 * \par 説明:
	 * 特殊なパン角度タイプです。使用しないでください。
	 */
	CRIATOMEX_PAN_ANGLE_TYPE_AMBIENCE_STRAIGHT = 5,

	/* enum size is 4bytes */
	CRIATOMEX_PAN_ANGLE_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPanAngleType;

/*JP
 * \brief 出力スピーカーの並び順
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 各チャンネルの添字と出力スピーカーの対応関係を表します。<br>
 * ::criAtomEx_SetSpeakerAngleArray 関数で利用します。<br>
 * \sa criAtomEx_SetSpeakerAngleArray CRIATOMEX_SPEAKER_SYSTEM_SURROUND_5_1 CRIATOMEX_SPEAKER_SYSTEM_SURROUND_7_1
 */
typedef CriUint32 CriAtomExSpeakerSystem;

/*JP
 * \brief 5.1chサラウンド
 * \par 説明:
 * 出力スピーカーの並び順は以下のとおりです。
 * \par
 *	-# FRONT LEFT
 *	-# FRONT RIGHT
 *	-# FRONT CENTER
 *	-# LOW FREQUENCY
 *	-# SURROUND LEFT
 *	-# SURROUND RIGHT
 * 	
 * \sa CriAtomExSpeakerSystem
 */
#define CRIATOMEX_SPEAKER_SYSTEM_SURROUND_5_1 (0)

/*JP
 * \brief 7.1chサラウンド
 * \par 説明:
 * 出力スピーカーの並び順は以下のとおりです。
 * \par
 *	-# FRONT LEFT
 *	-# FRONT RIGHT
 *	-# FRONT CENTER
 *	-# LOW FREQUENCY
 *	-# SURROUND LEFT
 *	-# SURROUND RIGHT
 *	-# SURROUND BACK LEFT
 *	-# SURROUND BACK RIGHT
 * 	
 * \sa CriAtomExSpeakerSystem
 */
#define CRIATOMEX_SPEAKER_SYSTEM_SURROUND_7_1 (1)

/*JP
 * \brief ブロックインデックス
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ブロックインデックスは、ブロックシーケンス内のブロックのオフセットを示す番号です。<br>
 * （先頭のブロックが0番、その次のブロックが1番…というふうに、ブロックに
 * 順番に割り当てられる番号です。）<br>
 * ブロックインデックスをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExPlayer_SetFirstBlockIndex, criAtomExPlayback_SetNextBlockIndex, criAtomExPlayback_GetCurrentBlockIndex
 */
typedef CriSint32 CriAtomExBlockIndex;

/*JP
 * \brief ゲーム変数ID
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ゲーム変数IDは、ユーザがオーサリングツール上で ACF 内のゲーム変数に対して割り当てたIDです。<br>
 * ゲーム変数IDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomEx_GetGameVariableById, criAtomEx_SetGameVariableById
 */
typedef CriUint32 CriAtomExGameVariableId;

/*JP
 * \brief ゲーム変数情報取得用構造体
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ゲーム変数情報を取得するための構造体です。<br>
 * ::CriAtomExGameVariableInfo 関数に引数として渡します。<br>
 * \sa criAtomEx_GetGameVariableInfo
 */
typedef struct CriAtomExGameVariableInfoTag {
	const CriChar8* name;		/*JP< ゲーム変数名	*/
	CriAtomExGameVariableId id;	/*JP< ゲーム変数ID	*/
	CriFloat32 value;			/*JP< ゲーム変数値	*/
} CriAtomExGameVariableInfo;

/*JP
 * \brief ストリーミング情報
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ::criAtomEx_GetStreamingInfo 関数で取得した時点でのストリーミングの状況です。<br>
 * \sa criAtomEx_GetStreamingInfo
 */
typedef CriAtomStreamingInfo CriAtomExStreamingInfo;

/*JP
 * \brief 文字コード
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 文字コード（文字符号化方式）を表します。
 */
typedef enum CriAtomExCharacterEncodingTag {
	CRIATOMEX_CHARACTER_ENCODING_UTF8 = 0,	/*JP< UTF-8		*/
	CRIATOMEX_CHARACTER_ENCODING_SJIS = 1,	/*JP< Shift_JIS	*/
	
	/* enum size is 4bytes */
	CRIATOMEX_CHARACTER_ENCODING_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExCharacterEncoding;

/*JP
 * \brief 各種リソースの使用状況
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * 各種リソースの使用状況を表わす構造体です。
 */
typedef struct CriAtomExResourceUsageTag {
	CriUint32 use_count;	/*JP< 対象リソースの現在の使用数	*/
	CriUint32 limit;		/*JP< 対象リソースの制限数			*/
} CriAtomExResourceUsage;

/*==========================================================================
 *      CRI AtomEx Debug API
 *=========================================================================*/
/*JP
 * \brief CriAtomEx 内部の各種リソースの状況
 * \ingroup ATOMEXLIB_GLOBAL_DEBUG
 * \par 説明:
 * CriAtomEx 内部の各種リソースの状況を表す構造体です。<br>
 * ::criAtomExDebug_GetResourcesInfo を使用して取得してください。<br>
 * \attention
 * 開発支援デバッグ機能です。アプリケーション開発時にのみ使用してください。
 * \sa criAtomExDebug_GetResourcesInfo
 */
typedef struct CriAtomExDebugResourcesInfoTag {
	/*JP バーチャルボイスの使用状況（limit はライブラリ初期化時に指定した CriAtomExConfig::max_virtual_voices の数） */
	CriAtomExResourceUsage virtual_voice_usage;
	/*JP シーケンスの使用状況（limit はライブラリ初期化時に指定した CriAtomExConfig::max_sequences の数） */
	CriAtomExResourceUsage sequence_usage;
	/*JP シーケンストラックの使用状況（limit はライブラリ初期化時に指定した CriAtomExConfig::max_tracks の数） */
	CriAtomExResourceUsage sequence_track_usage;
	/*JP シーケンストラックアイテムの使用状況（limit はライブラリ初期化時に指定した CriAtomExConfig::max_track_items の数） */
	CriAtomExResourceUsage sequence_track_item_usage;
} CriAtomExDebugResourcesInfo;

/*==========================================================================
 *      CRI AtomEx HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化用コンフィグ構造体
 * \ingroup ATOMEXLIB_HCA_MX
 * HCA-MXの動作仕様を指定するための構造体です。<br>
 * ::criAtomExHcaMx_Initialize 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomExHcaMx_SetDefaultConfig マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomExHcaMx_Initialize 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExHcaMx_SetDefaultConfig 
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExHcaMx_Initialize, criAtomExHcaMx_SetDefaultConfig
 */
typedef struct CriAtomExHcaMxConfigTag {
	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		\attention
		Atomライブラリ初期化時に指定した値（ ::CriAtomExConfig 構造体の
		server_frequency ）と、同じ値をセットする必要があります。<br>
		\sa CriAtomExConfig
	*/
	CriFloat32 server_frequency;
	
	/*JP
		\brief ミキサ数
		\par 説明:
		HCA-MXデコード結果を送信するミキサの数を指定します。<br>
		ミキサを複数作成することで、
		ミキサごとに異なるDSPバスのDSP FXを適用することが可能になります。<br>
		\attention
		HCA-MXのデコード処理、および定常状態の処理負荷は、
		ミキサの数に比例して重くなります。<br>
		<br>
		本パラメーターを0に設定した場合でも、ミキサは 1 つだけ作成されます。<br>
		（旧バージョンとの互換性維持のため。）<br>
		HCA-MXを使用しない場合には、本パラメーターと max_voices の両方を 0 
		に設定してください。<br>
	*/
	CriSint32 num_mixers;
	
	/*JP
		\brief ミキサに登録可能な最大ボイス数
		\par 説明:
		ミキサごとに登録可能なHCA-MXボイスの数を指定します。<br>
		HCA-MXボイスプールを作成する際には、ボイスの総数が
		num_mixers × max_voices を超えないようご注意ください。
	*/
	CriSint32 max_voices;
	
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
		ミキサの最終出力でピッチを変更する場合に設定します。<br>
		ミキサの最終出力でピッチを変更しない場合は、output_sampling_rateと同じ値を設定してください。<br>
		\par 備考:
		例えばHCA-MX再生時に::criAtomExHcaMx_SetFrequencyRatio 関数に 2.0f を指定してピッチを上げる場合は、
		output_sampling_rate * 2 を指定してHCA-MXを初期化してください。<br>
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
		HCA-MXデータを作成する際には、必ず全ての音声データを同一のサンプリング
		レートで作成し、その値を output_sampling_rate に指定してください。<br>
		\par 備考:
		HCA-MXは、音単位のサンプリングレート変更を行えません。<br>
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
} CriAtomExHcaMxConfig;

/*==========================================================================
 *      CRI AtomEx ACF API
 *=========================================================================*/
/*JP
 * \brief ACF情報
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * ACFデータの詳細情報です。<br>
 * \sa criAtomExAcf_GetAcfInfo, criAtomExAcf_GetAcfInfoFromAcfData
 */
typedef struct CriAtomExAcfInfoTag {
	const CriChar8* name;							/*JP< 名前						*/
	CriUint32 size;									/*JP< サイズ					*/
	CriUint32 version;								/*JP< ACBバージョン				*/
	CriAtomExCharacterEncoding character_encoding;	/*JP< 文字コード				*/
	CriSint32 num_dsp_settings;						/*JP< DSP設定数					*/
	CriSint32 num_categories;						/*JP< カテゴリ数				*/
	CriSint32 num_categories_per_playback;			/*JP< 再生毎カテゴリ参照数		*/
	CriSint32 num_reacts;							/*JP< REACT数					*/
	CriSint32 num_aisac_controls;					/*JP< AISACコントロール数		*/
	CriSint32 num_global_aisacs;					/*JP< グローバルAISAC数			*/
	CriSint32 num_game_variables;					/*JP< ゲーム変数数				*/
	CriSint32 max_buses_of_dsp_bus_settings;		/*JP< DSP設定内最大バス数		*/
	CriSint32 num_buses;							/*JP< バス数					*/
	CriSint32 num_voice_limit_groups;				/*JP< ボイスリミットグループ数	*/
} CriAtomExAcfInfo;

/*JP
 * \brief AISACコントロールID
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * AISACコントロールIDは、AISACコントロールに対して割り当てられている一意のIDです。<br>
 * AISACコントロールIDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExPlayer_SetAisacControlById, criAtomExAcf_GetAisacControlIdByName, criAtomExAcf_GetAisacControlNameById
 */
typedef CriUint32 CriAtomExAisacControlId;

/*JP
 * \brief AISACコントロール情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * AISACコントロール情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetAisacControlInfo 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetAisacControlInfo
 */
typedef struct CriAtomExAisacControlInfoTag {
	const CriChar8*			name;		/*JP< AISACコントロール名	*/
	CriAtomExAisacControlId	id;			/*JP< AISACコントロールID	*/
} CriAtomExAisacControlInfo;

/*JP
 * \brief AISAC情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * AISAC情報を取得するための構造体です。<br>
 * ::criAtomExPlayer_GetAttachedAisacInfo 関数に引数として渡します。<br>
 * \sa criAtomExPlayer_GetAttachedAisacInfo
 */
typedef struct CriAtomExAisacInfoTag {
	const CriChar8* name;		/*JP< AISAC名	*/
	CriBool default_control_flag;		/*JP< デフォルトコントロール値が設定されているか	*/
	CriFloat32 default_control_value;	/*JP< デフォルトAISACコントロール値	*/
	CriAtomExAisacControlId control_id;			/*JP< Control Id	*/
	const CriChar8* control_name;	/*JP< Control Name	*/
} CriAtomExAisacInfo;

/*JP
 * \brief DSPバス設定の情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバス設定の情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetDspSettingInformation 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetDspSettingInformation
 */
typedef struct CriAtomExAcfDspSettingInfoTag {
	const CriChar8* name;									/*JP< セッティング名			*/
	CriUint16 bus_indexes[CRIATOMEXACF_MAX_BUSES];			/*JP< DSPバスインデックス配列	*/
	CriUint16 extend_bus_indexes[CRIATOMEXACF_MAX_BUSES];	/*JP< DSP拡張バスインデックス配列	*/
	CriUint16 snapshot_start_index;							/*JP< スナップショット開始インデックス	*/
	CriUint8 num_buses;										/*JP< 有効DSPバス数				*/
	CriUint8 num_extend_buses;								/*JP< 有効拡張DSPバス数				*/
	CriUint16 num_snapshots;								/*JP< スナップショット数				*/
	CriUint16 snapshot_work_size;							/*JP< スナップショット用ワーク領域サイズ	*/
	CriUint16 num_mixer_aisacs;								/*JP< ミキサーAISAC数	*/
	CriUint16 mixer_aisac_start_index;						/*JP< ミキサーAISAC開始インデックス	*/
} CriAtomExAcfDspSettingInfo;

/*JP
 * \brief DSPバス設定スナップショットの情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバス設定のスナップショット情報を取得するための構造体です。<br>
 */
typedef struct CriAtomExAcfDspSettingSnapshotInfoTag {
	const CriChar8* name;									/*JP< スナップショット名			*/
	CriUint8 num_buses;										/*JP< 有効DSPバス数					*/
	CriUint8 num_extend_buses;								/*JP< 有効拡張DSPバス数				*/
	CriUint8 reserved[2];									/*JP< 予約領域						*/
	CriUint16 bus_indexes[CRIATOMEXACF_MAX_BUSES];			/*JP< DSPバスインデックス配列		*/
	CriUint16 extend_bus_indexes[CRIATOMEXACF_MAX_BUSES];	/*JP< DSP拡張バスインデックス配列	*/
} CriAtomExAcfDspSettingSnapshotInfo;

/*JP
 * \brief DSPバス設定情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバス設定情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetDspBusInformation 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetDspBusInformation
 */
typedef struct CriAtomExAcfDspBusInfoTag {
	const CriChar8* name;								/*JP< 名前							*/
	CriFloat32 volume;									/*JP< 音量							*/
	CriFloat32 pan3d_volume;							/*JP< Pan3D 音量					*/
	CriFloat32 pan3d_angle;								/*JP< Pan3D 角度					*/
	CriFloat32 pan3d_distance;							/*JP< Pan3D インテリア距離			*/
	CriFloat32 pan3d_spread;							/*JP< Pan3D スプレッド				*/
	CriUint16 fx_indexes[CRIATOMEXACF_MAX_FXES];		/*JP< DSP FXインデックス配列		*/
	CriUint16 bus_link_indexes[CRIATOMEXACF_MAX_BUSES];	/*JP< DSPバスリンクインデックス配列	*/
	CriUint16 bus_no;									/*JP< セッティング内DSPバス番号		*/
	CriUint8 num_fxes;									/*JP< DSP FX数						*/
	CriUint8 num_bus_links;								/*JP< DSPバスリンク数				*/
} CriAtomExAcfDspBusInfo;

/*JP
 * \brief DSPバスリンクタイプ
 * \ingroup ATOMEXLIB_ACF
 * \sa CriAtomExAcfDspBusLinkInfo
 */
typedef enum CriAtomExAcfDspBusLinkTypeTag {
	CRIATOMEXACF_DSP_BUS_LINK_TYPE_PRE_VOLUME,		/*JP< プレボリュームタイプ		*/
	CRIATOMEXACF_DSP_BUS_LINK_TYPE_POST_VOLUME,		/*JP< ポストボリュームタイプ	*/
	CRIATOMEXACF_DSP_BUS_LINK_TYPE_POST_PAN,		/*JP< ポストパンタイプ			*/
	/* enum size is 4bytes */
	CRIATOMEXACF_DSP_BUS_LINK_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAcfDspBusLinkType;

/*JP
 * \brief DSPバスリンク情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * DSPバスリンク情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetDspBusLinkInformation 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetDspBusLinkInformation
 */
typedef struct CriAtomExAcfDspBusLinkInfoTag {
	CriAtomExAcfDspBusLinkType type;	/*JP< タイプ							*/
	CriFloat32 send_level;				/*JP< センドレベル						*/
	CriUint16 bus_no;					/*JP< 送り先のセッティング内DSPバス番号	*/
	CriUint16 bus_id;					/*JP< 送り先のセッティング内DSPバスID	*/
} CriAtomExAcfDspBusLinkInfo;

/*JP
 * \brief Aisacタイプ
 * \ingroup ATOMEXLIB_ACF
 * \sa CriAtomExGlobalAisacInfo
 */
typedef enum CriAtomExAcfAisacTypeTag {
	CRIATOMEXACF_AISAC_TYPE_NORMAL,				/*JP< ノーマルタイプ				*/
	CRIATOMEXACF_AISAC_TYPE_AUTO_MODULATION,	/*JP< オートモジュレーションタイプ	*/
	/* enum size is 4bytes */
	CRIATOMEXACF_AISAC_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAcfAisacType;


/*JP
 * \brief Global Aisac情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * Global Aisac情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetGlobalAisacInfo 関数に引数として渡します。<br>
 * \attention
 * typeが::CRIATOMEXACF_AISAC_TYPE_AUTO_MODULATION の場合、
 * control_idは内部的に使用されるインデックス値となります。
 * \sa criAtomExAcf_GetGlobalAisacInfo
 */
typedef struct CriAtomExGlobalAisacInfoTag {
	const CriChar8* name;				/*JP< Global Aisac名	*/
	CriUint16 index;					/*JP< データインデックス*/
	CriUint16 num_graphs;				/*JP< グラフ数			*/
	CriAtomExAcfAisacType type;			/*JP< Aisacタイプ		*/
	CriFloat32 random_range;			/*JP< ランダムレンジ	*/
	CriUint16 control_id;				/*JP< Control Id		*/
	CriUint16 dummy;					/*JP< 未使用			*/
} CriAtomExGlobalAisacInfo;

/* Aisacグラフタイプ */
/*JP
 * \brief Aisacグラフタイプ
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * Aisacグラフのタイプです。<br>
 * \sa CriAtomExAisacGraphInfo
 */
typedef enum CriAtomExAisacGraphTypeTag {
	CRIATOMEX_AISAC_GRAPH_TYPE_NON = 0,					/*JP< 未使用	 */
	CRIATOMEX_AISAC_GRAPH_TYPE_VOLUME,					/*JP< ボリューム */
	CRIATOMEX_AISAC_GRAPH_TYPE_PITCH,					/*JP< ピッチ */
	CRIATOMEX_AISAC_GRAPH_TYPE_BANDPASS_HI,				/*JP< バンドパスフィルターの高域カットオフ周波数 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BANDPASS_LOW,			/*JP< バンドパスフィルターの低域カットオフ周波数 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BIQUAD_FREQ,				/*JP< バイクアッドフィルターの周波数 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BIQUAD_Q,				/*JP< バイクアッドフィルターのQ値 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_0_SEND,				/*JP< バスセンドレベル0 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_1_SEND,				/*JP< バスセンドレベル1 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_2_SEND,				/*JP< バスセンドレベル2 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_3_SEND,				/*JP< バスセンドレベル3 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_4_SEND,				/*JP< バスセンドレベル4 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_5_SEND,				/*JP< バスセンドレベル5 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_6_SEND,				/*JP< バスセンドレベル6 */
	CRIATOMEX_AISAC_GRAPH_TYPE_BUS_7_SEND,				/*JP< バスセンドレベル7 */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_ANGLE,				/*JP< パンニング3D角度 */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_VOLUME,			/*JP< パンニング3Dボリューム */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_INTERIOR_DISTANCE,	/*JP< パンニング3D距離 */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_CENTER,			/*JP< ACB Ver.0.11.00以降では使用しない */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_LFE,				/*JP< ACB Ver.0.11.00以降では使用しない */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_0,					/*JP< AISACコントロールID 0 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_1,					/*JP< AISACコントロールID 1 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_2,					/*JP< AISACコントロールID 2 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_3,					/*JP< AISACコントロールID 3 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_4,					/*JP< AISACコントロールID 4 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_5,					/*JP< AISACコントロールID 5 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_6,					/*JP< AISACコントロールID 6 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_7,					/*JP< AISACコントロールID 7 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_8,					/*JP< AISACコントロールID 8 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_9,					/*JP< AISACコントロールID 9 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_10,				/*JP< AISACコントロールID 10 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_11,				/*JP< AISACコントロールID 11 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_12,				/*JP< AISACコントロールID 12 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_13,				/*JP< AISACコントロールID 13 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_14,				/*JP< AISACコントロールID 14 */
	CRIATOMEX_AISAC_GRAPH_TYPE_AISAC_15,				/*JP< AISACコントロールID 15 */
	CRIATOMEX_AISAC_GRAPH_TYPE_PRIORITY,				/*JP< ボイスプライオリティ */
	CRIATOMEX_AISAC_GRAPH_TYPE_PRE_DELAY_TIME,			/*JP< プリディレイ */
	CRIATOMEX_AISAC_GRAPH_TYPE_BIQUAD_GAIN,				/*JP< バイクアッドフィルターのゲイン */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_MIXDOWN_CENTER,	/*JP< パンニング3D センターレベル */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN3D_MIXDOWN_LFE,		/*JP< パンニング3D LFEレベル */
	CRIATOMEX_AISAC_GRAPH_TYPE_EG_ATTACK,				/*JP< エンベロープ アタック */
	CRIATOMEX_AISAC_GRAPH_TYPE_EG_RELEASE,				/*JP< エンベロープ リリース */
	CRIATOMEX_AISAC_GRAPH_TYPE_PLAYBACK_RATIO,			/*JP< シーケンス再生レシオ */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_L,				/*JP< L chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_R,				/*JP< R chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_CENTER,			/*JP< Center chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_LFE,			/*JP< LFE chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_SL,				/*JP< Surround L chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_SR,				/*JP< Surround R chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_EX1,			/*JP< Ex1 chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_DRY_SEND_EX2,			/*JP< Ex2 chドライセンド */
	CRIATOMEX_AISAC_GRAPH_TYPE_PAN_SPREAD,				/*JP< パンスプレッド */

	/* enum size is 4bytes */
	CRIATOMEX_AISAC_GRAPH_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAisacGraphType;

/*JP
 * \brief Aisac Graph情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * Global Aisac Graph情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetGlobalAisacGraphInfo 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetGlobalAisacGraphInfo
 */
typedef struct CriAtomExAisacGraphInfoTag {
	CriAtomExAisacGraphType type;		/*JP< Graphタイプ		*/
} CriAtomExAisacGraphInfo;

/*JP
 * \brief セレクター情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * セレクター情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetSelectorInfoByIndex 関数または ::criAtomExAcf_GetSelectorInfoByName 関数に
 * 引数として渡します。<br>
 * \attention
 * \sa criAtomExAcf_GetSelectorInfoByIndex, criAtomExAcf_GetSelectorInfoByName
 */
typedef struct CriAtomExSelectorInfoTag {
	const CriChar8* name;				/*JP< セレクター名		*/
	CriUint16 index;					/*JP< データインデックス*/
	CriUint16 num_labels;				/*JP< ラベル数			*/
	CriUint16 global_label_index;		/*JP< グローバル参照ラベルインデックス	*/
} CriAtomExSelectorInfo;

/*JP
 * \brief セレクターラベル情報取得用構造体
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * セレクターラベル情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetSelectorLabelInfo 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetSelectorLabelInfo
 */
typedef struct CriAtomExSelectorLabelInfoTag {
	const CriChar8* selector_name;			/*JP< セレクター名					*/
	const CriChar8* label_name;				/*JP< セレクターラベル名				*/
} CriAtomExSelectorLabelInfo;

/*JP
 * \brief ミキサーAisacグラフタイプ
 * \ingroup ATOMEXLIB_ACF
 * \par 説明:
 * ミキサーAisacグラフのタイプです。<br>
 */
typedef enum CriAtomExMixerAisacGraphTypeTag {
	CRIATOMEX_MIXER_AISAC_GRAPH_TYPE_VOLUME = 0,		/*JP< ボリューム */
	CRIATOMEX_MIXER_AISAC_GRAPH_TYPE_PAN3D_ANGLE,		/*JP< パンニング3D角度 */
	CRIATOMEX_MIXER_AISAC_GRAPH_TYPE_BUS_SEND_LEVEL,	/*JP< バスセンドレベル */
	CRIATOMEX_MIXER_AISAC_GRAPH_TYPE_PAN_SPREAD,		/*JP< パンスプレッド */

	/* enum size is 4bytes */
	CRIATOMEX_MIXER_AISAC_GRAPH_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExMixerAisacGraphType;
/*==========================================================================
 *      CRI AtomEx Category API
 *=========================================================================*/
/*JP
 * \brief カテゴリID
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * カテゴリIDは、ユーザがオーサリングツール上でカテゴリに対して割り当てた一意のIDです。<br>
 * カテゴリIDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExCategory_SetVolumeById, criAtomExCategory_MuteById, criAtomExCategory_SoloById
 */
typedef CriUint32 CriAtomExCategoryId;

/*JP
 * \brief 最大再生毎カテゴリ参照数
 * \ingroup ATOMEXLIB_CATEGORY
 * 再生毎の最大カテゴリ参照数です。<br>
 * \sa CriAtomExCueInfo
 */
#define CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK	(16)

/*JP
 * \brief カテゴリ情報取得用構造体
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * カテゴリ情報を取得するための構造体です。<br>
 * ::criAtomExAcf_GetCategoryInfo 関数に引数として渡します。<br>
 * \sa criAtomExAcf_GetCategoryInfo
 */
typedef struct CriAtomExCategoryInfoTag {
	CriUint32 group_no;			/*JP< グループ番号		*/
	CriUint32 id;				/*JP< カテゴリID		*/
	const CriChar8* name;		/*JP< カテゴリ名		*/
	CriUint32 num_cue_limits;	/*JP< キューリミット数	*/
	CriFloat32 volume;			/*JP< ボリューム		*/
} CriAtomExCategoryInfo;

/*JP
 * \brief REACTタイプ
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTのタイプです。<br>
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef enum CriAtomExReactTypeTag {
	CRIATOMEX_REACT_TYPE_DUCKER = 0,					/*JP< ダッカー						*/
	CRIATOMEX_REACT_TYPE_AISAC_MODULATION_TRIGGER,		/*JP< AISACモジュレーショントリガー	*/

	/* enum size is 4bytes */
	CRIATOMEX_REACT_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExReactType;

/*JP
 * \brief REACTによるダッキングのターゲット
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTによるダッキング対象のタイプです。
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef enum CriAtomExReactDuckerTargetTypeTag {
	CRIATOMEX_REACT_DUCKER_TARGET_TYPE_VOLUME = 0,					/*JP< ボリュームのダッカー				*/
	CRIATOMEX_REACT_DUCKER_TARGET_TYPE_AISAC_CONTROL_VALUE,			/*JP< AISACコントロール値のダッカー	*/

	/* enum size is 4bytes */
	CRIATOMEX_REACT_DUCKER_TARGET_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExReactDuckerTargetType;

/*JP
 * \brief REACTによるダッキングの曲線タイプ
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTによるダッキング曲線のタイプです。
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef enum CriAtomExReactDuckerCurveTypeTag {
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_LINEAR = 0,		/*JP< 直線		*/
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_SQUARE,			/*JP< 低速変化	*/
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_SQUARE_REVERSE,	/*JP< 高速変化	*/
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_S,				/*JP< S字曲線	*/
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_FLAT_AT_HALF,		/*JP< 逆S字曲線	*/

	/* enum size is 4bytes */
	CRIATOMEX_REACT_DUCKER_CURVE_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExReactDuckerCurveType;

/*JP
 * \brief REACTフェードパラメーター構造体
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTのフェード駆動パラメーター情報を設定取得するための構造体です。<br>
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef struct CriAtomExReactFadeParameterTag {
	CriAtomExReactDuckerCurveType	curve_type;			/*JP< 変化曲線タイプ					*/
	CriFloat32						curve_strength;		/*JP< 変化曲線の強さ（0.0f 〜 2.0f）	*/
	CriUint16						fade_time_ms;		/*JP< フェード時間（ミリ秒）			*/
} CriAtomExReactFadeParameter;

/*JP
 * \brief REACTホールドタイプ
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTホールド（減衰時間の維持）タイプです。<br>
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef enum CriAtomExReactHoldTypeTag {
	CRIATOMEX_REACT_HOLD_TYPE_WHILE_PLAYING,		/*JP< 再生中にホールドを行う		*/
	CRIATOMEX_REACT_HOLD_TYPE_FIXED_TIME,			/*JP< 固定時間でホールドを行う		*/

	/* enum size is 4bytes */
	CRIATOMEX_REACT_HOLD_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExReactHoldType;

/*JP
 * \brief REACTによるダッカーパラメーター構造体
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTによるダッカーの駆動パラメーター情報を設定取得するための構造体です。
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef struct CriAtomExReactDuckerParameterTag {
	union {
		struct {
			CriFloat32	level;							/*JP< 減衰ボリュームレベル				*/
		} volume;
		struct {
			CriUint16	control_id;						/*JP< AISACコントロールid				*/
			CriFloat32	control_value;					/*JP< AISACコントロール値				*/
		} aisac_control_value;
	} target;
	CriAtomExReactDuckerTargetType	target_type;		/*JP< ダッカーの操作対象				*/
	CriAtomExReactFadeParameter		entry;				/*JP< 変化開始フェードパラメーター		*/
	CriAtomExReactFadeParameter		exit;				/*JP< 変化終了フェードパラメーター		*/
	CriAtomExReactHoldType			hold_type;			/*JP< ホールドタイプ					*/
	CriUint16						hold_time_ms;		/*JP< ホールド時間（ミリ秒）			*/
} CriAtomExReactDuckerParameter;

/*JP
 * \brief AISACモジュレーショントリガーパラメーター構造体
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * AISACモジュレーショントリガーの駆動パラメーター情報を設定取得するための構造体です。
 * \sa CriAtomExReactParameter, criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef struct CriAtomExReactAisacModulationParameterTag {
	CriBool		enable_decrement_aisac_modulation_key;	/*JP< 変化AISACモジュレーションキーが有効か否か	*/
	CriUint32	decrement_aisac_modulation_key;			/*JP< 変化AISACモジュレーションキー			*/
	CriBool		enable_increment_aisac_modulation_key;	/*JP< 戻りAISACモジュレーションキーが有効か否か	*/
	CriUint32	increment_aisac_modulation_key;			/*JP< 戻りAISACモジュレーションキー			*/
} CriAtomExReactAisacModulationParameter;

/*JP
 * \brief REACT駆動パラメーター構造体
 * \ingroup ATOMEXLIB_CATEGORY
 * \par 説明:
 * REACTの駆動パラメーター情報を設定取得するための構造体です。<br>
 * ::criAtomExCategory_SetReactParameter , ::criAtomExCategory_GetReactParameter 関数に引数として渡します。<br>
 * \sa criAtomExCategory_SetReactParameter, criAtomExCategory_GetReactParameter
 */
typedef struct CriAtomExReactParameterTag {
	union {
		CriAtomExReactDuckerParameter			ducker;				/*JP< ダッカーパラメーター						*/
		CriAtomExReactAisacModulationParameter	aisac_modulation;	/*JP< AISACモジュレーショントリガーパラメーター	*/
	} parameter;
	CriAtomExReactType	type;										/*JP< REACTタイプ							*/
	CriBool				enable_pausing_cue;							/*JP< ポーズ中のキューは適用するか				*/
} CriAtomExReactParameter;

/*==========================================================================
 *      CRI AtomEx ACB API
 *=========================================================================*/
struct CriAtomExAcbTag;
typedef struct CriAtomExAcbTag CriAtomExAcbObj;
/*JP
 * \brief ACBハンドル
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * キューシート情報を管理するハンドルです。<br>
 * ::criAtomExAcb_LoadAcbFile 関数等で読み込んだキューシートファイル内の
 * 音声を再生する場合、本ハンドルとキューIDをプレーヤーに対してセットします。<br>
 * \sa criAtomExAcb_LoadAcbFile, criAtomExPlayer_SetCueId
 */
typedef CriAtomExAcbObj *CriAtomExAcbHn;

/*JP
 * \brief キューID
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * キューIDは、ユーザがオーサリングツール上でキューに対して割り当てた一意のIDです。<br>
 * キューIDをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExPlayer_SetCueId
 */
typedef CriSint32 CriAtomExCueId;

/*JP
 * \brief キューインデックス
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * キューインデックスは、ACBファイル内のコンテンツのオフセットを示す番号です。<br>
 * （先頭のコンテンツが0番、その次のコンテンツが1番…というふうに、コンテンツに
 * 順番に割り当てられる番号です。）<br>
 * キューインデックスをプログラム中で保持する際には、本変数型を用いて値を取り扱う必要があります。<br>
 * \sa criAtomExPlayer_SetCueIndex
 */
typedef CriSint32 CriAtomExCueIndex;

/*JP
 * \brief ACB情報
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * ACBデータの各種情報です。<br>
 * \sa criAtomExAcb_GetAcbInfo
 */
typedef struct CriAtomExAcbInfoTag {
	const CriChar8* name;							/*JP< 名前						*/
	CriUint32 size;									/*JP< サイズ					*/
	CriUint32 version;								/*JP< ACBバージョン				*/
	CriAtomExCharacterEncoding character_encoding;	/*JP< 文字コード				*/
	CriFloat32 volume;								/*JP< キューシートボリューム	*/
	CriSint32 num_cues;								/*JP< キュー数					*/
} CriAtomExAcbInfo;

/*JP
 * \brief 音声波形情報
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * 波形情報は、各キューから再生される音声波形の詳細情報です。<br>
 * \sa criAtomExAcb_GetWaveformInfoById, criAtomExAcb_GetWaveformInfoByName
 */
/* Waveform information */
typedef struct CriAtomExWaveformInfoTag {
	CriAtomExWaveId wave_id;	/*JP< 波形データID			*/
	CriAtomExFormat format;		/*JP< フォーマット種別		*/
	CriSint32 sampling_rate;	/*JP< サンプリング周波数	*/
	CriSint32 num_channels;		/*JP< チャンネル数			*/
	CriSint64 num_samples;		/*JP< トータルサンプル数	*/
	CriBool streaming_flag;		/*JP< ストリーミングフラグ	*/
	CriUint32 reserved[1];		/*JP< 予約領域				*/
} CriAtomExWaveformInfo;

/*JP
 * \brief キュータイプ
 * \ingroup ATOMEXLIB_ACB
 * \sa CriAtomExCueInfo
 */
typedef enum CriAtomExAcbCueTypeTag {
	CRIATOMEXACB_CUE_TYPE_POLYPHONIC = (0),		/*JP< ポリフォニック											*/
	CRIATOMEXACB_CUE_TYPE_SEQUENTIAL,			/*JP< シーケンシャル											*/
	CRIATOMEXACB_CUE_TYPE_SHUFFLE,				/*JP< シャッフル再生											*/
	CRIATOMEXACB_CUE_TYPE_RANDOM,				/*JP< ランダム													*/
	CRIATOMEXACB_CUE_TYPE_RANDOM_NO_REPEAT,		/*JP< ランダム非連続（前回再生した音以外をランダムに鳴らす）	*/
	CRIATOMEXACB_CUE_TYPE_SWITCH_GAME_VARIABLE,	/*JP< スイッチ再生（ゲーム変数を参照して再生トラックの切り替える）	*/
	CRIATOMEXACB_CUE_TYPE_COMBO_SEQUENTIAL,		/*JP< コンボシーケンシャル（「コンボ時間」内に連続コンボが決まるとシーケンシャル、最後までいくと「コンボループバック」地点に戻る）*/
	CRIATOMEXACB_CUE_TYPE_SWITCH_SELECTOR,		/*JP< スイッチ再生（セレクターを参照して再生トラックを切り替える）	*/
	CRIATOMEXACB_CUE_TYPE_TRACK_TRANSITION_BY_SELECTOR,		/*JP< トラックトランジション再生（セレクターを参照して再生トラックを切り替える）	*/
	/* enum size is 4bytes */
	CRIATOMEXACB_CUE_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAcbCueType;

/*JP
 * \brief キュー3D情報
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * 波形情報は、キューの3D詳細情報です。<br>
 * \sa CriAtomExCueInfo
 */
typedef struct CriAtomExCuePos3dInfoTag {
	CriFloat32 cone_inside_angle;		/*JP< コーン内部角度				*/
	CriFloat32 cone_outside_angle;		/*JP< コーン外部角度				*/
	CriFloat32 min_distance;			/*JP< 最小減衰距離					*/
	CriFloat32 max_distance;			/*JP< 最大減衰距離					*/
	CriFloat32 source_radius;			/*JP< Zero距離InteriorPan適用距離	*/
	CriFloat32 interior_distance;		/*JP< InteriorPan適用境界距離		*/
	CriFloat32 doppler_factor;			/*JP< ドップラー係数				*/
	struct {
		CriBool follows_original_source;	/*JP< 元の3D音源に追従するかどうか */
		CriSint32 calculation_type;			/*JP< 位置座標の算出方法 */
		CriFloat32 calculation_parameters[CRIATOMEX3DSOURCE_MAX_RANDOM_POSITION_CALCULATION_PARAMETERS];	/*JP< 位置座標の算出方法に関する各種パラメーター配列 */
	} random_position;
	CriUint16 distance_aisac_control;	/*JP< 距離減衰AISACコントロール		*/
	CriUint16 listener_base_angle_aisac_control;		/*JP< リスナー基準方位角AISACコントロール	*/
	CriUint16 source_base_angle_aisac_control;			/*JP< 音源基準方位角AISACコントロール		*/
	CriUint16 listener_base_elevation_aisac_control;	/*JP< リスナー基準仰俯角AISACコントロール	*/
	CriUint16 source_base_elevation_aisac_control;		/*JP< 音源基準仰俯角AISACコントロール		*/
	CriUint16 reserved[1];				/*JP< 予約領域				*/
} CriAtomExCuePos3dInfo;

/*JP
 * \brief キュー情報
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * キューの詳細情報です。<br>
 * \sa criAtomExAcb_GetCueInfoByName, criAtomExAcb_GetCueInfoById, criAtomExAcb_GetCueInfoByIndex
 */
typedef struct CriAtomExCueInfoTag {
	CriAtomExCueId id;					/*JP< キューID				*/
	CriAtomExAcbCueType type;			/*JP< タイプ				*/
	const CriChar8* name;				/*JP< キュー名				*/
	const CriChar8* user_data;			/*JP< ユーザーデータ		*/
	CriSint64 length;					/*JP< 長さ(msec)			*/
	CriUint16 categories[CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK];			/*JP< カテゴリID	*/
	CriSint16 num_limits;				/*JP< キューリミット		*/
	CriUint16 num_blocks;				/*JP< ブロック数			*/
	CriUint16 num_tracks;				/*JP< トラック数			*/
	CriUint16 num_related_waveforms;	/*JP< 関連する波形数		*/
	CriUint8 priority;					/*JP< プライオリティ		*/
	CriUint8 header_visibility;			/*JP< ヘッダー公開フラグ	*/
	CriUint8 ignore_player_parameter;	/*JP< プレーヤーパラメーター無効化フラグ	*/
	CriUint8 probability;				/*JP< 再生確率				*/
	CriAtomExPanType pan_type;			/*JP< パンタイプ			*/
	CriAtomExCuePos3dInfo pos3d_info;	/*JP< 3D情報				*/
	CriAtomExGameVariableInfo game_variable_info;	/*JP< ゲーム変数            */
} CriAtomExCueInfo;

/*JP
 * \brief ACBハンドルコールバック関数型
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	acb_hn				ACBハンドル
 * \return		CriBool				列挙を続けるかどうか（CRI_TRUE：継続、CRI_FALSE：中止）
 * \par 説明:
 * ACBハンドルの通知に使用される、コールバック関数の型です。<br>
 * ::criAtomExAcb_EnumerateHandles 関数に本関数型のコールバック関数を登録することで、
 * ACBハンドルをコールバック経由で受け取ることが可能です。<br>
 * \attention
 * ACBハンドルをコールバック関数内で破棄してはいけません。<br>
 * \sa criAtomExAcb_EnumerateHandles, CriAtomExAcbHn
 */
typedef CriBool (CRIAPI *CriAtomExAcbHandleCbFunc)(void *obj, CriAtomExAcbHn acb_hn);

/*JP
 * \brief インゲームプレビュー用データのロード検知コールバック関数
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * \param[in]	obj			ユーザ指定オブジェクト
 * \param[in]	acb_name	ACB名
 * \return					なし
 * \par 説明:
 * インゲームプレビュー用データのロードを検知した場合に呼び出すコールバック関数です。<br>
 * インゲームプレビュー用データを使用しているか調査する際に使用します。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExAcb_SetDetectionInGamePreviewDataCallback 関数を使用します。<br>
 * 登録したコールバック関数は、ACBロード関数内でACBの内容解析を行ったタイミングで実行されます。<br>
 * \attention
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExAcb_SetDetectionInGamePreviewDataCallback
 */
typedef void (CRIAPI *CriAtomExAcbDetectionInGamePreviewDataCbFunc)(
	void *obj, const CriChar8* acb_name);

/*==========================================================================
 *      CRI AtomEx Voice Pool API
 *=========================================================================*/
struct CriAtomExVoicePoolTag;
typedef struct CriAtomExVoicePoolTag CriAtomExVoicePoolObj;
/*JP
 * \brief ボイスプールハンドル
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * ボイスプールを制御するためのハンドルです。<br>
 * ::criAtomExVoicePool_AllocateStandardVoicePool 関数等でボイスプールを作成した際、
 * 関数の戻り値として返されます。<br>
 * ボイスプールハンドルは、ボイスプールの情報取得や、ボイスプールを解放する
 * 際に使用します。
 * \sa criAtomExVoicePool_AllocateStandardVoicePool, criAtomExVoicePool_Free
 */
typedef struct CriAtomExVoicePoolTag *CriAtomExVoicePoolHn;

/*JP
 * \brief ボイスプール識別子
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * ボイスプール識別子は、ボイスプールを一意に識別するためのIDです。<br>
 * ボイスプール識別子をプログラム中で保持する際には、
 * 本変数型を用いて値を取り扱う必要があります。<br>
 * \par 備考
 * ボイスプール識別子は、以下の2つに対して指定する必要があります。<br>
 * 	- ボイスプール（ボイスプール作成用コンフィグ構造体で指定）
 * 	- プレーヤー（criAtomExPlayer_SetVoicePoolIdentifier 関数で指定）
 * ボイスプールとプレーヤーの両方に識別子を設定することで、
 * 当該プレーヤーは当該ボイスプールからのみボイスを取得するようになります。<br>
 * <br>
 * 複数のボイスプールに同一のボイスプール識別子を指定することも可能です。<br>
 * \sa CriAtomExStandardVoicePoolConfig, criAtomExPlayer_SetVoicePoolIdentifier
 */
typedef CriUint32 CriAtomExVoicePoolIdentifier;

/*JP
 * \brief 標準ボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * 標準ボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateStandardVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForStandardVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateStandardVoicePool, criAtomExVoicePool_SetDefaultConfigForStandardVoicePool
 */
typedef struct CriAtomExStandardVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomStandardPlayerConfig player_config;	/*JP< ボイスの仕様			*/
} CriAtomExStandardVoicePoolConfig;

/*JP
 * \brief ADXボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * ADXボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateAdxVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForAdxVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateAdxVoicePool, criAtomExVoicePool_SetDefaultConfigForAdxVoicePool
 */
typedef struct CriAtomExAdxVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomAdxPlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExAdxVoicePoolConfig;

/*JP
 * \brief HCAボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * HCAボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateHcaVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForHcaVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateHcaVoicePool, criAtomExVoicePool_SetDefaultConfigForHcaVoicePool
 */
typedef struct CriAtomExHcaVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomHcaPlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExHcaVoicePoolConfig;

/*JP
 * \brief HCA-MXボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * HCA-MXボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateHcaMxVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateHcaMxVoicePool, criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool
 */
typedef struct CriAtomExHcaMxVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomHcaMxPlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExHcaMxVoicePoolConfig;

/*JP
 * \brief Waveボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * Waveボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateWaveVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForWaveVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateWaveVoicePool, criAtomExVoicePool_SetDefaultConfigForWaveVoicePool
 */
typedef struct CriAtomExWaveVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomWavePlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExWaveVoicePoolConfig;

/*JP
 * \brief AIFFボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * AIFFボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateAiffVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForAiffVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateAiffVoicePool, criAtomExVoicePool_SetDefaultConfigForAiffVoicePool
 */
typedef struct CriAtomExAiffVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomAiffPlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExAiffVoicePoolConfig;

/*JP
 * \brief RawPCMボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * RawPCMボイスプールの仕様を指定するための構造体です。<br>
 * ::criAtomExVoicePool_AllocateRawPcmVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateRawPcmVoicePool, criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool
 */
typedef struct CriAtomExRawPcmVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;	/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;						/*JP< プールするボイスの数	*/
	CriAtomRawPcmPlayerConfig player_config;		/*JP< ボイスの仕様			*/
} CriAtomExRawPcmVoicePoolConfig;

/*JP
 * \brief インストゥルメントボイスプール作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * インストゥルメントボイスプールの仕様を指定するための構造体です。<br>
 * :: criAtomExVoicePool_AllocateInstrumentVoicePool 関数に引数として渡します。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForInstrumentVoicePool
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AllocateInstrumentVoicePool, criAtomExVoicePool_SetDefaultConfigForInstrumentVoicePool
 */
typedef struct CriAtomExInstrumentVoicePoolConfigTag {
	CriAtomExVoicePoolIdentifier identifier;		/*JP< ボイスプール識別子	*/
	CriSint32 num_voices;							/*JP< プールするボイスの数	*/
	CriAtomInstrumentPlayerConfig player_config;	/*JP< ボイスの仕様			*/
} CriAtomExInstrumentVoicePoolConfig;

/*==========================================================================
 *      CRI AtomEx Player API
 *=========================================================================*/
/*JP
 * \brief ボイス確保方式
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * AtomEx プレーヤーがボイスを確保する際の動作仕様を指定するためのデータ型です。<br>
 * AtomEx プレーヤーを作成する際、 ::CriAtomExPlayerConfig 構造体のメンバに指定します。<br>
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create
 */
typedef enum CriAtomExVoiceAllocationMethodTag {
	CRIATOMEX_ALLOCATE_VOICE_ONCE = 0,		/*JP< ボイスの確保は1回限り		*/
	CRIATOMEX_RETRY_VOICE_ALLOCATION,		/*JP< ボイスを繰り返し確保する	*/
	CRIATOMEX_VOICE_ALLOCATION_METHOD_IS_4BYTE = 0x7FFFFFFF
} CriAtomExVoiceAllocationMethod;

/*JP
 * \brief プレーヤー作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * AtomExプレーヤーを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomExPlayer_Create 関数の引数に指定します。<br>
 * <br>
 * 作成されるプレーヤーは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * プレーヤーが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExPlayer_SetDefaultConfig
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExPlayer_Create,  criAtomExPlayer_SetDefaultConfig
 */
typedef struct CriAtomExPlayerConfigTag {
	/*JP
		\brief ボイス確保方式
		\par 説明:
		AtomExプレーヤーがボイスを確保する際の方式を指定します。<br>
		<br>
		voice_allocation_method に CRIATOMEX_ALLOCATE_VOICE_ONCE を指定した場合、
		AtomExプレーヤーはボイスの確保を発音開始のタイミングでのみ行います。<br>
		再生開始時点でボイスを確保できなかった場合や、
		発音数制御により再生中にボイスが奪い取られた場合、
		発音に関連するリソースが解放されるため、その波形データはその時点で停止します。<br>
		（再生が始まらなかった波形データや、再生が途中で停止された波形データが、
		追加の再生リクエストなしに再生されることはありません。）<br>
		<br>
		これに対し、 voice_allocation_method に CRIATOMEX_RETRY_VOICE_ALLOCATION 
		を指定した場合、AtomExプレーヤーはボイスの確保を必要な限り何度も繰り返します。<br>
		ボイスが確保できない場合やボイスを奪い取られた場合でも、
		発音を管理するリソース（バーチャルボイス）は解放しないので、
		再度ボイスに空きができた時点で、発音処理が再開されます。<br>
		\par 備考:
		CRIATOMEX_RETRY_VOICE_ALLOCATION を指定した場合、発音中のボイスの処理に加え、
		発音を行っていないバーチャルボイスについても定期的にボイスの再取得処理等が行われるため、
		CRIATOMEX_ALLOCATE_VOICE_ONCE を指定した場合に比べ、
		処理負荷が高くなる可能性があります。<br>
		<br>
		CRIATOMEX_RETRY_VOICE_ALLOCATION 指定時、
		ボイスの再確保に成功すると、波形データは<b>再生時刻を考慮した位置から</b>シーク再生されます。<br>
		\attention
		CRIATOMEX_RETRY_VOICE_ALLOCATION を指定して AtomEx プレーヤーを作成した場合でも、
		Atom ライブラリ初期化時に指定する max_virtual_voices 
		の数を超える再生要求があった場合、発音は再開されなくなります。<br>
		（エラーコールバック関数に警告が返され、バーチャルボイスも削除されます。）<br>
		CRIATOMEX_RETRY_VOICE_ALLOCATION を指定する際には、
		初期化時に必要充分なバーチャルボイスを確保してください。<br>
		（ max_virtual_voices に大きめの値を指定してください。）<br>
		<br>
		CRIATOMEX_RETRY_VOICE_ALLOCATION を指定した場合、
		再生されなかった波形データやボイスが奪い取られた波形データが、
		いつどこから再生再開されるか、厳密に制御することはできません。<br>
		（実行タイミングにより毎回異なった結果になる可能性があります。）<br>
	*/
	CriAtomExVoiceAllocationMethod voice_allocation_method;
	
	/*JP
		\brief 最大パス文字列数
		\par 説明:
		AtomExプレーヤーが保持するパス文字列の数です。<br>
		\par 備考:
		::criAtomExPlayer_SetFile 関数を実行すると、
		指定したパス文字列がAtomExプレーヤー内に保持されます。<br>
		AtomExプレーヤーはデフォルト状態ではパス文字列を1つしか保持しません。<br>
		（メモリサイズ削減のため。）<br>
		プレーヤー作成時に指定する max_path_strings の数を増やせば、
		AtomExプレーヤーは指定された数分のパス文字列を保存するようになります。<br>
		max_path_strings に2以上の値を指定することで、
		1つのプレーヤーで複数のファイルを同時にパス指定で再生することが可能となります。<br>
		ただし、 max_path_strings の値に応じて必要なワーク領域のサイズは増加します。<br>
		（max_path_strings×max_pathバイトのメモリが必要となります。）<br>
		\sa criAtomExPlayer_SetDefaultConfig, criAtomExPlayer_SetFile
	*/
	CriSint32 max_path_strings;
	
	/*JP
		\brief 最大パス長
		\par 説明:
		AtomExプレーヤーに指定可能なファイルパスの最大長です。<br>
		ファイル名を指定して音声を再生を行う場合、使用するパスの最大長を max_path 
		として指定する必要があります。<br>
		\par 備考:
		本パラメーターは、パッキングされていない音声ファイルを、
		ファイル名を指定して再生する際にのみセットする必要があります。<br>
		ファイル名指定の再生を行わず、キューIDや波形データIDを指定して再生を行う場合、
		max_path を 0 に設定することが可能です。<br>
		\attention
		::criAtomExPlayer_SetDefaultConfig マクロで CriAtomExPlayerConfig 構造体に
		デフォルト値を設定した場合、 max_path には 0 がセットされます。<br>
		ファイル名を指定して再生を行う場合、 ::criAtomExPlayer_SetDefaultConfig 
		マクロを使用しないか、または ::criAtomExPlayer_SetDefaultConfig マクロ実行後
		に再度パスの最大長をセットする必要があります。<br>
		\sa criAtomExPlayer_SetDefaultConfig, criAtomExPlayer_SetFile
	*/
	CriSint32 max_path;
	
	/*JP
		\brief 最大AISAC数
		\par 説明:
		一つのキューに紐づけることができるAISACの最大数です。<br>
		Atomライブラリは、初期化時と AtomExPlayer 作成時に
		max_aisacs で指定された数分のAISACを参照できるリソースを確保します。<br>
		max_aisacs に指定する値の上限は55です。
	*/
	CriUint8 max_aisacs;

	/*JP 
		\brief 時刻更新の有無
		\par 説明:
		AtomExプレーヤーが時刻更新処理を行うかどうかを指定します。<br>
		\par 備考:
		updates_time に CRI_FALSE を指定した場合、
		作成されたAtomExプレーヤーは再生時刻の更新を行いません。<br>
		その結果、 ::criAtomExPlayer_GetTime 関数による再生時刻の取得は行えなくなりますが、
		音声再生時の処理負荷をわずかに下げることが可能となります。<br>
		\sa criAtomExPlayer_GetTime
	*/
	CriBool updates_time;

	/*JP
		\brief 音声同期時刻更新の有無
		\par 説明:
		AtomExプレーヤーが再生音声に同期した時刻更新処理を行うかどうかを指定します。<br>
		\par 備考:
		enable_audio_synced_timer に CRI_TRUE を指定した場合、
		作成されたAtomExプレーヤーを用いて再生された音声に対して、
		再生済みサンプル数に同期するように補正した再生時刻の更新を行うようになります。<br>
		補正された再生時刻は ::criAtomExPlayback_GetTimeSyncedWithAudio 関数によって取得できます。<br>
		音声再生時の処理負荷が上がるため、音声に同期した正確な再生時刻を取得したいプレーヤーの
		作成時のみ CRI_TRUE を指定するようにしてください。<br>
		\attention
		本フラグを有効にした場合、AtomExプレーヤーに対するピッチ指定が行えなくなります。<br>
		\sa criAtomExPlayer_GetTimeSyncedWithAudio
	*/
	CriBool enable_audio_synced_timer;
} CriAtomExPlayerConfig;

struct CriAtomExPlayerTag;
typedef struct CriAtomExPlayerTag CriAtomExPlayerObj;
/*JP
 * \brief プレーヤーハンドル
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * CriAtomExPlayerHn は、音声再生用に作られたプレーヤーを操作するためのハンドルです。<br>
 * ::criAtomExPlayer_Create 関数で音声再生用のプレーヤーを作成すると、
 * 関数はプレーヤー操作用に、この"AtomExプレーヤーハンドル"を返します。
 * <br>
 * データのセットや再生の開始、ステータスの取得等、プレーヤーに対して行う操作は、
 * 全てAtomExプレーヤーハンドルを介して実行されます。<br>
 * \sa criAtomExPlayer_Create
 */
typedef CriAtomExPlayerObj *CriAtomExPlayerHn;

/*JP
 * \brief プレーヤーステータス
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * AtomExプレーヤーの再生状態を示す値です。<br>
 * ::criAtomExPlayer_GetStatus 関数で取得可能です。<br>
 * <br>
 * 再生状態は、通常以下の順序で遷移します。<br>
 * -# CRIATOMEXPLAYER_STATUS_STOP
 * -# CRIATOMEXPLAYER_STATUS_PREP
 * -# CRIATOMEXPLAYER_STATUS_PLAYING
 * -# CRIATOMEXPLAYER_STATUS_PLAYEND
 * 
 * AtomExプレーヤー作成直後の状態は、停止状態（ CRIATOMEXPLAYER_STATUS_STOP ）です。<br>
 * ::criAtomExPlayer_SetData 関数等でデータをセットし、 ::criAtomExPlayer_Start 関数を
 * 実行すると、再生準備状態（ CRIATOMEXPLAYER_STATUS_PREP ）に遷移し、再生準備を始めます。<br>
 * データが充分供給され、再生準備が整うと、ステータスは再生中（ CRIATOMEXPLAYER_STATUS_PLAYING ）
 * に変わり、音声の出力が開始されます。<br>
 * セットされたデータを全て再生し終えた時点で、ステータスは再生完了
 * （ CRIATOMEXPLAYER_STATUS_PLAYEND ）に変わります。
 * \par 備考
 * AtomExプレーヤーは、Atomプレーヤーと異なり、1つのプレーヤーで複数音の再生が可能です。<br>
 * そのため、再生中のAtomExプレーヤーに対して ::criAtomExPlayer_Start 関数を実行すると、
 * 2つの音が重なって再生されます。<br>
 * 再生中に ::criAtomExPlayer_Stop 関数を実行した場合、AtomExプレーヤーで再生中の全ての音声
 * が停止し、ステータスは CRIATOMEXPLAYER_STATUS_STOP に戻ります。<br>
 * （ ::criAtomExPlayer_Stop 関数の呼び出しタイミングによっては、 CRIATOMEXPLAYER_STATUS_STOP 
 * に遷移するまでに時間がかかる場合があります。）<br>
 * <br>
 * 1つのAtomExプレーヤーで複数回 ::criAtomExPlayer_Start 関数を実行した場合、
 * 1つでも再生準備中の音があれば、ステータスは CRIATOMEXPLAYER_STATUS_PREP 状態になります。<br>
 * （全ての音声が再生中の状態になるまで、ステータスは CRIATOMEXPLAYER_STATUS_PLAYING 状態に
 * 遷移しません。）<br>
 * また、 CRIATOMEXPLAYER_STATUS_PLAYING 状態のプレーヤーに対し、再度 ::criAtomExPlayer_Start 
 * 関数を実行した場合、ステータスは一時的に CRIATOMEXPLAYER_STATUS_PREP に戻ります。<br>
 * <br>
 * 再生中に不正なデータを読み込んだ場合や、ファイルアクセスに失敗した場合、
 * ステータスは CRIATOMEXPLAYER_STATUS_ERROR に遷移します。<br>
 * 複数の音声を再生中にある音声でエラーが発生した場合、プレーヤーのステータスは
 * 他の音声の状態に関係なく、 CRIATOMEXPLAYER_STATUS_ERROR に遷移します。<br>
 * \sa criAtomExPlayer_GetStatus, criAtomExPlayer_SetData, criAtomExPlayer_Start, criAtomExPlayer_Stop
 */
typedef enum CriAtomExPlayerStatusTag {
	CRIATOMEXPLAYER_STATUS_STOP = 0,		/*JP< 停止中		*/
	CRIATOMEXPLAYER_STATUS_PREP,			/*JP< 再生準備中	*/
	CRIATOMEXPLAYER_STATUS_PLAYING,			/*JP< 再生中		*/
	CRIATOMEXPLAYER_STATUS_PLAYEND,			/*JP< 再生完了		*/
	CRIATOMEXPLAYER_STATUS_ERROR,			/*JP< エラーが発生	*/
	CRIATOMEXPLAYER_STATUS_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPlayerStatus;

/*JP
 * \brief ボイス制御方式
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * AtomExプレーヤーで再生する音声の発音制御方法を指定するためのデータ型です。<br>
 * ::criAtomExPlayer_SetVoiceControlMethod 関数で利用します。<br>
 * \sa criAtomExPlayer_SetVoiceControlMethod
 */
typedef enum CriAtomExVoiceControlMethodTag {
	CRIATOMEX_PREFER_LAST = 0,				/*JP< 後着優先			*/
	CRIATOMEX_PREFER_FIRST = 1,				/*JP< 先着優先			*/
	CRIATOMEX_PREFER_DATA = 2,				/*JP< データ設定優先	*/
	CRIATOMEX_CONTROL_METHOD_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExVoiceControlMethod;

/*JP
 * \brief スピーカーID
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * 音声を出力するスピーカーを指定するためのIDです。<br>
 * ::criAtomExPlayer_SetSendLevel 関数で利用します。
 * \sa criAtomExPlayer_SetSendLevel
 */
typedef enum CriAtomExSpeakerIdTag {
	CRIATOMEX_SPEAKER_FRONT_LEFT = 0,			/*JP<フロントレフトスピーカー			*/
	CRIATOMEX_SPEAKER_FRONT_RIGHT = 1,			/*JP<フロントライトスピーカー			*/
	CRIATOMEX_SPEAKER_FRONT_CENTER = 2,			/*JP<フロントセンタースピーカー			*/
	CRIATOMEX_SPEAKER_LOW_FREQUENCY = 3,		/*JP<LFE（≒サブウーハー）				*/
	CRIATOMEX_SPEAKER_SURROUND_LEFT = 4,		/*JP<サラウンドレフトスピーカー			*/
	CRIATOMEX_SPEAKER_SURROUND_RIGHT = 5,		/*JP<サラウンドライトスピーカー			*/
	CRIATOMEX_SPEAKER_SURROUND_BACK_LEFT = 6,	/*JP<サラウンドバックレフトスピーカー	*/
	CRIATOMEX_SPEAKER_SURROUND_BACK_RIGHT = 7,	/*JP<サラウンドバックライトスピーカー	*/

	/* enum size is 4bytes */
	CRIATOMEX_SPEAKER_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExSpeakerId;

/*JP
 * \brief 再生ID
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * ::criAtomExPlayer_Start 関数実行時に返されるIDです。<br>
 * プレーヤー単位ではなく、 ::criAtomExPlayer_Start 関数で再生した個々の音声に対して
 * パラメーター変更や状態取得を行いたい場合、本IDを使用して制御を行う必要があります。<br>
 * 無効な再生IDは::CRIATOMEX_INVALID_PLAYBACK_IDです。
 * \sa criAtomExPlayer_Start, criAtomExPlayback_GetStatus, CRIATOMEX_INVALID_PLAYBACK_ID
 */
typedef CriUint32 CriAtomExPlaybackId;

/*JP
 * \brief プレーヤーコールバック関数型
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	player				AtomExプレーヤー
 * \par 説明:
 * プレーヤーの列挙に使用する、コールバック関数の型です。<br>
 * ::criAtomExPlayer_EnumeratePlayers 関数に本関数型のコールバック関数を登録することで、
 * アプリケーション中で作成したプレーヤーをコールバックで受け取ることが可能となります。<br>
 * \attention
 * 引数で渡されたAtomExプレーヤーを破棄してはいけません。<br>
 * （アクセス違反やハングアップ等の重篤な不具合が発生する恐れがあります。）<br>
 * <br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExPlayer_EnumeratePlayers
 */
typedef void (CRIAPI *CriAtomExPlayerCbFunc)(void *obj, CriAtomExPlayerHn player);

/*JP
 * \brief データ要求コールバック関数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	id		再生ID
 * \param[in]	player	Atomプレーヤーハンドル
 * \return				なし
 * \par 説明:
 * 次に再生するデータを指定するためのコールバック関数です。<br>
 * 複数の音声データをシームレスに連結して再生する際に使用します。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExPlayer_SetDataRequestCallback 関数を使用します。<br>
 * 登録したコールバック関数は、ボイスが内部的に使用している Atom プレーヤーが
 * 連結再生用のデータを要求するタイミングで実行されます。<br>
 * （前回のデータを読み込み終えて、次に再生すべきデータを要求するタイミングで
 * コールバック関数が実行されます。）<br>
 * <br>
 * コールバック関数内で ::criAtomPlayer_SetData 関数等を用いて Atom プレーヤーにデータをセットすると、
 * セットされたデータは現在再生中のデータに続いてシームレスに連結されて再生されます。<br>
 * また、本関数内で ::criAtomPlayer_SetPreviousDataAgain 関数を実行することで、
 * 同一データを繰り返し再生し続けることも可能です。
 * \par 備考:
 * 本関数内でデータを指定しなかった場合、現在のデータを再生し終えた時点で、
 * AtomEx プレーヤーのステータスが ::CRIATOMEXPLAYER_STATUS_PLAYEND に遷移します。<br>
 * <br>
 * タイミング等の問題により、データを指定することができないが、ステータスを
 * ::CRIATOMEXPLAYER_STATUS_PLAYEND に遷移させたくない場合には、コールバック関数内で
 * ::criAtomPlayer_DeferCallback 関数を実行してください。<br>
 * ::criAtomPlayer_DeferCallback 関数を実行することで、約1V後に再度データ要求
 * コールバック関数が呼び出されます。（コールバック処理をリトライ可能。）<br>
 * ただし、 ::criAtomPlayer_DeferCallback 関数を実行した場合、再生が途切れる
 * （連結箇所に一定時間無音が入る）可能性があります。<br>
 * \attention
 * 本コールバックの第 3 引数（ player ）は、 AtomEx プレーヤーではなく、
 * 下位レイヤの Atom プレーヤーです。<br>
 * （ AtomExPlayerHn にキャストすると、アクセス違反等の重大な不具合が発生します。）<br>
 * <br>
 * 複数の波形データを含むキューを再生した場合、
 * 最初に見つかった波形データの再生が終了するタイミングでコールバック関数が実行されます。<br>
 * そのため、複数の波形データを含むキューに対して連結再生の操作を行った場合、
 * 意図としない組み合わせで波形が連結再生される可能性があります。<br>
 * 本機能を使用する際には、 1 つの波形データのみを含むキューを再生するか、
 * またはファイルやオンメモリデータ等を再生してください。<br>
 * <br>
 * 現状、コールバックは波形データを再生し始めたボイスに対してのみ割り当てられます。<br>
 * そのため、波形データ再生後にボイスがバーチャル化した場合、コールバックは実行されません。<br>
 * （データ終端に到達した時点で、コールバックが実行されずにPLAYEND状態に遷移します。）<br>
 * <br>
 * 本コールバック関数内で、シームレス連結再生以外の制御を行わないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で実行可能なAPIは、以下のとおりです。<br>
 * 	- criAtomExAcb_GetWaveformInfoById（引数のNULL指定は不可）
 * 	- criAtomExAcb_GetWaveformInfoByName（引数のNULL指定は不可）
 * 	- criAtomExAcb_GetOnMemoryAwbHandle
 * 	- criAtomExAcb_GetStreamingAwbHandle
 * 	- criAtomPlayer_SetData
 * 	- criAtomPlayer_SetFile
 * 	- criAtomPlayer_SetContentId
 * 	- criAtomPlayer_SetWaveId
 * 	- criAtomPlayer_SetPreviousDataAgain
 * 	- criAtomPlayer_DeferCallback
 * 	
 * <br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExPlayer_SetDataRequestCallback, criAtomPlayer_SetData,
 * criAtomPlayer_SetPreviousDataAgain, criAtomPlayer_DeferCallback
 */
typedef void (CRIAPI *CriAtomExPlayerDataRequestCbFunc)(
	void *obj, CriAtomExPlaybackId id, CriAtomPlayerHn player);

/*JP
 * \brief 波形フィルターコールバック関数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * \param[in]		obj				ユーザ指定オブジェクト
 * \param[in]		id				再生ID
 * \param[in]		format			PCMの形式
 * \param[in]		num_channels	チャンネル数
 * \param[in]		num_samples		サンプル数
 * \param[in,out]	data			PCMデータのチャンネル配列
 * \return							なし
 * \par 説明:
 * デコード結果の PCM データを受け取るコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExPlayer_SetFilterCallback 関数を使用します。<br>
 * コールバック関数を登録すると、ボイスが音声データをデコードする度に、
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
 * <br>
 * 本コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生する可能性があります。<br>
 * \sa criAtomExPlayer_SetFilterCallback
 */
typedef void (CRIAPI *CriAtomExPlayerFilterCbFunc)(
	void *obj, CriAtomExPlaybackId id, CriAtomPcmFormat format,
	CriSint32 num_channels, CriSint32 num_samples, void *data[]);

/*JP
 * \brief ブロックトランジションコールバック関数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * \param[in]		obj				ユーザ指定オブジェクト
 * \param[in]		id				再生ID
 * \param[in]		index			キュー内のブロックインデックス値
 * \return							なし
 * \par 説明:
 * ブロックシーケンス再生時にブロックトランジションが発生したときに呼び出されるコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExPlayer_SetBlockTransitionCallback 関数を使用します。<br>
 * コールバック関数を登録すると、ブロックトランジションが発生する度に、
 * コールバック関数が実行されるようになります。<br>
 * <br>
 * \attention
 * <br>
 * 本コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生する可能性があります。<br>
 * \sa criAtomExPlayer_SetBlockTransitionCallback
 */
typedef void (CRIAPI *CriAtomExPlayerBlockTransitionCbFunc)(
	void *obj, CriAtomExPlaybackId id, CriAtomExBlockIndex index);

/*JP
 * \brief 再生トラック情報用Info構造体
 * \ingroup ATOMEXLIB_PLAYER
 */
typedef struct CriAtomExPlaybackTrackInfoTag {
	CriAtomExPlaybackId id;				/*JP< 再生ID				*/
	CriAtomExAcbCueType sequence_type;	/*JP< 親シーケンスタイプ	*/
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル		*/
	CriUint16 track_no;					/*JP< トラック番号			*/
	CriUint16 reserved[1];				/*JP< 予約領域				*/
} CriAtomExPlaybackTrackInfo;

/*JP
 * \brief 再生トラック情報取得コールバック関数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * \param[in]		obj				ユーザ指定オブジェクト
 * \param[in]		info			再生トラック情報
 * \return							なし
 * \par 説明:
 * ポリフォニックタイプ、トラック遷移タイプ以外のキュー再生時に再生したトラック情報を通知するコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExPlayer_SetPlaybackTrackInfoNotificationCallback 関数を使用します。<br>
 * <br>
 * \attention
 * <br>
 * 本コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生する可能性があります。<br>
 * \sa criAtomExPlayer_SetPlaybackTrackInfoNotificationCallback
 */
typedef void (CRIAPI *CriAtomExPlayerPlaybackTrackInfoNotificationCbFunc)(
	void *obj, const CriAtomExPlaybackTrackInfo* info);

/*JP
 * \brief パラメーターID
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * パラメーターを指定するためのIDです。<br>
 * ::criAtomExPlayer_GetParameterFloat32 関数等で利用します。
 * \sa criAtomExPlayer_GetParameterFloat32, criAtomExPlayer_GetParameterSint32,
 * criAtomExPlayer_GetParameterUint32
 */
typedef enum CriAtomExParameterIdTag {
	CRIATOMEX_PARAMETER_ID_VOLUME					=  0,	/*JP< ボリューム */
	CRIATOMEX_PARAMETER_ID_PITCH					=  1,	/*JP< ピッチ */
	CRIATOMEX_PARAMETER_ID_PAN3D_ANGLE				=  2,	/*JP< パンニング3D角度 */
	CRIATOMEX_PARAMETER_ID_PAN3D_DISTANCE			=  3,	/*JP< パンニング3D距離 */
	CRIATOMEX_PARAMETER_ID_PAN3D_VOLUME				=  4,	/*JP< パンニング3Dボリューム */
	CRIATOMEX_PARAMETER_ID_PAN_TYPE					=  5,	/*JP< パンタイプ */
	CRIATOMEX_PARAMETER_ID_PAN_SPEAKER_TYPE			=  6,	/*JP< パンスピーカータイプ */
	CRIATOMEX_PARAMETER_ID_PAN_CH0					=  7,	/*JP< 2Dパン（チャンネル0） */
	CRIATOMEX_PARAMETER_ID_PAN_CH1					=  8,	/*JP< 2Dパン（チャンネル1） */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_0			=  9,	/*JP< バスセンドレベル0 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_1			= 10,	/*JP< バスセンドレベル1 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_2			= 11,	/*JP< バスセンドレベル2 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_3			= 12,	/*JP< バスセンドレベル3 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_4			= 13,	/*JP< バスセンドレベル4 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_5			= 14,	/*JP< バスセンドレベル5 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_6			= 15,	/*JP< バスセンドレベル6 */
	CRIATOMEX_PARAMETER_ID_BUS_SEND_LEVEL_7			= 16,	/*JP< バスセンドレベル7 */
	CRIATOMEX_PARAMETER_ID_BANDPASS_FILTER_COF_LOW	= 17,	/*JP< バンドパスフィルターの低域カットオフ周波数 */
	CRIATOMEX_PARAMETER_ID_BANDPASS_FILTER_COF_HIGH	= 18,	/*JP< バンドパスフィルターの高域カットオフ周波数 */
	CRIATOMEX_PARAMETER_ID_BIQUAD_FILTER_TYPE		= 19,	/*JP< バイクアッドフィルターのフィルタータイプ */
	CRIATOMEX_PARAMETER_ID_BIQUAD_FILTER_FREQ		= 20,	/*JP< バイクアッドフィルターの周波数 */
	CRIATOMEX_PARAMETER_ID_BIQUAD_FILTER_Q			= 21,	/*JP< バイクアッドフィルターのQ値 */
	CRIATOMEX_PARAMETER_ID_BIQUAD_FILTER_GAIN		= 22,	/*JP< バイクアッドフィルターのゲイン */
	CRIATOMEX_PARAMETER_ID_ENVELOPE_ATTACK_TIME		= 23,	/*JP< エンベロープのアタックタイム */
	CRIATOMEX_PARAMETER_ID_ENVELOPE_HOLD_TIME		= 24,	/*JP< エンベロープのホールドタイム */
	CRIATOMEX_PARAMETER_ID_ENVELOPE_DECAY_TIME		= 25,	/*JP< エンベロープのディケイタイム */
	CRIATOMEX_PARAMETER_ID_ENVELOPE_RELEASE_TIME	= 26,	/*JP< エンベロープのリリースタイム */
	CRIATOMEX_PARAMETER_ID_ENVELOPE_SUSTAIN_LEVEL	= 27,	/*JP< エンベロープのサスティンレベル */
	CRIATOMEX_PARAMETER_ID_START_TIME				= 28,	/*JP< 再生開始位置 */
	CRIATOMEX_PARAMETER_ID_PRIORITY					= 31,	/*JP< ボイスプライオリティ */
	CRIATOMEX_PARAMETER_ID_SILENT_MODE				= 32,	/*JP< 無音時処理モード */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_0			= 33,	/*JP< インサーションDSPのパラメーター0 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_1			= 34,	/*JP< インサーションDSPのパラメーター1 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_2			= 35,	/*JP< インサーションDSPのパラメーター2 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_3			= 36,	/*JP< インサーションDSPのパラメーター3 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_4			= 37,	/*JP< インサーションDSPのパラメーター4 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_5			= 38,	/*JP< インサーションDSPのパラメーター5 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_6			= 39,	/*JP< インサーションDSPのパラメーター6 */
	CRIATOMEX_PARAMETER_ID_DSP_PARAMETER_7			= 40,	/*JP< インサーションDSPのパラメーター7 */

	/* enum size is 4bytes */
	CRIATOMEX_PARAMETER_ID_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExParameterId;

/*==========================================================================
 *      CRI AtomEx Sequencer API
 *=========================================================================*/
/*JP
 * \brief シーケンスイベントコールバック
 * \ingroup ATOMEXLIB_SEQUENCER
 * \par 説明:
 * AtomExライブラリのシーケンスイベントコールバックタイプです。<br>
 * \sa CriAtomExSequenceEventInfo
 */
typedef enum CriAtomExSequecneEventTypeTag {
	/*JP
	 * \brief シーケンスコールバック
	 * \par 説明:
	 * シーケンスデータ内に埋め込まれたコールバックイベント情報。
	 */
	CRIATOMEX_SEQUENCE_EVENT_TYPE_CALLBACK = 0,
		
	/* enum size is 4bytes */
	CRIATOMEX_SEQUENCE_EVENT_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExSequecneEventType;

/*JP
 * \brief シーケンスコールバックイベント用Info構造体
 * \ingroup ATOMEXLIB_SEQUENCER
 */
typedef struct CriAtomExSequenceEventInfoTag {
	CriUint64 position;					/*JP< イベント位置			*/
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル		*/
	const CriChar8* string;				/*JP< データ埋め込み文字列	*/
	CriAtomExPlaybackId id;				/*JP< 再生ID				*/
	CriAtomExSequecneEventType type;	/*JP< イベントタイプ		*/
	CriUint32 value;					/*JP< データ埋め込み値		*/
	CriUint32 reserved[1];				/*JP< 予約領域				*/
} CriAtomExSequenceEventInfo;

/*JP
 * \brief シーケンスコールバック
 * \ingroup ATOMEXLIB_SEQUENCER
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	info	シーケンスイベント情報
 * \return				未使用
 * AtomExライブラリのシーケンスコールバック関数型です。<br>
 * コールバック関数の登録には ::criAtomExSequencer_SetEventCallback 関数を使用します。<br>
 * 登録したコールバック関数は、サーバー関数内でシーケンスが処理されるタイミングで実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExSequencer_SetEventCallback
 */
typedef CriSint32 (CRIAPI *CriAtomExSequencerEventCbFunc)(void* obj, const CriAtomExSequenceEventInfo* info);

/*==========================================================================
 *      CRI AtomEx Beat Sync API
 *=========================================================================*/
/*JP
 * \brief ビート同期位置検出コールバック用構造体
 * \ingroup ATOMEXLIB_BEATSYNC
 */
typedef struct CriAtomExBeatSyncInfoTag {
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル			*/
	CriAtomExPlaybackId playback_id;	/*JP< 再生ID					*/
	CriUint32 bar_count;				/*JP< 小節数					*/
	CriUint32 beat_count;				/*JP< 拍数						*/
	CriFloat32 beat_progress;			/*JP< 拍の進捗(0.0f〜1.0f)		*/
	CriFloat32 bpm;						/*JP< テンポ(拍/分)				*/
	CriSint32 offset;					/*JP< 同期オフセット(ms)		*/
	CriUint32 num_beats;				/*JP< 拍子数　　				*/
} CriAtomExBeatSyncInfo;

/*JP
 * \brief ビート同期位置検出コールバック
 * \ingroup ATOMEXLIB_BEATSYNC
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	info	ビート同期位置検出情報
 * \return				未使用
 * AtomExライブラリのビート同期位置検出コールバック関数型です。<br>
 * コールバック関数の登録には ::criAtomExBeatSync_SetCallback 関数を使用します。<br>
 * 登録したコールバック関数は、サーバー関数内でビート同期位置検出が処理されるタイミングで実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExBeatSync_SetCallback
 */
typedef CriSint32 (CRIAPI *CriAtomExBeatSyncCbFunc)(void* obj, const CriAtomExBeatSyncInfo* info);

/*==========================================================================
 *      CRI AtomEx Playback API
 *=========================================================================*/
/*JP
 * \brief 再生ステータス
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * AtomExプレーヤーで再生済みの音声のステータスです。<br>
 * ::criAtomExPlayback_GetStatus 関数で取得可能です。<br>
 * <br>
 * 再生状態は、通常以下の順序で遷移します。<br>
 * -# CRIATOMEXPLAYBACK_STATUS_PREP
 * -# CRIATOMEXPLAYBACK_STATUS_PLAYING
 * -# CRIATOMEXPLAYBACK_STATUS_REMOVED
 * 
 * \par 備考
 * CriAtomExPlaybackStatusはAtomExプレーヤーのステータスではなく、
 * プレーヤーで再生を行った（ ::criAtomExPlayer_Start 関数を実行した）
 * 音声のステータスです。<br>
 * <br>
 * 再生中の音声リソースは、発音が停止された時点で破棄されます。<br>
 * そのため、以下のケースで再生音のステータスが
 * CRIATOMEXPLAYBACK_STATUS_REMOVED に遷移します。<br>
 * - 再生が完了した場合。
 * - criAtomExPlayback_Stop 関数で再生中の音声を停止した場合。
 * - 高プライオリティの発音リクエストにより再生中のボイスが奪い取られた場合。
 * - 再生中にエラーが発生した場合。
 * 
 * \sa criAtomExPlayer_Start, criAtomExPlayback_GetStatus, criAtomExPlayback_Stop
 */
typedef enum CriAtomExPlaybackStatusTag {
	CRIATOMEXPLAYBACK_STATUS_PREP = 1,	/*JP< 再生準備中	*/
	CRIATOMEXPLAYBACK_STATUS_PLAYING,	/*JP< 再生中		*/
	CRIATOMEXPLAYBACK_STATUS_REMOVED,	/*JP< 削除された	*/
	CRIATOMEXPLAYBACK_STATUS_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPlaybackStatus;

/*JP
 * \brief 再生元のタイプ
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * AtomExプレーヤーで再生するまたは再生中の音声の、再生元のタイプです。<br>
 * \sa CriAtomExSourceInfo
 */
typedef enum CriAtomExSourceTypeTag {
	CRIATOMEX_SOURCE_TYPE_NONE = 0,				/*JP< 未設定					*/
	CRIATOMEX_SOURCE_TYPE_CUE_ID,				/*JP< キューID					*/
	CRIATOMEX_SOURCE_TYPE_CUE_NAME,				/*JP< キュー名					*/
	CRIATOMEX_SOURCE_TYPE_CUE_INDEX,			/*JP< キューインデックス		*/
	CRIATOMEX_SOURCE_TYPE_DATA,					/*JP< オンメモリデータ			*/
	CRIATOMEX_SOURCE_TYPE_FILE,					/*JP< ファイル名				*/
	CRIATOMEX_SOURCE_TYPE_CONTENT_ID,			/*JP< CPKコンテンツID			*/
	CRIATOMEX_SOURCE_TYPE_WAVE_ID,				/*JP< 音声データID				*/
	CRIATOMEX_SOURCE_TYPE_VIBRATION_ID,			/*JP< 振動ID					*/
	CRIATOMEX_SOURCE_TYPE_SOUND_GENERATOR_ID,	/*JP< サウンドジェネレータID	*/
	CRIATOMEX_SOURCE_TYPE_RAW_PCM_FLOAT_ID,		/*JP< RawPcmFloatID				*/
	CRIATOMEX_SOURCE_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExSourceType;

/*JP
 * \brief 再生元の情報
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * AtomExプレーヤーで再生するまたは再生中の音声の、再生元（何を再生する／している）の情報です。<br>
 * ::criAtomExPlayback_GetSource 関数で取得可能です。<br>
 * 取得した情報を元に、::criAtomExAcb_GetCueInfoByIndex 関数等を利用することで、
 * より詳細な情報を取得することができます。
 * \par 備考
 * 再生元のタイプによって、取得できる情報が異なります。<br>
 * typeを参照し、共用体sourceの中のどの構造体としてアクセスするかを選択してください。<br>
 * \code
 * CriAtomExSourceInfo source;
 * criAtomExPlayback_GetSource(playback_id, &source);
 * 
 * switch (source.type) {
 * case CRIATOMEXPLAYBACK_SOURCE_TYPE_CUE_ID:
 * 	{
 * 		CriAtomExCueInfo cue_info;
 * 		criAtomExAcb_GetCueInfoById(source.info.cue_id.acb, source.info.cue_id.id, &cue_info);
 *			:
 * 	}
 * 	break;
 * 		:
 * }
 * \endcode
 * \sa criAtomExPlayback_GetSource, criAtomExAcb_GetCueInfoByIndex
 */
typedef struct CriAtomExSourceInfoTag {
	/*JP 再生元のタイプ */
	CriAtomExSourceType type;

	/*JP 再生元情報共用体 */
	union CriAtomExSourceInfoInfoTag {
		/*JP キューID情報 */
		struct CriAtomExSourceInfoCueIdTag {
			/*JP ACBハンドル */
			CriAtomExAcbHn acb;
			/*JP キューID */
			CriAtomExCueId id;
		} cue_id;
		/*JP キュー名情報 */
		struct CriAtomExSourceInfoCueNameTag {
			/*JP ACBハンドル */
			CriAtomExAcbHn acb;
			/*JP キュー名 */
			const CriChar8 *name;
		} cue_name;
		/*JP キューインデックス情報 */
		struct CriAtomExSourceInfoCueIndexTag {
			/*JP ACBハンドル */
			CriAtomExAcbHn acb;
			/*JP キューインデックス */
			CriAtomExCueIndex index;
		} cue_index;
		/*JP オンメモリデータ情報 */
		struct CriAtomExSourceInfoDataTag {
			/*JP メモリアドレス */
			void *buffer;
			/*JP サイズ */
			CriSint32 size;
		} data;
		/*JP ファイル情報 */
		struct CriAtomExSourceInfoFileTag {
			/*JP バインダーハンドル */
			CriFsBinderHn binder;
			/*JP ファイルパス */
			const CriChar8 *path;
		} file;
		/*JP CPKコンテンツID情報 */
		struct CriAtomExSourceInfoContentIdTag {
			/*JP バインダーハンドル */
			CriFsBinderHn binder;
			/*JP コンテンツID */
			CriSint32 id;
		} content_id;
		/*JP 波形データID情報 */
		struct CriAtomExSourceInfoWaveIdTag {
			/*JP AWBハンドル */
			CriAtomAwbHn awb;
			/*JP 波形データID */
			CriAtomExWaveId id;
		} wave_id;
		/*JP 振動ID情報 */
		struct CriAtomExSourceInfoVibrationIdTag {
			/*JP 振動データID */
			CriAtomExVibrationId id;
		} vibration_id;
		struct CriAtomExSourceInfoVibrationNameTag {
			/*JP 振動データ名 */
			const CriChar8 *name;
		} vibration_name;
		/* サウンドジェネレータID情報 */
		struct CriAtomExSourceInfoSoundGeneratorParameterTag {
			/*JP 周波数 */
			CriFloat32 frequency;
			/*JP 波形 */
			CriAtomWaveType wave_type;
		} sound_generator_parameter;
		/* RawPCM FloatID情報 */
		struct CriAtomExSourceInfoRawPcmFloatParameterTag {
			/*JP データアドレス */
			CriFloat32 *data;
			/*JP 総サンプル数 */
			CriUint32 total_samples;
		} raw_pcm_float_parameter;
	} info;
} CriAtomExSourceInfo;

/*JP
 * \brief 再生イベント
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * 再生イベントの種別を示す値です。<br>
 * 再生イベントコールバックに引数として渡されます。<br>
 * \sa CriAtomExPlaybackEventCbFunc, criAtomExPlayer_SetPlaybackEventCallback
 */
typedef enum CriAtomExPlaybackEventTag {
	/*JP
	 * \brief 新規再生リソースの確保
	 * \par 説明:
	 * キューの再生に必要なリソースが確保されたことを示す値です。<br>
	 * リソース確保時点ではボイスの割り当ては行われておらず、
	 * 発音がされていません（バーチャル化した状態で作成されます）。
	 */
	CRIATOMEX_PLAYBACK_EVENT_ALLOCATE = 0,
	
	/*JP
	 * \brief ボイスの割り当て
	 * \par 説明:
	 * バーチャル状態の再生リソースに対してボイスが割り当てられたことを示す値です。<br>
	 * ボイスが割り当てられたことで、キューの発音が開始されます。
	 * \par 備考:
	 * キューに複数の波形データが含まれる場合、いずれか1つの波形データが再生された時点で本イベントが発生します。<br>
	 * （キュー再生に関連するボイスの数が0から1に代わる瞬間に本イベントが発生します。）<br>
	 * 既にボイスが割り当てられた状態で、さらに追加のボイスが割り当てられるタイミングでは本イベントは発生ません。
	 */
	CRIATOMEX_PLAYBACK_EVENT_FROM_VIRTUAL_TO_NORMAL,
	
	/*JP
	 * \brief バーチャル化
	 * \par 説明:
	 * キューの再生がバーチャル化されたことを示す値です。<br>
	 * 以下のいずれかの要因により、発音中のキューからボイスが切り離された場合に発生します。<br>
	 * - キューに含まれる波形データを終端まで再生したため、ボイスが不要になった
	 * - ::criAtomExPlayer_Stop 関数等の呼び出しにより、再生中の波形データが停止された
	 * - プライオリティ制御により、再生中の波形データが停止され、ボイスが奪い取られた
	 * 
	 * \par 備考:
	 * 本イベントは、キューに含まれる"波形データ"が再生されなくなった状態を示します。<br>
	 * 本イベント発生時点では、キューの再生は終了していません。<br>
	 * （キューの再生が終了した際には、別途 ::CRIATOMEX_PLAYBACK_EVENT_REMOVE イベントが発生します。）<br>
	 * <br>
	 * キューに複数の波形データが含まれる場合、全ての波形データが再生されなくなった時点で本イベントが発生します。<br>
	 * （キュー再生に関連するボイスの数が1から0に代わる瞬間に本イベントが発生します。）<br>
	 * 複数のボイスが割り当てられた状態でそのうちの1つが停止された場合には、本イベントは発生ません。
	 */
	CRIATOMEX_PLAYBACK_EVENT_FROM_NORMAL_TO_VIRTUAL,
	
	/*JP
	 * \brief 再生リソースの解放
	 * \par 説明:
	 * 再生リソースが解放されたことを示す値です。<br>
	 * キューの再生が完了した際や、再生停止要求によりキューが停止された場合に本イベントが発生します。
	 * \par 備考:
	 * キューに含まれる波形データが再生されている場合、
	 * 本イベント発生前に、必ず ::CRIATOMEX_PLAYBACK_EVENT_FROM_NORMAL_TO_VIRTUAL イベントが発生します。
	 */
	CRIATOMEX_PLAYBACK_EVENT_REMOVE,
	
	CRIATOMEX_PLAYBACK_EVENT_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExPlaybackEvent;

/*JP
 * 再生情報詳細
 * \ingroup ATOMEXLIB_PLAYBACK
 * \par 説明:
 * 再生イベント発生時に、当該再生に関する詳細情報を通知するための構造体です。<br>
 * 再生イベントコールバックに引数として渡されます。<br>
 * \sa CriAtomExPlaybackEventCbFunc, criAtomExPlayer_SetPlaybackEventCallback
 */
typedef struct CriAtomExPlaybackInfoDetailTag {
	CriAtomExPlayerHn player;			/*JP< 再生中のプレーヤー	*/
	CriAtomExPlaybackId id;				/*JP< 再生ID			*/
} CriAtomExPlaybackInfoDetail;

/*JP
 * 再生イベントコールバック関数型
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	playback_event		発生したイベント
 * \param[in]	info				詳細情報
 * \par 説明:
 * 再生イベントの通知に使用される、コールバック関数の型です。<br>
 * ::criAtomExPlayer_SetPlaybackEventCallback 関数に本関数型のコールバック関数を登録することで、
 * 再生イベント発生時にコールバックを受け取ることが可能となります。<br>
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomExPlayer_SetPlaybackEventCallback, CriAtomExPlaybackEvent, CriAtomExPlaybackInfoDetail
 */
typedef void (CRIAPI *CriAtomExPlaybackEventCbFunc)(void *obj,
	CriAtomExPlaybackEvent playback_event, const CriAtomExPlaybackInfoDetail *info);

/*==========================================================================
 *      CRI AtomEx Fader API
 *=========================================================================*/
/*JP
 * \brief フェーダーアタッチ用コンフィグ構造体
 * \ingroup ATOMEXLIB_FADER
 * \par 説明:
 * ::criAtomExPlayer_AttachFader 関数の引数に指定する、フェーダーアタッチ用のコンフィグ構造体です。<br>
 * \attention
 * 現状指定可能なパラメーターはありませんが、将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomExFader_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomExFader_SetDefaultConfig, criAtomExPlayer_CalculateWorkSizeForFader, criAtomExPlayer_AttachFader
 */
typedef struct CriAtomExFaderConfigTag {
	CriSint32 reserved;					/*JP< 予約値（0を指定してください）	*/
} CriAtomExFaderConfig;

/*==========================================================================
 *      CRI AtomEx D-BAS API
 *=========================================================================*/
/*JP
 * \brief AtomEx D-BAS ID
 * \ingroup ATOMEXLIB_DBAS
 * \par 説明:
 * CriAtomExDbasId は、D-BAS管理用のIDです。<br>
 * ::criAtomExDbas_Create 関数でD-BASを作成すると取得できます。
 * <br>
 * アプリケーションがこのD-BAS IDを利用するのは、D-BASの破棄時のみです。
 * \sa criAtomExDbas_Create, criAtomExDbas_Destroy
 */
typedef CriAtomDbasId CriAtomExDbasId;

/*JP
 * \brief D-BAS作成パラメーター構造体
 * \ingroup ATOMEXLIB_DBAS
 * \par 説明:
 * ::criAtomExDbas_Create 関数の引数に指定する、D-BASの作成パラメーター構造体です。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExDbas_SetDefaultConfig
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExDbas_Create, criAtomExDbas_CalculateWorkSize, criAtomExDbas_SetDefaultConfig
 */
typedef CriAtomDbasConfig CriAtomExDbasConfig;

/* ========================================================================*/
/*       CRI AtomEx Streaming Cache API                                      */
/* ========================================================================*/
/*JP
 * \brief ストリーミングキャッシュID
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \par 説明:
 * CriAtomExStreamingCacheId は、ストリーミングキャッシュ管理用IDです。<br>
 * ::criAtomExStreamingCache_Create 関数でストリーミングキャッシュを作成すると取得できます。<br>
 * \sa criAtomExStreamingCache_Create
 */
typedef CriAtomStreamingCacheId CriAtomExStreamingCacheId;

/*JP
 * \brief ストリーミングキャッシュ作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \par 説明:
 * プレーヤーにストリーミングキャッシュを作成する際に、
 * キャッシュ可能なファイルサイズ等を登録するための構造体です。<br>
 * ::criAtomExStreamingCache_CalculateWorkSize 関数、
 * ::criAtomExStreamingCache_Create 関数の引数に指定します。<br>
 * <br>
 * \attention
 * 将来的にメンバが増える可能性があるため、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomStreamingCache_CalculateWorkSize, criAtomStreamingCache_Create
 */
typedef CriAtomStreamingCacheConfig CriAtomExStreamingCacheConfig;

/*==========================================================================
 *      CRI AtomEx 3D API
 *=========================================================================*/
/*JP
 * \brief 3次元ベクトル構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3次元ベクトルを扱うための構造体です。<br>
 * \sa CriAtomEx3dListener, CriAtomEx3dSource
 */
typedef struct CriAtomExVectorTag {
	CriFloat32 x;	/*JP< X軸の要素 */
	CriFloat32 y;	/*JP< Y軸の要素 */
	CriFloat32 z;	/*JP< Z軸の要素 */
} CriAtomExVector;

/*JP
 * \brief 3D音源ハンドル作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源ハンドルを作成する場合に使用する構造体です。<br>
 * 将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomEx3dSource_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomEx3dSource_SetDefaultConfig, criAtomEx3dSource_CalculateWorkSize, criAtomEx3dSource_Create
 */
typedef struct CriAtomEx3dSourceConfigTag {
	/*JP
		\brief 距離によるボイスプライオリティ減衰を有効にする
		\par 説明:
		距離によるプライオリティ減衰を有効にするかどうかを設定します。<br>
		本パラメーターをCRI_TRUEに設定して3D音源ハンドルを作成すると、その3D音源ハンドルで発音される
		3D音のボイスプライオリティは、リスナーとの距離によって減衰を受けるようになります。<br>
		ボイスプライオリティの減衰値は、そのボイスに設定されている最小距離で0、最大距離で-255です。<br>
		\par 備考:
		距離によるボイスプライオリティ減衰は、他のボイスプライオリティ設定と加算されて適用されます。<br>
		すなわち、最終的なボイスプライオリティは、以下のそれぞれを加算した値になります。<br>
		- データに設定されている値
		- ::criAtomExPlayer_SetVoicePriority 関数による設定値
		- 距離によるボイスプライオリティ減衰値
		
		本パラメーターのデフォルト値はCRI_FALSE（距離によるボイスプライオリティ無効）です。	
		\sa criAtomExPlayer_SetVoicePriority
	*/
	CriBool enable_voice_priority_decay;

	/*JP
	 *	\brief 3D音源における位置のランダム化に関する座標リストの要素数の最大値
	 *	\par 説明:
	 *	3D音源における位置のランダム化に関する座標リストの要素数の最大値を
	 *	設定します。<br>
	 *	本設定値に従って、内部的に位置座標リストの領域を確保します。
	 *	\par 備考:
	 *	3D音源における位置のランダム化を使用しない場合や
	 *	::CriAtomEx3dSourceRandomPositionConfig 構造体の変数 calculation_type に
	 *	対して、 ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_LIST を指定
	 *	しない場合、本設定値は 0 を指定してください。
	 *	\sa CriAtomEx3dSourceRandomPositionConfig
	 */
	CriUint32 random_position_list_max_length;
} CriAtomEx3dSourceConfig;

/*JP
 * \brief 3D音源ハンドルリスト作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源ハンドルリストを作成する場合に使用する構造体です。<br>
 * 現状指定可能なパラメーターはありませんが、将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomEx3dSourceList_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomEx3dSourceList_SetDefaultConfig, criAtomEx3dSourceList_CalculateWorkSize, criAtomEx3dSourceList_Create
 */
typedef struct CriAtomEx3dSourceListConfigTag {
	CriSint32 reserved;
} CriAtomEx3dSourceListConfig;

/*JP
 * \brief 3Dリスナーハンドル作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dリスナーハンドルを作成する場合に使用する構造体です。<br>
 * 現状指定可能なパラメーターはありませんが、将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomEx3dListener_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomEx3dListener_SetDefaultConfig, criAtomEx3dListener_CalculateWorkSize, criAtomEx3dListener_Create
 */
typedef struct CriAtomEx3dListenerConfigTag {
	CriSint32 reserved;
} CriAtomEx3dListenerConfig;

struct CriAtomEx3dSourceObjTag;
typedef struct CriAtomEx3dSourceObjTag CriAtomEx3dSourceObj;
/*JP
 * \brief 3D音源ハンドル
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源を扱うためのハンドルです。<br>
 * 3Dポジショニング機能に使用します。<br>
 * <br>
 * 3D音源のパラメーター、位置情報の設定等は、3D音源ハンドルを介して実行されます。
 * \sa criAtomEx3dSource_Create
 */
typedef CriAtomEx3dSourceObj *CriAtomEx3dSourceHn;

struct CriAtomEx3dSourceListObjTag;
typedef struct CriAtomEx3dSourceListObjTag CriAtomEx3dSourceListObj;
/*JP
 * \brief 3D音源ハンドルリスト
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源ハンドルを管理するリストハンドルです。<br>
 * 3Dポジショニング機能におけるマルチポジショニング再生に使用します。
 * \sa criAtomEx3dSourceList_Create
 */
typedef CriAtomEx3dSourceListObj *CriAtomEx3dSourceListHn;

struct CriAtomEx3dListenerObjTag;
typedef struct CriAtomEx3dListenerObjTag CriAtomEx3dListenerObj;
/*JP
 * \brief 3Dリスナーハンドル
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dリスナーを扱うためのハンドルです。<br>
 * 3Dポジショニング機能に使用します。<br>
 * <br>
 * 3Dリスナーのパラメーター、位置情報の設定等は、3Dリスナーハンドルを介して実行されます。
 * \sa criAtomEx3dListener_Create
 */
typedef CriAtomEx3dListenerObj *CriAtomEx3dListenerHn;

/*JP
 * \brief 3Dリージョンハンドル作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dリージョンハンドルを作成する場合に使用する構造体です。<br>
 * 現状指定可能なパラメーターはありませんが、将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomEx3dRegion_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomEx3dRegion_SetDefaultConfig, criAtomEx3dRegion_CalculateWorkSize, criAtomEx3dRegion_Create
 */
typedef struct CriAtomEx3dRegionConfigTag {
	CriSint32 reserved;					/*JP< 予約値（0を指定してください）	*/
} CriAtomEx3dRegionConfig;

struct CriAtomEx3dRegionObjTag;
typedef struct CriAtomEx3dRegionObjTag CriAtomEx3dRegionObj;
/*JP
 * \brief 3Dリージョンハンドル
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dリージョンを扱うためのハンドルです。<br>
 * 3Dトランシーバー機能に使用します。
 * \sa criAtomEx3dRegion_Create
 */
typedef CriAtomEx3dRegionObj *CriAtomEx3dRegionHn;

/*JP
 * \brief 3Dトランシーバーハンドル作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dトランシーバーハンドルを作成する場合に使用する構造体です。<br>
 * 現状指定可能なパラメーターはありませんが、将来パラメーターが追加される可能性があるため、
 * 本構造体を使用する際には ::criAtomEx3dTransceiver_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomEx3dTransceiver_SetDefaultConfig, criAtomEx3dTransceiver_CalculateWorkSize, criAtomEx3dTransceiver_Create
 */
typedef struct CriAtomEx3dTransceiverConfigTag {
	CriSint32 reserved;					/*JP< 予約値（0を指定してください） */
} CriAtomEx3dTransceiverConfig;

struct CriAtomEx3dTransceiverObjTag;
typedef struct CriAtomEx3dTransceiverObjTag CriAtomEx3dTransceiverObj;
/*JP
 * \brief 3Dトランシーバーハンドル
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dトランシーバーを扱うためのハンドルです。<br>
 * 3Dトランシーバー機能に使用します。<br>
 * <br>
 * 3Dトランシーバーのパラメーター、位置情報の設定等は、3Dトランシーバーハンドルを介して実行されます。
 * \sa criAtomEx3dTransceiver_Create
 */
typedef CriAtomEx3dTransceiverObj *CriAtomEx3dTransceiverHn;

/*JP
 * \brief 3D音源の位置のランダム化における位置座標の算出方法
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源の位置のランダム化における位置座標の算出方法の定義です。<br>
 * \sa CriAtomEx3dSourceRandomPositionConfig
 */
typedef enum CriAtomEx3dSourceRandomPositionCalculationTypeTag {
	/*JP
	 * \brief 設定無し
	 * \par 説明:
	 * 座標算出処理を行いません。
	 * \attention
	 * 本定義は情報取得用にのみ用いられます。<br>
	 * そのため、本設定値を ::CriAtomEx3dSourceRandomPositionConfig 構造体に
	 * 指定して ::criAtomEx3dSource_SetRandomPositionConfig 関数を実行した場合、
	 * エラーが発生します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_NONE = -1,

	/*JP
	 * \brief 矩形
	 * \par 説明:
	 * xz 平面上の矩形内で座標を算出します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_RECTANGLE = 0,

	/*JP
	 * \brief 直方体
	 * \par 説明:
	 * xyz 空間上の直方体内で座標を算出します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CUBOID,

	/*JP
	 * \brief 円
	 * \par 説明:
	 * xz 平面上の円内で座標を算出します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CIRCLE,

	/*JP
	 * \brief 円柱
	 * \par 説明:
	 * xyz 空間上の円柱内で座標を算出します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CYLINDER,

	/*JP
	 * \brief 球
	 * \par 説明:
	 * xyz 空間上の球内で座標を算出します。
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_SPHERE,

	/*JP
	 * \brief コールバック
	 * \par 説明:
	 * ユーザー定義のコールバック関数内にて座標を決定します。
	 * \par 備考:
	 * 別途座標算出を行うコールバック関数の登録が必要となります。
	 * \sa CriAtomEx3dSourceRandomPositionCalculationCbFunc, criAtomEx3dSource_SetRandomPositionCalculationCallback
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CALLBACK,

	/*JP
	 * \brief 座標リスト
	 * \par 説明:
	 * 事前に設定した座標リストを元に座標を決定します。
	 * \par 備考:
	 * 別途座標リストの設定が必要となります。
	 * \sa criAtomEx3dSource_SetRandomPositionList
	 */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_LIST,

	/* enum size is 4bytes */
	CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomEx3dSourceRandomPositionCalculationType;

/*JP
 * \brief 3D音源の位置のランダム化に関するコンフィグ構造体
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源の位置のランダム化に関する設定をまとめた構造体です。
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomEx3dSource_SetDefaultConfigForRandomPosition
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomEx3dSource_SetRandomPositionConfig, criAtomEx3dSource_SetDefaultConfigForRandomPosition
 */
typedef struct CriAtomEx3dSourceRandomPositionConfigTag {
	/*JP
	 * \brief 元の3D音源に追従するかどうか
	 * \par 説明:
	 * ランダムに決定された3D音源が元の3D音源に追従して動くかどうかを設定します。<br>
	 * CRI_TRUEの場合は3D音源の位置や向きに追従します。<br>
	 * CRI_FALSEの場合は3D音源に追従せず、再生開始時の位置に留まります。
	 */
	CriBool follows_original_source;

	/*JP
	 * \brief 座標の算出方法
	 * \par 説明:
	 * ランダムな座標を決定する際の算出方法を設定します。<br>
	 * 詳細は ::CriAtomEx3dSourceRandomPositionCalculationType を参照してください。
	 * \sa CriAtomEx3dSourceRandomPositionCalculationType
	 */
	CriAtomEx3dSourceRandomPositionCalculationType calculation_type;

	/*JP
	 * \brief 座標の算出方法に関する各種パラメーター配列
	 * \par 説明:
	 * 各座標の算出方法にて使用するパラメーター配列です。<br>
	 * calculation_type に設定した座標の算出方法に対するパラメーター配列に
	 * 対する各要素の設定は以下の通りです。
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_RECTANGLE
	 *     - 0: 左右幅(x軸), 1: 前後幅(z軸), 2: 0.0f
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CUBOID
	 *     - 0: 左右幅(x軸), 1: 前後幅(z軸), 2: 上下幅(y軸)
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CIRCLE
	 *     - 0: 半径, 1: 0.0f, 2: 0.0f
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CYLINDER
	 *     - 0: 半径, 1: 上下幅(y軸), 2: 0.0f
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_SPHERE
	 *     - 0: 半径, 1: 0.0f, 2: 0.0f
	 * .
	 * なお、各図形は元の3D音源を中心とします。
	 * \par 備考:
	 * 以下の座標の算出方法では、本パラメーターは無視されます。
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CALLBACK
	 * - ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_LIST
	 * .
	 * \sa CriAtomEx3dSourceRandomPositionCalculationType
	 */
	CriFloat32 calculation_parameters[CRIATOMEX3DSOURCE_MAX_RANDOM_POSITION_CALCULATION_PARAMETERS];
} CriAtomEx3dSourceRandomPositionConfig;

/*JP
 * \brief 3D音源の位置のランダム化における位置座標結果の詳細
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源の位置のランダム化における位置座標の結果出力時に、当該再生に関する詳細情報を通知するための構造体です。<br>
 * 3D音源の位置のランダム化における位置座標結果コールバック関数に引数として渡されます。
 * \sa CriAtomEx3dSourceRandomPositionResultCbFunc
 */
typedef struct CriAtomEx3dSourceRandomPositionResultInfoDetailTag {
	CriAtomEx3dSourceHn ex_3d_source;	/*JP< 元の3D音源のハンドル */
	CriAtomExVector result_pos;			/*JP< 最終的な位置座標 */
	CriAtomExVector offset_pos;			/*JP< 元の3D音源の位置に対するオフセット座標 */
} CriAtomEx3dSourceRandomPositionResultInfoDetail;

/*JP
 * \brief 3D音源の位置のランダム化における位置座標算出コールバック関数型
 * \ingroup ATOMEXLIB_3D
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	ex_3d_source		元の3D音源のハンドル
 * \param[out]	result_pos			処理結果の位置
 * \par 説明:
 * 3D音源のランダム化における位置座標算出コールバック関数の型です。<br>
 * ::criAtomEx3dSource_SetRandomPositionCalculationCallback 関数を実行することで、
 * コールバック関数の登録が可能です。<br>
 * 本コールバック関数は、3D音源の位置のランダム化における位置座標を算出する際に
 * 呼び出されます。<br>
 * アプリケーション側で位置座標を決定したい場合にご利用ください。
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * 本コールバック関数は ::CriAtomEx3dSourceRandomPositionConfig 構造体に
 * ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CALLBACK を指定したときのみ呼び出されます。
 * \sa CriAtomEx3dSourceRandomPositionConfig, criAtomEx3dSource_SetRandomPositionCalculationCallback
 */
typedef void (CRIAPI *CriAtomEx3dSourceRandomPositionCalculationCbFunc)(
	void *obj, const CriAtomEx3dSourceHn ex_3d_source, CriAtomExVector *result_pos);

/*JP
 * \brief 3D音源の位置のランダム化における位置座標結果コールバック関数型
 * \ingroup ATOMEXLIB_3D
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	result_info			位置座標結果の詳細
 * \par 説明:
 * 3D音源の位置のランダム化における位置座結果コールバック関数の型です。<br>
 * ::criAtomEx3dSource_SetRandomPositionResultCallback 関数を実行することで、
 * コールバック関数の登録が可能です。<br>
 * 本コールバック関数は、3D音源の位置のランダム化が有効な場合、位置座標の算出が行われた後に
 * 呼び出されます。<br>
 * アプリケーション側でランダム化された位置座標情報を取得したい場合にご利用ください。
 * \par 備考:
 * 元の3D音源に追従する設定が有効の場合、元の3D音源の位置の変更に応じて本コールバック関数が実行されます。
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。
 * \sa criAtomEx3dSource_SetRandomPositionResultCallback, CriAtomEx3dSourceRandomPositionResultInfoDetail
 */
typedef void (CRIAPI *CriAtomEx3dSourceRandomPositionResultCbFunc)(
	void *obj, const CriAtomEx3dSourceRandomPositionResultInfoDetail *result_info);

/*==========================================================================
 *      CRI AtomEx DSP API
 *=========================================================================*/

/*JP
 * \brief ピッチシフタDSPのアタッチ用コンフィグ構造体
 * \ingroup ATOMEXLIB_DSP
 * \par 説明:
 * ピッチシフタDSPをボイスプールにアタッチするための構造体です。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForDspPitchShifter
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AttachDspPitchShifter, criAtomExVoicePool_CalculateWorkSizeForDspPitchShifter, criAtomExVoicePool_SetDefaultConfigForDspPitchShifter
 */
typedef struct CriAtomExDspPitchShifterConfigTag {
	/*JP
		\brief 作成するDSPの数
		\par 説明:
		アタッチ先のボイス数と同じ値を指定する必要があります。<br>
	*/
	CriSint32 num_dsp;
	
	/*JP
		\brief DSPの最大チャンネル数
		\par 説明:
		DSPが処理可能な最大チャンネル数です。<br>
		アタッチ先ボイスプールのプレーヤー設定の最大チャンネル数（max_channels）と同じ値を指定する必要があります。<br>
	*/
	CriSint32 max_channels;
	
	/*JP
		\brief DSPの最大サンプリングレート
		\par 説明:
		DSPが処理可能な最大サンプリングレートです。<br>
		アタッチ先ボイスプールのプレーヤー設定の最大サンプリングレート（max_sampling_rate）と同じ値を指定する必要があります。<br>
	*/
	CriSint32 max_sampling_rate;
	
	/*JP
		\brief DSP固有設定の構造体
		\par 説明:
		DSP固有のコンフィグ設定を行います。<br>
		詳しくは ::CriAtomDspPitchShifterConfig をご参照ください。<br>
	*/
	CriAtomDspPitchShifterConfig specific;
} CriAtomExDspPitchShifterConfig;

/*JP
 * \brief タイムストレッチDSPのアタッチ用コンフィグ構造体
 * \ingroup ATOMEXLIB_DSP
 * \par 説明:
 * タイムストレッチDSPをボイスプールにアタッチするための構造体です。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExVoicePool_SetDefaultConfigForDspTimeStretch
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExVoicePool_AttachDspTimeStretch, criAtomExVoicePool_CalculateWorkSizeForDspTimeStretch, criAtomExVoicePool_SetDefaultConfigForDspTimeStretch
 */
typedef struct CriAtomExDspTimeStretchConfigTag {
	/*JP
		\brief 作成するDSPの数
		\par 説明:
		アタッチ先のボイス数と同じ値を指定する必要があります。<br>
	*/
	CriSint32 num_dsp;
	
	/*JP
		\brief DSPの最大チャンネル数
		\par 説明:
		DSPが処理可能な最大チャンネル数です。<br>
		アタッチ先ボイスプールのプレーヤー設定の最大チャンネル数（max_channels）と同じ値を指定する必要があります。<br>
	*/
	CriSint32 max_channels;
	
	/*JP
		\brief DSPの最大サンプリングレート
		\par 説明:
		DSPが処理可能な最大サンプリングレートです。<br>
		アタッチ先ボイスプールのプレーヤー設定の最大サンプリングレート（max_sampling_rate）と同じ値を指定する必要があります。<br>
	*/
	CriSint32 max_sampling_rate;
	
	/*JP
		\brief DSP固有設定の構造体
		\par 説明:
		DSP固有のコンフィグ設定を行います。<br>
		詳しくは ::CriAtomDspTimeStretchConfig をご参照ください。<br>
	*/
	CriAtomDspTimeStretchConfig specific;
} CriAtomExDspTimeStretchConfig;

/*==========================================================================
 *      CRI AtomEx Tween API
 *=========================================================================*/
/*JP
 * \brief Tweenのパラメータータイプ
 * \ingroup ATOMEXLIB_TWEEN
 * \par 説明:
 * Tweenで操作するパラメーターのタイプです。<br>
 * \sa CriAtomExTweenConfig
 */
typedef enum CriAtomExTweenParameterTypeTag {
	/*JP
		\brief 基本パラメーター
		\par 説明:
		ボリューム、ピッチ等、CriAtomExParameterIdで指定するパラメーターを操作する際に指定します。
	*/
	CRIATOMEX_PARAMETER_TYPE_BASIC,

	/*JP
		\brief AISACコントロール値
		\par 説明:
		AISACコントロール値を操作する際に指定します。
	*/
	CRIATOMEX_PARAMETER_TYPE_AISAC,

	/* enum size is 4bytes */
	CRIATOMEX_PARAMETER_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExTweenParameterType;

/*JP
 * \brief トゥイーン作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_TWEEN
 * \par 説明:
 * トゥイーンを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomExTween_Create 関数の引数に指定します。<br>
 * 本構造体を使用する際には ::criAtomExTween_SetDefaultConfig マクロを使用し、
 * 構造体の初期化を行ってください。
 * \sa criAtomExTween_SetDefaultConfig, criAtomExTween_CalculateWorkSize, criAtomExTween_Create
 */
typedef struct CriAtomExTweenConfigTag {
	/*JP
		\brief ID指定共用体
		\par 説明:
		パラメータータイプに従い、パラメーターIDまたはAISACコントロールIDを指定します。
	*/
	union CriAtomExTweenConfigParameterIdTag {
		/*JP
			\brief パラメーターID
			\par 説明:
			パラメータータイプに::CRIATOMEX_PARAMETER_TYPE_BASICを指定する場合、このメンバでパラメーターIDを指定します。
		*/
		CriAtomExParameterId parameter_id;

		/*JP
			\brief AISACコントロールID
			\par 説明:
			パラメータータイプに::CRIATOMEX_PARAMETER_TYPE_AISACを指定する場合、このメンバでAISACコントロールIDを指定します。
		*/
		CriAtomExAisacControlId aisac_control_id;
	} id;

	/*JP
		\brief パラメータータイプ
		\par 説明:
		パラメータータイプを指定します。
	*/
	CriAtomExTweenParameterType parameter_type;
} CriAtomExTweenConfig;

/*JP
 * \brief トゥイーンハンドル
 * \ingroup ATOMEXLIB_TWEEN
 * \par 説明:
 * CriAtomExTweenHn は、トゥイーンを操作するためのハンドルです。<br>
 * トゥイーンとは、簡単な手順でパラメーターの時間変化を行うためのモジュールです。
 * ::criAtomExTween_Create 関数でトゥイーンを作成すると、
 * 本関数はトゥイーン操作用に、この"トゥイーンハンドル"を返します。
 * <br>
 * パラメーターの時間変化の開始等、トゥイーンに対して行う操作は、
 * 全てトゥイーンハンドルを介して実行されます。<br>
 * また、AtomExプレーヤーにトゥイーンを関連づける際にも使用します。
 * \sa criAtomExTween_Create, criAtomExPlayer_AttachTween
 */
typedef struct CriAtomExTweenTag *CriAtomExTweenHn;

/*==========================================================================
 *      CRI AtomEx Voice Event API
 *=========================================================================*/
/*JP
 * \brief ボイスイベント
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ボイスイベントの種別を示す値です。<br>
 * ボイスイベントコールバックに引数として渡されます。<br>
 * \sa CriAtomExVoiceEventCbFunc, criAtomEx_SetVoiceEventCallback
 */
typedef enum CriAtomExVoiceEventTag {
	/*JP
	 * \brief ボイスの新規確保
	 * \par 説明:
	 * ボイスプールから空きボイスが取得され、新規に発音が開始されたことを示す値です。<br>
	 */
	CRIATOMEX_VOICE_EVENT_ALLOCATE = 0,
	
	/*JP
	 * \brief ボイスの奪い取り
	 * \par 説明:
	 * 再生中のボイスが奪い取られたことを示す値です。<br>
	 * 再生中のボイスが1つ停止され、そのボイスが別の音声の再生に再利用されました。<br>
	 * 停止される波形データと新規に再生する波形データは、
	 * 異なるボイスリミットグループに所属しています。<br>
	 * （どちらか一方、もしくは両方の波形データがボイスリミットグループに所属していない場合も、
	 * ボイスの奪い取り発生時に本イベントが発生します。）<br>
	 */
	CRIATOMEX_VOICE_EVENT_ALLOCATE_AND_REMOVE,
	
	/*JP
	 * \brief グループ内でのボイスの奪い取り
	 * \par 説明:
	 * 再生中のボイスが奪い取られたことを示す値です。<br>
	 * 再生中のボイスが1つ停止され、そのボイスが別の音声の再生に再利用されました。<br>
	 * ::CRIATOMEX_VOICE_EVENT_ALLOCATE_AND_REMOVE と異なり、
	 * 停止される波形データと新規に再生する波形データとが、
	 * 同一のボイスリミットグループに所属する場合に本イベントが発生します。<br>
	 */
	CRIATOMEX_VOICE_EVENT_ALLOCATE_AND_REMOVE_IN_GROUP,
	
	/*JP
	 * \brief ボイスの奪い取りとボイス数の調整
	 * \par 説明:
	 * 再生中のボイスが奪い取られ、さらにボイス数の調整が行われたことを示す値です。<br>
	 * 2つのボイスが停止され、そのうち1つのボイスが別の音声の再生に再利用されます。<br>
	 * （停止されただけのボイスは、空きボイスとしてボイスプールに戻されます。）<br>
	 * 音声データの再生要件を満たすボイスを奪い取った結果、グループ内のボイス数があふれ、
	 * グループ内でボイス数を調整した場合に本イベントが発生します。<br>
	 * \par 備考:
	 * このケースは、ボイスリミットグループ上限数分のHCAデータを再生中に、
	 * 同一ボイスリミットグループに所属するADXデータを再生した場合等に発生します。<br>
	 * ADXデータを再生するため、グループ外のADXボイスを停止した結果、
	 * HCAデータとADXデータの合計数がボイスリミットグループ上限を超えた場合、
	 * 低プライオリティのHCAデータがさらに1つ停止される形になります。<br>
	 * （1つの発音リクエストに対し、2つの音声が停止する形になります。）<br>
	 */
	CRIATOMEX_VOICE_EVENT_ALOOCATE_AND_REMOVE_TWO,
	
	/*JP
	 * \brief 発音要求の棄却
	 * \par 説明:
	 * 再生しようとした波形データのプライオリティが、
	 * 全ボイス中で最も低かった場合（他のボイスを奪い取れなかった場合）に、
	 * 本イベントが発生します。<br>
	 */
	CRIATOMEX_VOICE_EVENT_REJECT,
	
	/*JP
	 * \brief グループ内での発音要求の棄却
	 * \par 説明:
	 * 再生しようとした波形データのプライオリティが、
	 * 所属するグループ内で最も低かった場合（グループ内の他のボイスを奪い取れなかった場合）に、
	 * 本イベントが発生します。<br>
	 */
	CRIATOMEX_VOICE_EVENT_REJECT_BY_GROUP_LIMIT,
	
	/*JP
	 * \brief ボイスの停止
	 * \par 説明:
	 * 再生完了や再生停止要求により、ボイスが停止された場合に本イベントが発生します。<br>
	 * 停止されたボイスは、空きボイスとしてボイスプールに戻されます。<br>
	 */
	CRIATOMEX_VOICE_EVENT_REMOVE,
	
	CRIATOMEX_VOICE_EVENT_ENUM_IS_4BYTE = 0x7FFFFFFF
} CriAtomExVoiceEvent;

/*JP
 * \brief ボイスの詳細情報
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ボイスイベント発生時のボイスの詳細情報を保持した構造体です。<br>
 * ボイスイベントコールバックに引数として渡されます。<br>
 * \sa CriAtomExVoiceEventCbFunc, criAtomEx_SetVoiceEventCallback
 */
typedef struct CriAtomExVoiceInfoDetailTag {
	CriAtomExPlaybackId playback_id;					/*JP< 再生ID					*/
	CriAtomExSourceInfo cue_info;						/*JP< キュー情報				*/
	CriAtomExSourceInfo wave_info;						/*JP< 波形情報					*/
	CriSint32 group_no;									/*JP< グループ番号				*/
	CriSint32 priority;									/*JP< プライオリティ			*/
	CriAtomExVoiceControlMethod control_method;			/*JP< ボイス制御方法			*/
	CriAtomExVoiceAllocationMethod allocation_method;	/*JP< ボイス確保方法			*/
	CriUint32 identifier;								/*JP< ボイスプール識別子		*/
	CriAtomExFormat format;								/*JP< フォーマット種別			*/
	CriSint32 sampling_rate;							/*JP< サンプリング周波数		*/
	CriSint32 num_channels;								/*JP< チャンネル数				*/
	CriBool streaming_flag;								/*JP< ストリーム再生かどうか	*/
	CriAtomPlayerHn atom_player;						/*JP< 発音に使用するプレーヤー	*/
} CriAtomExVoiceInfoDetail;

/*JP
 * \brief ボイスイベントコールバック関数型
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	voice_event			発生イベント
 * \param[in]	request				発音要求の詳細情報
 * \param[in]	removed				停止ボイスの詳細情報
 * \param[in]	removed_in_group	グループ内停止ボイスの詳細情報
 * \par 説明:
 * ボイスイベントの通知に使用される、コールバック関数の型です。<br>
 * ::criAtomEx_SetVoiceEventCallback 関数に本関数型のコールバック関数を登録することで、
 * ボイスイベント発生時にコールバックを受け取ることが可能となります。<br>
 * <br>
 * コールバック関数の第3〜5引数（request、removed、removed_in_group）に入る値は、
 * ボイスイベントの種別（第2引数のvoice_eventの値）により以下のように変わります。<br>
 * <br>
 * (1) CRIATOMEX_VOICE_EVENT_ALLOCATE時<br>
 * 第3引数requestに、ボイスを取得した発音リクエストの情報が入ります。<br>
 * 第4引数、第5引数にはNULLが入ります。<br>
 * <br>
 * (2) CRIATOMEX_VOICE_EVENT_ALLOCATE_AND_REMOVE時<br>
 * 第3引数requestに、ボイスを取得した発音リクエストの情報が入ります。<br>
 * 第4引数removedには、ボイスを奪い取られ、発音が停止した再生の情報が入ります。<br>
 * 第5引数にはNULLが入ります。<br>
 * <br>
 * (3) CRIATOMEX_VOICE_EVENT_ALLOCATE_AND_REMOVE_IN_GROUP時<br>
 * 第3引数requestに、ボイスを取得した発音リクエストの情報が入ります。<br>
 * 第4引数にはNULLが入ります。<br>
 * 第5引数removed_in_groupには、ボイスを奪い取られ、発音が停止した再生の情報が入ります。<br>
 * <br>
 * (4) CRIATOMEX_VOICE_EVENT_ALOOCATE_AND_REMOVE_TWO時<br>
 * 第3引数requestに、ボイスを取得した発音リクエストの情報が入ります。<br>
 * 第4引数removedには、ボイスを奪い取られ、発音が停止した再生の情報が入ります。<br>
 * 第5引数removed_in_groupには、グループ内の発音数調整により、停止された再生の情報が入ります。<br>
 * <br>
 * (5) CRIATOMEX_VOICE_EVENT_REJECT時<br>
 * 第3引数requestに、ボイスの取得が棄却された発音リクエストの情報が入ります。<br>
 * 第4引数、第5引数にはNULLが入ります。<br>
 * <br>
 * (6) CRIATOMEX_VOICE_EVENT_REJECT_BY_GROUP_LIMIT時<br>
 * 第3引数requestに、ボイスの取得が棄却された発音リクエストの情報が入ります。<br>
 * 第4引数、第5引数にはNULLが入ります。<br>
 * <br>
 * (7) CRIATOMEX_VOICE_EVENT_REMOVE時<br>
 * 第4引数removedに、再生が終了または停止したボイスの情報が入ります。<br>
 * 第3引数、第5引数にはNULLが入ります。<br>
 * \attention
 * 本コールバックでは、ボイス単位のリミット制御
 *（ボイスプライオリティに基づいた波形単位のプライオリティ制御）
 * に関する情報のみが取得可能です。<br>
 * ボイス取得前にキューリミット制御で発音が棄却された場合、
 * 本コールバックにCRIATOMEX_VOICE_EVENT_REJECT等の情報は返されません。<br>
 * （カテゴリキュープライオリティによる制御に関する情報は、現状取得できません。）<br>
 * <br>
 * ボイスイベントコールバック時点では、 request->atom_player
 * には再生すべき音声データがまだセットされていません。<br>
 * そのため、再生する音声データの情報等については、 atom_player に問い合わせず、
 * ::CriAtomExVoiceInfoDetail 構造体のメンバ値を使用してください。<br>
 * <br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_SetVoiceEventCallback, CriAtomExVoiceEvent, CriAtomExVoiceInfoDetail
 */
typedef void (CRIAPI *CriAtomExVoiceEventCbFunc)(
	void *obj, CriAtomExVoiceEvent voice_event,
	const CriAtomExVoiceInfoDetail *request,
	const CriAtomExVoiceInfoDetail *removed,
	const CriAtomExVoiceInfoDetail *removed_in_group);

/*JP
 * \brief ボイス情報コールバック関数型
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	voice_info			ボイスの詳細情報
 * \par 説明:
 * ボイス情報の通知に使用される、コールバック関数の型です。<br>
 * ::criAtomEx_EnumerateVoiceInfos 関数に本関数型のコールバック関数を登録することで、
 * 再生中のボイスの情報をコールバックで受け取ることが可能となります。<br>
 * \attention
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_EnumerateVoiceInfos, CriAtomExVoiceInfoDetail
 */
typedef void (CRIAPI *CriAtomExVoiceInfoCbFunc)(
	void *obj, const CriAtomExVoiceInfoDetail *voice_info);

/*JP
 * \brief ボイス停止情報取得用構造体
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ボイス停止情報を取得するための構造体です。<br>
 * ::CriAtomExMonitoringVoiceStopCbFunc 関数型の引数として渡されます。<br>
 * \sa CriAtomExMonitoringVoiceStopCbFunc
 */
typedef struct CriAtomExMonitoringVoiceStopInfoTag {
	CriAtomExPlaybackId playback_id;		/*JP< 再生ID			*/
	CriAtomVoiceStopReason reason;			/*JP< 停止理由			*/
	CriAtomPlayerHn atom_player;			/*JP< 停止AtomPlayer	*/
} CriAtomExMonitoringVoiceStopInfo;

/*JP
 * \brief ボイス停止を監視するコールバック関数型
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	obj					ユーザ指定オブジェクト
 * \param[in]	voice_stop			ボイス停止内容
 * \par 説明:
 * 監視している再生ID内で発音しているボイスが停止した際に使用される、コールバック関数の型です。<br>
 * \attention
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_SetMonitoringVoiceStopCallback
 */
typedef void (CRIAPI *CriAtomExMonitoringVoiceStopCbFunc)(void *obj, CriAtomExMonitoringVoiceStopInfo* voice_stop);


/*==========================================================================
 *      CRI AtomEx Cue Link Callback API
 *=========================================================================*/
/*JP
 * \brief キューリンクコールバックタイプ
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef enum CriAtomExCueLinkTypeTag {
	CRIATOMEX_CUELINK_TYPE_STATIC		=  0,	/*JP< 静的リンク */
	CRIATOMEX_CUELINK_TYPE_DYNAMIC		=  1,	/*JP< 動的リンク */

	/* enum size is 4bytes */
	CRIATOMEX_CUELINK_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExCueLinkType;

/*JP
 * \brief キューリンクコールバック用Info構造体
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef struct CriAtomExCueLinkInfoTag {
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル		*/
	CriAtomExPlaybackId base_id;		/*JP< リンク元再生ID		*/
	CriAtomExSourceInfo base_cue;		/*JP< リンク元キュー		*/
	CriAtomExPlaybackId target_id;		/*JP< リンク先再生ID		*/
	CriAtomExSourceInfo target_cue;		/*JP< リンク先キュー		*/
	CriAtomExCueLinkType link_type;		/*JP< リンクタイプ			*/
} CriAtomExCueLinkInfo;

/*JP
 * \brief キューリンクコールバック
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	info	キューリンク情報
 * \return				未使用
 * AtomExライブラリのキューリンクコールバック関数型です。<br>
 * コールバック関数の登録には ::criAtomEx_SetCueLinkCallback 関数を使用します。<br>
 * 登録したコールバック関数は、ライブラリ内でキューリンクが処理されるタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_SetCueLinkCallback
 */
typedef CriSint32 (CRIAPI *CriAtomExCueLinkCbFunc)(void* obj, const CriAtomExCueLinkInfo* info);

/*==========================================================================
 *      CRI AtomEx Playback Cancel Callback API
 *=========================================================================*/
/*JP
 * \brief プレイバックキャンセルタイプ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * プレイバックキャンセルの種別を示す値です。<br>
 * \sa CriAtomExPlaybackCancelInfo, criAtomEx_SetPlaybackCancelCallback
 */
typedef enum CriAtomExPlaybackCancelTypeTag {
	/*JP
	 * \brief キューリミット
	 * \par 説明:
	 * キューリミットによる発音キャンセル。<br>
	 */
	CRIATOMEX_PLAYBACK_CANCEL_TYPE_CUE_LIMIT = 0,

	/*JP
	 * \brief カテゴリキューリミット
	 * \par 説明:
	 * カテゴリキューリミットによる発音キャンセル。<br>
	 */
	CRIATOMEX_PLAYBACK_CANCEL_TYPE_CATEGORY_CUE_LIMIT,
	
	/*JP
	 * \brief プライオリティ
	 * \par 説明:
	 * プライオリティによる発音キャンセル。<br>
	 */
	CRIATOMEX_PLAYBACK_CANCEL_TYPE_PROBABILITY,

	/*JP
	 * \brief キューリミット
	 * \par 説明:
	 * キューリミットによる発音停止。<br>
	 */
	CRIATOMEX_PLAYBACK_CANCEL_TYPE_STOP_BY_CUE_LIMIT,
		
	/*JP
	 * \brief スイッチ
	 * \par 説明:
	 * スイッチによる発音キャンセル。<br>
	 */
	CRIATOMEX_PLAYBACK_CANCEL_TYPE_SWITCH,


	CRIATOMEX_PLAYBACK_CANCEL_TYPE_ENUM_IS_4BYTE = 0x7FFFFFFF
} CriAtomExPlaybackCancelType;

/*JP
 * \brief プレイバックキャンセルコールバック用Info構造体
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef struct CriAtomExPlaybackCancelInfoTag {
	CriAtomExPlaybackCancelType type;	/*JP< キャンセルタイプ		*/
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル		*/
	CriAtomExPlaybackId id;				/*JP< 再生ID				*/
} CriAtomExPlaybackCancelInfo;

/*JP
 * \brief プレイバックキャンセルコールバック
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	info	プレイバックキャンセル情報
 * \return				未使用
 * AtomExライブラリのプレイバックキャンセルコールバック関数型です。<br>
 * コールバック関数の登録には ::criAtomEx_SetPlaybackCancelCallback 関数を使用します。<br>
 * 登録したコールバック関数は、ライブラリ内で再生開始処理がキャンセルされるタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_SetPlaybackCancelCallback
 */
typedef void (CRIAPI *CriAtomExPlaybackCancelCbFunc)(void *obj, const CriAtomExPlaybackCancelInfo* info);

/*==========================================================================
 *      CRI AtomEx Track Transition Callback API
 *=========================================================================*/
/*JP
 * \brief トラックトランジションバイセレクターコールバック用Info構造体
 * \ingroup ATOMEXLIB_GLOBAL
 */
typedef struct CriAtomExTrackTransitionBySelectorInfoTag {
	CriAtomExPlayerHn player;			/*JP< プレーヤーハンドル		*/
	CriAtomExPlaybackId id;				/*JP< 再生ID				*/
	const CriChar8* selector;			/*JP< セレクター名			*/
	const CriChar8* label;				/*JP< ラベル名				*/
} CriAtomExTrackTransitionBySelectorInfo;

/*JP
 * \brief トラックトランジションバイセレクターコールバック
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * \param[in]	obj		ユーザ指定オブジェクト
 * \param[in]	info	トラックトランジションバイセレクター情報
 * \return				未使用
 * AtomExライブラリのトラックトランジションバイセレクターコールバック関数型です。<br>
 * コールバック関数の登録には ::criAtomEx_SetTrackTransitionBySelectorCallback 関数を使用します。<br>
 * 登録したコールバック関数は、ライブラリ内でトランジション処理が開始されるタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * \sa criAtomEx_SetTrackTransitionBySelectorCallback
 */

typedef void (CRIAPI *CriAtomExTrackTransitionBySelectorCbFunc)(void *obj, const CriAtomExTrackTransitionBySelectorInfo* info);


/*==========================================================================
 *      CRI AtomEx Sound Object API
 *=========================================================================*/
/*JP
 * \brief サウンドオブジェクト作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \par 説明:
 * サウンドオブジェクトを作成する際に、動作仕様を指定するための構造体です。<br>
 * ::criAtomExSoundObject_Create 関数の引数に指定します。<br>
 * <br>
 * 作成されるサウンドオブジェクトは、ハンドル作成時に本構造体で指定された設定に応じて、
 * 内部リソースを必要なだけ確保します。<br>
 * サウンドオブジェクトが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて変化します。
 * \attention
 * 将来的にメンバが増える可能性があるため、各メンバの設定前に必ず
 * ::criAtomExSoundObject_SetDefaultConfig マクロを使用してデフォルト値をセットしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExSoundObject_Create,  criAtomExSoundObject_SetDefaultConfig
 */
typedef struct CriAtomExSoundObjectConfigTag {
	/*JP 
	 * \brief ボイスリミットスコープの有効化
	 * \par 説明:
	 * ボイスリミットグループによる発音数制御を、このサウンドオブジェクトで独立して行うかどうかを指定します。<br>
	 * CRI_TRUEを指定すると、このサウンドオブジェクトに関連付けられたExプレーヤーから再生した音声の発音数について、<br>
	 * このサウンドオブジェクト内でのみカウントし、ボイスリミットグループによる発音数制御を行います。<br>
	 * CRI_FALSEを指定した場合、サウンドオブジェクトではボイスリミットグループによる発音数制御は行わず、<br>
	 * CRI Atomライブラリ全体での発音数制御に従います。
	 * \par 備考:
	 * デフォルト値はCRI_FALSE（サウンドオブジェクトでボイスリミットを行わない）です。
	*/
	CriBool enable_voice_limit_scope;
	/*JP 
	 * \brief カテゴリキューリミットスコープの有効化
	 * \par 説明:
	 * カテゴリによるキュー再生数制御を、このサウンドオブジェクトで独立して行うかどうかを指定します。<br>
	 * CRI_TRUEを指定すると、このサウンドオブジェクトに関連付けられたExプレーヤーから再生したキューのカテゴリ再生数について、<br>
	 * このサウンドオブジェクト内でのみカウントし、再生数制御を行います。<br>
	 * CRI_FALSEを指定した場合、このサウンドオブジェクトではカテゴリによる再生数制御は行わず、<br>
	 * CRI Atomライブラリ全体でのカテゴリによる再生数制御に従います。
	 * \par 備考:
	 * デフォルト値はCRI_FALSE（サウンドオブジェクトでカテゴリキューリミットを行わない）です。
	*/
	CriBool enable_category_cue_limit_scope;
} CriAtomExSoundObjectConfig;

struct CriAtomExSoundObjectTag;
typedef struct CriAtomExSoundObjectTag CriAtomExSoundObjectObj;
/*JP
 * \brief サウンドオブジェクトハンドル
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \par 説明:
 * CriAtomExSoundObjectHn は、サウンドオブジェクトを操作するためのハンドルです。<br>
 * <br>
 * ::criAtomExSoundObject_Create 関数でサウンドオブジェクトを作成すると、
 * 関数はサウンドオブジェクト操作用に、この"サウンドオブジェクトハンドル"を返します。
 * <br>
 * サウンドオブジェクトに対して行う操作は、全てサウンドオブジェクトハンドルを介して実行されます。
 * \par 備考:
 * サウンドオブジェクトとは、複数の音が鳴る「物体」や「空間」、「状況」等を抽象 化した概念です。<br>
 * <br>
 * サウンドオブジェクトをアプリケーション内の「物体」や「空間」、「状況」等に関連付けることにより、
 * より自然に音声のコントロールを行うことができます。<br>
 * 例えば、あるキャラクタが存在するとき、そのキャラクタ用のサウンドオブジェクトを作成することで、
 * キャラクタ毎に発音数制限を行ったり、キャラクタ消滅とともにまとめて再生停止を行う、
 * というようなことが簡単にできるようになります。<br>
 * <br>
 * サウンドオブジェクト自身は、発音のための機能を持ちません。
 * 発音や個別のコントロールは、サウンドオブジェクトに関連付けられたAtomExプレーヤーで行います。
 * \sa criAtomExSoundObject_Create
 */
typedef CriAtomExSoundObjectObj *CriAtomExSoundObjectHn;

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
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief ライブラリ初期化用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ライブラリを使用するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomExConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ::CriAtomExConfig 構造体のacf_infoメンバに値を設定している場合、本関数は失敗し-1を返します。<br>
 * 初期化処理内でACFデータの登録を行う場合は、本関数値を使用したメモリ確保ではなくADX2システムによる
 * メモリアロケーターを使用したメモリ確保処理が必要になります。
 * \sa CriAtomExConfig, criAtomEx_Initialize
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSize(const CriAtomExConfig *config);

/*JP
 * \brief ライブラリの初期化
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriBool		初期化できたかどうか？（できた：CRI_TRUE／できない：CRI_FALSE）
 * \par 説明:
 * ライブラリを初期化します。<br>
 * ライブラリの機能を利用するには、必ずこの関数を実行する必要があります。<br>
 * （ライブラリの機能は、本関数を実行後、 ::criAtomEx_Finalize 関数を実行するまでの間、
 * 利用可能です。）<br>
 * <br>
 * ライブラリを初期化する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * ::CriAtomExConfig 構造体のacf_infoメンバを使用すると初期化処理内でACFデータの登録が行えます。<br>
 * 初期化処理内でのACFデータ登録を行う場合は、User Allocator方式でメモリ領域を確保する必要があります。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザはライブラリにメモリ確保関数を登録しておきます。<br>
 * workにNULL、work_sizeに0を指定して本関数を呼び出すことで、
 * ライブラリは登録済みのメモリ確保関数を使用して必要なメモリを自動的に確保します。<br>
 * ユーザがワーク領域を用意する必要はありません。<br>
 * 初期化時に確保されたメモリは、終了処理時（ ::criAtomEx_Finalize 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtomEx_CalculateWorkSize 関数で取得可能です。<br>
 * 初期化処理の前に ::criAtomEx_CalculateWorkSize 関数で取得したサイズ分のメモリを予め
 * 確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域はライブラリの終了処理（ ::criAtomEx_Finalize 関数）
 * を行なうまでの間、ライブラリ内で利用され続けます。<br>
 * ライブラリの終了処理を行なう前に、ワーク領域のメモリを解放しないでください。<br>
 * \par 例:
 * 【User Allocator方式によるライブラリの初期化】<br>
 * User Allocator方式を用いる場合、ライブラリの初期化／終了の手順は以下の以下の通りです。<br>
 * 	-# 初期化処理実行前に、 ::criAtomEx_SetUserAllocator 関数を用いてメモリ確保／解放関数を登録する。<br>
 * 	-# 初期化用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ::criAtomEx_Initialize 関数で初期化処理を行う。<br>
 * （workにはNULL、work_sizeには0を指定する。）<br>
 * 	-# アプリケーション終了時に ::criAtomEx_Finalize 関数で終了処理を行なう。<br>
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
 * 	CriAtomExConfig config;	// ライブラリ初期化用コンフィグ構造体
 * 		:
 * 	// 独自のメモリアロケーターを登録
 * 	criAtomEx_SetUserAllocator(user_malloc, user_free, NULL);
 * 	
 * 	// ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * 	criAtomEx_SetDefaultConfig(&config);
 * 	
 * 	// ライブラリの初期化
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリは、登録したメモリ確保関数を使って確保される。
 * 	criAtomEx_Initialize(&config, NULL, 0);
 * 		:
 * 	// アプリケーションのメイン処理
 * 		:
 * 	// アプリケーションを終了する際に終了処理を行う
 * 	// →初期化時に確保されたメモリは、登録したメモリ解放関数を使って解放される。
 * 	criAtomEx_Finalize();
 * 		:
 * }
 * \endcode
 * <br>
 * 【Fixed Memory方式によるライブラリの初期化】<br>
 * Fixed Memory方式を用いる場合、ライブラリの初期化／終了の手順は以下の以下の通りです。<br>
 * 	-# 初期化用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ライブラリの初期化に必要なワーク領域のサイズを、 ::criAtomEx_CalculateWorkSize 
 * 関数を使って計算する。<br>
 * 	-# ワーク領域サイズ分のメモリを確保する。<br>
 * 	-# ::criAtomEx_Initialize 関数で初期化処理を行う。<br>
 * （workには確保したメモリのアドレスを、work_sizeにはワーク領域のサイズを指定する。）<br>
 * 	-# アプリケーション終了時に ::criAtomEx_Finalize 関数で終了処理を行なう。<br>
 * 	-# ワーク領域のメモリを解放する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 	CriAtomExConfig config;	// ライブラリ初期化用コンフィグ構造体
 * 	void *work;				// ワーク領域アドレス
 * 	CriSint32 work_size;	// ワーク領域サイズ
 * 		:
 * 	// ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * 	criAtomEx_SetDefaultConfig(&config);
 * 	
 * 	// ライブラリの初期化に必要なワーク領域のサイズを計算
 * 	work_size = criAtomEx_CalculateWorkSize(&config);
 * 	
 * 	// ワーク領域用にメモリを確保
 * 	work = malloc((size_t)work_size);
 * 	
 * 	// ライブラリの初期化
 * 	// →確保済みのワーク領域を指定する。
 * 	criAtomEx_Initialize(&config, NULL, 0);
 * 		:
 * 	// アプリケーションのメイン処理
 * 	// →この間、確保したメモリは保持し続ける。
 * 		:
 * 	// アプリケーションを終了する際に終了処理を行う
 * 	criAtomEx_Finalize();
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
 * 現状、ストリーム再生を行うかどうかに関係なく、 Atom ライブラリは必ず 
 * CRI File System ライブラリの機能を使用します。<br>
 * そのため、CRI File Systemライブラリの初期化が行われていない場合、
 * Atom ライブラリは初期化処理時に内部で CRI File System ライブラリの初期化を行います。<br>
 * <br>
 * Atom ライブラリが内部で CRI File System ライブラリを初期化する場合、
 * CRI File System の初期化パラメーターとして、 ::CriAtomExConfig 構造体の
 * fs_config パラメーターを使用します。<br>
 * fs_config が NULL の場合、 Atom ライブラリはデフォルトパラメーター（ 
 * ::criFs_SetDefaultConfig マクロの設定値）で CRI File System ライブラリを初期化します。<br>
 * <br>
 * 尚、本関数を実行する時点で、既に CRI File System ライブラリが初期化済みである場合、
 * 本関数内では CRI File System ライブラリの初期化は行われません。<br>
 * <br>
 * 本関数を実行後、必ず対になる ::criAtomEx_Finalize 関数を実行してください。<br>
 * また、 ::criAtomEx_Finalize 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa CriAtomExConfig, criAtomEx_Finalize, criAtomEx_SetUserAllocator, criAtomEx_CalculateWorkSize
 */
CriBool CRIAPI criAtomEx_Initialize(
	const CriAtomExConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ライブラリの終了
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ライブラリを終了します。<br>
 * \attention
 * ::criAtomEx_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomEx_Initialize
 */
void CRIAPI criAtomEx_Finalize(void);

/*JP
 * \brief ライブラリ初期化状態の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \return	CriBool		初期化中かどうか
 * \retval	CRI_FALSE	未初期化状態
 * \retval	CRI_TRUE	初期化済み
 * \par 説明:
 * ライブラリが既に初期化されているかどうかをチェックします。<br>
 * \sa criAtomEx_Initialize, criAtomEx_Finalize
 */
CriBool CRIAPI criAtomEx_IsInitialized(void);

/*JP
 * \brief サーバー処理の実行
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリの内部状態を更新します。<br>
 * アプリケーションは、この関数を定期的に実行する必要があります。<br>
 * <br>
 * サーバー処理を実行すべき回数は、ライブラリ初期化時のパラメーターに依存します。<br>
 * ライブラリ初期化時にスレッドモデルを ::CRIATOMEX_THREAD_MODEL_MULTI に設定した場合、
 * リアルタイム性の要求される処理は全てCRI Atomライブラリ内で定期的に自動実行されるため、
 * 本関数の呼び出し頻度は少なくても問題は発生しません。<br>
 * （最低でも毎秒1回程度実行されていれば、音切れ等の問題が発生することはありません。）<br>
 * ライブラリ初期化時にスレッドモデルを ::CRIATOMEX_THREAD_MODEL_SINGLE や
 * ::CRIATOMEX_THREAD_MODEL_USER_MULTI に設定した場合、ファイルの読み込み管理や、
 * データのデコード、音声の出力等、音声再生に必要な処理のほぼ全てが本関数内で実行されます。<br>
 * また、音声再生処理に同期して、CRI File Systemライブラリのファイルアクセスとデータ展開処理を実行します。<br>
 * そのため、ライブラリ初期化時に指定したサーバー処理の実行頻度（ ::CriAtomExConfig 構造体の
 * server_frequency ）を下回る頻度で本関数を実行した場合や、
 * 大きいデータの読み込み、圧縮ファイルの読み込み等を行う場合、
 * 音切れ等の問題が発生する可能性があるので注意してください。<br>
 * \par 備考:
 * ライブラリ初期化時にスレッドモデルを ::CRIATOMEX_THREAD_MODEL_MULTI に設定した場合でも、
 * 本関数を実行する必要があります。<br>
 * （スレッドモデルを ::CRIATOMEX_THREAD_MODEL_MULTI の場合、ステータス更新等、ごく一部の
 * 処理のみを行うため、本関数内で長時間処理がブロックされることはありません。）
 * <br>
 * CRI File Systemライブラリのサーバー処理は、CRI Atomライブラリ内部で実行されます。<br>
 * そのため、本関数を実行している場合、アプリケーション側で別途CRI File Systemライブラリ
 * のサーバー処理を呼び出す必要はありません。<br>
 */
void CRIAPI criAtomEx_ExecuteMain(void);

/*JP
 * \brief ユーザーマルチスレッド用サーバー処理の実行
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * CRI Atomライブラリのみを更新します。<br>
 * スレッドモデルが::CRIATOMEX_THREAD_MODEL_USER_MULTIの場合、
 * アプリケーションは、この関数を定期的に実行する必要があります。<br>
 * <br>
 * ファイルの読み込み管理や、データのデコード、音声の出力等、
 * 音声再生に必要な処理のほぼ全てが本関数内で実行されます。<br>
 * そのため、ライブラリ初期化時に指定したサーバー処理の実行頻度（ ::CriAtomExConfig 構造体の
 * server_frequency ）を下回る頻度で本関数を実行した場合、音切れ等の問題が発生する可能性
 * があります。<br>
 * また、本関数は::criAtomEx_ExecuteMain 関数と異なり、CRI File Systemライブラリのサーバー処理を実行しません。<br>
 * アプリケーションが必要なサーバー処理を正しい順序で実行してください。<br>
 * \par 備考:
 * ::CRIATOMEX_THREAD_MODEL_SINGLE に設定した場合、サーバー処理の排他制御が行われないので、
 * 複数のスレッドから呼び出さないようにしてください。<br>
 * \sa criAtomEx_ExecuteMain
 */
void CRIAPI criAtomEx_ExecuteAudioProcess(void);

/*JP
 * \brief サーバー処理の割り込みを防止
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * サーバー処理の割り込み抑止します。<br>
 * 本関数実行後、::criAtomEx_Unlock 関数実行までの間、サーバー処理の動作が抑止されます。<br>
 * 複数のAPIを同一オーディオフレーム内で確実に実行したい場合には、本関数でサーバー処理の
 * 割り込みを防止し、それらの関数を実行してください。
 * \par 例:
 * \code
 * 	：
 * // サーバー処理の割り込みを防止
 * criAtomEx_Lock();
 * 
 * // 複数の音声のパラメーターを同時に更新
 * criAtomExPlayer_SetVolume(player1, 0.5f);
 * criAtomExPlayer_SetVolume(player2, 0.6f);
 * criAtomExPlayer_SetVolume(player3, 0.7f);
 * criAtomExPlayer_SetVolume(player4, 0.8f);
 * criAtomExPlayer_UpdateAll(player1);
 * criAtomExPlayer_UpdateAll(player2);
 * criAtomExPlayer_UpdateAll(player3);
 * criAtomExPlayer_UpdateAll(player4);
 * 
 * // サーバー処理の割り込み防止を解除
 * criAtomEx_Unlock();
 * 	：
 * \endcode
 * \attention
 * 割り込み防止区間で同時に複数のプレーヤーの再生をスタートした場合でも、
 * 以下の要因により再生する波形がサンプル単位で同期しない場合があります。<br>
 * - ストリーム再生時のデータ供給に伴う発音遅延<br>
 * - 発音リソースの奪い取りに伴う発音遅延<br>
 * 再生同期を行いたい場合は、::criAtomExPlayer_Prepare 関数を使用して再生準備を行い、
 * 準備完了後に割り込み防止区間で再生を開始してください。<br>
 * <br>
 * 本関数実行後、長時間::criAtomEx_Unlock 関数を呼ばない場合、音声再生が途切れる恐れがあります。<br>
 * サーバー処理の割り込みを防止する区間は、最小限に抑える必要があります。
 * \sa criAtomEx_Unlock
 */
void CRIAPI criAtomEx_Lock(void);

/*JP
 * \brief サーバー処理の割り込み防止を解除
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ::criAtomEx_Lock 関数による、サーバー処理の割り込み防止を解除します。
 * \sa criAtomEx_Lock
 */
void CRIAPI criAtomEx_Unlock(void);

/*JP
 * \brief 時刻の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \return CriUint64	時刻（マイクロ秒単位）
 * \par 説明:
 * Atomライブラリ内のマスタタイマから時刻を取得します。
 * \sa criAtomEx_ResetTimer
 */
CriUint64 CRIAPI criAtomEx_GetTimeMicro(void);

/*JP
 * \brief タイマのリセット
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * Atomライブラリ内のマスタタイマの時刻をリセットします。<br>
 * \par 備考:
 * 本関数は ::criAtomEx_GetTimeMicro 関数が返す値に対してのみ影響します。<br>
 * 本関数を実行しても、AtomExプレーヤーの再生時刻がクリアされることはありません。<br>
 * \sa criAtomEx_ResetTimer
 */
void CRIAPI criAtomEx_ResetTimer(void);

/*JP
 * \brief タイマのポーズ
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	sw		CRI_TRUE=タイマ一時停止、CRI_FALSE=タイマ再開
 * \par 説明:
 * Atomライブラリ内のマスタタイマを一時停止／再開します。<br>
 * マスタタイマを一時停止すると、シーケンス時刻が進行しなくなります。<br>
 * \par 備考:
 * 本関数は アプリケーションが休止したり一時停止するようなプラットフォームにおいて、<br>
 * 休止中や一時停止中でもタイマが進行してしまうプラットフォーム向けの機能です。<br>
 * アプリケーションが休止状態や一時停止状態に遷移する前に<br>
 * 本関数でマスタタイマを一時停止しておくことで、休止中のシーケンスの進行を止める事ができます。<br>
 * \attention
 * 本関数で一時停止する対象はあくまでAtomライブラリ内のマスタタイマです。<br>
 * 本関数では発音中のボイス等を一時停止できません。
 * 本関数で設定したポーズフラグは、CRI Atomサーバー処理が実行されたタイミングで反映されます。<br>
 * 即座に同期をとる必要がある場合は、::criAtomEx_ExecuteAudioProcess 関数を呼び出す事で同期をとることができます。<br>
 * ただし、::criAtomEx_ExecuteAudioProcessを呼び出したスレッドでオーディオ処理が実行されるため、
 * そのCPU負荷を許容できるかに注意してください。<br>
 * \sa criAtomEx_ResetTimer
 */
void CRIAPI criAtomEx_PauseTimer(CriBool sw);

/*JP
 * \brief ワーク領域サイズ計算用コンフィグ構造体の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \par 説明:
 * ワーク領域サイズの計算用に、ライブラリ初期化用コンフィグ構造体
 * （ ::CriAtomExConfig 構造体）を仮登録します。<br>
 * <br>
 * ACFの登録やボイスプールの作成に必要なワーク領域のサイズは、
 * ライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に設定する構造体のパラメーターによって変化します。<br>
 * そのため、通常はACFの登録やボイスプールの作成に必要なワーク領域サイズを計算する前に、
 * ライブラリを初期化する必要があります。<br>
 * 本関数を使用してライブラリ初期化用コンフィグ構造体を登録した場合、
 * ACFの登録やボイスプールの作成に必要なワーク領域のサイズを、
 * 初期化処理なしに計算可能になります。<br>
 * <br>
 * 本関数を実行することで、以下の処理が初期化処理なしに実行可能となります。<br>
 * - ::criAtomEx_CalculateWorkSizeForRegisterAcfData 関数
 * - ボイスプール作成用ワーク領域サイズの計算<br>
 * （ ::criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool 関数等）
 * 
 * \par 備考:
 * 引数（ config ）に NULL を指定した場合、デフォルト設定
 * （ ::criAtomEx_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。<br>
 * <br>
 * 現状、本関数で一旦コンフィグ構造体を設定すると、
 * 設定前の状態（未初期化状態でのワーク領域サイズ計算をエラーとする動作）
 * に戻すことができなくなります。<br>
 * （関数を再度実行してパラメーターを上書きすることは可能です。）<br>
 * \attention
 * 本関数で登録した初期化用コンフィグ構造体は、
 * ライブラリ未初期化状態でのワーク領域サイズ計算にしか使用されません。<br>
 * ライブラリ初期化後には本関数に設定したパラメーターではなく、
 * 初期化時に指定されたパラメーターがワーク領域サイズの計算に使用されます。<br>
 * （本関数で登録する構造体のパラメーターと、
 * ライブラリの初期化に使用する構造体のパラメーターが異なる場合、
 * ワーク領域サイズが不足し、ハンドルの作成に失敗する恐れがあります。）<br>
 * <br>
 * ::criAtomEx_RegisterAcfFile 関数や ::criAtomExAcb_LoadAcbFile 関数等、
 * ワーク領域計算時にファイルアクセスが必要になる API については、
 * 本関数を実行した場合でもワーク領域サイズの計算が行えません。<br>
 * （ワーク領域サイズを計算するためにはライブラリを初期化する必要が
 * あります。）<br>
 * \par 例:
 * \code
 * 	CriAtomExConfig atomex_config;
 * 	
 * 	// ライブラリ初期化用コンフィグ構造体にデフォルト値を設定
 * 	criAtomEx_SetDefaultConfig(&atomex_config);
 * 	
 * 	// ライブラリ初期化用ワーク領域サイズの計算
 * 	lib_work_size = criAtomEx_CalculateWorkSize(&atomex_config);
 * 	
 * 	// サブモジュールのワーク領域サイズ計算用にパラメーターを仮登録
 * 	criAtomEx_SetConfigForWorkSizeCalculation(&atomex_config);
 * 	
 * 	// サブモジュールのワーク領域サイズを計算
 * 	acf_work_size = criAtomEx_CalculateWorkSizeForRegisterAcfData(acf_data, acf_data_size);
 * 	vp_work_size = criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool(NULL);
 * 		：
 * \endcode
 * \sa criAtomEx_CalculateWorkSizeForRegisterAcfData, criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool
 */
void CRIAPI criAtomEx_SetConfigForWorkSizeCalculation(const CriAtomExConfig *config);

/*JP
 * \brief オンメモリACFデータの登録に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	acf_data		ACFデータアドレス
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return		CriSint32		ワーク領域サイズ
 * \retval		0以上			正常に処理が完了
 * \retval		-1				エラーが発生
 * \par 説明:
 * ::criAtomEx_RegisterAcfData 関数の実行に必要なワーク領域サイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomEx_RegisterAcfData 関数でACF情報を登録する際には、
 * 本関数が返すサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomEx_RegisterAcfData
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForRegisterAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief オンメモリACFデータの登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	acf_data		ACFデータアドレス
 * \param[in]	acf_data_size	ACFデータサイズ
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * メモリ上に配置されたACFデータをライブラリに取り込みます。<br>
 * ACF情報の登録に必要なワーク領域のサイズは、
 * ::criAtomEx_CalculateWorkSizeForRegisterAcfData 関数で計算します。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は、関数実行時に再生中の音声をすべて停止します。<br>
 * また、プレーヤーに設定した以下のACFに関連するパラメーターを全てリセットします。<br>
 *  -# AISAC
 *  -# AISACコントロール値
 *  -# カテゴリ
 *  -# セレクターラベル
 *  -# バスセンド
 * 	
 * <br>
 * 本関数にセットしたデータ領域とワーク領域は、 ::criAtomEx_UnregisterAcf 関数を実行するまでの間、
 * アプリケーションで保持する必要があります。<br>
 * （ ::criAtomEx_UnregisterAcf 関数実行前に、ワーク領域のメモリを解放しないでください。）
 * また、データ領域の一部はワークとして使用されます。<br>
 * \sa criAtomEx_UnregisterAcf
 */
void CRIAPI criAtomEx_RegisterAcfData(
	void *acf_data, CriSint32 acf_data_size, void *work, CriSint32 work_size);

/*JP
 * \brief ACFファイルの登録に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		ファイルパス
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ::criAtomEx_RegisterAcfFile 関数の実行に必要なワーク領域サイズを計算します。<br>
 * 本関数は、 ::criAtomEx_SetUserAllocator マクロによるアロケーター登録の有無によって
 * 計算に使用する要素が異なります。
 * - アロケーター登録時：ACFファイルを一時的に読み込み、ACF内に記録されているカテゴリ数、
 * 再生単位でのカテゴリ参照数、REACT数を使用したサイズ計算が行われます。<br>
 * - アロケーター未登録時：ライブラリ初期化時に指定した ::CriAtomExConfig 構造体の
 * max_categoriesメンバ、categories_per_playbackメンバを使用したサイズ計算が行われます。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomEx_RegisterAcfFile
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForRegisterAcfFile(
	CriFsBinderHn binder, const CriChar8 *path);

/*JP
 * \brief ACFファイルの登録に必要なワーク領域サイズの計算（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			CPKコンテンツID
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ::criAtomEx_RegisterAcfFileById 関数の実行に必要なワーク領域サイズを計算します。<br>
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomEx_CalculateWorkSizeForRegisterAcfFile 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomEx_CalculateWorkSizeForRegisterAcfFile, criAtomEx_RegisterAcfFileById
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForRegisterAcfFileById(
	CriFsBinderHn binder, CriUint16 id);

/*JP
 * \brief ACFファイルの登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		ファイルパス
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriBool		ファイル読み込み結果
 * \par 説明:
 * ACFファイルをロードし、ライブラリに取り込みます。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * ワーク領域を指定して本関数を使用する場合、 ::criAtomEx_CalculateWorkSizeForRegisterAcfFile 関数
 * を使用してワークサイズを計算してください。<br>
 * <br>
 * ACFファイルの登録に成功すると、本関数は戻り値として CRI_TRUE を返します。<br>
 * リードエラー等によりACFファイルの読み込みに失敗した場合、本関数は戻り値として
 * CRI_FALSE を返します。<br>
 * \par 備考:
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は、関数実行時に再生中の音声をすべて停止します。<br>
 * また、プレーヤーに設定した以下のACFに関連するパラメーターを全てリセットします。<br>
 *  -# AISAC
 *  -# AISACコントロール値
 *  -# カテゴリ
 *  -# セレクターラベル
 *  -# バスセンド
 * 	
 * <br>
 * 本関数は、関数実行開始時に criFsLoader_Create 関数でローダーを確保し、
 * 終了時に criFsLoader_Destroy 関数でローダーを破棄します。<br>
 * 本関数を実行する際には、空きローダーハンドルが１つ以上ある状態になるよう、
 * ローダー数を調整してください。<br>
 * <br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomEx_CalculateWorkSizeForRegisterAcfFile 関数によって計算したワークサイズ分の
 * ワーク領域を指定した本関数の呼び出しでCRI_FALSEが返された場合、ワーク領域不足が要因
 * の可能性があります。<br>
 * ライブラリ初期化時に指定する ::CriAtomExConfig 構造体の以下のメンバの設定値
 * が適切であるか確認してください。<br>
 * - max_categories：ACF内のカテゴリ数、REACT数と同値以上<br>
 * - categories_per_playback：ACF内の再生単位でのカテゴリ参照数と同値以上<br>
 * <br>
 * 本関数にセットしたワーク領域は、 ::criAtomEx_UnregisterAcf 関数を実行するまでの間、
 * アプリケーションで保持する必要があります。<br>
 * （ ::criAtomEx_UnregisterAcf 関数実行前に、ワーク領域のメモリを解放しないでください。）
 * \sa criAtomEx_UnregisterAcf
 */
CriBool CRIAPI criAtomEx_RegisterAcfFile(
	CriFsBinderHn binder, const CriChar8 *path, void *work, CriSint32 work_size);

/*JP
 * \brief ACFファイルの登録（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			CPKコンテンツID
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriBool		ファイル読み込み結果
 * \par 説明:
 * ACFファイルをロードし、ライブラリに取り込みます。<br>
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomEx_RegisterAcfFile 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数は、関数実行時に再生中の音声をすべて停止します。<br>
 * また、プレーヤーに設定したパラメーターを全てリセットします。<br>
 * \sa criAtomEx_RegisterAcfFile
 */
CriBool CRIAPI criAtomEx_RegisterAcfFileById(
	CriFsBinderHn binder, CriUint16 id, void *work, CriSint32 work_size);

/*JP
 * \brief ACFの登録解除
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ACF情報の登録を解除します。<br>
 * \attention
 * 本関数は、関数実行時に再生中の音声をすべて停止します。<br>
 * また、プレーヤーに設定したパラメーターを全てリセットします。<br>
 * （ACFファイルが登録されてない際に、音声再生中に本関数を実行した場合は音声は停止されません）
 * ::criAtomEx_RegisterAcfFile 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomEx_RegisterAcfData, criAtomEx_RegisterAcfFile, criAtomEx_RegisterAcfFileById
 */
void CRIAPI criAtomEx_UnregisterAcf(void);

/*JP
 * \brief オンメモリACFのバージョン取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	acf_data		ACFデータアドレス
 * \param[in]	acf_data_size	ACFデータサイズ
 * \param[out]	flag			レジスト可能フラグ
 * \return		CriUint32		ACFフォーマットバージョン
 * \par 説明:
 * メモリ上に配置されたACFデータのフォーマットバージョンを取得します。<br>
 * また、flag引数にレジスト可能なバージョンかどうかをBool値で返します。<br>
 */
CriUint32 CRIAPI criAtomEx_GetAcfVersion(
	void *acf_data, CriSint32 acf_data_size, CriBool *flag);

/*JP
 * \brief ACFファイルのバージョン取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		ファイルパス
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \param[out]	flag		レジスト可能フラグ
 * \return		CriUint2	ACFフォーマットバージョン
 * \par 説明:
 * ACFファイルをロードし、ACFデータのフォーマットバージョンを取得します。<br>
 * ACF情報の登録に必要なワーク領域のサイズは、
 * ::criAtomEx_CalculateWorkSizeForRegisterAcfFile 関数で計算します。<br>
 * <br>
 * ACFファイルフォーマットバージョンを元にflag引数にレジスト可能なバージョンかどうかをBool値で返します。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数は、関数実行開始時に criFsLoader_Create 関数でローダーを確保し、
 * 終了時に criFsLoader_Destroy 関数でローダーを破棄します。<br>
 * 本関数を実行する際には、空きローダーハンドルが１つ以上ある状態になるよう、
 * ローダー数を調整してください。<br>
 * <br>
 * 本関数にセットしたワーク領域は、 アプリケーションで保持する必要はありません。<br>
 * （ロードしたデータは関数終了時に解放されます。）
 */
CriUint32 CRIAPI criAtomEx_GetAcfVersionFromFile(
	CriFsBinderHn binder, const CriChar8 *path, void *work, CriSint32 work_size, CriBool *flag);

/*JP
 * \brief ACFファイルのバージョン取得（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			CPKコンテンツID
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \param[out]	flag		レジスト可能フラグ
 * \return		CriUint2	ACFフォーマットバージョン
 * \par 説明:
 * ACFファイルをロードし、ACFデータのフォーマットバージョンを取得します。<br>
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomEx_GetAcfVersionFromFile 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomEx_GetAcfVersionFromFile
 */
CriUint32 CRIAPI criAtomEx_GetAcfVersionFromFileById(
	CriFsBinderHn binder, CriUint16 id, void *work, CriSint32 work_size, CriBool *flag);

/*JP
 * \brief レジスト可能バージョン情報取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[out]	version_low		レジスト可能下位バージョン
 * \param[out]	version_high	レジスト可能上位バージョン
 * \par 説明:
 * レジスト可能なACFのバージョン情報を取得します。<br>
 * 上位バージョンはライブラリビルド時点での情報のため、この値より上位のACFでも
 * レジスト可能な場合もあります。<br>
 */
void CRIAPI criAtomEx_GetSupportedAcfVersion(
	CriUint32 *version_low, CriUint32 *version_high);

/*JP
 * \brief オーディオヘッダーの解析
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	buffer			オーディオデータを格納したバッファー
 * \param[in]	buffer_size		オーディオデータを格納したバッファーのサイズ
 * \param[out]	info			フォーマット情報
 * \return		CriBool			フォーマット情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * メモリにロードされた音声データのフォーマットを解析します。<br>
 * 解析に成功すると、本関数は CRI_TRUE を返し、音声データのフォーマット情報を
 * 第3引数（ info ）に格納します。<br>
 * 解析に失敗した場合、本関数は CRI_FALSE を返します。<br>
 * \par 備考:
 * 本関数の第1引数（ buffer ）には、オーディオデータのヘッダー領域
 * （音声ファイルの先頭部分をロードしたもの）を格納しておく必要があります。<br>
 * 音声データの途中部分をセットした場合や、ヘッダー前に余計なデータが付加されている場合、
 * ヘッダーの途中までしか格納されていない場合には、本関数はフォーマットの解析に失敗します。<br>
 * ADXデータやHCAデータについては、音声ファイルの先頭から2048バイト分の領域をセットすれば、
 * フォーマットの解析に失敗することはありません。<br>
 * \attention
 * 現状、本関数はADXデータとHCAデータの解析にしか対応していません。<br>
 * HCA-MXデータについては解析は可能ですが、ヘッダー情報からはHCAデータなのか
 * HCA-MXデータなのかは区別できないため、フォーマット種別として
 * CRIATOMEX_FORMAT_HCA が返されます。<br>
 */
CriBool CRIAPI criAtomEx_AnalyzeAudioHeader(
	const void *buffer, CriSint32 buffer_size, CriAtomExFormatInfo *info);

/*JP
 * \brief 乱数種の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	seed		乱数種
 * \par 説明:
 * CRI Atomライブラリ全体で共有する疑似乱数生成器に乱数種を設定します。<br>
 * 乱数種を設定することにより、各種ランダム再生処理に再現性を持たせることができます。<br>
 * AtomExプレーヤーごとに再現性を持たせたい場合は、::criAtomExPlayer_SetRandomSeed 関数を使用してください。
 * <br>
 * \sa criAtomExPlayer_SetRandomSeed
 */
void CRIAPI criAtomEx_SetRandomSeed(CriUint32 seed);

/*JP
 * \brief ACBハンドルが即時解放可能かどうかのチェック
 * \ingroup ATOMLIBEX_ACB
 * \param[in]	buffer		バッファー
 * \param[in]	size		バッファーサイズ
 * \return		CriBool		再生中かどうか（CRI_TRUE = 再生中のプレーヤーあり、CRI_FALSE = 再生中のプレーヤーなし）
 * \par 説明:
 * ::criAtomExPlayer_SetData 関数でセットしたバッファー領域が解放可能かどうかをチェックします。<br>
 * \par 備考:
 * メモリ再生を行っているAtomExプレーヤーを全て停止させた場合でも、
 * ライブラリ内には当該メモリ領域を参照しているボイスが存在する可能性があります。<br>
 * （ ::criAtomExPlayer_StopWithoutReleaseTime 関数で停止処理を行った場合や、
 * ボイスの奪い取りが発生した場合、AtomExプレーヤーからボイスは切り離されますが、
 * ボイスが完全に停止するまでの間、データは参照される可能性があります。）<br>
 * \attention
 * 本関数を実行すると、指定したデータ領域を参照しているAtomプレーヤーが存在しないか、
 * ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * Atomプレーヤーの作成／破棄を ::criAtomEx_Lock 関数でロックしてから実行ください。<br>
 * <br>
 * ::criAtomExPlayer_SetData 関数でセットしたバッファーを解放する際には、
 * データをセットしたプレーヤーに対し停止処理を行った後、
 * 本関数が CRI_FALSE を返す状態になるまで待つ必要があります。<br>
 * 本関数が CRI_TRUE を返すタイミングでバッファー領域を解放した場合、
 * アクセス違反等の致命的な問題が発生する可能性があります。<br>
 * \sa criAtomExPlayer_SetData
 */
CriBool CRIAPI criAtomEx_IsDataPlaying(void *buffer, CriSint32 size);

/*JP
 * \brief ストリーミング情報の取得
 * \ingroup ATOMEXLIB_GLOBAL
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
 * \sa CriExAtomStreamingInfo
 */
#define criAtomEx_GetStreamingInfo(streaming_info) \
	criAtom_GetStreamingInfo(streaming_info)

/*JP
 * \brief ファイルI/Oの空き時間を使ったストリーミング読み込みを行うかどうか
 * \ingroup ATOMEXLIB_GLOBAL
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
#define criAtomEx_SetFreeTimeBufferingFlagForDefaultDevice(flag) \
	criAtom_SetFreeTimeBufferingFlagForDefaultDevice(flag)

/*JP
 * \brief DSPバス設定のアタッチ用ワークサイズの計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	setting		DSPバス設定の名前
 * \return		CriSint32	必要ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * DSPバス設定からDSPバスを構築するのに必要なワーク領域サイズを計算します。<br>
 * 本関数を実行するには、あらかじめACF情報を登録しておく必要があります<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、CRI Atom Craftで作成した
 * DSPバス設定の内容によって変化します。<br>
 * \sa criAtomEx_AttachDspBusSetting, criAtomEx_RegisterAcfData, criAtomEx_RegisterAcfFile,
 * criAtomEx_RegisterAcfFileById
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForDspBusSetting(
	const CriChar8 *setting);

/*JP
 * \brief DSPバス設定のアタッチ用ワークサイズの計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_buffer_size	ACFデータサイズ
 * \param[in]	setting_name	DSPバス設定の名前
 * \return		CriSint32		必要ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からDSPバスを構築するのに必要なワーク領域サイズを計算します。<br>
 * ::criAtomEx_CalculateWorkSizeForDspBusSetting 関数と違い、
 * ACF情報を登録する前でも本関数は実行可能です。<br>
 * （ただし、ACFデータを事前にメモリにロードし、
 * ::criAtomExAsr_SetConfigForWorkSizeCalculation 
 * 関数でASR初期化用コンフィグ構造体を仮登録しておく必要があります。）<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、
 * エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、CRI Atom Craftで作成した
 * DSPバス設定の内容によって変化します。<br>
 * \attention
 * ハードウェアDSPを使用するプラットフォーム（ASRを使用しないプラットフォーム）では、
 * 本関数でワーク領域サイズを取得することができない可能性があります。<br>
 * （本関数実行時にエラーコールバックが発生したり、負値が返される可能性があります。）<br>
 * 本関数が動作しないプラットフォームについては、
 * ライブラリの初期化後に ::criAtomEx_CalculateWorkSizeForDspBusSetting 
 * 関数を使用して必要なワーク領域サイズを計算してください。<br>
 * \sa criAtomEx_AttachDspBusSetting, criAtomEx_RegisterAcfData, criAtomEx_RegisterAcfFile,
 * criAtomEx_RegisterAcfFileById, criAtomExAsr_SetConfigForWorkSizeCalculation, 
 * criAtomEx_CalculateWorkSizeForDspBusSetting
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData(
	void *acf_data, CriSint32 acf_buffer_size, const CriChar8 *setting_name);

/*JP
 * \brief DSPバス設定のアタッチ
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	setting		DSPバス設定の名前
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からDSPバスを構築してサウンドレンダラにアタッチします。<br>
 * 本関数を実行するには、あらかじめACF情報を登録しておく必要があります。<br>
 * \code
 *		：
 * 	// ACFファイルの読み込みと登録
 * 	criAtomEx_RegisterAcfFile(NULL, "Sample.acf", NULL, 0);
 * 	
 * 	// DSPバス設定の適用
 * 	criAtomEx_AttachDspBusSetting("DspBusSetting_0", NULL, 0);
 * 		：
 * \endcode
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、
 * CRI Atom Craftで作成したDSPバス設定の内容によって変化します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa criAtomEx_DetachDspBusSetting, criAtomEx_RegisterAcfData, criAtomEx_RegisterAcfFile,
 * criAtomEx_RegisterAcfFileById
 */
void CRIAPI criAtomEx_AttachDspBusSetting(
	const CriChar8 *setting, void *work, CriSint32 work_size);

/*JP
 * \brief DSPバス設定のデタッチ
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * DSPバス設定をデタッチします。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * DSPバス設定アタッチ時に確保されたメモリ領域が解放されます。<br>
 * （DSPバス設定アタッチ時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx_AttachDspBusSetting
 */
void CRIAPI criAtomEx_DetachDspBusSetting(void);

/*JP
 * \brief DSPバススナップショットの適用
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	snapshot_name	スナップショット名
 * \param[in]	time_ms			時間（ミリ秒）
 * \par 説明:
 * DSPバススナップショットを適用します。<br>
 * 本関数を呼び出すと、スナップショットで設定したパラメーターに time_ms 掛けて変化します。<br>
 * 引数 snapshot_name に CRI_NULL を指定すると、元のDSPバス設定の状態（スナップショットが適用されていない状態）に戻ります。<br>
 * \sa criAtomEx_AttachDspBusSetting
 */
void CRIAPI criAtomEx_ApplyDspBusSnapshot(const CriChar8 *snapshot_name, CriSint32 time_ms);

/*JP
 * \brief 適用中のDSPバススナップショット名の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \return	const CriChar8*	スナップショット名文字列へのポインタ。
 *							スナップショットが適用されていない場合や取得に失敗した場合はCRI_NULLが返ります。
 * \par 説明:
 * 適用中のDSPバススナップショット名を取得します。
 * スナップショットが適用されていない場合はCRI_NULLが返ります。
 * \sa criAtomEx_ApplyDspBusSnapshot
 */
const CriChar8* CRIAPI criAtomEx_GetAppliedDspBusSnapshotName(void);

/*JP
 * \brief キューリンクコールバック関数の登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		キューリンクコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * キュー再生時にキューリンクを処理した際に、キューリンク情報を受け取るコールバック関数を登録します。<br>
 * \attention
 * 登録されたコールバック関数は、ライブラリ内でキューリンクを処理したタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExCueLinkCbFunc
 */
void CRIAPI criAtomEx_SetCueLinkCallback(CriAtomExCueLinkCbFunc func, void* obj);

/*JP
 * \brief 5.1chスピーカー角度の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	angle_l		フロントレフトスピーカーの角度
 * \param[in]	angle_r		フロントライトスピーカーの角度
 * \param[in]	angle_sl	サラウンドレフトスピーカーの角度
 * \param[in]	angle_sr	サラウンドレフトスピーカーの角度
 * \par 説明:
 * パン3Dや3Dポジショニングの計算時に使用する、出力スピーカーの角度（配置）を設定します。<br>
 * 角度は、正面方向を0度として-180度から180度の間で設定してください。
 * \attention
 * 本関数は5.1ch向けのパンスピーカータイプ (4CH または 5CH) にのみ影響します。<br>
 * 7.1ch向けのパンスピーカータイプ (6CH または 7CH) のスピーカー角度を変更する場合は、::criAtomEx_SetSpeakerAngleArray 関数を使用してください。<br>
 * <br>
 * 設定するスピーカー角度は、angle_sl < angle_l < angle_r < angle_sr の順となるような配置にする必要があります。<br>
 * 例：
 * \code 
 * criAtomEx_SetSpeakerAngles(-45.0f, 45.0f, -135.0f, 135.0f);
 * \endcode
 * \sa criAtomEx_SetSpeakerAngleArray
 */
void CRIAPI criAtomEx_SetSpeakerAngles(CriFloat32 angle_l, CriFloat32 angle_r, CriFloat32 angle_sl, CriFloat32 angle_sr);

/*JP
 * \brief スピーカー角度の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	speaker_system	出力スピーカーの並び順
 * \param[in]	angle_array		出力スピーカーの角度配列
 * \par 説明:
 * パン3Dや3Dポジショニングの計算時に使用する、出力スピーカーの角度（配置）を設定します。<br>
 * 角度は、正面方向を0度として-180度から180度の間で設定してください。<br>
 * 角度配列は、出力スピーカーの並び順のスピーカー数以上の要素数の配列を指定してください。<br>
 * 角度配列に NULL を指定すると、出力スピーカーの並び順に合わせて、デフォルトの角度を設定します。<br>
 * \attention
 * FRONT LEFTとFRONT RIGHTの位置を入れ替えるような設定をした場合、意図しない挙動になる可能性があります。
 * \par 補足:
 * LOW FREQUENCYの角度を変更しても、パン3Dや3Dポジショニングの計算結果は変化しません。<br>
 * 設定した角度は、各スピーカーシステムごとに独立して設定されます。
 * \par 例：
 * \code
 * CriFloat32 angle_array[8] = {-30.0f, 30.0f, 0.0f, 0.0f, -90.0f, 90.0f, -150.0f, 150.0f}
 * criAtomEx_SetSpeakerAngleArray(CRIATOMEX_SPEAKER_SYSTEM_SURROUND_7_1, angle_array);
 * \endcode
 * \sa criAtomEx_SetSpeakerAngles
 */
void CRIAPI criAtomEx_SetSpeakerAngleArray(CriAtomExSpeakerSystem speaker_system, const CriFloat32 *angle_array);

/*JP
 * \brief バーチャルスピーカー角度の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	speaker_system	バーチャルスピーカーの並び順
 * \param[in]	angle_array		バーチャルスピーカーの角度配列
 * \par 説明:
 * バーチャルスピーカーにおけるパン3Dや3Dポジショニングの計算時に使用する、
 * 出力スピーカーの角度（配置）を設定します。<br>
 * 本関数の操作は ::criAtomEx_SetSpeakerAngleArray 関数と同様なため、基本的な説明はそちらを参照して下さい。<br>
 * \attention
 * 本関数での設定は ::criAtomEx_ControlVirtualSpeakerSetting 関数にてバーチャルスピーカー設定を有効にしない限り、
 * 設定したバーチャルスピーカー角度はパン3Dや3Dポジショニングの計算に反映されません。
 * \sa criAtomEx_SetSpeakerAngleArray, criAtomEx_ControlVirtualSpeakerSetting
 */
void CRIAPI criAtomEx_SetVirtualSpeakerAngleArray(CriAtomExSpeakerSystem speaker_system, const CriFloat32 *angle_array);

/*JP
 * \brief バーチャルスピーカー設定のON/OFF
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	sw	スイッチ（CRI_FALSE = 無効、CRI_TRUE = 有効）
 * \par 説明:
 * パン3Dや3Dポジショニングの計算時にバーチャルスピーカーの設定を使用する機能のON/OFFを設定します。<br>
 * この設定を有効にすると、マルチチャンネルサウンドは ::criAtomEx_SetVirtualSpeakerAngleArray 関数にて設定した
 * バーチャルスピーカー角度からそれぞれ再生されます。
 * \attention
 * デフォルトの状態は「無効」になっています。<br>
 * また、何かボイスを再生中に「有効」にした場合、パン3Dや3Dポジショニングの計算には即時反映されません。
 * 次回ボイス再生時から反映されます。
 * \sa criAtomEx_SetVirtualSpeakerAngleArray
 */
void CRIAPI criAtomEx_ControlVirtualSpeakerSetting(CriBool sw);

/*JP
 * \brief ゲーム変数の総数の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \return		CriSint32	ゲーム変数の総数
 * \par 説明:
 * ACFファイル内に登録されているゲーム変数の総数を取得します。<br>
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 * ACFファイルが登録されていない場合、-1が返ります。
 * \sa criAtomEx_GetGameVariableInfo
 */
CriSint32 CRIAPI criAtomEx_GetNumGameVariables(void);

/*JP
 * \brief ゲーム変数情報の取得（インデックス指定）
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	index		ゲーム変数インデックス
 * \param[out]	info		ゲーム変数情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * ゲーム変数インデックスからゲーム変数情報を取得します。<br>
 * 指定したインデックスのゲーム変数が存在しない場合、CRI_FALSEが返ります。
 * \sa CriAtomExGameVariableInfo
 */
CriBool CRIAPI criAtomEx_GetGameVariableInfo(CriUint16 index, CriAtomExGameVariableInfo* info);

/*JP
 * \brief ゲーム変数の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	id			ゲーム変数ID
 * \return		CriFloat32	ゲーム変数値
 * \par 説明:
 * ACFファイル内に登録されているゲーム変数値を取得します。<br>
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 */
CriFloat32 CRIAPI criAtomEx_GetGameVariableById(CriAtomExGameVariableId id);

/*JP
 * \brief ゲーム変数の取得
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	name		ゲーム変数名
 * \return		CriFloat32	ゲーム変数値
 * \par 説明:
 * ACFファイル内に登録されているゲーム変数を取得します。<br>
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 */
CriFloat32 CRIAPI criAtomEx_GetGameVariableByName(const CriChar8* name);

/*JP
 * \brief ゲーム変数の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	id			ゲーム変数ID
 * \param[in]	value		ゲーム変数値
 * \par 説明:
 * ACFファイル内に登録されているゲーム変数に値を設定します。<br>
 * 設定可能な範囲は0.0f〜1.0fの間です。
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 */
void CRIAPI criAtomEx_SetGameVariableById(CriAtomExGameVariableId id, CriFloat32 value);

/*JP
 * \brief ゲーム変数の設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	name		ゲーム変数名
 * \param[in]	value		ゲーム変数値
 * \par 説明:
 * ACFファイル内に登録されているゲーム変数に値を設定します。<br>
 * 設定可能な範囲は0.0f〜1.0fの間です。
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 */
void CRIAPI criAtomEx_SetGameVariableByName(const CriChar8* name, CriFloat32 value);

/*JP
 * \brief プレイバックキャンセルコールバック関数の登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		プレイバックキャンセルコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * キュー再生時に再生開始処理のキャンセルが発生した際に、プレイバックキャンセル情報を受け取るコールバック関数を登録します。<br>
 * \attention
 * 登録されたコールバック関数は、ライブラリ内で再生開始処理がキャンセルされるタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExPlaybackCancelCbFunc
 */
void CRIAPI criAtomEx_SetPlaybackCancelCallback(CriAtomExPlaybackCancelCbFunc func, void* obj);

/*JP
 * \brief ACF整合性チェック機能のON/OFF
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	sw		スイッチ（CRI_FALSE = チェック無効、CRI_TRUE = チェック有効）
 * \par 説明:
 * ACBロード時のACFとの整合性チェック機能のON/OFFを設定します。<br>
 * \attention
 * デフォルトの状態は「チェック有効」になっています。「チェック無効」に設定した場合に、
 * 整合性が合わない組み合わせのデータを使用すると、本来目的とする効果が得られません。<br>
 * また、「チェック無効」にした場合でも、音声処理実行時にACBから参照しているACF項目が
 * 見つからないときには別途エラーコールバックが発生ます。<br>
 */
void CRIAPI criAtomEx_ControlAcfConsistencyCheck(CriBool sw);

/*JP
 * \brief ACF整合性チェックエラーレベルの設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	level		エラーレベル
 * \par 説明:
 * ACBロード時のACFとの整合性チェックで発生するエラーの通知レベルを設定します。<br>
 * デフォルト状態での通知レベルは CRIERR_LEVEL_WARNING です。
 */
void CRIAPI criAtomEx_SetAcfConsistencyCheckErrorLevel(CriErrorLevel level);

/*JP
 * \brief トラックトランジションバイセレクターコールバック関数の登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		トラックトランジションバイセレクターコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * トラックトランジションバイセレクタータイプキューの再生時にトランジション処理を行った際の情報を受け取るコールバック関数を登録します。<br>
 * \attention
 * 登録されたコールバック関数は、ライブラリ内でトランジション処理が開始されるタイミングで実行されます。<br>
 * そのため、ライブラリ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExTrackTransitionBySelectorCbFunc
 */
void CRIAPI criAtomEx_SetTrackTransitionBySelectorCallback(CriAtomExTrackTransitionBySelectorCbFunc func, void* obj);

/*==========================================================================
 *      CRI AtomEx Debug API
 *=========================================================================*/
/*JP
 * \brief CriAtomEx 内部の各種リソースの状況の取得
 * \ingroup ATOMEXLIB_GLOBAL_DEBUG
 * \param[out]	resources_info		CriAtomEx 内部の各種リソースの状況
 * \par 説明:
 * CriAtomEx 内部の各種リソースの状況取得します。<br>
 * \attention
 * 開発支援デバッグ機能です。アプリケーション開発時にのみ使用してください。
 * \sa CriAtomExDebugResourcesInfo
 */
void CRIAPI criAtomExDebug_GetResourcesInfo(CriAtomExDebugResourcesInfo *resources_info);

/*==========================================================================
 *      CRI AtomEx HCA-MX API
 *=========================================================================*/
/*JP
 * \brief HCA-MX初期化用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_HCA_MX
 * \param[in]	config		HCA-MX初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCA-MXの初期化に必要なワーク領域のサイズを取得します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExHcaMx_Initialize 関数でHCA-MXの初期化を行う場合、
 * 本関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * HCA-MXの初期化に必要なワークメモリのサイズは、HCA-MX初期化用コンフィグ
 * 構造体（ ::CriAtomExHcaMxConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExHcaMx_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx_SetUserAllocator, criAtomExHcaMx_Initialize
 */
CriSint32 CRIAPI criAtomExHcaMx_CalculateWorkSize(const CriAtomExHcaMxConfig *config);

/*JP
 * \brief ワーク領域サイズ計算用コンフィグ構造体の設定
 * \ingroup ATOMEXLIB_HCA_MX
 * \param[in]	config		HCA-MX初期化用コンフィグ構造体
 * \par 説明:
 * ワーク領域サイズの計算用に、HCA-MX初期化用コンフィグ構造体
 * （ ::CriAtomExHcaMxConfig 構造体）を仮登録します。<br>
 * <br>
 * HCA-MXボイスプールの作成に必要なワーク領域のサイズは、
 * HCA-MX初期化時（ ::criAtomExHcaMx_Initialize 関数実行時）
 * に設定する構造体のパラメーターによって変化します。<br>
 * そのため、通常はボイスプールの作成に必要なワーク領域サイズを計算する前に、
 * HCA-MXを初期化する必要があります。<br>
 * 本関数を使用してHCA-MX初期化用コンフィグ構造体を登録した場合、
 * ::criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool 
 * 関数が初期化処理なしに使用可能となります。<br>
 * \par 備考:
 * 引数（ config ）に NULL を指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool 
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
 * 	CriAtomExHcaMxConfig hca_mx_config;
 * 	
 * 	// ワーク領域計算用にHCA-MX初期化設定を仮登録
 * 	criAtomExHcaMx_SetDefaultConfig(&hca_mx_config);
 * 	criAtomExHcaMx_SetConfigForWorkSizeCalculation(&hca_mx_config);
 * 	
 * 	// HCA-MXボイスプール作成用ワーク領域サイズの計算
 * 	hca_mx_vp_work_size = criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool(NULL);
 * 		：
 * \endcode
 * \sa criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool, criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool
 */
void CRIAPI criAtomExHcaMx_SetConfigForWorkSizeCalculation(const CriAtomExHcaMxConfig *config);

/*JP
 * \brief HCA-MXの初期化
 * \ingroup ATOMEXLIB_HCA_MX
 * \param[in]	config	HCA-MX初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * HCA-MXの初期化を行います。<br>
 * 本関数を実行することで、HCA-MXデータの出力機能が起動されます。<br>
 * \par 備考:
 * HCA-MXの初期化に必要なワークメモリのサイズは、HCA-MX初期化用コンフィグ
 * 構造体（ ::CriAtomExHcaMxConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExHcaMx_SetDefaultConfig 適用時と同じパラメーター）で初期化処理を行います。<br>
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
 * 本関数を実行後、必ず対になる ::criAtomExHcaMx_Finalize 関数を実行してください。<br>
 * また、 ::criAtomExHcaMx_Finalize 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa criAtomEx_SetUserAllocator, criAtomExHcaMx_CalculateWorkSize
 */
void CRIAPI criAtomExHcaMx_Initialize(
	const CriAtomExHcaMxConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCA-MXの終了
 * \ingroup ATOMEXLIB_HCA_MX
 * \par 説明:
 * HCA-MXの終了処理を行います。<br>
 * 本関数を実行することで、HCA-MXデータの出力が停止されます。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * HCA-MX初期化時に確保されたメモリ領域が解放されます。<br>
 * （HCA-MX初期化時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx_SetUserAllocator, criAtomExHcaMx_Initialize
 */
void CRIAPI criAtomExHcaMx_Finalize(void);

/*JP
 * \brief ミキサのバスセンドレベル設定
 * \ingroup ATOMEXLIB_HCA_MX
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
void CRIAPI criAtomExHcaMx_SetBusSendLevelByName(
	CriSint32 mixer_id, const CriChar8* bus_name, CriFloat32 level);

/*JP
 * \brief ミキサの出力周波数調整比の設定
 * \ingroup ATOMEXLIB_HCA_MX
 * \param[in]	mixer_id	ミキサID
 * \param[in]	ratio		センドレベル値（0.25f〜4.0f）
 * \par 説明:
 * ミキサの出力周波数調整比を設定します。<br>
 * 周波数調整比は、音声データの周波数と再生周波数の比率で、再生速度の倍率と等価です。<br>
 * 周波数比が1.0fを超える場合、音声データは原音より高速に再生され、
 * 1.0f未満の場合は、音声データは原音より低速で再生されます。<br>
 * 本関数を使用することで、対象のミキサを使用するプレーヤーで再生される全てのHCA-MXボイス
 * （HCA-MX用にエンコードされた音声データの再生）について、再生速度が変更されます
 * （HCA-MXボイスを再生する場合、個々のプレーヤーでの再生速度の設定は無視されます）。<br>
 */
void CRIAPI criAtomExHcaMx_SetFrequencyRatio(CriSint32 mixer_id, CriFloat32 ratio);

/*JP
 * \brief ASRラックIDの指定
 * \ingroup ATOMEXLIB_HCA_MX
 * \param[in]	mixer_id	ミキサID
 * \param[in]	rack_id		ASRラックID
 * \par 説明:
 * ミキサの出力先ASRラックIDを指定します。<br>
 * 本関数を使用することで、対象のミキサを使用するプレーヤーで再生される全てのHCA-MXボイス
 * （HCA-MX用にエンコードされた音声データの再生）について、出力先ASRラックIDが変更されます
 * （HCA-MXボイスを再生する場合、個々のプレーヤーでのASRラックIDの設定は無視されます）。<br>
 * \attention
 * 本関数は ミキサのサウンドレンダラタイプにASRを使用する場合にのみ効果があります。<br>
 * （他のサウンドレンダラタイプの場合、本関数の設定値は無視されます。）<br>
 * \sa CriAtomExAsr_CreateRack
 */
void CRIAPI criAtomExHcaMx_SetAsrRackId(CriSint32 mixer_id, CriSint32 rack_id);

/*==========================================================================
 *      CRI AtomEx ACF API
 *=========================================================================*/
/*JP
 * \brief AISACコントロール数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	AISACコントロール数
 * \par 説明:
 * 登録されたACFに含まれるAISACコントロールの数を取得します。<br>
 * ACFが登録されていない場合、-1が返ります。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumAisacControls(void);

/*JP
 * \brief AISACコントロール情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		AISACコントロールインデックス
 * \param[out]	info		AISACコントロール情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * AISACコントロールインデックスからAISACコントロール情報を取得します。<br>
 * 指定したインデックスのAISACコントロールが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetAisacControlInfo(CriUint16 index, CriAtomExAisacControlInfo* info);

/*JP
 * \brief AISACコントロールIDの取得（AISACコントロール名指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	name					AISACコントロール名
 * \return		CriAtomExAisacControlId	AISACコントロールID
 * \par 説明:
 * AISACコントロール名からAISACコントロールIDを取得します。<br>
 * ACFが登録されていない、または指定したAISACコントロール名のAISACコントロールが存在しない場合、CRIATOMEX_INVALID_AISAC_CONTROL_IDが返ります。
 */
CriAtomExAisacControlId CRIAPI criAtomExAcf_GetAisacControlIdByName(const CriChar8* name);

/*JP
 * \brief AISACコントロール名の取得（AISACコントロールID指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	id				AISACコントロールID
 * \return		const CriChar8* AISACコントロール名
 * \par 説明:
 * AISACコントロールIDからAISACコントロール名を取得します。<br>
 * ACFが登録されていない、または指定したAISACコントロールIDのAISACコントロールが存在しない場合、NULLが返ります。
 */
const CriChar8 * CRIAPI criAtomExAcf_GetAisacControlNameById(CriAtomExAisacControlId id);

/*JP
 * \brief DSPバス設定数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	DSPバス設定数
 * \par 説明:
 * ライブラリに登録されたACFデータに含まれるDSPバス設定の数を取得します。<br>
 * ACFデータが登録されていない場合、本関数は -1 を返します。<br>
 * \sa criAtomExAcf_GetDspSettingNameByIndex
 */
CriSint32 CRIAPI criAtomExAcf_GetNumDspSettings(void);

/*JP
 * \brief ACFデータからDSPバス設定数を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return		CriSint32		DSPバス設定数
 * \par 説明:
 * 指定されたACFに含まれるDSPバス設定の数を取得します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetNumDspSettings 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetNumDspSettings
 */
CriSint32 CRIAPI criAtomExAcf_GetNumDspSettingsFromAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief DSPバス設定名の取得（index指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index			DSPバス設定インデックス
 * \return		const CriChar8* DSPバス設定名
 * \par 説明:
 * ライブラリに登録されたACFデータからDSPバス設定名を取得します。<br>
 * ACFデータが登録されていないか、
 * または指定したDSPバス設定インデックスのDSPバス設定が存在しない場合、
 * 本関数は NULL を返します。<br>
 * \sa criAtomExAcf_GetDspSettingInformation 
 */
const CriChar8 * CRIAPI criAtomExAcf_GetDspSettingNameByIndex(CriUint16 index);

/*JP
 * \brief ACFデータからDSPバス設定名を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \param[in]	index			DSPバス設定インデックス
 * \return		const CriChar8* DSPバス設定名
 * \par 説明:
 * 指定されたACFデータに含まれるDSPバス設定名を取得します。<br>
 * 第 3 引数（ index ）には、何番目のDSPバス設定の名称を取得するかを指定します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetDspSettingNameByIndex 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetDspSettingNameByIndex 
 */
const CriChar8 * CRIAPI criAtomExAcf_GetDspSettingNameByIndexFromAcfData(
	void *acf_data, CriSint32 acf_data_size, CriUint16 index);

/*JP
 * \brief DSPバス設定情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	name		セッティング名
 * \param[out]	info		セッティング情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * セッティング名を指定してセッティング情報を取得します。<br>
 * 指定したセッティング名のDsp settingが存在しない場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExAcf_GetDspSettingNameByIndex,  criAtomExAcf_GetDspBusInformation
 */
CriBool CRIAPI criAtomExAcf_GetDspSettingInformation(const CriChar8* name, CriAtomExAcfDspSettingInfo* info);

/*JP
 * \brief DSPバス設定スナップショット情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		スナップショットインデックス
 * \param[out]	info		スナップショット情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * スナップショットインデックスを指定してスナップショット情報を取得します。<br>
 * 指定したセッティング名のスナップショットが存在しない場合、CRI_FALSEが返ります。<br>
 * スナップショットインデックスは親となるDSPバス設定情報の ::CriAtomExAcfDspSettingInfo 構造体内の
 * snapshot_start_indexメンバとnum_snapshotsメンバを元に適切な値を算出してください。
 * \sa criAtomExAcf_GetDspBusInformation
 */
CriBool CRIAPI criAtomExAcf_GetDspSettingSnapshotInformation(CriUint16 index, CriAtomExAcfDspSettingSnapshotInfo* info);

/*JP
 * \brief DSPバスの取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		バスインデックス
 * \param[out]	info		バス情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * インデックスを指定してDSPバス情報を取得します。<br>
 * 指定したインデックス名のDSPバスが存在しない場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExAcf_GetDspSettingInformation,  criAtomExAcf_GetDspFxName, criAtomExAcf_GetDspFxParameters, criAtomExAcf_GetDspBusLinkInformation
 */
CriBool CRIAPI criAtomExAcf_GetDspBusInformation(CriUint16 index, CriAtomExAcfDspBusInfo* info);

/*JP
 * \brief DSP FX名の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		DSP FXインデックス
 * \return		const CriChar8* 文字列へのポインタ。失敗した場合は、CRI_NULLが返ります。
 * \par 説明:
 * インデックスを指定してDSP FX名を文字列で取得します。<br>
 * DSP FX名はASRを使用する環境かつ、ACF Ver.1.16.00 以降のACFを使用した時に取得可能です。<br>
 * ASRを使用しない環境、またはACF Ver.1.15.01 以前ではCRI_NULLが <br>
 * 返ります。::criAtomExAcf_GetAcfInfo 関数でACFのバージョンを確認してご使用下さい。
 * \sa criAtomExAcf_GetDspBusInformation, criAtomExAcf_GetDspFxParameters, criAtomExAcf_GetAcfInfo
 */
const CriChar8* CRIAPI criAtomExAcf_GetDspFxName(CriUint16 index);

/*JP
 * \brief DSP FXパラメーターの取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		DSP FXインデックス
 * \param[out]	parameters	DSP FXパラメーター
 * \param[in]	size		DSP FXパラメーターワークサイズ
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * インデックスを指定してACFからFXパラメーターを取得します。<br>
 * 指定したインデックス名のDSP FXが存在しない場合、CRI FALSEが返ります。<br>
 * size引数にはDSP FXタイプに応じたパラメーターのサイズを指定してください。<br>
 * サウンドレンダラにASRを指定した場合は、ACFにある実行時パラメーターがfloat配列の形式でparametersに取得されます。
 * ASR以外でのサウンドレンダラでは、パラメーター構造体が得られます。
 * \sa criAtomExAcf_GetDspBusInformation, criAtomExAcf_GetDspFxName
 */
CriBool CRIAPI criAtomExAcf_GetDspFxParameters(CriUint16 index, void* parameters, CriSint32 size);

/*JP
 * \brief DSPバスリンクの取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		DSPバスリンクインデックス
 * \param[out]	info		DSPバスリンク情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * インデックスを指定してバスリンク情報を取得します。<br>
 * 指定したインデックス名のDSPバスリンクが存在しない場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExAcf_GetDspBusInformation
 */
CriBool CRIAPI criAtomExAcf_GetDspBusLinkInformation(CriUint16 index, CriAtomExAcfDspBusLinkInfo* info);

/*JP
 * \brief ACFデータからカテゴリ数を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return	CriSint32			カテゴリ数
 * \par 説明:
 * 指定されたACFに含まれるカテゴリの数を取得します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetNumCategories 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetNumCategories
 */
CriSint32 CRIAPI criAtomExAcf_GetNumCategoriesFromAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief カテゴリ数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	カテゴリ数
 * \par 説明:
 * 登録されたACFに含まれるカテゴリの数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumCategories(void);

/*JP
 * \brief ACFデータから再生毎カテゴリ参照数を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return	CriSint32			再生毎カテゴリ参照数
 * \par 説明:
 * 指定されたACFに含まれるカテゴリの数を取得します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetNumCategoriesPerPlayback 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetNumCategoriesPerPlayback
 */
CriSint32 CRIAPI criAtomExAcf_GetNumCategoriesPerPlaybackFromAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief 再生毎カテゴリ参照数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	再生毎カテゴリ参照数
 * \par 説明:
 * 登録されたACFに含まれる再生毎カテゴリ参照数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumCategoriesPerPlayback(void);

/*JP
 * \brief カテゴリ情報の取得（インデックス指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		カテゴリインデックス
 * \param[out]	info		カテゴリ情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * カテゴリインデックスからカテゴリ情報を取得します。<br>
 * 指定したインデックスのカテゴリが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetCategoryInfo(CriUint16 index, CriAtomExCategoryInfo* info);

/*JP
 * \brief カテゴリ情報の取得（カテゴリ名指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	name		カテゴリ名
 * \param[out]	info		カテゴリ情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * カテゴリ名からカテゴリ情報を取得します。<br>
 * 指定したカテゴリ名のカテゴリが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetCategoryInfoByName(const CriChar8* name, CriAtomExCategoryInfo* info);

/*JP
 * \brief カテゴリ情報の取得（カテゴリID指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	id			カテゴリID
 * \param[out]	info		カテゴリ情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * カテゴリIDからカテゴリ情報を取得します。<br>
 * 指定したカテゴリIDのカテゴリが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetCategoryInfoById(CriUint32 id, CriAtomExCategoryInfo* info);

/*JP
 * \brief Global Aisac数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	Global Aisac数
 * \par 説明:
 * 登録されたACFに含まれるGlobal Aisacの数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumGlobalAisacs(void);

/*JP
 * \brief Global Aisac情報の取得（インデックス指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		Global Aisacインデックス
 * \param[out]	info		Global Aisac情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * Global AisacインデックスからAisac情報を取得します。<br>
 * 指定したインデックスのGlobal Aisacが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetGlobalAisacInfo(CriUint16 index, CriAtomExGlobalAisacInfo* info);

/*JP
 * \brief Global Aisac情報の取得（名前指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	name		Global Aisac名
 * \param[out]	info		Global Aisac情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * Global Aisac名からAisac情報を取得します。<br>
 * 指定した名前のGlobal Aisacが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetGlobalAisacInfoByName(const CriChar8* name, CriAtomExGlobalAisacInfo* info);

/*JP
 * \brief Global Aisac Graph情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	aisac_info		Global Aisac情報
 * \param[in]	graph_index		Aisac graphインデックス
 * \param[out]	graph_info		Aisac graph情報
 * \return		CriBool			情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * Global Aisac情報とgraphインデックスからgraph情報を取得します。<br>
 * 指定したインデックスのGlobal Aisacが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetGlobalAisacGraphInfo(
	const CriAtomExGlobalAisacInfo* aisac_info,
	CriUint16 graph_index,
	CriAtomExAisacGraphInfo* graph_info);

/*JP
 * \brief Global Aisac値の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	aisac_info					Global Aisac情報
 * \param[in]	control						AISACコントロール値
 * \param[in]	type						グラフタイプ
 * \param[out]	value						AISAC値
 * \return		CriBool						値が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * Global Aisac情報、コントロール値、グラフタイプを指定してAisac値を取得します。<br>
 * 指定したインデックスのGlobal Aisacが存在しない場合やグラフが存在しない場合は、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetGlobalAisacValue(
	const CriAtomExGlobalAisacInfo* aisac_info,
	CriFloat32 control,
	CriAtomExAisacGraphType type,
	CriFloat32* value);

/*JP
 * \brief ACF情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[out]	acf_info		ACF情報
 * \return		CriBool			情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * ライブラリに登録されたACFデータの各種情報を取得します。<br>
 * ACF情報の取得に失敗した場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetAcfInfo(CriAtomExAcfInfo *acf_info);

/*JP
 * \brief ACFデータからACF情報を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \param[out]	acf_info		ACF情報
 * \return		CriBool			情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * 指定されたACFデータの各種情報を取得します。<br>
 * ACF情報の取得に失敗した場合、CRI_FALSEが返ります。
 * \par 備考:
 * ::criAtomExAcf_GetAcfInfo 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \attention
 * 取得したACF情報内のポインタメンバは、ACFデータ領域内を指しています。（名前文字列へのポインタ等）<br>
 * 取得したACF情報を参照している間は、ACFデータ領域を解放しないようご注意ください。
 * \sa criAtomExAcf_GetAcfInfo 
 */
CriBool CRIAPI criAtomExAcf_GetAcfInfoFromAcfData(
	void *acf_data, CriSint32 acf_data_size, CriAtomExAcfInfo *acf_info);

/*JP
 * \brief セレクター数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	セレクター数
 * \par 説明:
 * 登録されたACFに含まれるセレクターの数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumSelectors(void);

/*JP
 * \brief セレクター情報の取得（インデックス指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	index		セレクターインデックス
 * \param[out]	info		セレクター情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * セレクターインデックスからセレクター情報を取得します。<br>
 * 指定したインデックスのセレクターが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetSelectorInfoByIndex(CriUint16 index, CriAtomExSelectorInfo* info);

/*JP
 * \brief セレクター情報の取得（名前指定）
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	name		セレクター名
 * \param[out]	info		セレクター情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * セレクター名からセレクター情報を取得します。<br>
 * 指定した名前のセレクターが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetSelectorInfoByName(const CriChar8* name, CriAtomExSelectorInfo* info);

/*JP
 * \brief セレクターラベル情報の取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	selector_info		セレクター情報
 * \param[in]	label_index			ラベルインデックス
 * \param[out]	label_info			セレクターラベル情報
 * \return		CriBool				情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * セレクター情報とセレクターラベルインデックスからセレクターラベル情報を取得します。<br>
 * 指定したインデックスのセレクターラベルが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExAcf_GetSelectorLabelInfo(
	const CriAtomExSelectorInfo* selector_info,
	CriUint16 label_index,
	CriAtomExSelectorLabelInfo* label_info);

/*JP
 * \brief セレクターに対するグローバル参照ラベルの設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	selsector_name	セレクター名
 * \param[in]	label_name		ラベル名
 * \par 説明:
 * ACFファイル内に登録されているセレクターに対してグローバル参照されるラベルを設定します。<br>
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 * \sa criAtomExAcf_SetGlobalLabelToSelectorByIndex
 */
void CRIAPI criAtomExAcf_SetGlobalLabelToSelectorByName(const CriChar8* selsector_name, const CriChar8* label_name);

/*JP
 * \brief セレクターに対するグローバル参照ラベルの設定
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	selsector_index	セレクターインデックス
 * \param[in]	label_index		ラベルインデックス
 * \par 説明:
 * ACFファイル内に登録されているセレクターに対してグローバル参照されるラベルを設定します。<br>
 * \attention
 * 本関数を実行する前に、ACFファイルを登録しておく必要があります。<br>
 * \sa criAtomExAcf_SetGlobalLabelToSelectorByName
 */
void CRIAPI criAtomExAcf_SetGlobalLabelToSelectorByIndex(CriUint16 selsector_index, CriUint16 label_index);

/*JP
 * \brief ACFデータからバス数を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return	CriSint32			バス数
 * \par 説明:
 * 指定されたACFに含まれるバスの数を取得します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetNumBuses 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetNumBuses
 */
CriSint32 CRIAPI criAtomExAcf_GetNumBusesFromAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief バス数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	バス数
 * \par 説明:
 * 登録されたACFに含まれるバスの数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetNumBuses(void);

/*JP
 * \brief ACFデータからDSPバス設定内の最大バス数を取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \return	CriSint32			DSPバス設定内の最大バス数
 * \par 説明:
 * 指定されたACFに含まれるDSPバス設定内の最大バスの数を取得します。<br>
 * \par 備考:
 * ::criAtomExAcf_GetMaxBusesOfDspBusSettings 関数と異なり、<br>
 * ACF情報を登録する前でも本関数は実行可能です。
 * \sa criAtomExAcf_GetMaxBusesOfDspBusSettings
 */
CriSint32 CRIAPI criAtomExAcf_GetMaxBusesOfDspBusSettingsFromAcfData(
	void *acf_data, CriSint32 acf_data_size);

/*JP
 * \brief DSPバス設定内の最大バス数の取得
 * \ingroup ATOMEXLIB_ACF
 * \return		CriSint32	DSPバス設定内の最大バス数
 * \par 説明:
 * 登録されたACFに含まれるDSPバス設定内の最大バスの数を取得します。
 */
CriSint32 CRIAPI criAtomExAcf_GetMaxBusesOfDspBusSettings(void);

/*JP
 * \brief ACF内のバス名取得
 * \ingroup ATOMEXLIB_ACF
 * \param[in]	bus_name		バス名
 * \return	st CriChar8*		ACF内バス名
 * \par 説明:
 * 指定されたバス名のACF内文字列を取得します。<br>
 * 存在しないバス名を指定した場合はNULLが返ります。<br>	 
 */
const CriChar8* CRIAPI criAtomExAcf_FindBusName(const CriChar8* bus_name);


/*==========================================================================
 *      CRI AtomEx ACB API
 *=========================================================================*/
/*JP
 * \brief オンメモリACBデータのロードに必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_data		ACBデータアドレス
 * \param[in]	acb_data_size	ACBデータサイズ
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path		AWBファイルのパス
 * \return		CriSint32		ワーク領域サイズ
 * \retval		0以上			正常に処理が完了
 * \retval		-1				エラーが発生
 * \par 説明:
 * ::criAtomExAcb_LoadAcbData 関数の実行に必要なワーク領域サイズを計算します。
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExAcb_LoadAcbData 関数でAWBデータをロードする際には、
 * 本関数が返すサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExAcb_LoadAcbData
 */
CriSint32 CRIAPI criAtomExAcb_CalculateWorkSizeForLoadAcbData(
	void *acb_data, CriSint32 acb_data_size,
	CriFsBinderHn awb_binder, const CriChar8 *awb_path);

/*JP
 * \brief オンメモリACBデータのロードに必要なワーク領域サイズの計算（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_data		ACBデータアドレス
 * \param[in]	acb_data_size	ACBデータサイズ
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_id			CPKファイル内のAWBデータのID
 * \return		CriSint32		ワーク領域サイズ
 * \retval		0以上			正常に処理が完了
 * \retval		-1				エラーが発生
 * \par 説明:
 * ::criAtomExAcb_LoadAcbDataById 関数の実行に必要なワーク領域サイズを計算します。
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomExAcb_CalculateWorkSizeForLoadAcbData 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_CalculateWorkSizeForLoadAcbData, criAtomExAcb_LoadAcbDataById
 */
CriSint32 CRIAPI criAtomExAcb_CalculateWorkSizeForLoadAcbDataById(
	void *acb_data, CriSint32 acb_data_size, CriFsBinderHn awb_binder, CriUint16 awb_id);

/*JP
 * \brief オンメモリACBデータのロード
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_data		ACBデータアドレス
 * \param[in]	acb_data_size	ACBデータサイズ
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path		AWBファイルのパス
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \return		CriAtomExAcbHn	ACBハンドル
 * \par 説明:
 * ACBデータをロードし、キュー再生に必要な情報を取り込みます。<br>
 * ACBデータのロードに必要なワーク領域のサイズは、
 * ::criAtomExAcb_CalculateWorkSizeForLoadAcbData 関数で計算します。<br>
 * <br>
 * 第3引数の awb_binder 、および第4引数の awb_path には、ストリーム再生用
 * のAWBファイルを指定します。<br>
 * （オンメモリ再生のみのACBデータをロードする場合、 awb_binder および
 * awb_path にセットした値は無視されます。）<br>
 * <br>
 * ACBデータをロードすると、ACBデータにアクセスするためのACBハンドル
 * （ ::CriAtomExAcbHn ）が返されます。<br>
 * AtomExプレーヤーに対し、 ::criAtomExPlayer_SetCueId 関数でACBハンドル、および再生する
 * キューのIDをセットすることで、ACBデータ内のキューを再生することが可能です。<br>
 * <br>
 * ACBファイルのロードに成功すると、本関数は戻り値として ACB ハンドルを返します。<br>
 * リードエラー等によりACBファイルのロードに失敗した場合、本関数は戻り値として
 * CRI_NULL を返します。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * 本関数は即時復帰関数です。<br>
 * ACBファイルを事前にメモリにロードしてから本関数を実行することで、
 * ACBハンドル作成時に処理がブロックされるのを回避可能です。
 * <br>
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数にてセットしたデータ領域やワーク領域のメモリ内容はACBハンドル破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * また、データ領域の一部はワークとして使用されます。<br>
 * <br>
 * ACBデータにはワーク領域も含まれています。<br>
 * そのため、1つのACBデータ領域を複数回同時にロードすることはできません。<br>
 * （作成されたACBハンドルを複数のAtomExプレーヤーで共有することは可能です。）<br>
 * <br>
 * ACBハンドルは内部的にバインダー（ CriFsBinderHn ）を確保します。<br>
 * ACBファイルをロードする場合、ACBハンドル数分のバインダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExAcb_CalculateWorkSizeForLoadAcbData, CriAtomExAcbHn, criAtomExPlayer_SetCueId
 */
CriAtomExAcbHn CRIAPI criAtomExAcb_LoadAcbData(
	void *acb_data, CriSint32 acb_data_size,
	CriFsBinderHn awb_binder, const CriChar8 *awb_path,
	void *work, CriSint32 work_size);

/*JP
 * \brief オンメモリACBデータのロード（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_data		ACBデータアドレス
 * \param[in]	acb_data_size	ACBデータサイズ
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_id			CPKファイル内のAWBデータのID
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \return		CriAtomExAcbHn	ACBハンドル
 * \par 説明:
 * ACBデータをロードし、キュー再生に必要な情報を取り込みます。<br>
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomExAcb_LoadAcbData 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_LoadAcbData
 */
CriAtomExAcbHn CRIAPI criAtomExAcb_LoadAcbDataById(
	void *acb_data, CriSint32 acb_data_size, CriFsBinderHn awb_binder, CriUint16 awb_id,
	void *work, CriSint32 work_size);

/*JP
 * \brief ACBファイルのロードに必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_binder	ACBファイルを含むバインダーのハンドル
 * \param[in]	acb_path	ACBファイルのパス
 * \param[in]	awb_binder	AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path	AWBファイルのパス
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ::criAtomExAcb_LoadAcbFile 関数の実行に必要なワーク領域サイズを計算します。
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExAcb_LoadAcbFile 関数でACBファイルをロードする際には、
 * 本関数が返すサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は、関数実行開始時に criFsLoader_Create 関数でローダーを確保し、
 * 終了時に criFsLoader_Destroy 関数でローダーを破棄します。<br>
 * 本関数を実行する際には、空きローダーハンドルが１つ以上ある状態になるよう、
 * ローダー数を調整してください。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ACBファイルのロードにかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ACBファイルのロードは、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomExAcb_LoadAcbFile
 */
CriSint32 CRIAPI criAtomExAcb_CalculateWorkSizeForLoadAcbFile(
	CriFsBinderHn acb_binder, const CriChar8 *acb_path,
	CriFsBinderHn awb_binder, const CriChar8 *awb_path);

/*JP
 * \brief ACBファイルのロードに必要なワーク領域サイズの計算（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_binder	ACBファイルを含むバインダーのハンドル
 * \param[in]	acb_id		CPKファイル内のACBデータのID
 * \param[in]	awb_binder	AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_id		CPKファイル内のAWBデータのID
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ::criAtomExAcb_LoadAcbFileById 関数の実行に必要なワーク領域サイズを計算します。
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomExAcb_CalculateWorkSizeForLoadAcbFile 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_CalculateWorkSizeForLoadAcbFile, criAtomExAcb_LoadAcbFileById
 */
CriSint32 CRIAPI criAtomExAcb_CalculateWorkSizeForLoadAcbFileById(
	CriFsBinderHn acb_binder, CriUint16 acb_id, CriFsBinderHn awb_binder, CriUint16 awb_id);

/*JP
 * \brief ACBファイルのロード
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_binder		ACBファイルを含むバインダーのハンドル
 * \param[in]	acb_path		ACBファイルのパス
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path		AWBファイルのパス
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \return		CriAtomExAcbHn	ACBハンドル
 * \par 説明:
 * ACBファイルをロードし、キュー再生に必要な情報を取り込みます。<br>
 * ACBファイルのロードに必要なワーク領域のサイズは、
 * ::criAtomExAcb_CalculateWorkSizeForLoadAcbFile 関数で計算します。<br>
 * <br>
 * 第3引数の awb_binder 、および第4引数の awb_path には、ストリーム再生用
 * のAWBファイルを指定します。<br>
 * （オンメモリ再生のみのACBデータをロードする場合、 awb_binder および
 * awb_path にセットした値は無視されます。）<br>
 * <br>
 * ACBファイルをロードすると、ACBデータにアクセスするためのACBハンドル
 * （ ::CriAtomExAcbHn ）が返されます。<br>
 * AtomExプレーヤーに対し、 ::criAtomExPlayer_SetCueId 関数でACBハンドル、および再生する
 * キューのIDをセットすることで、ACBファイル内のキューを再生することが可能です。<br>
 * <br>
 * ACBファイルのロードに成功すると、本関数は戻り値として ACB ハンドルを返します。<br>
 * リードエラー等によりACBファイルのロードに失敗した場合、本関数は戻り値として
 * CRI_NULL を返します。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをACBハンドル破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * ACBハンドルは内部的にバインダー（ CriFsBinderHn ）とローダー（ CriFsLoaderHn ）を確保します。<br>
 * ACBファイルをロードする場合、ACBハンドル数分のバインダーとローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ACBファイルのロードにかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ACBファイルのロードは、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomExAcb_CalculateWorkSizeForLoadAcbFile, CriAtomExAcbHn, criAtomExPlayer_SetCueId
 */
CriAtomExAcbHn CRIAPI criAtomExAcb_LoadAcbFile(
	CriFsBinderHn acb_binder, const CriChar8 *acb_path,
	CriFsBinderHn awb_binder, const CriChar8 *awb_path,
	void *work, CriSint32 work_size);

/*JP
 * \brief ACBファイルのロード（CPKコンテンツID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_binder		ACBファイルを含むバインダーのハンドル
 * \param[in]	acb_id			CPKファイル内のACBデータのID
 * \param[in]	awb_binder		AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_id			CPKファイル内のAWBデータのID
 * \param[in]	work			ワーク領域
 * \param[in]	work_size		ワーク領域サイズ
 * \return		CriAtomExAcbHn	ACBハンドル
 * \par 説明:
 * ACBファイルをロードし、キュー再生に必要な情報を取り込みます。<br>
 * ファイルパスの代わりにCPKコンテンツIDを指定する点を除けば、
 * ::criAtomExAcb_LoadAcbFile 関数と機能は同じです。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_LoadAcbFile
 */
CriAtomExAcbHn CRIAPI criAtomExAcb_LoadAcbFileById(
	CriFsBinderHn acb_binder, CriUint16 acb_id, CriFsBinderHn awb_binder, CriUint16 awb_id,
	void *work, CriSint32 work_size);

/*JP
 * \brief ACBハンドルのリリース
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \par 説明:
 * ACBハンドルを解放します。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ACBハンドル作成時に確保されたメモリ領域が解放されます。<br>
 * （ACBハンドル作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \par 備考:
 * 本関数でACBハンドルを破棄する際には、
 * 当該ACBハンドルを参照しているキューは全て停止されます。<br>
 * （本関数実行後に、ACBハンドルの作成に使用したワーク領域や、
 * ACBデータが配置されていた領域が参照されることはありません。）<br>
 * \attention
 * 本関数を実行すると、破棄しようとしているACBデータを参照している
 * Atomプレーヤーが存在しないか、ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * Atomプレーヤーの作成／破棄を ::criAtomEx_Lock 関数でロックしてから実行ください。<br>
 * \sa criAtomExAcb_LoadAcbData, criAtomExAcb_LoadAcbFile
 */
void CRIAPI criAtomExAcb_Release(CriAtomExAcbHn acb_hn);

/*JP
 * \brief ACBハンドルが即時解放可能かどうかのチェック
 * \ingroup ATOMLIBEX_ACB
 * \param[in]	acb_hn		acbハンドル
 * \return		CriBool		ACBの状態（CRI_TRUE = 即時解放可能、CRI_FALSE = 再生中のプレーヤーあり）
 * \par 説明:
 * ACBハンドルを即座に解放可能かどうかをチェックします。<br>
 * 本関数が CRI_FALSE を返すタイミングで ::criAtomExAcb_Release 関数を実行すると、
 * ACBハンドルを参照しているプレーヤーに対する停止処理が行われます。<br>
 * （ストリーム再生用のACBハンドルの場合、ファイル読み込み完了を待つため、
 * ::criAtomExAcb_Release 関数内で長時間処理がブロックされる可能性があります。）<br>
 * \par 備考:
 * ACBハンドルを再生していたプレーヤーを全て停止させた場合でも、
 * ライブラリ内では当該ACBハンドルを参照しているボイスが存在する可能性があります。<br>
 * （ ::criAtomExPlayer_StopWithoutReleaseTime 関数で停止処理を行った場合や、
 * ボイスの奪い取りが発生した場合、プレーヤーからボイスは切り離されますが、
 * その後もボイス側でファイルの読み込み完了待ちを行うケースがあります。）<br>
 * ::criAtomExAcb_Release 関数内で処理がブロックされるのを避ける必要がある場合には、
 * 本関数が CRI_TRUE を返すまで、::criAtomExAcb_Release 関数を実行しないでください。<br>
 * \attention
 * 本関数を実行すると、指定したACBデータを参照しているAtomプレーヤーが存在しないか、
 * ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * Atomプレーヤーの作成／破棄を ::criAtomEx_Lock 関数でロックしてから実行ください。<br>
 * \sa criAtomExAcb_Release
 */
CriBool CRIAPI criAtomExAcb_IsReadyToRelease(CriAtomExAcbHn acb_hn);

/*JP
 * \brief 全てのACBハンドルをリリース
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * ロード済みの全てのACBハンドルを解放します。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ACBハンドル作成時に確保されたメモリ領域が解放されます。<br>
 * （ACBハンドル作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \par 備考:
 * 本関数を実行すると、全てのキュー再生がその時点で停止します。<br>
 * （本関数実行後に、ACBハンドルの作成に使用したワーク領域や、
 * ACBデータが配置されていた領域が参照されることはありません。）<br>
 * \attention
 * 本関数を実行すると、指定したACBデータを参照しているAtomプレーヤーが存在しないか、
 * ライブラリ内で検索処理が行われます。<br>
 * そのため、本関数実行中に他スレッドでAtomプレーヤーの作成／破棄を行うと、
 * アクセス違反やデッドロック等の重大な不具合を誘発する恐れがあります。<br>
 * 本関数実行時にAtomプレーヤーの作成／破棄を他スレッドで行う必要がある場合、
 * Atomプレーヤーの作成／破棄を ::criAtomEx_Lock 関数でロックしてから実行ください。<br>
 * \sa criAtomExAcb_LoadAcbData, criAtomExAcb_LoadAcbFile
 */
void CRIAPI criAtomExAcb_ReleaseAll(void);

/*JP
 * \brief ACBハンドルの列挙
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	func		ACBハンドルコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \return		CriSint32	列挙されたACBハンドルの数
 * \par 説明:
 * ACBハンドルを列挙します。<br>
 * <br>
 * 本関数を実行すると、第 1 引数（ func ）
 * でセットされたコールバック関数がACBハンドルの数分だけ呼び出されます。<br>
 * コールバック関数には、ACBハンドルが引数として渡されます。<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExAcbHandleCbFunc の説明をご参照ください。<br>
 * <br>
 * 戻り値は列挙されたACBハンドルの数（登録したコールバック関数が呼び出された回数）です。<br>
 * （初回コールバック時に列挙を中止した場合でも 1 が返されます。）<br>
 * ACBハンドルが存在しない場合、本関数は 0 を返します。<br>
 * また、引数が不正な場合等、エラーが発生した際には -1 を返します。<br>
 * \attention
 * ACBハンドルをコールバック関数内で破棄してはいけません。<br>
 * 全てのACBハンドルを一括で破棄する場合には、本関数の代わりに、
 * ::criAtomExAcb_ReleaseAll 関数を使用してください。<br>
 * \sa CriAtomExAcbHandleCbFunc, criAtomExAcb_ReleaseAll
 */
CriSint32 CRIAPI criAtomExAcb_EnumerateHandles(CriAtomExAcbHandleCbFunc func, void *obj);

/*JP
 * \brief オンメモリACBのバージョン取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_data		ACBデータアドレス
 * \param[in]	acb_data_size	ACBデータサイズ
 * \param[out]	flag			ロード可能フラグ
 * \return		CriUint2		ACBフォーマットバージョン
 * \par 説明:
 * メモリ上に配置されたACBデータのフォーマットバージョンを取得します。<br>
 * また、flag引数にロード可能なバージョンかどうかをBool値で返します。<br>
 */
CriUint32 CRIAPI criAtomExAcb_GetVersion(
	void *acb_data, CriSint32 acb_data_size, void *flag);

/*JP
 * \brief ACBファイルのバージョン取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_binder	ACBファイルを含むバインダーのハンドル
 * \param[in]	acb_path	ACBファイルのパス
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \param[out]	flag		ロード可能フラグ
 * \return		CriUint2	ACBフォーマットバージョン
 * \par 説明:
 * ACBファイルをメモリにロードしACBデータのフォーマットバージョンを取得します。<br>
 * ACB情報の登録に必要なワーク領域のサイズは、
 * ::criAtomExAcb_CalculateWorkSizeForLoadAcbFile 関数で計算します。<br>
 * <br>
 * ACBファイルフォーマットバージョンを元にflag引数にロード可能なバージョンかどうかをBool値で返します。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * 本関数にセットしたワーク領域は、 アプリケーションで保持する必要はありません。<br>
 * （メモリにロードしたデータは関数終了時に解放されます。）<br>
 * <br>
 * 本関数は、関数実行開始時に criFsLoader_Create 関数でローダーを確保し、
 * 終了時に criFsLoader_Destroy 関数でローダーを破棄します。<br>
 * 本関数を実行する際には、空きローダーハンドルが１つ以上ある状態になるよう、
 * ローダー数を調整してください。<br>
 */
CriUint32 CRIAPI criAtomExAcb_GetVersionFromFile(
	CriFsBinderHn acb_binder, const CriChar8 *acb_path, void *work, CriSint32 work_size, CriBool *flag);

/*JP
 * \brief ロード可能バージョン情報取得
 * \ingroup ATOMEXLIB_ACB
 * \param[out]	version_low		ロード可能下位バージョン
 * \param[out]	version_high	ロード可能上位バージョン
 * \par 説明:
 * ロード可能なACBのバージョン情報を取得します。<br>
 * 上位バージョンはライブラリビルド時点での情報のため、この値より上位のACBでも
 * ロード可能な場合もあります。<br>
 */
void CRIAPI criAtomExAcb_GetSupportedVersion(
	CriUint32 *version_low, CriUint32 *version_high);

/*JP
 * \brief キュー数の取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \return		CriSint32	キュー数
 * \par 説明:
 * ACBデータに含まれるキュー数を取得します。<br>
 * \par 備考:
 * 引数（ acb_hn ）に NULL を指定した場合、最後にロードしたACBデータを処理対象とします。<br>
 */
CriSint32 CRIAPI criAtomExAcb_GetNumCues(CriAtomExAcbHn acb_hn);

/*JP
 * \brief キューの存在確認（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \return		CriBool		キューが存在するかどうか（存在する：CRI_TRUE／存在しない：CRI_FALSE）
 * \par 説明:
 * 指定したIDのキューが存在するかどうかを取得します。<br>
 * 存在した場合にはCRI_TRUEを返します。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータが検索対象となります。<br>
 * （指定したIDを持つACBデータが1つでも存在すれば、本関数は CRI_TRUE を返します。）<br>
 */
CriBool CRIAPI criAtomExAcb_ExistsId(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューの存在確認（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		CriBool		キューが存在するかどうか（存在する：CRI_TRUE／存在しない：CRI_FALSE）
 * \par 説明:
 * 指定した名前のキューが存在するかどうかを取得します。<br>
 * 存在した場合にはCRI_TRUEを返します。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータが検索対象となります。<br>
 * （指定したキュー名を持つACBデータが1つでも存在すれば、本関数は CRI_TRUE を返します。）<br>
 */
CriBool CRIAPI criAtomExAcb_ExistsName(CriAtomExAcbHn acb_hn, const CriChar8 *name);

/*JP
 * \brief キューの存在確認（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		キューインデックス
 * \return		CriBool		キューが存在するかどうか（存在する：CRI_TRUE／存在しない：CRI_FALSE）
 * \par 説明:
 * 指定したインデックスのキューが存在するかどうかを取得します。<br>
 * 存在した場合にはCRI_TRUEを返します。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータが検索対象となります。<br>
 * （指定したキューインデックスを持つACBデータが1つでも存在すれば、本関数は CRI_TRUE を返します。）<br>
 */
CriBool CRIAPI criAtomExAcb_ExistsIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief キューIDの取得（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	index			キューインデックス
 * \return		CriAtomExCueId	キューID
 * \par 説明:
 * キューインデックスからキューIDを取得します。<br>
 * 指定したキューインデックスのキューが存在しない場合、-1が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューインデックスに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューインデックスを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのIDが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExCueId CRIAPI criAtomExAcb_GetCueIdByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief キューIDの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	name			キュー名
 * \return		CriAtomExCueId	キューID
 * \par 説明:
 * キュー名からキューIDを取得します。<br>
 * 指定したキュー名のキューが存在しない場合、-1が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのIDが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExCueId CRIAPI criAtomExAcb_GetCueIdByName(CriAtomExAcbHn acb_hn, const CriChar8* name);

/*JP
 * \brief キュー名の取得（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		キューインデックス
 * \return		const CriChar8* キュー名
 * \par 説明:
 * キューインデックスからキュー名を取得します。<br>
 * 指定したキューインデックスのキューが存在しない場合、NULLが返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューインデックスに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューインデックスを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの名前が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
const CriChar8 * CRIAPI criAtomExAcb_GetCueNameByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief キュー名の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \return		const CriChar8* キュー名
 * \par 説明:
 * キューIDからキュー名を取得します。<br>
 * 指定したキューIDのキューが存在しない場合、NULLが返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの名前が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
const CriChar8 * CRIAPI criAtomExAcb_GetCueNameById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューインデックスの取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	id					キューID
 * \return		CriAtomExCueIndex	キューインデックス
 * \par 説明:
 * キューIDからキューインデックスを取得します。<br>
 * 指定したキューIDのキューが存在しない場合、-1が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのインデックスが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExCueIndex CRIAPI criAtomExAcb_GetCueIndexById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューインデックスの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	name				キュー名
 * \return		CriAtomExCueIndex	キューインデックス
 * \par 説明:
 * キュー名からキューインデックスを取得します。<br>
 * 指定したキュー名のキューが存在しない場合、-1が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのインデックスが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExCueIndex CRIAPI criAtomExAcb_GetCueIndexByName(CriAtomExAcbHn acb_hn, const CriChar8* name);

/*JP
 * \brief ユーザデータ文字列の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	id					キューID
 * \return		const CriChar8 *	ユーザデータ文字列
 * \par 説明:
 * キューIDを指定して、キューのユーザデータ文字列を取得します。<br>
 * 指定したキューIDのキューが存在しない場合、NULLが返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのユーザデータが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
const CriChar8 * CRIAPI criAtomExAcb_GetUserDataById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief ユーザデータ文字列の取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		const CriChar8 * ユーザデータ文字列
 * \par 説明:
 * キュー名を指定して、キューのユーザデータ文字列を取得します。<br>
 * 指定したキュー名のキューが存在しない場合、NULLが返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのユーザデータが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
const CriChar8 * CRIAPI criAtomExAcb_GetUserDataByName(CriAtomExAcbHn acb_hn, const CriChar8 *name);

/*JP
 * \brief キューの長さの取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \return		CriSint64	キューの長さ（ミリ秒単位）
 * \par 説明:
 * キューIDを指定して、キューの長さを取得します。キューの長さはミリ秒単位です。<br>
 * 指定したキューIDのキューが存在しない場合や、無限ループするキューの場合、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの長さが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriSint64 CRIAPI criAtomExAcb_GetLengthById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューの長さの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		CriSint64	キューの長さ（ミリ秒単位）
 * \par 説明:
 * キュー名を指定して、キューの長さを取得します。キューの長さはミリ秒単位です。<br>
 * 指定したキュー名のキューが存在しない場合や、無限ループするキューの場合、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの長さが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriSint64 CRIAPI criAtomExAcb_GetLengthByName(CriAtomExAcbHn acb_hn, const CriChar8 *name);

/*JP
 * \brief キューでコントロール可能なAISAC Controlの個数の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \return		CriSint32	AISAC Controlの個数
 * \par 説明:
 * キューIDを指定して、キューでコントロール可能なAISAC Controlの個数を取得します。<br>
 * 指定したキューIDのキューが存在しない場合は、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのコントロール可能なAISAC Controlの個数が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumUsableAisacControlsByName, criAtomExAcb_GetUsableAisacControlById, criAtomExAcb_GetUsableAisacControlByName
 */
CriSint32 CRIAPI criAtomExAcb_GetNumUsableAisacControlsById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューでコントロール可能なAISAC Controlの個数の取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		CriSint32	AISAC Controlの個数
 * \par 説明:
 * キュー名を指定して、キューでコントロール可能なAISAC Controlの個数を取得します。<br>
 * 指定したキュー名のキューが存在しない場合は、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのコントロール可能なAISAC Controlの個数が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumUsableAisacControlsById, criAtomExAcb_GetUsableAisacControlById, criAtomExAcb_GetUsableAisacControlByName
 */
CriSint32 CRIAPI criAtomExAcb_GetNumUsableAisacControlsByName(CriAtomExAcbHn acb_hn, const CriChar8 *name);

/*JP
 * \brief キューでコントロール可能なAISAC Controlの取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \param[in]	index		AISAC Controlインデックス
 * \param[out]	info		AISAC Control情報
 * \return		CriBool		取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キューIDとAISAC Controlインデックスを指定して、AISAC Control情報を取得します。<br>
 * 指定したキューIDのキューが存在しない場合は、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのAISAC Control情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumUsableAisacControlsById, criAtomExAcb_GetNumUsableAisacControlsByName, criAtomExAcb_GetUsableAisacControlByName
 */
CriBool CRIAPI criAtomExAcb_GetUsableAisacControlById(CriAtomExAcbHn acb_hn, CriAtomExCueId id, CriUint16 index, CriAtomExAisacControlInfo* info);

/*JP
 * \brief キューでコントロール可能なAISAC Controlの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \param[in]	index		AISAC Controlインデックス
 * \param[out]	info		AISAC Control情報
 * \return		CriBool		取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キュー名とAISAC Controlインデックスを指定して、AISAC Control情報を取得します。<br>
 * 指定したキュー名のキューが存在しない場合は、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのAISAC Control情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumUsableAisacControlsById, criAtomExAcb_GetNumUsableAisacControlsByName, criAtomExAcb_GetUsableAisacControlById
 */
CriBool CRIAPI criAtomExAcb_GetUsableAisacControlByName(CriAtomExAcbHn acb_hn, const CriChar8 *name, CriUint16 index, CriAtomExAisacControlInfo* info);

/*JP
 * \brief キューがAISAC Controlでコントロール可能かどうかの取得（ID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	id					キューID
 * \param[in]	aisac_control_id	AISAC Control id
 * \return		CriBool				コントロール可能かどうか（可能：CRI_TRUE、不可能：CRI_FALSE）
 * \par 説明:
 * キューIDとAISAC Control Idを指定して、キューがAISAC Controlでコントロール可能かどうかを取得します。<br>
 * 指定したキューIDのキューが存在しない場合は、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのAISAC Control情報を元に値を返します）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_IsUsingAisacControlByName
 */
CriBool CRIAPI criAtomExAcb_IsUsingAisacControlById(CriAtomExAcbHn acb_hn, CriAtomExCueId id, CriAtomExAisacControlId aisac_control_id);

/*JP
 * \brief キューがAISAC Controlでコントロール可能かどうかの取得（名前指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn					ACBハンドル
 * \param[in]	name					キュー名
 * \param[in]	aisac_control_name		AISAC Controlインデックス
 * \return		CriBool					取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キュー名とAISAC Controlインデックスを指定して、AISAC Control情報を取得します。<br>
 * 指定したキュー名のキューが存在しない場合は、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのAISAC Control情報を元に値を返します）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_IsUsingAisacControlById
 */
CriBool CRIAPI criAtomExAcb_IsUsingAisacControlByName(CriAtomExAcbHn acb_hn, const CriChar8 *name, const CriChar8 *aisac_control_name);

/*JP
 * \brief キューに設定されているプライオリティの取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \return		CriSint32	プライオリティ（取得に失敗した場合-1が帰ります）
 * \par 説明:
 * キューIDを指定して、キューに設定されているプライオリティを取得します。<br>
 * 指定したキューIDのキューが存在しない場合は、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのプライオリティが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetCuePriorityByName
 */
CriSint32 CRIAPI criAtomExAcb_GetCuePriorityById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューに設定されているプライオリティの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		CriSint32	プライオリティ（取得に失敗した場合-1が帰ります）
 * \par 説明:
 * キュー名を指定して、キューに設定されているプライオリティを取得します。<br>
 * 指定したキュー名のキューが存在しない場合は、-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューのプライオリティが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetCuePriorityById
 */
CriSint32 CRIAPI criAtomExAcb_GetCuePriorityByName(CriAtomExAcbHn acb_hn, const CriChar8 *name);

/*JP
 * \brief 音声波形情報の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	id				キューID
 * \param[out]	waveform_info	音声波形情報
 * \return		CriBool			取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キューIDを指定して、そのキューで再生される音声波形の情報を取得します。<br>
 * そのキューで再生される音声波形が複数ある場合、初めのトラックで初めに再生される音声波形の情報が取得されます。
 * 指定したキューIDのキューが存在しない場合、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの音声波形情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriBool CRIAPI criAtomExAcb_GetWaveformInfoById(
	CriAtomExAcbHn acb_hn, CriAtomExCueId id, CriAtomExWaveformInfo *waveform_info);

/*JP
 * \brief 音声波形情報の取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	name			キュー名
 * \param[out]	waveform_info	音声波形情報
 * \return		CriBool			取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キュー名を指定して、そのキューで再生される音声波形の情報を取得します。<br>
 * そのキューで再生される音声波形が複数ある場合、初めのトラックで初めに再生される音声波形の情報が取得されます。
 * 指定したキュー名のキューが存在しない場合、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの音声波形情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriBool CRIAPI criAtomExAcb_GetWaveformInfoByName(
	CriAtomExAcbHn acb_hn, const CriChar8 *name, CriAtomExWaveformInfo *waveform_info);

/*JP
 * \brief オンメモリ再生用AWBハンドルの取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \return		CriAtomAwbHn	AWBハンドル
 * \par 説明:
 * ACB データからオンメモリ再生用の AWB ハンドルを取得します。<br>
 * \par 備考:
 * ACB データ内には、オンメモリ再生用の波形データが AWB フォーマットで格納されています。<br>
 * ACB ハンドルを作成する際、 Atom ライブラリはオンメモリ再生用に 
 * AWB データを読み込み、再生用のハンドル（ AWB ハンドル）を作成します。<br>
 * <br>
 * 本関数を使用することで、 Atom ライブラリが内部的に作成した AWB ハンドルを
 * 取得することが可能です。<br>
 * 取得した AWB ハンドルを使用することで、 ACB ハンドル内のオンメモリ波形データを、
 * アプリケーション側から ::criAtomExPlayer_SetWaveId 
 * 関数を使用して再生することが可能になります。<br>
 * （キューに含まれる波形データをシームレス連結再生する際や、
 * デバッグ用途で ACB データ内に含まれるオンメモリ波形データを再生する、
 * といった用途に利用可能です。）<br>
 * \attention
 * ACB ハンドルが保持する AWB ハンドルは、 ACB ハンドルリリース時に破棄されます。<br>
 * 本関数で取得した AWB ハンドルを個別に破棄したり、
 * 取得済みの AWB ハンドルに ACB ハンドルリリース後にアクセスしたりすると、
 * アクセス違反等の重大な不具合が発生する可能性があります。<br>
 * \sa criAtomExAcb_GetStreamingAwbHandle
 */
CriAtomAwbHn CRIAPI criAtomExAcb_GetOnMemoryAwbHandle(CriAtomExAcbHn acb_hn);

/*JP
 * \brief ストリーム再生用AWBハンドルの取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn			ACBハンドル
 * \return		CriAtomAwbHn	AWBハンドル
 * \par 説明:
 * ACB データからストリーム再生用の AWB ハンドルを取得します。<br>
 * \par 備考:
 * ACB データ内には、ストリーム再生用の AWB ファイルが関連付けられています。<br>
 * ACB ハンドルを作成する際、 Atom ライブラリはストリーム再生用に
 * AWB データを読み込み、再生用のハンドル（ AWB ハンドル）を作成します。<br>
 * <br>
 * 本関数を使用することで、 Atom ライブラリが内部的に作成した AWB ハンドルを
 * 取得することが可能です。<br>
 * 取得した AWB ハンドルを使用することで、 ストリーム再生用の波形データを、
 * アプリケーション側から ::criAtomExPlayer_SetWaveId 
 * 関数を使用して再生することが可能になります。<br>
 * （キューに含まれる波形データをシームレス連結再生する際や、
 * デバッグ用途で ACB データに関連付けられたストリーム再生用波形データを再生する、
 * といった用途に利用可能です。）<br>
 * \attention
 * ACB ハンドルが保持する AWB ハンドルは、 ACB ハンドルリリース時に破棄されます。<br>
 * 本関数で取得した AWB ハンドルを個別に破棄したり、
 * 取得済みの AWB ハンドルに ACB ハンドルリリース後にアクセスしたりすると、
 * アクセス違反等の重大な不具合が発生する可能性があります。<br>
 * \sa criAtomExAcb_GetOnMemoryAwbHandle
 */
CriAtomAwbHn CRIAPI criAtomExAcb_GetStreamingAwbHandle(CriAtomExAcbHn acb_hn);

/*JP
 * \brief キュー情報の取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \param[out]	info		キュー情報
 * \return		CriBool		取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キュー名を指定して、キュー情報を取得します。<br>
 * 指定したキュー名のキューが存在しない場合、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetCueInfoById, criAtomExAcb_GetCueInfoByIndex
 */
CriBool CRIAPI criAtomExAcb_GetCueInfoByName(CriAtomExAcbHn acb_hn, const CriChar8* name, CriAtomExCueInfo* info);

/*JP
 * \brief キュー情報の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \param[out]	info		キュー情報
 * \return		CriBool		取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キューIDを指定して、キュー情報を取得します。<br>
 * 指定したキューIDのキューが存在しない場合、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetCueInfoByName, criAtomExAcb_GetCueInfoByIndex
 */
CriBool CRIAPI criAtomExAcb_GetCueInfoById(CriAtomExAcbHn acb_hn, CriAtomExCueId id, CriAtomExCueInfo* info);

/*JP
 * \brief キュー情報の取得（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		キューインデックス
 * \param[out]	info		キュー情報
 * \return		CriBool		取得に成功したかどうか（成功：CRI_TRUE、失敗：CRI_FALSE）
 * \par 説明:
 * キューインデックスを指定して、キュー情報を取得します。<br>
 * 指定したキューインデックスのキューが存在しない場合、CRI_FALSEが返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの情報が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetCueInfoByName, criAtomExAcb_GetCueInfoById
 */
CriBool CRIAPI criAtomExAcb_GetCueInfoByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index, CriAtomExCueInfo* info);

/*JP
 * \brief キューリミットが設定されているキューの発音数の取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \return		CriSint32	発音数（キューリミットが設定されていないキューを指定した場合-1が帰ります）
 * \par 説明:
 * キュー名を指定して、キューリミットが設定されているキューの発音数を取得します。<br>
 * 指定したキュー名のキューが存在しない場合や、キューリミットが設定されていないキューを指定した場合は-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの発音数が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumCuePlayingCountById, criAtomExAcb_GetNumCuePlayingCountByIndex
 */
CriSint32 CRIAPI criAtomExAcb_GetNumCuePlayingCountByName(CriAtomExAcbHn acb_hn, const CriChar8* name);

/*JP
 * \brief キューリミットが設定されているキューの発音数の取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID名
 * \return		CriSint32	発音数（キューリミットが設定されていないキューを指定した場合-1が帰ります）
 * \par 説明:
 * キューIDを指定して、キューリミットが設定されているキューの発音数を取得します。<br>
 * 指定したキューIDのキューが存在しない場合や、キューリミットが設定されていないキューを指定した場合は-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの発音数が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumCuePlayingCountByName, criAtomExAcb_GetNumCuePlayingCountByIndex
 */
CriSint32 CRIAPI criAtomExAcb_GetNumCuePlayingCountById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キューリミットが設定されているキューの発音数の取得（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		キューインデックス
 * \return		CriSint32	発音数（キューリミットが設定されていないキューを指定した場合-1が帰ります）
 * \par 説明:
 * キュー名を指定して、キューリミットが設定されているキューの発音数を取得します。<br>
 * 指定したキューインデックスのキューが存在しない場合や、キューリミットが設定されていないキューを指定した場合は-1が返ります。<br>
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキューの発音数が返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * \sa criAtomExAcb_GetNumCuePlayingCountByName, criAtomExAcb_GetNumCuePlayingCountById
 */
CriSint32 CRIAPI criAtomExAcb_GetNumCuePlayingCountByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief ブロックインデックスの取得（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	index				キューインデックス
 * \param[in]	block_name			ブロック名
 * \return		CriAtomExBlockIndex	ブロックインデックス
 * \par 説明:
 * キューインデックスとブロック名からブロックインデックスを取得します。<br>
 * 指定したキューインデックスのキューが存在しない場合やブロック名が存在しない場合は、
 * CRIATOMEX_INVALID_BLOCK_INDEX が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューインデックスに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューインデックスを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキュー内のブロックインデックスが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExBlockIndex CRIAPI criAtomExAcb_GetBlockIndexByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index, const CriChar8* block_name);

/*JP
 * \brief ブロックインデックスの取得（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	id					キューID
 * \param[in]	block_name			ブロック名
 * \return		CriAtomExBlockIndex	ブロックインデックス
 * \par 説明:
 * キューIDとブロック名からブロックインデックスを取得します。<br>
 * 指定したキューIDのキューが存在しない場合やブロック名が存在しない場合は、
 * CRIATOMEX_INVALID_BLOCK_INDEX が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキュー内のブロックインデックスが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExBlockIndex CRIAPI criAtomExAcb_GetBlockIndexById(CriAtomExAcbHn acb_hn, CriAtomExCueId id, const CriChar8* block_name);

/*JP
 * \brief ブロックインデックスの取得（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn				ACBハンドル
 * \param[in]	name				キュー名
 * \param[in]	block_name			ブロック名
 * \return		CriAtomExBlockIndex	ブロックインデックス
 * \par 説明:
 * キュー名とブロック名からブロックインデックスを取得します。<br>
 * 指定したキュー名のキューが存在しない場合やブロック名が存在しない場合は、
 * CRIATOMEX_INVALID_BLOCK_INDEX が返ります。
 * \par 備考:
 * 第1引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータ内のキュー内のブロックインデックスが返されます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 */
CriAtomExBlockIndex CRIAPI criAtomExAcb_GetBlockIndexByName(CriAtomExAcbHn acb_hn, const CriChar8* name, const CriChar8* block_name);

/*JP
 * \brief インゲームプレビュー用データのロード検知コールバック関数の登録
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	func		ロード検知コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * インゲームプレビュー用データのロードを検知した場合に呼び出すコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、ACBロード関数内でACBの内容解析を行ったタイミングで実行されます。<br>
 * \attention
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExAcbDetectionInGamePreviewDataCbFunc
 */
void CRIAPI criAtomExAcb_SetDetectionInGamePreviewDataCallback(CriAtomExAcbDetectionInGamePreviewDataCbFunc func, void* obj);

/*JP
 * \brief ACB情報の取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[out]	acb_info	ACB情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * ACBデータの各種情報を取得します。<br>
 * \par 備考:
 * 引数（ acb_hn ）に NULL を指定した場合、最後にロードしたACBデータを処理対象とします。<br>
 * \sa CriAtomExAcbInfo
 */
CriBool CRIAPI criAtomExAcb_GetAcbInfo(CriAtomExAcbHn acb_hn, CriAtomExAcbInfo *acb_info);

/*JP
 * \brief キュータイプステートのリセット（キュー名指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	name		キュー名
 * \par 説明:
 * キュー名を指定して、キュータイプステートをリセットします。<br>
 * \attention
 * リセット対象は指定したキューのステートのみです。キューに含まれるサブシンセやキューリンク先の
 * ステートはリセットされません。
 * \par 備考:
 * キュータイプステートは、ポリフォニックタイプキュー以外のキュー再生時の前回再生トラックを
 * ステートとして管理する仕組みです。<br>
 * 本関数は、ステート管理領域をリセットしACBロード直後の状態に戻します。
 * \sa criAtomExAcb_ResetCueTypeStateById, criAtomExAcb_ResetCueTypeStateByIndex
 */
void CRIAPI criAtomExAcb_ResetCueTypeStateByName(CriAtomExAcbHn acb_hn, const CriChar8* name);

/*JP
 * \brief キュータイプステートのリセット（キューID指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	id			キューID
 * \par 説明:
 * キューIDを指定して、キュータイプステートをリセットします。<br>
 * \attention
 * リセット対象は指定したキューのステートのみです。キューに含まれるサブシンセやキューリンク先の
 * ステートはリセットされません。
 * \par 備考:
 * キュータイプステートは、ポリフォニックタイプキュー以外のキュー再生時の前回再生トラックを
 * ステートとして管理する仕組みです。<br>
 * 本関数は、ステート管理領域をリセットしACBロード直後の状態に戻します。
 * \sa criAtomExAcb_ResetCueTypeStateByName, criAtomExAcb_ResetCueTypeStateByIndex
 */
void CRIAPI criAtomExAcb_ResetCueTypeStateById(CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief キュータイプステートのリセット（キューインデックス指定）
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		キューインデックス
 * \par 説明:
 * キューインデックスを指定して、キュータイプステートをリセットします。<br>
 * \attention
 * リセット対象は指定したキューのステートのみです。キューに含まれるサブシンセやキューリンク先の
 * ステートはリセットされません。
 * \par 備考:
 * キュータイプステートは、ポリフォニックタイプキュー以外のキュー再生時の前回再生トラックを
 * ステートとして管理する仕組みです。<br>
 * 本関数は、ステート管理領域をリセットしACBロード直後の状態に戻します。
 * \sa criAtomExAcb_ResetCueTypeStateByName, criAtomExAcb_ResetCueTypeStateById
 */
void CRIAPI criAtomExAcb_ResetCueTypeStateByIndex(CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief ストリーム用AWBファイルのアタッチ
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	awb_binder	AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path	AWBファイルのパス
 * \param[in]	awb_name	AWB名
 * \param[in]	work		アタッチで必要な追加ワーク
 * \param[in]	work_size	追加ワークサイズ
 * \par 説明:
 * ACBハンドルに対してストリーム用のAWBファイルをアタッチします。
 * 第2引数の awb_binder 、および第3引数の awb_path には、ストリーム再生用
 * のAWBファイルを指定します。<br>
 * 第5引数の awb_name はAWBをアタッチするスロットを指定するために使用します。
 * このため、AtomCraftが出力したAWB名（ファイル名から拡張子を取り除いた部分）を変更している場合
 * はオリジナルのAWB名を指定してください。<br>
 * AWBファイルのアタッチを行なうには、ライブラリが内部で利用するためのメモリ領域
 * （ワーク領域）を確保する必要があります。<br>
 * AWBファイルのアタッチに失敗した場合、エラーコールバックが発生します。<br>
 * 失敗の理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザがワーク領域を用意する必要はありません。<br>
 * workにNULL、work_sizeに0を指定するだけで、必要なメモリを登録済みのメモリ確保関数から確保します。<br>
 * アタッチ時に確保されたメモリは、デタッチ時（ ::criAtomExAcb_DetachAwbFile 
 * 関数実行時）か、ACBハンドルリリース時（ ::criAtomExAcb_Release 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtomExAcb_CalculateWorkSizeForAttachAwbFile 関数で取得可能です。<br>
 * 本関数呼び出し時に ::criAtomExAcb_CalculateWorkSizeForAttachAwbFile 関数で取得した
 * サイズ分のメモリを予め確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域はデタッチ処理（ ::criAtomExAcb_DetachAwbFile 
 * 関数実行時）か、ACBハンドルリリース処理（ ::criAtomExAcb_Release 関数実行時）を行なうまでの間、
 * ライブラリ内で利用され続けます。<br>
 * AWBファイルをアタッチするとライブラリ内部的にバインダー（ CriFsBinderHn ）とローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * 追加でAWBファイルをアタッチする場合、追加数分のバインダーとローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_DetachAwbFile, criAtomExAcb_Release, criAtomExAcb_CalculateWorkSizeForAttachAwbFile
*/
void CRIAPI criAtomExAcb_AttachAwbFile(
	CriAtomExAcbHn acb_hn,
	CriFsBinderHn awb_binder,
	const CriChar8* awb_path,
	const CriChar8* awb_name,
	void* work,
	CriSint32 work_size);

/*JP
 * \brief ストリーム用AWBファイルのデタッチ
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	awb_name	AWB名
 * \par 説明:
 * ACBハンドルにアタッチされているストリーム用のAWBファイルをデタッチします。
 * 第2引数の awb_name はAWBをアタッチ時に指定したものと同じAWB名を指定指定ください。<br>
 * アタッチ時のワーク領域確保にUser Allocator方式を用いた場合は、アタッチ時に確保したメモリ領域が
 * 本関数処理時に開放されます。<br>
 * \sa criAtomExAcb_AttachAwbFile
 */
void CRIAPI criAtomExAcb_DetachAwbFile(
	CriAtomExAcbHn acb_hn,
	const CriChar8* awb_name);

/*JP
 * \brief ストリーム用AWBファイルのアタッチに必要なワークサイズ取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	awb_binder	AWBファイルを含むバインダーのハンドル
 * \param[in]	awb_path	AWBファイルのパス
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ::criAtomExAcb_LoadAcbFileById 関数の実行に必要なワーク領域サイズを計算します。<br>
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \sa criAtomExAcb_AttachAwbFile
 */
CriSint32 CRIAPI criAtomExAcb_CalculateWorkSizeForAttachAwbFile(
	CriFsBinderHn awb_binder,
	const CriChar8* awb_path);

/*JP
 * \brief ストリーム用AWBスロット数の取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \return		CriSint32	ストリームAWBスロット数
 * \par 説明:
 * ACBハンドルが必要とするストリームAWBの数を取得します。<br>
 */
CriSint32 CRIAPI criAtomExAcb_GetNumAwbFileSlots(
	CriAtomExAcbHn acb_hn);

/*JP
 * \brief ストリーム用AWBスロットの取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	index		スロットインデックス
 * \return		const CriChar8*	ストリームAWBポート名
 * \par 説明:
 * インデックスを指定してACBハンドル内のストリームAWBスロット名を取得します。<br>
 * 取得したスロット名は ::criAtomExAcb_AttachAwbFile 関数の第4引数や、
 * ::criAtomExAcb_DetachAwbFile 関数の第2引数のスロット指定に使用します。<br>
 */
const CriChar8* CRIAPI criAtomExAcb_GetAwbFileSlotName(
	CriAtomExAcbHn acb_hn, CriUint16 index);

/*JP
 * \brief ストリーム用AWBファイルのアタッチ状態取得
 * \ingroup ATOMEXLIB_ACB
 * \param[in]	acb_hn		ACBハンドル
 * \param[in]	awb_name	AWB名
 * \par 説明:
 * ACBハンドルにAWBファイルがアタッチされているかを取得します。
 * 第2引数の awb_name はAWBをアタッチするスロット名です、状態を取得したいスロットのAWB名を指定してください。<br>
 */
CriBool CRIAPI criAtomExAcb_IsAttachedAwbFile(
	CriAtomExAcbHn acb_hn,
	const CriChar8* awb_name);


/*==========================================================================
 *      CRI AtomEx Voice Pool API
 *=========================================================================*/
/*JP
 * \brief 標準ボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		標準ボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 標準ボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateStandardVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateStandardVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExStandardVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForStandardVoicePool マクロ使用時
 * と同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateStandardVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool(
	const CriAtomExStandardVoicePoolConfig *config);

/*JP
 * \brief 標準ボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		標準ボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * 標準ボイスプールを作成します。<br>
 * （標準ボイスは、ADXデータとHCAデータの両方の再生に対応したボイスです。）<br>
 * <br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、ADXとHCAの再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでADXやHCAデータ（もしくはADXやHCAデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成された標準ボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExStandardVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能な音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExStandardVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのデータは再生できません。<br>
 * （ステレオデータを再生する場合、AtomExプレーヤーは、ステレオが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExStandardVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * を越えるデータは再生できなくなります。<br>
 * （指定されたサンプリングレート以下のデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExStandardVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExStandardVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForStandardVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateStandardVoicePool(
	const CriAtomExStandardVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ADXボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		ADXボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ADXボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateAdxVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateAdxVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExAdxVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForAdxVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateAdxVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForAdxVoicePool(
	const CriAtomExAdxVoicePoolConfig *config);

/*JP
 * \brief ADXボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		ADXボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * ADXボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForAdxVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、ADX再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでADXデータ（もしくはADXデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたADXボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExAdxVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なADX音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExAdxVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのデータは再生できません。<br>
 * （ステレオデータを再生する場合、AtomExプレーヤーは、ステレオが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExAdxVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * を越えるデータは再生できなくなります。<br>
 * （指定されたサンプリングレート以下のデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExAdxVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExAdxVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForAdxVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateAdxVoicePool(
	const CriAtomExAdxVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCAボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		HCAボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCAボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateHcaVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateHcaVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExHcaVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForHcaVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateHcaVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForHcaVoicePool(
	const CriAtomExHcaVoicePoolConfig *config);

/*JP
 * \brief HCAボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		HCAボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * HCAボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForHcaVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、HCA再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでHCAデータ（もしくはHCAデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたHCAボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExHcaVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なHCA音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExHcaVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるHCAデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのHCAデータは再生できません。<br>
 * （ステレオHCAデータを再生する場合、AtomExプレーヤーは、ステレオHCAが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExHcaVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * を越えるHCAデータは再生できなくなります。<br>
 * （指定されたサンプリングレート以下のHCAデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExHcaVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExHcaVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForHcaVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateHcaVoicePool(
	const CriAtomExHcaVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief HCA-MXボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		HCA-MXボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * HCA-MXボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateHcaMxVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateHcaMxVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExHcaMxVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはHCA-MX初期化時（ ::criAtomExHcaMx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、HCA-MXを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateHcaMxVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool(
	const CriAtomExHcaMxVoicePoolConfig *config);

/*JP
 * \brief HCA-MXボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		HCA-MXボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * HCA-MXボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、HCA-MX再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでHCA-MXデータ（もしくはHCA-MXデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたHCA-MXボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExHcaMxVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なHCA-MX音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExHcaMxVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるHCA-MXデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのHCA-MXデータは再生できません。<br>
 * （ステレオHCA-MXデータを再生する場合、AtomExプレーヤーは、ステレオHCA-MXが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExHcaMxVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * 以外のHCA-MXデータは再生できなくなります。<br>
 * （他のボイスプールと異なり、同一サンプリングレートのデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExHcaMxVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、必ずHCA-MXの初期化処理（ ::criAtomExHcaMx_Initialize 関数）
 * を実行しておく必要があります。<br>
 * また、 ::criAtomExHcaMx_Initialize 関数実行時に指定した数以上のHCA-MXデータは再生できません。<br>
 * HCA-MXボイスプールを作成する際には、 ::CriAtomExHcaMxVoicePoolConfig 構造体の num_voices 
 * の値が、HCA-MX初期化時に指定する ::CriAtomExHcaMxConfig 構造体の max_voices の数を超えないよう、
 * ご注意ください。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExHcaMxVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForHcaMxVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateHcaMxVoicePool(
	const CriAtomExHcaMxVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief Waveボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		Waveボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * Waveボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateWaveVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateWaveVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExWaveVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForWaveVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateWaveVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForWaveVoicePool(
	const CriAtomExWaveVoicePoolConfig *config);

/*JP
 * \brief Waveボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		Waveボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * Waveボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForWaveVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、Wave再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでWaveデータ（もしくはWaveデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたWaveボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExWaveVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なWave音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExWaveVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるWaveデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのWaveデータは再生できません。<br>
 * （ステレオWaveデータを再生する場合、AtomExプレーヤーは、ステレオWaveが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExWaveVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * を越えるWaveデータは再生できなくなります。<br>
 * （指定されたサンプリングレート以下のWaveデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExWaveVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * <br>
 * 再生可能なフォーマットは、32bit以下の非圧縮PCMデータのみです。<br>
 * ループ再生を行う場合、ストリーム再生用の音声データについては、
 * smplチャンクがdataチャンクよりも手前に配置されている必要があります。
 * \sa CriAtomExWaveVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForWaveVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateWaveVoicePool(
	const CriAtomExWaveVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief AIFFボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		AIFFボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * AIFFボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateAiffVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateAiffVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExAiffVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForAiffVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateAiffVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForAiffVoicePool(
	const CriAtomExAiffVoicePoolConfig *config);

/*JP
 * \brief AIFFボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		AIFFボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * AIFFボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForAiffVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、AIFF再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでAIFFデータ（もしくはAIFFデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたAIFFボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExAiffVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なAIFF音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExAiffVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、ボイスプール内のボイスが再生できる
 * 音声データのチャンネル数になります。<br>
 * チャンネル数を少なくすることで、ボイスプールの作成に必要なメモリサイズは
 * 小さくなりますが、指定されたチャンネル数を越えるAIFFデータは再生できなくなります。<br>
 * 例えば、ボイスプールをモノラルで作成した場合、ステレオのAIFFデータは再生できません。<br>
 * （ステレオAIFFデータを再生する場合、AtomExプレーヤーは、ステレオAIFFが再生可能な
 * ボイスプールからのみボイスを取得します。）<br>
 * ただし、ステレオのボイスプールを作成した場合、モノラルデータ再生時にステレオ
 * ボイスプールのボイスが使用される可能性はあります。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExAiffVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、値を下げることでもボイスプール
 * に必要なメモリサイズは小さくすることが可能ですが、指定されたサンプリングレート
 * を越えるAIFFデータは再生できなくなります。<br>
 * （指定されたサンプリングレート以下のAIFFデータのみが再生可能です。）<br>
 * <br>
 * ストリーミング再生の有無（::CriAtomExAiffVoicePoolConfig 構造体の 
 * player_config.streaming_flag ）についても、オンメモリ再生のみのボイスプールは
 * ストリーミング再生可能なボイスプールに比べ、サイズが小さくなります。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * <br>
 * 再生可能なフォーマットは、32bit以下の非圧縮PCMデータのみです。<br>
 * ループ再生を行う場合、ストリーム再生用の音声データについては、
 * INSTチャンクがSSNDチャンクよりも手前に配置されている必要があります。
 * \sa CriAtomExAiffVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForAiffVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateAiffVoicePool(
	const CriAtomExAiffVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief RawPCMボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		RawPCMボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * RawPCMボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateRawPcmVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateRawPcmVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプールの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExRawPcmVoicePoolConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool マクロ使用時と
 * 同じパラメーター）でワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ワーク領域のサイズはライブラリ初期化時（ ::criAtomEx_Initialize 関数実行時）
 * に指定したパラメーターによって変化します。<br>
 * そのため、本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa criAtomExVoicePool_AllocateRawPcmVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForRawPcmVoicePool(
	const CriAtomExRawPcmVoicePoolConfig *config);

/*JP
 * \brief RawPCMボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		RawPCMボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExVoicePoolHn	ボイスプールハンドル
 * \par 説明：
 * RawPCMボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForRawPcmVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、RawPCM再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでRawPCMデータ（もしくはRawPCMデータを含むキュー）の再生を行うと、
 * AtomExプレーヤーは作成されたRawPCMボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ボイスプール作成時には、プール作成用コンフィグ構造体
 * （ ::CriAtomExRawPcmVoicePoolConfig 構造体の num_voices ）
 * で指定した数分のボイスが、ライブラリ内で作成されます。<br>
 * 作成するボイスの数が多いほど、同時に再生可能なRawPCM音声の数は増えますが、
 * 反面、使用するメモリは増加します。<br>
 * <br>
 * ボイスプール作成時には、ボイス数の他に、再生可能な音声のチャンネル数、
 * サンプリング周波数、ストリーム再生の有無を指定します。<br>
 * <br>
 * ボイスプール作成時に指定する音声チャンネル数（ ::CriAtomExRawPcmVoicePoolConfig 
 * 構造体の player_config.max_channels ）は、実際に供給するRawPCMのフォーマットの
 * チャンネル数を指定します。<br>
 * <br>
 * サンプリングレート（ ::CriAtomExRawPcmVoicePoolConfig 構造体の 
 * player_config.max_sampling_rate ）についても、実際に供給するRawPCMの
 * フォーマットのサンプリングレートを指定します。<br>
 * <br>
 * 尚、AtomExプレーヤーがデータを再生した際に、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをボイスプール破棄時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * <br>
 * ストリーム再生用のボイスプールは、内部的にボイスの数分だけローダー（ CriFsLoaderHn ）
 * を確保します。<br>
 * ストリーム再生用のボイスプールを作成する場合、ボイス数分のローダーが確保できる設定で
 * Atomライブラリ（またはCRI File Systemライブラリ）を初期化する必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * ボイスプールの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExRawPcmVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForRawPcmVoicePool, criAtomExVoicePool_Free
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateRawPcmVoicePool(
	const CriAtomExRawPcmVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief インストゥルメントボイスプールの作成
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		インストゥルメントボイスプール作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExInstrumentVoicePoolHn 	インストゥルメントボイスプールハンドル
 * \par 説明：
 * インストゥルメントボイスプールを作成します。<br>
 * ボイスプールを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExVoicePool_CalculateWorkSizeForInstrumentVoicePool 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * 本関数を実行することで、インストゥルメントトラックの再生が可能なボイスがプールされます。<br>
 * AtomExプレーヤーでインストゥルメントトラックの再生を行うと、
 * AtomExプレーヤーは作成されたインストゥルメントボイスプールからボイスを取得し、再生を行います。<br>
 * <br>
 * ボイスプールの作成に成功すると、戻り値としてボイスプールハンドルが返されます。<br>
 * アプリケーション終了時には、作成したボイスプールを ::criAtomExVoicePool_Free 
 * 関数で破棄する必要があります。<br>
 * <br>
 * ボイスプールの作成に失敗すると、本関数はNULLを返します。<br>
 * ボイスプールの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \sa CriAtomExInstrumentVoicePoolConfig, criAtomExVoicePool_CalculateWorkSizeForInstrumentVoicePool, criAtomExVoicePool_Free, 
 */
CriAtomExVoicePoolHn CRIAPI criAtomExVoicePool_AllocateInstrumentVoicePool(
	const CriAtomExInstrumentVoicePoolConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ボイスプールの破棄
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	pool		ボイスプールハンドル
 * \par 説明:
 * 作成済みのボイスプールを破棄します。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ボイスプール作成時に確保されたメモリ領域が解放されます。<br>
 * （ボイスプール作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 音声再生中にボイスプールを破棄した場合、本関数内で再生停止を待ってから
 * リソースの解放が行われます。<br>
 * （ファイルから再生している場合は、さらに読み込み完了待ちが行われます。）<br>
 * そのため、本関数内で処理が長時間（数フレーム）ブロックされる可能性があります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomExVoicePool_AllocateStandardVoicePool
 */
void CRIAPI criAtomExVoicePool_Free(CriAtomExVoicePoolHn pool);

/*JP
 * \brief 全てのボイスプールを破棄
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \par 説明:
 * 作成済みのボイスプールを全て破棄します。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ボイスプール作成時に確保されたメモリ領域が解放されます。<br>
 * （ボイスプール作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 音声再生中にボイスプールを破棄した場合、本関数内で再生停止を待ってから
 * リソースの解放が行われます。<br>
 * （ファイルから再生している場合は、さらに読み込み完了待ちが行われます。）<br>
 * そのため、本関数内で処理が長時間（数フレーム）ブロックされる可能性があります。<br>
 * ボイスプールの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomExVoicePool_AllocateStandardVoicePool
 */
void CRIAPI criAtomExVoicePool_FreeAll(void);

/*JP
 * \brief ボイスの使用状況の取得
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	pool		ボイスプールハンドル
 * \param[out]	cur_num		現在使用中のボイス数
 * \param[out]	limit		利用可能なボイスの最大数
 * \par 説明:
 * ボイスプール内のボイスの内、現在使用中のボイスの数、および利用可能な
 * 最大ボイス数（＝プール作成時に指定した max_voices の数）を取得します。<br>
 */
void CRIAPI criAtomExVoicePool_GetNumUsedVoices(
	CriAtomExVoicePoolHn pool, CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \brief プレーヤーハンドルの取得
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	pool		ボイスプールハンドル
 * \param[in]	index		プレーヤーインデックス
 * \return		CriAtomPlayerHn		Atomプレーヤーハンドル
 * \par 説明:
 * ボイスプール内で作成されたAtomプレーヤーハンドルを取得します。<br>
 * \par 備考:
 * 本関数は情報取得用途にのみに利用可能なデバッグ関数です。<br>
 */
CriAtomPlayerHn CRIAPI criAtomExVoicePool_GetPlayerHandle(
	CriAtomExVoicePoolHn pool, CriSint32 index);

/*JP
 * \brief インストゥルメントボイスプール作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_VOICE_POOL
 * \param[in]	config		インストゥルメントボイスプール作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * インストゥルメントボイスプールの作成に必要なワーク領域のサイズを計算します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExVoicePool_AllocateInstrumentVoicePool 関数でボイスプールを作成する際には、
 * ::criAtomExVoicePool_AllocateInstrumentVoicePool 関数に本関数が返すサイズ分のメモリをワーク
 * 領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \sa criAtomExVoicePool_AllocateInstrumentVoicePool
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForInstrumentVoicePool(
	const CriAtomExInstrumentVoicePoolConfig *config);

/*==========================================================================
 *      CRI AtomEx Category API
 *=========================================================================*/
/*JP
 * \brief ID指定によるカテゴリに対するボリューム設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id		カテゴリID
 * \param[in]	volume	ボリューム値
 * \par 説明:
 * ID指定でカテゴリに対してボリュームを設定します。
 * \attention
 * 本関数による設定値はACFによって設定されているカテゴリボリュームを上書き変更します。<br>
 * 本関数による設定値とACF設定値との乗算適用は行われないことに注意してください。
 */
void CRIAPI criAtomExCategory_SetVolumeById(CriAtomExCategoryId id, CriFloat32 volume);

/*JP
 * \brief ID指定によるカテゴリボリューム取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id		カテゴリID
 * return		CriFloat32 カテゴリボリューム
 * \par 説明:
 * ID指定でカテゴリのボリュームを取得します。
 */
CriFloat32 CRIAPI criAtomExCategory_GetVolumeById(CriAtomExCategoryId id);

/*JP
 * \brief ID指定による最終カテゴリボリューム取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id		カテゴリID
 * return		CriFloat32 カテゴリボリューム
 * \par 説明:
 * ID指定でREACT、AISACなどの影響を受けた最終的なカテゴリのボリューム値を取得します。
 * \par 備考:
 * 最終的なカテゴリのボリューム値を取得するためにパラメーターの計算処理を行うので、
 * 負荷が大きい関数です。
 */
CriFloat32 CRIAPI criAtomExCategory_GetTotalVolumeById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定によるカテゴリに対するボリューム設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * \param[in]	volume	ボリューム値
 * \par 説明:
 * 名前指定でカテゴリに対してボリュームを設定します。
 * \attention
 * 本関数による設定値はACFによって設定されているカテゴリボリュームを上書き変更します。<br>
 * 本関数による設定値とACF設定値との乗算適用は行われないことに注意してください。
 */
void CRIAPI criAtomExCategory_SetVolumeByName(const CriChar8* name, CriFloat32 volume);

/*JP
 * \brief 名前指定によるカテゴリボリューム取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name		カテゴリ名
 * return		CriFloat32 カテゴリボリューム
 * \par 説明:
 * 名前指定でカテゴリのボリュームを取得します。
 */
CriFloat32 CRIAPI criAtomExCategory_GetVolumeByName(const CriChar8* name);

/*JP
 * \brief 名前指定による最終カテゴリボリューム取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name		カテゴリ名
 * return		CriFloat32 カテゴリボリューム
 * \par 説明:
 * 名前指定でREACT、AISACなどの影響を受けた最終的なカテゴリのボリューム値を取得します。
 * \par 備考:
 * 最終的なカテゴリのボリューム値を取得するためにパラメーターの計算処理を行うので、
 * 負荷が大きい関数です。
 */
CriFloat32 CRIAPI criAtomExCategory_GetTotalVolumeByName(const CriChar8* name);

/*JP
 * \brief ID指定によるカテゴリミュート状態設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * \param[in]	mute ミュート状態（CRI_TRUE = ミュート、CRI_FALSE = ミュート解除）
 * \par 説明:
 * ID指定でカテゴリのミュート状態を設定します。
 */
void CRIAPI criAtomExCategory_MuteById(CriAtomExCategoryId id, CriBool mute);

/*JP
 * \brief ID指定によるカテゴリミュート状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * return		CriBool ミュート状態（CRI_TRUE = ミュート中、CRI_FALSE = ミュートされていない）
 * \par 説明:
 * ID指定でカテゴリのミュート状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsMutedById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定によるカテゴリミュート状態設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * \param[in]	mute ミュート状態（CRI_TRUE = ミュート、CRI_FALSE = ミュート解除）
 * \par 説明:
 * 名前指定でカテゴリのミュート状態を設定します。
 */
void CRIAPI criAtomExCategory_MuteByName(const CriChar8* name, CriBool mute);

/*JP
 * \brief 名前指定によるカテゴリミュート状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * return		CriBool ミュート状態（CRI_TRUE = ミュート中、CRI_FALSE = ミュートされていない）
 * \par 説明:
 * 名前指定でカテゴリのミュート状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsMutedByName(const CriChar8* name);

/*JP
 * \brief ID指定によるカテゴリソロ状態設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * \param[in]	solo ソロ状態（CRI_TRUE = ソロ、CRI_FALSE = ソロ解除）
 * \param[in]	mute_volume 他のカテゴリに適用するミュートボリューム値
 * \par 説明:
 * ID指定でカテゴリのソロ状態を設定します。<br>
 * mute_volumeで指定したボリュームは同一カテゴリグループに所属する
 * カテゴリに対して適用されます。
 */
void CRIAPI criAtomExCategory_SoloById(CriAtomExCategoryId id, CriBool solo, CriFloat32 mute_volume);

/*JP
 * \brief ID指定によるカテゴリソロ状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * return		CriBool ソロ状態（CRI_TRUE = ソロ中、CRI_FALSE = ソロではない）
 * \par 説明:
 * ID指定でカテゴリのソロ状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsSoloedById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定によるカテゴリソロ状態設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name カテゴリ名
 * \param[in]	solo ソロ状態（CRI_TRUE = ソロ、CRI_FALSE = ソロ解除）
 * \param[in]	mute_volume 他のカテゴリに適用するミュートボリューム値
 * \par 説明:
 * 名前指定でカテゴリのソロ状態を設定します。<br>
 * mute_volumeで指定したボリュームは同一カテゴリグループに所属する
 * カテゴリに対して適用されます。
 */
void CRIAPI criAtomExCategory_SoloByName(const CriChar8* name, CriBool solo, CriFloat32 mute_volume);

/*JP
 * \brief 名前指定によるカテゴリソロ状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * return		CriBool ソロ状態（CRI_TRUE = ソロ中、CRI_FALSE = ソロではない）
 * \par 説明:
 * 名前指定でカテゴリのソロ状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsSoloedByName(const CriChar8* name);

/*JP
 * \brief ID指定によるカテゴリのポーズ／ポーズ解除
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * \param[in]	sw	スイッチ（CRI_FALSE = ポーズ解除、CRI_TRUE = ポーズ）
 * \par 説明:
 * ID指定でカテゴリのポーズ／ポーズ解除を行います。<br>
 * ::criAtomExCategory_SetFadeOutTimeById 関数や::criAtomExCategory_SetFadeOutTimeByName
 * 関数でフェードアウト時間が設定されている場合にポーズを行うと、設定された時間でフェードアウトした後に実際にポーズします。<br>
 * ::criAtomExCategory_SetFadeInTimeById 関数や::criAtomExCategory_SetFadeInTimeByName
 * 関数でフェードイン時間が設定されている場合にポーズ解除を行うと、ポーズ解除後、設定された時間でフェードインします。<br>
 * \par 備考:
 * カテゴリのポーズは、AtomExプレーヤー／再生音のポーズ
 * （::criAtomExPlayer_Pause 関数や::criAtomExPlayback_Pause 関数でのポーズ）とは独立して扱われ、
 * 音声の最終的なポーズ状態は、それぞれのポーズ状態を考慮して決まります。<br>
 * すなわち、どちらかがポーズ状態ならポーズ、どちらもポーズ解除状態ならポーズ解除、となります。
 */
void CRIAPI criAtomExCategory_PauseById(CriAtomExCategoryId id, CriBool sw);

/*JP
 * \brief ID指定によるカテゴリのポーズ状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id		カテゴリID
 * return		CriBool	ポーズ状態
 * \par 説明:
 * ID指定でカテゴリのポーズ状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsPausedById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定によるカテゴリのポーズ／ポーズ解除
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * \param[in]	sw		スイッチ（CRI_FALSE = ポーズ解除、CRI_TRUE = ポーズ）
 * \par 説明:
 * 名前指定でカテゴリのポーズ／ポーズ解除を行います。<br>
 * カテゴリを名前で指定する以外は、::criAtomExCategory_PauseById 関数と仕様は同じです。<br>
 * \sa criAtomExCategory_PauseById
 */
void CRIAPI criAtomExCategory_PauseByName(const CriChar8* name, CriBool sw);

/*JP
 * \brief 名前指定によるカテゴリのポーズ状態取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * return		CriBool ポーズ状態
 * \par 説明:
 * 名前指定でカテゴリのポーズ状態を取得します。
 */
CriBool CRIAPI criAtomExCategory_IsPausedByName(const CriChar8* name);

/*JP
 * \brief フェードイン時間の設定（カテゴリID指定）
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * \param[in]	ms	フェードイン時間（ミリ秒単位）
 * \par 説明:
 * カテゴリにフェードイン時間を設定します。<br>
 * フェードイン時間はポーズ解除を行った際に利用されます。<br>
 */
void CRIAPI criAtomExCategory_SetFadeInTimeById(CriAtomExCategoryId id, CriUint16 ms);

/*JP
 * \brief フェードイン時間の設定（カテゴリ名指定）
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * \param[in]	ms		フェードイン時間（ミリ秒単位）
 * \par 説明:
 * カテゴリにフェードイン時間を設定します。<br>
 * フェードイン時間はポーズ解除を行った際に利用されます。<br>
 */
void CRIAPI criAtomExCategory_SetFadeInTimeByName(const CriChar8* name, CriUint16 ms);

/*JP
 * \brief フェードアウト時間の設定（カテゴリID指定）
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id	カテゴリID
 * \param[in]	ms	フェードアウト時間（ミリ秒単位）
 * \par 説明:
 * カテゴリにフェードアウト時間を設定します。<br>
 * フェードアウト時間はポーズを行った際に利用されます。<br>
 */
void CRIAPI criAtomExCategory_SetFadeOutTimeById(CriAtomExCategoryId id, CriUint16 ms);

/*JP
 * \brief フェードアウト時間の設定（カテゴリ名指定）
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name	カテゴリ名
 * \param[in]	ms		フェードアウト時間（ミリ秒単位）
 * \par 説明:
 * カテゴリにフェードアウト時間を設定します。<br>
 * フェードアウト時間はポーズを行った際に利用されます。<br>
 */
void CRIAPI criAtomExCategory_SetFadeOutTimeByName(const CriChar8* name, CriUint16 ms);

/*JP
 * \brief ID指定によるカテゴリに対するAISACコントロール値設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id				カテゴリID
 * \param[in]	control_id		AISACコントロールID
 * \param[in]	control_value	AISACコントロール値
 * \par 説明:
 * ID指定でカテゴリに対してAISACコントロール値を設定します。<br>
 * \par 備考:
 * カテゴリをID、AISACコントロールを名前で指定したい場合、::criAtomExAcf_GetAisacControlIdByName 関数にて変換を行ってください。
 * \attention
 * キューやトラックに設定されているAISACに関しては、プレーヤーでのAISACコントロール値設定よりも、<b>カテゴリのAISACコントロール値を優先して</b>参照します。<br>
 * カテゴリにアタッチしたAISACについては、常に<b>カテゴリに設定したAISACコントロール値のみ</b>、参照されます。
 * \sa criAtomExCategory_SetAisacControlByName, criAtomExCategory_AttachAisacById, criAtomExCategory_AttachAisacByName
 */
void CRIAPI criAtomExCategory_SetAisacControlById(
	CriAtomExCategoryId id,
	CriAtomExAisacControlId control_id,
	CriFloat32 control_value
);

/*JP
 * \brief 名前指定によるカテゴリに対するAISACコントロール値設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name			カテゴリ名
 * \param[in]	control_name	AISACコントロール名
 * \param[in]	control_value	AISACコントロール値
 * \par 説明:
 * 名前指定でカテゴリに対してAISACコントロール値を設定します。<br>
 * カテゴリおよびAISACコントロールを名前で指定する以外は、::criAtomExCategory_SetAisacControlById 関数と仕様は同じです。<br>
 * \par 備考:
 * カテゴリを名前、AISACコントロールをIDで指定したい場合、::criAtomExAcf_GetAisacControlNameById 関数にて変換を行ってください。
 * \sa criAtomExCategory_SetAisacControlById, criAtomExCategory_AttachAisacById, criAtomExCategory_AttachAisacByName
 */
void CRIAPI criAtomExCategory_SetAisacControlByName(
	const CriChar8* name,
	const CriChar8* control_name,
	CriFloat32 control_value
);

/*JP
 * \brief ID指定でカテゴリにアタッチされている全てのAISACコントロール値をデフォルト値に設定する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	category_id		カテゴリID
 * \retval	CRI_TRUE = 成功
 * \retval	CRI_FALSE = 失敗
 * \par 説明:
 * カテゴリにアタッチされている全てのAISACコントロール値をデフォルト値に設定します。<br>
 * 存在しないカテゴリを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsById
 */
CriBool CRIAPI criAtomExCategory_ResetAllAisacControlById(CriAtomExCategoryId category_id);

/*JP
 * \brief 名前指定でカテゴリにアタッチされている全てのAISACコントロール値をデフォルト値に設定する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	category_name					カテゴリ名
 * \retval	CRI_TRUE = 成功
 * \retval	CRI_FALSE = 失敗
 * \par 説明:
 * カテゴリにアタッチされている全てのAISACコントロール値をデフォルト値に設定します。<br>
 * 存在しないカテゴリを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsById
 */
CriBool CRIAPI criAtomExCategory_ResetAllAisacControlByName(const CriChar8* category_name);

/*JP
 * \brief ID指定でカテゴリにAISACを取り付ける
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \param[in]	global_aisac_name	取り付けるグローバルAISAC名
 * \par 説明:
 * カテゴリにAISACをアタッチ（取り付け）します。
 * AISACをアタッチすることにより、キューやトラックにAISACを設定していなくても、AISACの効果を得ることができます。<br>
 * <br>
 * AISACのアタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのアタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \par 備考:
 * 全体設定（ACFファイル）に含まれるグローバルAISACのみ、アタッチ可能です。<br>
 * AISACの効果を得るには、キューやトラックに設定されているAISACと同様に、該当するAISACコントロール値を設定する必要があります。<br>
 * \attention
 * キューやトラックに「AISACコントロール値を変更するAISAC」が設定されていたとしても、
 * その適用結果のAISACコントロール値は、カテゴリにアタッチしたAISACには影響しません。<br>
 * カテゴリにアタッチしたAISACについては、常に<b>カテゴリに設定したAISACコントロール値のみ</b>、参照されます。<br>
 * 現在、「オートモジュレーション」や「ランダム」といったコントロールタイプのAISACのアタッチには対応しておりません。<br>
 * 現在、カテゴリにアタッチできるAISACの最大数は、8個固定です。
 * \sa criAtomExCategory_DetachAisacById
 */
void CRIAPI criAtomExCategory_AttachAisacById(CriAtomExCategoryId id, const CriChar8* global_aisac_name);

/*JP
 * \brief 名前指定でカテゴリにAISACを取り付ける
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name				カテゴリ名
 * \param[in]	global_aisac_name	取り付けるグローバルAISAC名
 * \par 説明:
 * カテゴリにAISACをアタッチ（取り付け）します。
 * カテゴリを名前で指定する以外は、::criAtomExCategory_AttachAisacById 関数と仕様は同じです。<br>
 * \sa criAtomExCategory_AttachAisacById, criAtomExCategory_DetachAisacByName
 */
void CRIAPI criAtomExCategory_AttachAisacByName(const CriChar8* name, const CriChar8* global_aisac_name);

/*JP
 * \brief ID指定でカテゴリからAISACを取り外す
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \param[in]	global_aisac_name	取り外すグローバルAISAC名
 * \par 説明:
 * カテゴリからAISACをデタッチ（取り外し）します。<br>
 * <br>
 * AISACのデタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのデタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \sa criAtomExCategory_AttachAisacById
 */
void CRIAPI criAtomExCategory_DetachAisacById(CriAtomExCategoryId id, const CriChar8* global_aisac_name);

/*JP
 * \brief 名前指定でカテゴリからAISACを取り外す
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \param[in]	global_aisac_name	取り外すグローバルAISAC名
 * \par 説明:
 * カテゴリからAISACをデタッチ（取り外し）します。<br>
 * カテゴリを名前で指定する以外は、::criAtomExCategory_DetachAisacById 関数と仕様は同じです。<br>
 * \sa criAtomExCategory_DetachAisacById, criAtomExCategory_AttachAisacByName
 */
void CRIAPI criAtomExCategory_DetachAisacByName(const CriChar8* name, const CriChar8* global_aisac_name);

/*JP
 * \brief ID指定でカテゴリから全てのAISACを取り外す
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \par 説明:
 * カテゴリから全てのAISACをデタッチ（取り外し）します。
 */
void CRIAPI criAtomExCategory_DetachAisacAllById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定でカテゴリから全てのAISACを取り外す
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \par 説明:
 * カテゴリから全てのAISACをデタッチ（取り外し）します。
 */
void CRIAPI criAtomExCategory_DetachAisacAllByName(const CriChar8* name);

/*JP
 * \brief ID指定でカテゴリにアタッチされているAISAC数を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \return	カテゴリにアタッチされているAISAC数
 * \par 説明:
 * カテゴリにアタッチされているAISAC数を取得します。<br>
 * 存在しないカテゴリを指定した場合、負値が返ります。
 */
CriSint32 CRIAPI criAtomExCategory_GetNumAttachedAisacsById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定でカテゴリにアタッチされているAISAC数を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \return	カテゴリにアタッチされているAISAC数
 * \par 説明:
 * カテゴリにアタッチされているAISAC数を取得します。
 * 存在しないカテゴリを指定した場合、負値が返ります。
 */
CriSint32 CRIAPI criAtomExCategory_GetNumAttachedAisacsByName(const CriChar8* name);

/*JP
 * \brief ID指定でカテゴリにアタッチされているAISACの情報を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id						カテゴリID
 * \param[in]	aisac_attached_index	アタッチされているAISACのインデックス
 * \param[out]	aisac_info				AISAC情報
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * カテゴリにアタッチされているAISACの情報を取得します。<br>
 * 存在しないカテゴリを指定した場合や、無効なインデックスを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsById
 */
CriBool CRIAPI criAtomExCategory_GetAttachedAisacInfoById(
	CriAtomExCategoryId id, 
	CriSint32 aisac_attached_index,
	CriAtomExAisacInfo *aisac_info
);

/*JP
 * \brief 名前指定でカテゴリにアタッチされているAISACの情報を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \param[in]	aisac_attached_index	アタッチされているAISACのインデックス
 * \param[out]	aisac_info				AISAC情報
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * カテゴリにアタッチされているAISACの情報を取得します。<br>
 * 存在しないカテゴリを指定した場合や、無効なインデックスを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsByName
 */
CriBool CRIAPI criAtomExCategory_GetAttachedAisacInfoByName(
	const CriChar8* name,
	CriSint32 aisac_attached_index,
	CriAtomExAisacInfo *aisac_info
);

/*JP
 * \brief ID指定でカテゴリにアタッチされているAISACコントロールの現在値を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	category_id			カテゴリID
 * \param[in]	aisac_control_id	AISACコントロールID
 * \param[out]	control_value		AISACコントロールの現在値
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * カテゴリにアタッチされているAISACコントロールの現在値を取得します。<br>
 * 存在しないカテゴリやAISACコントロールを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsById
 */
CriBool CRIAPI criAtomExCategory_GetCurrentAisacControlValueById(
	CriAtomExCategoryId category_id,
	CriAtomExAisacControlId aisac_control_id,
	CriFloat32 * control_value
);

/*JP
 * \brief 名前指定でカテゴリにアタッチされているAISACコントロールの現在値を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	category_name			カテゴリ名
 * \param[in]	aisac_control_name		AISACコントロール名
 * \param[out]	control_value			AISACコントロールの現在値
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * カテゴリにアタッチされているAISACコントロールの現在値を取得します。<br>
 * 存在しないカテゴリを指定した場合や、無効なインデックスを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_GetNumAttachedAisacsById
 */
CriBool CRIAPI criAtomExCategory_GetCurrentAisacControlValueByName(
	const CriChar8* category_name,
	const CriChar8* aisac_control_name,
	CriFloat32 * control_value
);

/*JP
 * \brief REACT駆動パラメーターの設定
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	react_name			REACT名
 * \param[in]	react_parameter		REACT駆動パラメーター構造体
 * \par 説明:
 * REACTを駆動させるパラメーターを設定します。<br>
 * REACTが動作している間はパラメーターを設定することはできません（警告が発生します）。<br>
 * 存在しないREACT名を指定した場合は、エラーコールバックが返ります。<br>
 * \sa criAtomExCategory_GetReactParameter
 */
void CRIAPI criAtomExCategory_SetReactParameter(
	const CriChar8* react_name, 
	const CriAtomExReactParameter* react_parameter);

/*JP
 * \brief REACT駆動パラメーターの取得
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	react_name			REACT名
 * \param[out]	react_parameter		REACT駆動パラメーター構造体
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * REACTを駆動させるパラメーターの現在値を取得します。<br>
 * 存在しないREACT名を指定した場合は、エラーコールバックが発生しCRI_FALSEが返ります。<br>
 * \sa criAtomExCategory_SetReactParameter
 */
CriBool CRIAPI criAtomExCategory_GetReactParameter(
	const CriChar8* react_name, 
	CriAtomExReactParameter* react_parameter);

/*JP
 * \brief ID指定でカテゴリに所属する発音中のキュー数を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \return	カテゴリに所属する発音中のキュー数
 * \par 説明:
 * カテゴリに所属する発音中のキュー数を取得します。<br>
 * 存在しないカテゴリを指定した場合、負値が返ります。
 */
CriSint32 CRIAPI criAtomExCategory_GetNumCuePlayingCountById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定でカテゴリに所属する発音中のキュー数を取得する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \return	カテゴリに所属する発音中のキュー数
 * \par 説明:
 * カテゴリに所属する発音中のキュー数を取得します。
 * 存在しないカテゴリを指定した場合、負値が返ります。
 */
CriSint32 CRIAPI criAtomExCategory_GetNumCuePlayingCountByName(const CriChar8* name);

/*JP
 * \brief ID指定でカテゴリに所属する発音中のキューを停止する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \par 説明:
 * 指定したカテゴリに所属する発音中のキューを停止します。<br>
 */
void CRIAPI criAtomExCategory_StopById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定でカテゴリに所属する発音中のキューを停止する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \par 説明:
 * 指定したカテゴリに所属する発音中のキューを停止します。<br>
 */
void CRIAPI criAtomExCategory_StopByName(const CriChar8* name);

/*JP
 * \brief ID指定でカテゴリに所属する発音中のキューを即時停止する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	id					カテゴリID
 * \par 説明:
 * 指定したカテゴリに所属する発音中のキューを即時停止します。<br>
 */
void CRIAPI criAtomExCategory_StopWithoutReleaseTimeById(CriAtomExCategoryId id);

/*JP
 * \brief 名前指定でカテゴリに所属する発音中のキューを即時停止する
 * \ingroup ATOMEXLIB_CATEGORY
 * \param[in]	name					カテゴリ名
 * \par 説明:
 * 指定したカテゴリに所属する発音中のキューを即時停止します。<br>
 */
void CRIAPI criAtomExCategory_StopWithoutReleaseTimeByName(const CriChar8* name);
	
/*==========================================================================
 *      CRI AtomEx Player API
 *=========================================================================*/
/*JP
 * \brief AtomExPlayer用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	config		プレーヤー作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * AtomExプレーヤーを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずにAtomExプレーヤーを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomExPlayer_Create 関数にセットする必要があります。<br>
 * <br>
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExPlayerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExPlayer_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create
 */
CriSint32 CRIAPI criAtomExPlayer_CalculateWorkSize(
	const CriAtomExPlayerConfig *config);

/*JP
 * \brief AtomExPlayerの作成
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	config		AtomExプレーヤー作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExPlayerHn	AtomExプレーヤーハンドル
 * \par 説明:
 * AtomExプレーヤーを作成します。<br>
 * <br>
 * プレーヤーを作成する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ワーク領域を確保する方法には、以下の2通りの方法があります。<br>
 * <b>(a) User Allocator方式</b>：メモリの確保／解放に、ユーザが用意した関数を使用する方法。<br>
 * <b>(b) Fixed Memory方式</b>：必要なメモリ領域を直接ライブラリに渡す方法。<br>
 * <br>
 * User Allocator方式を用いる場合、ユーザがワーク領域を用意する必要はありません。<br>
 * workにNULL、work_sizeに0を指定するだけで、必要なメモリを登録済みのメモリ確保関数から確保します。<br>
 * AtomExプレーヤー作成時に確保されたメモリは、AtomExプレーヤー破棄時（ ::criAtomExPlayer_Destroy 
 * 関数実行時）に解放されます。<br>
 * <br>
 * Fixed Memory方式を用いる場合、ワーク領域として別途確保済みのメモリ領域を本関数に
 * 設定する必要があります。<br>
 * ワーク領域のサイズは ::criAtomExPlayer_CalculateWorkSize 関数で取得可能です。<br>
 * AtomExプレーヤー作成前に ::criAtomExPlayer_CalculateWorkSize 関数で取得した
 * サイズ分のメモリを予め確保しておき、本関数に設定してください。<br>
 * 尚、Fixed Memory方式を用いた場合、ワーク領域はAtomExプレーヤーの破棄
 * （ ::criAtomExPlayer_Destroy 関数）を行なうまでの間、ライブラリ内で利用され続けます。<br>
 * AtomExプレーヤーの破棄を行なう前に、ワーク領域のメモリを解放しないでください。<br>
 * \par 例:
 * 【User Allocator方式によるAtomExプレーヤーの作成】<br>
 * User Allocator方式を用いる場合、AtomExプレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# AtomExプレーヤー作成前に、 ::criAtomEx_SetUserAllocator 関数を用いてメモリ確保／解放関数を登録する。<br>
 * 	-# AtomExプレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# ::criAtomExPlayer_Create 関数でAtomExプレーヤーを作成する。<br>
 * （workにはNULL、work_sizeには0を指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomExPlayer_Destroy 関数でAtomExプレーヤーを破棄する。<br>
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
 * 	CriAtomExPlayerConfig config;	// AtomExプレーヤー作成用コンフィグ構造体
 * 	CriAtomExPlayerHn player;		// AtomExプレーヤーハンドル
 * 		:
 * 	// 独自のメモリアロケーターを登録
 * 	criAtomEx_SetUserAllocator(user_malloc, user_free, NULL);
 * 	
 * 	// AtomExプレーヤー作成用コンフィグ構造体を設定
 * 	criAtomExPlayer_SetDefaultConfig(&config);
 * 	
 * 	// AtomExプレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →必要なメモリは、登録したメモリ確保関数を使って確保される。
 * 	player = criAtomExPlayer_Create(&config, NULL, 0);
 * 		:
 * 	// 音声再生処理
 * 		:
 * 	// AtomExプレーヤーが不要になった時点で破棄
 * 	// →AtomExプレーヤー作成時にライブラリ内で確保されたメモリが解放される。
 * 	criAtomExPlayer_Destroy(player);
 * 		:
 * }
 * \endcode
 * ※ライブラリ初期化時にメモリ確保／解放関数を登録済みの場合、AtomExプレーヤー作成時
 * に再度関数を登録する必要はありません。<br>
 * <br>
 * 【Fixed Memory方式によるAtomExプレーヤーの作成】<br>
 * Fixed Memory方式を用いる場合、AtomExプレーヤーの作成／破棄の手順は以下のようになります。<br>
 * 	-# AtomExプレーヤー作成用コンフィグ構造体にパラメーターをセットする。<br>
 * 	-# AtomExプレーヤーの作成に必要なワーク領域のサイズを、
 * ::criAtomExPlayer_CalculateWorkSize 関数を使って計算する。<br>
 * 	-# ワーク領域サイズ分のメモリを確保する。<br>
 * 	-# ::criAtomExPlayer_Create 関数でAtomExプレーヤーを作成する。<br>
 * （workには確保したメモリのアドレスを、work_sizeにはワーク領域のサイズを指定する。）<br>
 * 	-# ハンドルが不要になったら ::criAtomExPlayer_Destroy 関数でAtomExプレーヤーを破棄する。<br>
 * 	-# ワーク領域のメモリを解放する。<br>
 * 	
 * <br>具体的なコードは以下のとおりです。<br>
 * \code
 * main()
 * {
 * 	CriAtomExPlayerConfig config;	// AtomExプレーヤー作成用コンフィグ構造体
 * 	CriAtomExPlayerHn player;		// AtomExプレーヤーハンドル
 * 	void *work;						// ワーク領域アドレス
 * 	CriSint32 work_size;			// ワーク領域サイズ
 * 		:
 * 	// AtomExプレーヤー作成用コンフィグ構造体を設定
 * 	criAtomExPlayer_SetDefaultConfig(&config);
 * 	
 * 	// AtomExプレーヤーの作成に必要なワーク領域のサイズを計算
 * 	work_size = criAtomExPlayer_CalculateWorkSize(&config);
 * 	
 * 	// ワーク領域用にメモリを確保
 * 	work = malloc((size_t)work_size);
 * 	
 * 	// AtomExプレーヤーの作成
 * 	// ワーク領域にはNULLと0を指定する。
 * 	// →確保済みのワーク領域を指定する。
 * 	player = criAtomExPlayer_Create(&config, work, work_size);
 * 		:
 * 	// 音声再生処理
 * 	// →この間、確保したメモリは保持し続ける。
 * 		:
 * 	// AtomExプレーヤーが不要になった時点で破棄
 * 	criAtomExPlayer_Destroy(player);
 * 	
 * 	// 必要なくなったワーク領域を解放する
 * 	free(work);
 * 		:
 * }
 * \endcode
 * ::criAtomExPlayer_Create 関数を実行すると、AtomExプレーヤーが作成され、
 * プレーヤーを制御するためのハンドル（ ::CriAtomExPlayerHn ）が返されます。<br>
 * データのセット、再生の開始、ステータスの取得等、AtomExプレーヤーに対して
 * 行う操作は、全てハンドルに対して行います。<br>
 * <br>
 * プレーヤーの作成に失敗した場合、戻り値として NULL が返されます。<br>
 * プレーヤーの作成に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * <br>
 * 作成されたAtomExプレーヤーハンドルを使用して音声データを再生する手順は以下のとおりです。<br>
 * -# ::criAtomExPlayer_SetData 関数を使用して、AtomExプレーヤーに再生するデータをセットする。<br>
 * （ファイル再生時は、 ::criAtomExPlayer_SetFile 関数または ::criAtomExPlayer_SetContentId 
 * 関数を使用する。）<br>
 * -# ::criAtomExPlayer_Start 関数で再生を開始する。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * AtomExプレーヤーの作成にかかる時間は、プラットフォームによって異なります。<br>
 * ゲームループ等の画面更新が必要なタイミングで本関数を実行するとミリ秒単位で
 * 処理がブロックされ、フレーム落ちが発生する恐れがあります。<br>
 * AtomExプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_CalculateWorkSize,
 * CriAtomExPlayerHn, criAtomExPlayer_Destroy,
 * criAtomExPlayer_SetData, criAtomExPlayer_SetFile, criAtomExPlayer_SetContentId,
 * criAtomExPlayer_Start
 */
CriAtomExPlayerHn CRIAPI criAtomExPlayer_Create(
	const CriAtomExPlayerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief AtomExプレーヤーの破棄
 * \ingroup ATOMExLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \par 説明:
 * AtomExプレーヤーを破棄します。<br>
 * 本関数を実行した時点で、AtomExプレーヤー作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定したAtomExプレーヤーハンドルも無効になります。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 音声再生中のAtomExプレーヤーを破棄しようとした場合、本関数内で再生停止を
 * 待ってからリソースの解放が行われます。<br>
 * （ファイルから再生している場合は、さらに読み込み完了待ちが行われます。）<br>
 * そのため、本関数内で処理が長時間（数フレーム）ブロックされる可能性があります。<br>
 * AtomExプレーヤーの作成／破棄は、シーンの切り替わり等、負荷変動を許容できる
 * タイミングで行うようお願いいたします。<br>
 * \sa criAtomExPlayer_Create, CriAtomExPlayerHn
 */
void CRIAPI criAtomExPlayer_Destroy(CriAtomExPlayerHn player);

/*JP
 * \brief 音声データのセット（キューID指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	id				キューID
 * \par 説明:
 * キューIDを、AtomExプレーヤーに関連付けます。<br>
 * 本関数でキューIDを指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定されたキューが再生されます。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetCueId(player, acb_hn, 100);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたデータの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * 第2引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューIDに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューIDを持つACBデータが見つかった時点で、
 * 当該ACBデータのキューがプレーヤーにセットされます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * <br>
 * ::criAtomExPlayer_SetCueId 関数でキューをセットした場合、以下の関数で設定された
 * パラメーターは無視されます。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * （音声フォーマットやチャンネル数、サンプリングレート等の情報は、
 * ACB ファイルの情報を元に自動的にセットされます。）<br>
 * \sa criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetCueId(
	CriAtomExPlayerHn player, CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief 音声データのセット（キュー名指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	cue_name		キュー名
 * キュー名を、AtomExプレーヤーに関連付けます。<br>
 * 本関数でキュー名を指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定されたキューが再生されます。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetCueName(player, acb_hn, "gun_shot");
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたデータの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * 第2引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキュー名に
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキュー名を持つACBデータが見つかった時点で、
 * 当該ACBデータのキューがプレーヤーにセットされます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * <br>
 * ::criAtomExPlayer_SetCueName 関数でキューをセットした場合、以下の関数で設定された
 * パラメーターは無視されます。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * （音声フォーマットやチャンネル数、サンプリングレート等の情報は、
 * ACB ファイルの情報を元に自動的にセットされます。）<br>
 * \sa criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetCueName(
	CriAtomExPlayerHn player, CriAtomExAcbHn acb_hn, const CriChar8 *cue_name);

/*JP
 * \brief 音声データのセット（キューインデックス指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	acb_hn			ACBハンドル
 * \param[in]	index			キューインデックス
 * キューインデックスを、AtomExプレーヤーに関連付けます。<br>
 * 本関数でキューインデックスを指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定されたキューが再生されます。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetCueIndex(player, acb_hn, 300);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたデータの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考:
 * 第2引数（ ach_hn ）に NULL を指定した場合、全てのACBデータを対象に、指定したキューインデックスに
 * 合致するデータがないか、ライブラリ内で検索が行われます。<br>
 * （指定したキューインデックスを持つACBデータが見つかった時点で、
 * 当該ACBデータのキューがプレーヤーにセットされます。）<br>
 * この際、検索の順序は、ACBデータのロード順とは逆順で行われます。<br>
 * （後からロードされたデータから優先的に検索が行われます。）<br>
 * <br>
 * ::criAtomExPlayer_SetCueIndex 関数でキューをセットした場合、以下の関数で設定された
 * パラメーターは無視されます。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * （音声フォーマットやチャンネル数、サンプリングレート等の情報は、
 * ACB ファイルの情報を元に自動的にセットされます。）<br>
 * <br>
 * 本関数を使用することで、キュー名やキューIDを指定せずにプレーヤーに対して
 * 音声をセットすることが可能です。<br>
 * （キュー名やキューIDがわからない場合でも、ACBファイル内のコンテンツを一通り再生
 * 可能なので、デバッグ用途に利用可能です。）<br>
 * \sa criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetCueIndex(
	CriAtomExPlayerHn player, CriAtomExAcbHn acb_hn, CriAtomExCueIndex index);

/*JP
 * \brief 音声データのセット（オンメモリデータの指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	buffer			バッファーアドレス
 * \param[in]	size			バッファーサイズ
 * \par 説明:
 * メモリ上に配置された音声データを、AtomExプレーヤーに関連付けます。<br>
 * 本関数でメモリアドレスとサイズを指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定されたデータが再生されます。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer, buffer_size);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_ADX);
 * 	criAtomExPlayer_SetNumChannels(player, 1);
 * 	criAtomExPlayer_SetSamplingRate(player, 24000);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたデータの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \attention
 * プレーヤーが記憶するのはバッファーのアドレスとサイズのみです。<br>
 * （バッファー内のデータがコピーされるわけではありません。）<br>
 * そのため、指定したデータの再生が終了するまでの間、
 * アプリケーション側でバッファーを保持し続ける必要があります。<br>
 * <br>
 * メモリ再生を行っているAtomExプレーヤーを停止させた場合でも、
 * ライブラリ内には当該メモリ領域を参照しているボイスが存在する可能性があります。<br>
 * 本関数でセットしたメモリ領域を解放する際には、事前に ::criAtomEx_IsDataPlaying
 * 関数を実行し、当該メモリ領域への参照が行われていないことを確認してください。
 * <br>
 * ::criAtomExPlayer_SetData 関数で音声データをセットする場合、以下の関数を使用して
 * 再生する音声データの情報を別途指定する必要があります。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * \sa criAtomExPlayer_SetFormat, criAtomExPlayer_Start, criAtomEx_IsDataPlaying
 */
void CRIAPI criAtomExPlayer_SetData(
	CriAtomExPlayerHn player, void *buffer, CriSint32 size);

/*JP
 * \brief 音声データのセット（ファイル名の指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	binder		バインダーハンドル
 * \param[in]	path		ファイルパス
 * \par 説明:
 * 音声ファイルをAtomExプレーヤーに関連付けます。<br>
 * 本関数でファイルを指定後、 ::criAtomExPlayer_Start 関数で再生を開始すると、
 * 指定されたファイルがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomExPlayer_Start 関数実行後です。<br>
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声ファイルをセット
 * 	criAtomExPlayer_SetFile(player, NULL, "sample.hca");
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_HCA);
 * 	criAtomExPlayer_SetNumChannels(player, 2);
 * 	criAtomExPlayer_SetSamplingRate(player, 48000);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * ::criAtomExPlayer_SetFile 関数を実行すると、
 * 指定したパス文字列がAtomExプレーヤー内に保持されます。<br>
 * AtomExプレーヤーはデフォルト状態ではパス文字列を保持する領域を1つしか確保しません。<br>
 * （メモリサイズ削減のため。）<br>
 * しかし、ファイル再生中に別のファイルをAtomExプレーヤーにセットしたい場合、
 * 再生中のファイルとセットしたファイルの両方のパスを保持する必要があるため、
 * 2つのパス文字列を保存する領域が必要になります。<br>
 * 2つ以上のファイルを同時に再生したい場合には、プレーヤー作成時に指定する
 * max_path_strings の数を増やす必要があります。<br>
 * max_path_strings の数を増やすことで、AtomExプレーヤーは指定された数分の
 * パス文字列を同時に保存できるようになります。<br>
 * （max_path_strings に2以上の値を指定することで、
 * 1つのプレーヤーで複数のファイルを同時にパス指定で再生することが可能となります。）<br>
 * ただし、 max_path_strings の値に応じて必要なワーク領域のサイズは増加します。<br>
 * <br>
 * ::criAtomExPlayer_SetFile 関数で音声データをセットする場合、以下の関数を使用して
 * 再生する音声データの情報を別途指定する必要があります。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create, criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetFile(
	CriAtomExPlayerHn player, CriFsBinderHn binder, const CriChar8 *path);

/*JP
 * \brief 音声データのセット（CPKコンテンツIDの指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	binder		バインダーハンドル
 * \param[in]	id			コンテンツID
 * \par 説明:
 * コンテンツをAtomExプレーヤーに関連付けます。<br>
 * CRI File Systemライブラリを使用してCPKファイル内のコンテンツファイルを
 * ID指定で再生するために使用します。<br>
 * 本関数にバインダーとコンテンツIDを指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定されたコンテンツファイルがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomExPlayer_Start 関数実行後です。<br>
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
 * 	criAtomExPlayer_SetContentId(player, binder, 1);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_ADX);
 * 	criAtomExPlayer_SetNumChannels(player, 2);
 * 	criAtomExPlayer_SetSamplingRate(player, 44100);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \par 備考：
 * データがCPKにパックされていない場合、引数binderにはNULLを指定してください。<br>
 * \attention
 * ::criAtomExPlayer_SetContentId 関数で音声データをセットする場合、以下の関数を使用して
 * 再生する音声データの情報を別途指定する必要があります。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create, criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetContentId(
	CriAtomExPlayerHn player, CriFsBinderHn binder, CriSint32 id);

/*JP
 * \brief 音声データのセット（波形データIDの指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	awb			AWBハンドル
 * \param[in]	id			波形データID
 * \par 説明:
 * 再生する波形データをAtomExプレーヤーに関連付けます。<br>
 * 本関数にAWBハンドルと波形データIDを指定後、 ::criAtomExPlayer_Start 関数で再生を
 * 開始すると、指定した波形データがストリーミング再生されます。<br>
 * 尚、本関数を実行した時点では、ファイルの読み込みは開始されません。<br>
 * ファイルの読み込みが開始されるのは、 ::criAtomExPlayer_Start 関数実行後です。<br>
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
 * 	criAtomExPlayer_SetWaveId(player, awb, 1);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_HCA_MX);
 * 	criAtomExPlayer_SetNumChannels(player, 2);
 * 	criAtomExPlayer_SetSamplingRate(player, 32000);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 尚、一旦セットしたファイルの情報は、他のデータがセットされるまでAtomExプレーヤー内に保持
 * されます。<br>
 * そのため、同じデータを何度も再生する場合には、再生毎にデータをセットしなおす必要
 * はありません。
 * \attention
 * 本関数で音声データをセットする場合、
 * 以下の関数を使用して再生する音声データの情報を別途指定する必要があります。<br>
 * 	- ::criAtomExPlayer_SetFormat
 * 	- ::criAtomExPlayer_SetNumChannels
 * 	- ::criAtomExPlayer_SetSamplingRate
 * 	
 * <br>
 * 本関数でセットした音声を再生中に、 ::criAtomAwb_Release 関数でデータを破棄しないでください。<br>
 * AWBファイルを破棄する際には、必ず再生を停止した状態で ::criAtomAwb_Release 関数を実行してください。<br>
 * \sa CriAtomExPlayerConfig, criAtomExPlayer_Create, criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetWaveId(
	CriAtomExPlayerHn player, CriAtomAwbHn awb, CriAtomExWaveId id);

/*JP
 * \brief 再生の開始
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriAtomExPlaybackId		再生ID
 * \par 説明:
 * 音声データの再生処理を開始します。<br>
 * 本関数を実行する前に、事前に ::criAtomExPlayer_SetData 関数等を使用し、再生する
 * 音声データをAtomExプレーヤーにセットしておく必要があります。<br>
 * 例えば、オンメモリの音声データを再生する場合には、以下のように事前に
 * ::criAtomExPlayer_SetData 関数を使って音声データをセットした後、本関数を実行する
 * 必要があります。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer, buffer_size);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_HCA_MX);
 * 	criAtomExPlayer_SetNumChannels(player, 1);
 * 	criAtomExPlayer_SetSamplingRate(player, 24000);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 本関数実行後、再生の進み具合（発音が開始されたか、再生が完了したか等）がどうなって
 * いるかは、ステータスを取得することで確認が可能です。<br>
 * ステータスの取得には、 ::criAtomExPlayer_GetStatus 関数を使用します。<br>
 * ::criAtomExPlayer_GetStatus 関数は以下の5通りのステータスを返します。<br>
 * 	-# CRIATOMEXPLAYER_STATUS_STOP
 * 	-# CRIATOMEXPLAYER_STATUS_PREP
 * 	-# CRIATOMEXPLAYER_STATUS_PLAYING
 * 	-# CRIATOMEXPLAYER_STATUS_PLAYEND
 * 	-# CRIATOMEXPLAYER_STATUS_ERROR
 * 	
 * AtomExプレーヤーを作成した時点では、AtomExプレーヤーのステータスは停止状態
 * （ CRIATOMEXPLAYER_STATUS_STOP ）です。<br>
 * 再生する音声データをセット後、本関数を実行することで、AtomExプレーヤーのステータスが
 * 準備状態（ CRIATOMEXPLAYER_STATUS_PREP ）に変更されます。<br>
 * （CRIATOMEXPLAYER_STATUS_PREP は、データ供給やデコードの開始を待っている状態です。）<br>
 * 再生の開始に充分なデータが供給された時点で、AtomExプレーヤーはステータスを
 * 再生状態（ CRIATOMEXPLAYER_STATUS_PLAYING ）に変更し、音声の出力を開始します。<br>
 * セットされたデータを全て再生し終えると、AtomExプレーヤーはステータスを再生終了状態
 * （ CRIATOMEXPLAYER_STATUS_PLAYEND ）に変更します。<br>
 * 尚、再生中にエラーが発生した場合には、AtomExプレーヤーはステータスをエラー状態
 * （ CRIATOMEXPLAYER_STATUS_ERROR ）に変更します。<br>
 * <br>
 * AtomExプレーヤーのステータスをチェックし、ステータスに応じて処理を切り替えることで、
 * 音声の再生状態に連動したプログラムを作成することが可能です。<br>
 * 例えば、音声の再生完了を待って処理を進めたい場合には、以下のようなコードになります。
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer, buffer_size);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_ADX);
 * 	criAtomExPlayer_SetNumChannels(player, 1);
 * 	criAtomExPlayer_SetSamplingRate(player, 22050);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 	
 * 	// 再生完了待ち
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomExPlayer_GetStatus(player);
 * 		
 * 		// ステータスのチェック
 * 		if (status == CRIATOMEXPLAYER_STATUS_PLAYEND) {
 * 			// 再生終了時はループを抜ける
 * 			break;
 * 		}
 * 		
 * 		// サーバー処理の実行
 * 		criAtomEx_ExecuteMain();
 * 		
 * 		// 画面表示の更新等
 * 			:
 * 	}
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 関数実行時に発音リソースが確保できない場合（全てのボイスが使用中で、なおかつ
 * 他のボイスを奪い取れない場合等）、本関数は CRIATOMEX_INVALID_PLAYBACK_ID を返します。<br>
 * しかし、戻り値を元にエラーチェックを行わなくても、ほとんどのケースで問題は発生しません。<br>
 * 再生ID（ ::CriAtomExPlaybackId ）を使用する API に対し、 CRIATOMEX_INVALID_PLAYBACK_ID 
 * をセットしたとしても、Atomライブラリは特に何も処理しません。<br>
 * そのため、デバッグ目的で発音が行われたかどうかをチェックしたい場合を除き、
 * 本関数の結果に応じてアプリケーション側で処理を切り分ける必要はありません。<br>
 * （ CRIATOMEX_INVALID_PLAYBACK_ID が返された際に、有効な再生IDが返された場合と
 * 同様の処理を行っても、エラーコールバック等は発生しません。）
 * \sa criAtomExPlayer_SetData, criAtomExPlayer_SetFile, criAtomExPlayer_GetStatus,
 * criAtomExPlayer_Pause, criAtomEx_ExecuteMain
 */
CriAtomExPlaybackId CRIAPI criAtomExPlayer_Start(CriAtomExPlayerHn player);

/*JP
 * \brief 再生の準備
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriAtomExPlaybackId		再生ID
 * \par 説明:
 * 音声データの再生を準備します。<br>
 * 本関数を実行する前に、事前に ::criAtomExPlayer_SetData 関数等を使用し、
 * 再生すべき音声データをAtomExプレーヤーにセットしておく必要があります。<br>
 * <br>
 * 本関数を実行すると、ポーズをかけた状態で音声の再生を開始します。<br>
 * 関数実行のタイミングで音声再生に必要なリソースを確保し、
 * バッファリング（ストリーム再生を行うファイルの読み込み）を開始しますが、
 * バッファリング完了後も発音は行われません。<br>
 * （発音可能な状態になっても、ポーズ状態で待機します。）<br>
 * <br>
 * 1音だけを再生するケースでは、本関数は以下のコードと同じ動作をします。<br>
 * \code
 * 		：
 * 	// プレーヤーをポーズ状態に設定
 * 	criAtomExPlayer_Pause(player, CRI_TRUE);
 * 	
 * 	// 音声の再生を開始
 * 	id = criAtomExPlayer_Start(player);
 * 		：
 * \endcode
 * <br>
 * 本関数で再生準備を行った音声を発音するには、
 * 本関数が返す再生 ID （ ::CriAtomExPlaybackId ）に対し、
 * ::criAtomExPlayback_Pause (id, CRI_FALSE); の操作を行う必要があります。<br>
 * \par 備考:
 * ストリーミング再生時には、 ::criAtomExPlayer_Start 関数で再生を開始しても、
 * 実際に音声の再生が開始されるまでにはタイムラグがあります。<br>
 * （音声データのバッファリングに時間がかかるため。）<br>
 * <br>
 * 以下の操作を行うことで、ストリーム再生の音声についても、発音のタイミングを
 * 制御することが可能になります。
 * 	-# ::criAtomExPlayer_Prepare 関数で準備を開始する。
 * 	-# 手順1.で取得した再生IDのステータスを ::criAtomExPlayback_GetStatus 関数で確認。
 * 	-# ステータスが ::CRIATOMEXPLAYBACK_STATUS_PLAYING になった時点で ::criAtomExPlayback_Pause 関数でポーズを解除。
 * 	-# ポーズ解除後、次にサーバー処理が動作するタイミングで発音が開始される。
 * 	
 * 具体的なコードは、以下のとおりです。<br>
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetFile(player, NULL, "sample.adx");
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_ADX);
 * 	criAtomExPlayer_SetNumChannels(player, 2);
 * 	criAtomExPlayer_SetSamplingRate(player, 48000);
 * 	
 * 	// セットされた音声データの再生準備を開始
 * 	playback_id = criAtomExPlayer_Prepare(player);
 * 		:
 * 	// 再生準備完了待ち
 * 	for (;;) {
 * 		// 再生ステータスをチェック
 * 		playback_status = criAtomExPlayback_GetStatus(playback_id);
 * 		if (playback_status == CRIATOMEXPLAYBACK_STATUS_PLAYING) {
 * 			// ステータスが再生状態になった時点でループを抜ける
 * 			break;
 * 		}
 * 		
 * 		// サーバー処理の実行
 * 		criAtomEx_ExecuteMain();
 * 		
 * 		// 画面表示の更新等
 * 			:
 * 	}
 * 	
 * 	// ポーズを解除
 * 	criAtomExPlayback_Pause(playback_id, CRI_FALSE);
 * 		:
 * }
 * \endcode
 * ポーズ解除処理に ::criAtomExPlayback_Pause 関数を使用した場合、
 * 本関数による再生準備のためのポーズと、 ::criAtomExPlayer_Pause
 * 関数による一時停止処理の両方が解除されます。<br>
 * ::criAtomExPlayer_Pause 関数でポーズした音声を停止したまま
 * 本関数で再生準備を行った音声を再生したい場合、ポーズの解除に
 * ::criAtomExPlayer_Resume 関数（または ::criAtomExPlayback_Resume
 * 関数）をご利用ください。<br>
 * \sa criAtomExPlayback_GetStatus, criAtomExPlayback_Pause
 */
CriAtomExPlaybackId CRIAPI criAtomExPlayer_Prepare(CriAtomExPlayerHn player);

/*JP
 * \brief 再生の停止
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \par 説明:
 * 再生の停止要求を発行します。<br>
 * 音声再生中のAtomExプレーヤーに対して本関数を実行すると、
 * AtomExプレーヤーは再生を停止（ファイルの読み込みや、発音を停止）し、
 * ステータスを停止状態（ CRIATOMEXPLAYER_STATUS_STOP ）に遷移します。<br>
 * \par 備考:
 * 既に停止しているAtomExプレーヤー（ステータスが CRIATOMEXPLAYER_STATUS_PLAYEND や
 * CRIATOMEXPLAYER_STATUS_ERROR のAtomExプレーヤー） に対して本関数を実行すると、
 * AtomExプレーヤーのステータスを CRIATOMEXPLAYER_STATUS_STOP に変更します。
 * \attention
 * 本関数は完了復帰型の関数ではありません。<br>
 * そのため、関数内で処理が長時間ブロックすることはありませんが、
 * 関数を抜けた時点では再生が停止していない可能性がある点にご注意ください。<br>
 * （停止状態になるまでに、時間がかかる場合があります。）<br>
 * 停止を保証する必要がある場合には、本関数呼び出し後、
 * AtomExプレーヤーのステータスが停止状態（CRIATOMEXPLAYER_STATUS_STOP）
 * になることを確認してください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
void CRIAPI criAtomExPlayer_Stop(CriAtomExPlayerHn player);

/*JP
 * \brief 再生の停止（リリースタイム無視）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \par 説明:
 * 再生の停止要求を発行します。<br>
 * この際、再生中の音声にエンベロープのリリースタイムが設定されていたとしても、
 * それを無視して停止します。<br>
 * 音声再生中のAtomExプレーヤーに対して本関数を実行すると、
 * AtomExプレーヤーは再生を停止（ファイルの読み込みや、発音を停止）し、
 * ステータスを停止状態（ CRIATOMEXPLAYER_STATUS_STOP ）に遷移します。<br>
 * \par 備考:
 * 既に停止しているAtomExプレーヤー（ステータスが CRIATOMEXPLAYER_STATUS_PLAYEND や
 * CRIATOMEXPLAYER_STATUS_ERROR のAtomExプレーヤー） に対して本関数を実行すると、
 * AtomExプレーヤーのステータスを CRIATOMEXPLAYER_STATUS_STOP に変更します。
 * \attention
 * 本関数は完了復帰型の関数ではありません。<br>
 * そのため、関数内で処理が長時間ブロックすることはありませんが、
 * 関数を抜けた時点では再生が停止していない可能性がある点にご注意ください。<br>
 * （停止状態になるまでに、時間がかかる場合があります。）<br>
 * 停止を保証する必要がある場合には、本関数呼び出し後、
 * AtomExプレーヤーのステータスが停止状態（CRIATOMEXPLAYER_STATUS_STOP）
 * になることを確認してください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
void CRIAPI criAtomExPlayer_StopWithoutReleaseTime(CriAtomExPlayerHn player);

/*JP
 * \brief 全てのプレーヤーの再生を停止
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * 全てのAtomExプレーヤーに対し、再生の停止要求を発行します。<br>
 * 本関数を実行すると、AtomExプレーヤーは再生を停止（ファイルの読み込みや、発音を停止）し、
 * ステータスを停止状態（ CRIATOMEXPLAYER_STATUS_STOP ）に遷移します。<br>
 * \par 備考:
 * 既に停止しているAtomExプレーヤー（ステータスが CRIATOMEXPLAYER_STATUS_PLAYEND や
 * CRIATOMEXPLAYER_STATUS_ERROR のAtomExプレーヤー） についても、
 * 本関数が実行されるとステータスが CRIATOMEXPLAYER_STATUS_STOP に変更されます。
 * \attention
 * 本関数は完了復帰型の関数ではありません。<br>
 * そのため、関数内で処理が長時間ブロックすることはありませんが、
 * 関数を抜けた時点では再生が停止していない可能性がある点にご注意ください。<br>
 * （停止状態になるまでに、時間がかかる場合があります。）<br>
 * 停止を保証する必要がある場合には、本関数呼び出し後、
 * AtomExプレーヤーのステータスが停止状態（CRIATOMEXPLAYER_STATUS_STOP）
 * になることを確認してください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
void CRIAPI criAtomExPlayer_StopAllPlayers(void);

/*JP
 * \brief 全てのプレーヤーの再生を停止（リリースタイム無視）
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * 全てのAtomExプレーヤーに対し、再生の停止要求を発行します。<br>
 * この際、再生中の音声にエンベロープのリリースタイムが設定されていたとしても、
 * それを無視して停止します。<br>
 * 本関数を実行すると、AtomExプレーヤーは再生を停止（ファイルの読み込みや、発音を停止）し、
 * ステータスを停止状態（ CRIATOMEXPLAYER_STATUS_STOP ）に遷移します。<br>
 * \par 備考:
 * 既に停止しているAtomExプレーヤー（ステータスが CRIATOMEXPLAYER_STATUS_PLAYEND や
 * CRIATOMEXPLAYER_STATUS_ERROR のAtomExプレーヤー） についても、
 * 本関数が実行されるとステータスが CRIATOMEXPLAYER_STATUS_STOP に変更されます。
 * \attention
 * 本関数は完了復帰型の関数ではありません。<br>
 * そのため、関数内で処理が長時間ブロックすることはありませんが、
 * 関数を抜けた時点では再生が停止していない可能性がある点にご注意ください。<br>
 * （停止状態になるまでに、時間がかかる場合があります。）<br>
 * 停止を保証する必要がある場合には、本関数呼び出し後、
 * AtomExプレーヤーのステータスが停止状態（CRIATOMEXPLAYER_STATUS_STOP）
 * になることを確認してください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
void CRIAPI criAtomExPlayer_StopAllPlayersWithoutReleaseTime(void);

/*JP
 * \brief プレーヤーの列挙
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		プレーヤーコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * アプリケーション中で確保したプレーヤーを列挙します。<br>
 * <br>
 * 本関数を実行すると、第 1 引数（ func ）
 * でセットされたコールバック関数がAtomExプレーヤーの数分だけ呼び出されます。<br>
 * （AtomExプレーヤーハンドルが、引数としてコールバック関数に渡されます。）<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExPlayerCbFunc の説明をご参照ください。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExVoiceInfoCbFunc
 */
void CRIAPI criAtomExPlayer_EnumeratePlayers(CriAtomExPlayerCbFunc func, void *obj);

/*JP
 * \brief ポーズ／ポーズ解除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	sw			スイッチ（CRI_FALSE = ポーズ解除、CRI_TRUE = ポーズ）
 * \par 説明:
 * 再生のポーズ／ポーズ解除を行います。<br>
 * sw に CRI_TRUE を指定して本関数を実行すると、AtomExプレーヤーは再生中の
 * 音声をポーズ（一時停止）します。<br>
 * sw に CRI_FALSE を指定して本関数を実行すると、AtomExプレーヤーはポーズを
 * 解除し、一時停止していた音声の再生を再開します。<br>
 * \par 備考:
 * デフォルト状態（プレーヤー作成直後の状態）では、ポーズは解除されています。<br>
 * \attention
 * 第2引数（sw）に CRI_FALSE を指定してポーズ解除の操作を行った場合、
 * 本関数でポーズをかけた音声だけでなく、::criAtomExPlayer_Prepare 
 * 関数で再生準備中の音声についても再生が開始されてしまいます。<br>
 * （旧バージョンとの互換性維持のための仕様です。）<br>
 * 本関数でポーズをかけた音声についてのみポーズを解除したい場合、
 * 本関数を使用せず、 criAtomExPlayer_Resume(player, CRIATOMEX_RESUME_PAUSED_PLAYBACK);
 * を実行してポーズ解除を行ってください。<br>
 * <br>
 * 本関数を実行すると、プレーヤーで再生している"全ての"音声に対してポーズ／ポーズ解除
 * の処理が行われます。<br>
 * 再生中の個々の音声に対し、個別にポーズ／ポーズ解除の処理を行う場合には、
 * ::criAtomExPlayback_Pause 関数をご利用ください。
 * \sa criAtomExPlayer_IsPaused, criAtomExPlayback_Pause, criAtomExPlayer_Resume
 */
void CRIAPI criAtomExPlayer_Pause(CriAtomExPlayerHn player, CriBool sw);

/*JP
 * \brief ポーズ解除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	mode		ポーズ解除対象
 * \par 説明:
 * 一時停止状態の解除を行います。<br>
 * ::criAtomExPlayer_Pause 関数と異なり、 ::criAtomExPlayer_Prepare
 * 関数で再生開始待ちの音声と、 ::criAtomExPlayer_Pause 関数（または 
 * ::criAtomExPlayback_Pause 関数でポーズをかけた音声とを、
 * 個別に再開させることが可能です。<br>
 * <br>
 * 第2引数（mode）に ::CRIATOMEX_RESUME_PAUSED_PLAYBACK を指定して本関数を実行すると、
 * ユーザが ::criAtomExPlayer_Pause 関数（または ::criAtomExPlayback_Pause 
 * 関数）で一時停止状態になった音声の再生が再開されます。<br>
 * 第2引数（mode）に ::CRIATOMEX_RESUME_PREPARED_PLAYBACK を指定して本関数を実行すると、
 * ユーザが ::criAtomExPlayer_Prepare 関数で再生準備を指示した音声の再生が開始されます。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズ状態のプレーヤーに対して ::criAtomExPlayer_Prepare
 * 関数で再生準備を行った場合、その音声は ::CRIATOMEX_RESUME_PAUSED_PLAYBACK
 * 指定のポーズ解除処理と、 ::CRIATOMEX_RESUME_PREPARED_PLAYBACK
 * 指定のポーズ解除処理の両方が行われるまで、再生が開始されません。<br>
 * \par 備考:
 * ::criAtomExPlayer_Pause 関数か ::criAtomExPlayer_Prepare 関数かに関係なく、
 * 常に再生を開始したい場合には、第2引数（mode）に ::CRIATOMEX_RESUME_ALL_PLAYBACK
 * を指定して本関数を実行するか、または criAtomExPlayer_Pause(player, CRI_FALSE);
 * を実行してください。<br>
 * \attention
 * 本関数を実行すると、プレーヤーで再生している"全ての"音声に対してポーズ解除
 * の処理が行われます。<br>
 * 再生中の個々の音声に対し、個別にポーズ解除の処理を行う場合には、
 * ::criAtomExPlayback_Resume 関数をご利用ください。
 * \sa criAtomExPlayback_Resume, criAtomExPlayer_Pause
 */
void CRIAPI criAtomExPlayer_Resume(CriAtomExPlayerHn player, CriAtomExResumeMode mode);

/*JP
 * \brief ポーズ状態の取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriBool		ポーズ中かどうか（CRI_FALSE = ポーズされていない、CRI_TRUE = ポーズ中）
 * \par 説明:
 * プレーヤーがポーズ中かどうかを返します。<br>
 * \attention
 * 本関数が CRI_TRUE を返すのは、「全ての再生音がポーズ中の場合」のみです。<br>
 * ::criAtomExPlayer_Pause 関数実行後、再生ID指定で個々の音声のポーズを解除
 * （ ::criAtomExPlayback_Pause 関数を実行）した場合、本関数は CRI_FALSE を
 * 返します。<br>
 * <br>
 * 本関数は ::criAtomExPlayer_Pause 関数でポーズされた音声と、
 * ::criAtomExPlayer_Prepare 関数でポーズされた音声とを区別しません。<br>
 * （ポーズ方法に関係なく、全ての再生音がポーズされているかどうかのみを判定します。）<br>
 * \sa criAtomExPlayer_Pause, criAtomExPlayback_Pause
 */
CriBool CRIAPI criAtomExPlayer_IsPaused(CriAtomExPlayerHn player);

/*JP
 * \brief ステータスの取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriAtomExPlayerStatus	ステータス
 * \par 説明:
 * AtomExプレーヤーのステータスを取得します。<br>
 * ステータスはAtomExプレーヤーの再生状態を示す値で、以下の5通りの値が存在します。<br>
 * -# CRIATOMEXPLAYER_STATUS_STOP
 * -# CRIATOMEXPLAYER_STATUS_PREP
 * -# CRIATOMEXPLAYER_STATUS_PLAYING
 * -# CRIATOMEXPLAYER_STATUS_PLAYEND
 * -# CRIATOMEXPLAYER_STATUS_ERROR
 * 
 * AtomExプレーヤーを作成した時点では、AtomExプレーヤーのステータスは停止状態
 * （ CRIATOMEXPLAYER_STATUS_STOP ）です。<br>
 * 再生する音声データをセット後、::criAtomExPlayer_Start 関数を実行することで、
 * AtomExプレーヤーのステータスが準備状態（ CRIATOMEXPLAYER_STATUS_PREP ）に変更されます。<br>
 * （CRIATOMEXPLAYER_STATUS_PREP は、データ供給やデコードの開始を待っている状態です。）<br>
 * 再生の開始に充分なデータが供給された時点で、AtomExプレーヤーはステータスを
 * 再生状態（ CRIATOMEXPLAYER_STATUS_PLAYING ）に変更し、音声の出力を開始します。<br>
 * セットされたデータを全て再生し終えると、AtomExプレーヤーはステータスを再生終了状態
 * （ CRIATOMEXPLAYER_STATUS_PLAYEND ）に変更します。<br>
 * 尚、再生中にエラーが発生した場合には、AtomExプレーヤーはステータスをエラー状態
 * （ CRIATOMEXPLAYER_STATUS_ERROR ）に変更します。<br>
 * <br>
 * AtomExプレーヤーのステータスをチェックし、ステータスに応じて処理を切り替えることで、
 * 音声の再生状態に連動したプログラムを作成することが可能です。<br>
 * 例えば、音声の再生完了を待って処理を進めたい場合には、以下のようなコードになります。
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer, buffer_size);
 * 	
 * 	// 再生する音声データのフォーマットを指定
 * 	criAtomExPlayer_SetFormat(player, CRIATOMEX_FORMAT_ADX);
 * 	criAtomExPlayer_SetNumChannels(player, 1);
 * 	criAtomExPlayer_SetSamplingRate(player, 24000);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 	
 * 	// 再生完了待ち
 * 	for (;;) {
 * 		// ステータスの取得
 * 		status = criAtomExPlayer_GetStatus(player);
 * 		
 * 		// ステータスのチェック
 * 		if (status == CRIATOMEXPLAYER_STATUS_PLAYEND) {
 * 			// 再生終了時はループを抜ける
 * 			break;
 * 		}
 * 		
 * 		// サーバー処理の実行
 * 		criAtomEx_ExecuteMain();
 * 		
 * 		// 画面表示の更新等
 * 			:
 * 	}
 * 		:
 * }
 * \endcode
 * \sa criAtomExPlayer_Start
 */
CriAtomExPlayerStatus CRIAPI criAtomExPlayer_GetStatus(CriAtomExPlayerHn player);

/*JP
 * \brief 再生中の音声数の取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriSint32	再生音数
 * \par 説明:
 * プレーヤーで現在再生中の音声の数を取得します。<br>
 * \par 備考:
 * 本関数は、 ::criAtomExPlayer_Start 関数で再生を行い、今現在も有効な再生IDの数を返します。<br>
 * （ 使用中のボイス数の数ではありません。複数の波形データを含むシーケンスを1回再生した場合でも、
 * 1つとカウントされます。）<br>
 * 使用中のボイス数を取得したい場合には、 ::criAtomExVoicePool_GetNumUsedVoices 関数をご利用ください。<br>
 * \sa criAtomExPlayer_Start, criAtomExVoicePool_GetNumUsedVoices
 */
CriSint32 CRIAPI criAtomExPlayer_GetNumPlaybacks(CriAtomExPlayerHn player);

/*JP
 * \brief 最終再生IDの取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriSint32	再生ID
 * \par 説明:
 * プレーヤーで最後に再生した音声の再生IDを取得します。<br>
 * \par 備考:
 * \sa criAtomExPlayer_Start
 */
CriAtomExPlaybackId CRIAPI criAtomExPlayer_GetLastPlaybackId(CriAtomExPlayerHn player);

/*JP
 * \brief 再生時刻の取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		Sint64	再生時刻（ミリ秒単位）
 * \par 説明:
 * AtomExプレーヤーで最後に再生した音声の、再生時刻を取得します。<br>
 * <br>
 * 再生時刻が取得できた場合、本関数は 0 以上の値を返します。<br>
 * 再生時刻が取得できない場合（ボイスの取得に失敗した場合等）、本関数は負値を返します。<br>
 * \par 備考:
 * 同一プレーヤーで複数の音声を再生し、本関数を実行した場合、本関数は
 * "最後に"再生した音声の時刻を返します。<br>
 * 複数の音声に対して再生時刻をチェックする必要がある場合には、
 * 再生する音声の数分だけプレーヤーを作成するか、または
 * ::criAtomExPlayback_GetTime 関数をご利用ください。<br>
 * <br>
 * 本関数が返す再生時刻は「再生開始後からの経過時間」です。<br>
 * ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じて時刻が巻き戻ることはありません。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズをかけた場合、
 * 再生時刻のカウントアップも停止します。<br>
 * （ポーズを解除すれば再度カウントアップが再開されます。）
 * <br>
 * 本関数で取得可能な時刻の精度は、サーバー処理の周波数に依存します。<br>
 * （時刻の更新はサーバー処理単位で行われます。）<br>
 * より精度の高い時刻を取得する必要がある場合には、本関数の代わりに
 * ::criAtomExPlayback_GetNumPlayedSamples 関数を使用し、
 * 再生済みサンプル数を取得してください。<br>
 * \attention
 * 戻り値の型はCriSint64ですが、現状、32bit以上の精度はありません。<br>
 * 再生時刻を元に制御を行う場合、約24日で再生時刻が異常になる点に注意が必要です。<br>
 * （ 2147483647 ミリ秒を超えた時点で、再生時刻がオーバーフローし、負値になります。）<br>
 * <br>
 * AtomExプレーヤー作成時、 ::CriAtomExPlayerConfig 構造体の updates_time を
 * CRI_FALSE に設定した場合、当該プレーヤーから再生時刻を取得することはできなくなります。<br>
 * <br>
 * 再生中の音声が発音数制御によって消去された場合、
 * 再生時刻のカウントアップもその時点で停止します。<br>
 * また、再生開始時点で発音数制御によりボイスが割り当てられなかった場合、
 * 本関数は正しい時刻を返しません。<br>
 * （負値が返ります。）<br>
 * <br>
 * ドライブでリードリトライ処理等が発生し、一時的に音声データの供給が途切れた場合でも、
 * 再生時刻のカウントアップが途切れることはありません。<br>
 * （データ供給停止により再生が停止した場合でも、時刻は進み続けます。）<br>
 * そのため、本関数で取得した時刻を元に映像との同期を行った場合、
 * リードリトライ発生毎に同期が大きくズレる可能性があります。<br>
 * 波形データと映像の同期を厳密に取る必要がある場合は、本関数の代わりに
 * ::criAtomExPlayback_GetNumPlayedSamples 関数を使用し、
 * 再生済みサンプル数との同期を取ってください。<br>
 * \sa criAtomExPlayback_GetTime, criAtomExPlayback_GetNumPlayedSamples
 */
CriSint64 CRIAPI criAtomExPlayer_GetTime(CriAtomExPlayerHn player);

/*JP
 * \brief フォーマットの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	format		フォーマット
 * \par 説明:
 * AtomExプレーヤーで再生する音声のフォーマットを指定します。<br>
 * ::criAtomExPlayer_Start 関数で音声を再生した際、AtomExプレーヤーは本関数で
 * 指定されたフォーマットのデータを再生可能なボイスを、ボイスプールから取得します。<br>
 * 関数実行前のデフォルト設定値はADXフォーマットです。<br>
 * \par 備考:
 * 本関数は、ACBファイルを使用せずに音声を再生する場合にのみセットする必要があります。<br>
 * キューを再生する場合、フォーマットはキューシートから自動で取得されるため、
 * 別途本関数を実行する必要はありません。<br>
 */
void CRIAPI criAtomExPlayer_SetFormat(
	CriAtomExPlayerHn player, CriAtomExFormat format);

/*JP
 * \brief チャンネル数の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	num_channels	チャンネル数
 * \par 説明:
 * AtomExプレーヤーで再生する音声のチャンネル数を指定します。<br>
 * ::criAtomExPlayer_Start 関数で音声を再生した際、AtomExプレーヤーは本関数で
 * 指定されたチャンネル数のデータを再生可能なボイスを、ボイスプールから取得します。<br>
 * 関数実行前のデフォルト設定値は2チャンネルです。<br>
 * \par 備考:
 * 本関数は、ACBファイルを使用せずに音声を再生する場合にのみセットする必要があります。<br>
 * キューを再生する場合、フォーマットはキューシートから自動で取得されるため、
 * 別途本関数を実行する必要はありません。<br>
 */
void CRIAPI criAtomExPlayer_SetNumChannels(
	CriAtomExPlayerHn player, CriSint32 num_channels);

/*JP
 * \brief サンプリングレートの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	sampling_rate	サンプリングレート
 * \par 説明:
 * AtomExプレーヤーで再生する音声のサンプリングレートを指定します。<br>
 * ::criAtomExPlayer_Start 関数で音声を再生した際、AtomExプレーヤーは本関数で
 * 指定されたサンプリングレートのデータを再生可能なボイスを、ボイスプールから取得します。<br>
 * 関数実行前のデフォルト設定値は CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE です。<br>
 * \par 備考:
 * 本関数は、ACBファイルを使用せずに音声を再生する場合にのみセットする必要があります。<br>
 * キューを再生する場合、フォーマットはキューシートから自動で取得されるため、
 * 別途本関数を実行する必要はありません。<br>
 */
void CRIAPI criAtomExPlayer_SetSamplingRate(
	CriAtomExPlayerHn player, CriSint32 sampling_rate);

/*JP
 * \brief サウンドレンダラタイプの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	type		サウンドレンダラタイプ
 * \par 説明:
 * AtomExプレーヤーで再生する音声の出力先サウンドレンダラを指定します。<br>
 * ::criAtomExPlayer_Start 関数で音声を再生した際、AtomExプレーヤーは本関数で
 * 指定されたサウンドレンダラから出力するボイスを、ボイスプールから取得します。<br>
 * 関数実行前のデフォルト設定値は ::CRIATOM_SOUND_RENDERER_ANY です。<br>
 * \par 備考:
 * ::CRIATOM_SOUND_RENDERER_ANY を指定した場合、プレーヤーはボイスの出力先に関係なく、
 * 最初に見つかったボイスプールを使用して発音を行います。<br>
 * \sa CriAtomSoundRendererType
 */
void CRIAPI criAtomExPlayer_SetSoundRendererType(
	CriAtomExPlayerHn player, CriAtomSoundRendererType type);

/*JP
 * \brief グループ番号の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	group_no	グループ番号
 * \par 説明:
 * 発音時にボイスをどのボイスリミットグループから取得するかを指定します。<br>
 * group_no に ::CRIATOMEXPLAYER_NO_GROUP_LIMITATION を指定した場合、
 * プレーヤーはボイスリミットグループによる制限を受けなくなります。<br>
 * （空きボイスがあるか、または自身より低プライオリティのボイスがあれば、
 * ボイスリミットグループに関係なくボイスを取得します。）<br>
 * \par 備考:
 * ::criAtomExPlayer_Start 関数で再生を開始した際、
 * 指定したボイスリミットグループのボイスが全て使用中だった場合、
 * 再生した音声が発音されるかどうかは、ボイスプライオリティ制御によって決まります。<br>
 * （ボイスプライオリティの詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * <br>
 * キュー再生時に本関数を呼び出すと、データ側に設定されているボイスリミットグループ設定を<b>上書き</b>します（データ側の設定値は無視されます）。<br>
 * ただし、group_no に ::CRIATOMEXPLAYER_NO_GROUP_LIMITATION を指定した場合はデータ側に設定されているボイスリミットグループを参照します。
 * \sa CRIATOMEXPLAYER_NO_GROUP_LIMITATION, criAtomExPlayer_Start, criAtomExPlayer_SetVoicePriority, criAtomExPlayer_SetVoiceControlMethod
 */
void CRIAPI criAtomExPlayer_SetGroupNumber(
	CriAtomExPlayerHn player, CriSint32 group_no);

/*JP
 * \brief ボイス制御方法の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	method		ボイス制御方法
 * \par 説明:
 * AtomExプレーヤーにボイス制御方法を設定します。<br>
 * 本関数でボイス制御方法をセット後、 ::criAtomExPlayer_Start 関数で音声を再生すると、
 * 当該プレーヤーで再生する波形データには、本関数で指定した制御方式が適用されます。<br>
 * <br>
 * ボイス制御方法（ method ）には、以下のいずれかが指定可能です。<br>
 * - CRIATOMEX_PREFER_LAST
 * - CRIATOMEX_PREFER_FIRST
 * - CRIATOMEX_PREFER_DATA
 * 
 * <br>
 * 空きボイスがない状態で再生中のボイスと同プライオリティの音声を再生した場合、
 * ボイス制御方式に CRIATOMEX_PREFER_LAST が指定されていれば、
 * 再生中のボイスを停止して新規に音声の再生を開始します。<br>
 * 同条件で CRIATOMEX_PREFER_FIRST が指定されている場合、
 * 新規の再生リクエストがキャンセルされ、既存のボイスが再生を続けます。<br>
 * <br>
 * CRIATOMEX_PREFER_DATA が指定されている場合、
 * データにあらかじめ設定されているボイス制御方式（オーサリングツール上で設定した値）
 * が使用されます。<br>
 * CRIATOMEX_PREFER_DATA を指定しているにもかかわらず、単体ファイル再生等、
 * データにボイス制御方式が設定されていない場合、
 * 後着優先（ CRIATOMEX_PREFER_LAST ）でボイスが制御されます。<br>
 * <br>
 * 関数実行前のデフォルト設定値はデータ依存（ CRIATOMEX_PREFER_DATA ）です。<br>
 * \par 備考:
 * AtomExプレーヤーが波形データを再生しようとした際、
 * 当該波形データが所属するボイスリミットグループの発音数が上限に達していた場合や、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * <br>
 * 本関数でセットしたボイス制御方式は、発音制御の際、
 * 再生しようとした波形データのプライオリティと、
 * 再生中の波形データのプライオリティが同プライオリティであった場合に考慮されます。<br>
 * （ボイスプライオリティによる発音制御の詳細は ::criAtomExPlayer_SetVoicePriority 
 * 関数の説明をご参照ください。）<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_SetVoicePriority
 */
void CRIAPI criAtomExPlayer_SetVoiceControlMethod(
	CriAtomExPlayerHn player, CriAtomExVoiceControlMethod method);

/*JP
 * \brief ボイスプール識別子の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	identifier	ボイスプール識別子
 * \par 説明:
 * 発音時にボイスをどのボイスプールから取得するかを指定します。<br>
 * 本関数を実行すると、プレーヤーは以降指定されたボイスプール識別子に一致する
 * ボイスプールからのみボイスを取得します。<br>
 * \par 備考:
 * ボイスプール識別子のデフォルト値は 0 です。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa CriAtomExStandardVoicePoolConfig, criAtomExVoicePool_AllocateStandardVoicePool, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetVoicePoolIdentifier(
	CriAtomExPlayerHn player, CriAtomExVoicePoolIdentifier identifier);

/*JP
 * \brief HCAデコード先ミキサIDの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	mixer_id	ミキサID
 * \par 説明:
 * HCA-MXのデコード先ミキサIDを指定します。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 本関数は HCA-MX ボイスを使用する場合にのみ効果があります。<br>
 * （他のボイスを使用する場合、本関数の設定値は無視されます。）<br>
 * <br>
 * ミキサIDは再生開始前に設定する必要があります。<br>
 * 既に再生が開始された音声に対し、後からミキサIDを変更することはできません。<br>
 * \sa CriAtomExHcaMxVoicePoolConfig, criAtomExVoicePool_AllocateHcaMxVoicePool, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetHcaMxMixerId(CriAtomExPlayerHn player, CriSint32 mixer_id);

/*JP
 * \brief ASRラックIDの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	rack_id		ASRラックID
 * \par 説明:
 * ボイスの出力先ASRラックIDを指定します。<br>
 * 複数のASRラックIDを指定したい場合、 ::criAtomExPlayer_SetAsrRackIdArray 関数を使用してください。
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。<br>
 * <br>
 * キュー再生時に本関数を呼び出すと、データ側に設定されているパラメーターパレットのASRラックID設定を<b>上書き</b>します（データ側の設定値は無視されます）。
 * \attention
 * 本関数は ボイスのサウンドレンダラタイプにASRを使用する場合にのみ効果があります。<br>
 * （他のボイスを使用する場合、本関数の設定値は無視されます。）<br>
 * <br>
 * ASRラックIDは再生開始前に設定する必要があります。<br>
 * 既に再生が開始された音声に対し、後からASRラックIDを変更することはできません。<br>
 * <br>
 *  ::criAtomExPlayer_SetAsrRackIdArray 関数実行後に本関数を実行すると、 ::criAtomExPlayer_SetAsrRackIdArray 関数にて
 * 設定した複数のASRラックID設定は上書きされます。<br>
 * <br>
 * HCA-MX用にエンコードされた音声データには、本関数の設定が適用されません。<br>
 * HCA-MX用にエンコードされた音声データについて出力先ASRラックIDを設定する場合、
 * ::criAtomExHcaMx_SetAsrRackId 関数を使用して、HCA-MXミキサ自体の出力先ASRラックIDを設定してください。<br>
 * \sa criAtomExAsr_CreateRack, criAtomExPlayer_SetAsrRackIdArray, criAtomExHcaMx_SetAsrRackId, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetAsrRackId(CriAtomExPlayerHn player, CriSint32 rack_id);

/*JP
 * \brief 複数のASRラックIDの指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	rack_id_array	ASRラックIDの配列
 * \param[in]	num_racks		ASRラックID指定数
 * \par 説明:
 * ボイスの出力先ASRラックIDを複数指定します。<br>
 * ::CRIATOMEXPLAYER_MAX_ASR_RACKS に定義された数分のASRラックIDを指定することが可能です。<br>
 * 単一のASRラックIDを指定する場合は、 ::criAtomExPlayer_SetAsrRackId 関数を使用することでも指定可能です。
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。<br>
 * <br>
 * キュー再生時に本関数を呼び出すと、データ側に設定されているパラメーターパレットのASRラックID設定を<b>上書き</b>します（データ側の設定値は無視されます）。
 * \attention
 * 本関数は ボイスのサウンドレンダラタイプにASRを使用する場合にのみ効果があります。<br>
 * （他のボイスを使用する場合、本関数の設定値は無視されます。）<br>
 * <br>
 * ASRラックIDは再生開始前に設定する必要があります。<br>
 * 既に再生が開始された音声に対し、後からASRラックIDを変更することはできません。<br>
 * <br>
 * 複数のASRラックIDを指定したプレーヤーを再生した場合、ボイスはその指定されたASRラックIDの数だけ使用されます。<br>
 * そのため、事前に指定するASRラックID数分のボイスを確保しておく必要があります。<br>
 * <br>
 * ::criAtomExPlayer_SetData 関数等を使用したキュー再生以外の再生時では、本関数にて指定した複数のASRラックIDの内、
 * 1つ目（配列のインデックスが0）の要素に格納されているASRラックIDのみが適用されます。<br>
 * <br>
 *  ::criAtomExPlayer_SetAsrRackId 関数実行後に本関数を実行すると、 ::criAtomExPlayer_SetAsrRackId 関数にて
 * 設定したASRラックID設定は上書きされます。<br>
 * <br>
 * HCA-MX用にエンコードされた音声データには、本関数の設定が適用されません。<br>
 * HCA-MX用にエンコードされた音声データについて出力先ASRラックIDを設定する場合、
 * ::criAtomExHcaMx_SetAsrRackId 関数を使用して、HCA-MXミキサ自体の出力先ASRラックIDを設定してください。<br>
 * \sa criAtomExAsr_CreateRack, criAtomExPlayer_SetAsrRackId, criAtomExHcaMx_SetAsrRackId, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetAsrRackIdArray(
	CriAtomExPlayerHn player, const CriSint32 *rack_id_array, CriSint32 num_racks);

/*JP
 * \brief 再生開始位置の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	start_time_ms	再生開始位置（ミリ秒指定）
 * \par 説明:
 * AtomExプレーヤーで再生する音声について、再生を開始する位置を指定します。<br>
 * 音声データを途中から再生したい場合、再生開始前に本関数で再生開始位置を
 * 指定する必要があります。<br>
 * <br>
 * 再生開始位置の指定はミリ秒単位で行います。<br>
 * 例えば、 start_time_ms に 10000 をセットして本関数を実行すると、
 * 次に再生する音声データは 10 秒目の位置から再生されます。
 * \par 備考:
 * 音声データ途中からの再生は、音声データ先頭からの再生に比べ、発音開始の
 * タイミングが遅くなります。<br>
 * これは、一旦音声データのヘッダーを解析後、指定位置にジャンプしてからデータを読み
 * 直して再生を開始するためです。<br>
 * \attention
 * start_time_ms には64bit値をセット可能ですが、現状、32bit以上の再生時刻を
 * 指定することはできません。<br>
 * <br>
 * 機種固有の音声フォーマットについても、再生開始位置を指定できない場合があります。<br>
 * <br>
 * 再生開始位置を指定してシーケンスを再生した場合、指定位置よりも前に配置された
 * 波形データは再生されません。<br>
 * （シーケンス内の個々の波形が途中から再生されることはありません。）<br>
 */
void CRIAPI criAtomExPlayer_SetStartTime(
	CriAtomExPlayerHn player, CriSint64 start_time_ms);

/*JP
 * \brief 同期再生IDの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	playback_id	同期対象となる再生ID
 * \par 説明:
 * AtomExプレーヤーで再生する音声を、指定した再生IDの音声に同期させます。<br>
 * 本関数で再生IDを設定後に音声を再生すると、
 * その音声は指定された再生IDと同じ再生位置にシークして再生を始めます。<br>
 * \par 備考:
 * 同期対象の再生IDが無効な場合、音声データの先頭から再生が開始されます。<br>
 * playback_id に CRIATOMEX_INVALID_PLAYBACK_ID を指定すると、
 * 再生IDの登録がクリアされます。<br>
 * \attention
 * 本関数は、単体の波形データを再生する場合にのみ利用可能です。<br>
 * シーケンスデータには利用できません。<br>
 * （シーケンスデータに対して使用した場合、
 * シーケンス中で最初に見つかった波形データに対して同期処理が行われてしまいます。）<br>
 * <br>
 * 本関数で再生位置を調整可能なコーデックは、以下のコーデックのみです。<br>
 * 	- ADX
 * 	- HCA
 * 	- Wave
 * 	
 * <br>
 * 他のコーデックについては、本関数を用いた同期再生は行えません。<br>
 * （HCA-MXや、ハードウェアデコードを行う音声コーデックでは、本機能は利用できません。）<br>
 * <br>
 * 本機能による再生位置の同期は、可能な限りサンプル単位で行いますが、
 * 1サンプルの誤差なく結合することを保証するものではありません。<br>
 * （ミリ秒レベルのズレが許容される場合にのみご利用ください。）<br>
 * また、再生位置の同期精度は、プラットフォームによっても異なります。<br>
 * <br>
 * 本関数と ::criAtomExPlayer_SetStartTime 関数を併用することはできません。<br>
 * 本関を使用した場合、音声の再生開始位置はライブラリ内で自動的に調整されます。<br>
 * そのため、本関数と ::criAtomExPlayer_SetStartTime 関数を併用することはできません。<br>
 * （ ::criAtomExPlayer_SetStartTime 関数の設定は無視されます。）<br>
 * <br>
 * 本関数を使用して再生を行った場合、再生開始時にノイズが入る場合があります。<br>
 * 本機能を使用する場合、可能な限りフェードイン処理を併用してください。<br>
 * <br>
 * 本関数を使用してキュー再生を行った場合、 ::criAtomExPlayer_GetTime 関数や
 * ::criAtomExPlayback_GetTime 関数による再生時刻の取得は正しく行えません。<br>
 * 再生時刻の確認には、これらの関数の代わりに、 ::criAtomExPlayback_GetNumPlayedSamples
 * 関数をご利用ください。<br>
 * \sa criAtomExPlayback_GetNumPlayedSamples
 */
void CRIAPI criAtomExPlayer_SetSyncPlaybackId(
	CriAtomExPlayerHn player, CriAtomExPlaybackId playback_id);

/*JP
 * \brief シーケンス再生レシオの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	playback_ratio	シーケンス再生レシオ
 * \par 説明:
 * AtomExプレーヤーで再生するシーケンスの再生レシオを設定します。<br>
 * 再生レシオの設定範囲は 0.0f 〜 2.0f です。<br>
 * 範囲外の値を設定した場合は、下限値もしくは上限値が設定されます。
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 本関数による設定値は、シーケンスタイプのキューを再生する場合にのみ適用されます。<br>
 * シーケンスにて発音する波形データの再生レシオには利用できません。<br>
 * \sa criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPlaybackRatio(
	CriAtomExPlayerHn player, CriFloat32 playback_ratio);

/*JP
 * \brief ループ回数の制限
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	count		ループ制限回数
 * \par 説明:
 * 波形データのループ再生回数を制限します。<br>
 * 例えば、countに1を指定した場合、ループ波形データは1回のみループして再生を終了します。<br>
 * （ループエンドポイントに到達後、1回だけループスタート位置に戻ります。）<br>
 * \par 備考:
 * デフォルト状態では、ループポイント付きの音声データは無限にループ再生されます。<br>
 * ループ回数を一旦制限した後、ループ回数を再度無限回に戻したい場合には、
 * count に ::CRIATOMEXPLAYER_NO_LOOP_LIMITATION を指定してください。<br>
 * <br>
 * count に ::CRIATOMEXPLAYER_IGNORE_LOOP を指定することで、
 * ループポイント付きの音声データをループさせずに再生することも可能です。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
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
 * 	- 本関数に ::CRIATOMEXPLAYER_IGNORE_LOOP を指定してから再生を行う。
 * 	
 * <br>
 * 本関数でループ回数を制限できるのは、ADXコーデックとHCAコーデックのみです。<br>
 * プラットフォーム依存の音声コーデックに対して本関数を実行しないでください。<br>
 * （再生が終了しない、ノイズが発生する等の問題が発生します。）<br>
 * \sa criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_LimitLoopCount(CriAtomExPlayerHn player, CriSint32 count);

/*JP
 * \brief 再生パラメーターの更新（再生中の音全て）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \par 説明:
 * AtomExプレーヤーに設定されている再生パラメーター（AISACコントロール値を含む）を使用して、
 * このAtomExプレーヤーで再生中の音全ての再生パラメーターを更新します。<br>
 * \par 例:
 * \code
 * CriFloat32 volume;
 * // Start playback
 * criAtomExPlayer_Start(player);
 *                :
 * criAtomExPlayer_Start(player);
 *                :
 * // Change Volume
 * volume = 0.3f;
 * criAtomExPlayer_SetVolume(player, volume);
 * criAtomExPlayer_UpdateAll(player);
 * \endcode
 * \sa criAtomExPlayer_Update
 */
void CRIAPI criAtomExPlayer_UpdateAll(CriAtomExPlayerHn player);

/*JP
 * \brief 再生パラメーターの更新（再生ID指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	id			再生ID
 * \par 説明:
 * AtomExプレーヤーに設定されている再生パラメーター（AISACコントロール値を含む）を使用して、
 * 再生IDによって指定された音声の再生パラメーターを更新します。<br>
 * \par 例:
 * \code
 * CriFloat32 volume;
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Change Volume
 * volume = 0.3f;
 * criAtomExPlayer_SetVolume(player, volume);
 * criAtomExPlayer_Update(player, id);
 * \endcode
 * \par 備考:
 * 再生IDは、このAtomExプレーヤーで再生された音声を指している必要があります。<br>
 * \sa criAtomExPlayer_UpdateAll
 */
void CRIAPI criAtomExPlayer_Update(
	CriAtomExPlayerHn player, CriAtomExPlaybackId id);

/*JP
 * \brief 再生パラメーターの初期化
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \par 説明:
 * AtomExプレーヤーに設定されている再生パラメーター（AISACコントロール値を含む）をリセットし、初期状態（未設定状態）に戻します。<br>
 * 本関数呼び出し後、::criAtomExPlayer_Start 関数により再生開始すると、初期状態の再生パラメーターで再生されます。<br>
 * \par 例:
 * \code
 * CriFloat32 volume;
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Change Volume
 * volume = 0.3f;
 * criAtomExPlayer_SetVolume(player, volume);
 * criAtomExPlayer_Update(player, id);
 *                :
 * // Reset Parameters
 * criAtomExPlayer_ResetParameters(player);
 * id = criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * 本関数呼び出し後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出したとしても、すでに再生されている音声のパラメーターは初期値には戻りません。<br>
 * すでに再生されている音声のパラメーターを変える場合は、明示的に::criAtomExPlayer_SetVolume 関数等を呼び出してください。<br>
 * <br>
 * 本関数でリセットされるパラメーターは、各パラメーターの設定を行う関数に対象かどうかを記載しているため、そちらを参照して下さい。<br>
 * <br>
 * なお、本関数では3D音源ハンドルや3Dリスナーハンドル自体のもつパラメーター（位置等）はリセットされません。「AtomExプレーヤーに設定されているハンドルが何か」という設定だけがリセットされます。
 * これらのハンドル自体のパラメーターをリセットしたい場合には、それぞれのハンドルのパラメーターリセット関数を呼び出してください。
 * \sa criAtomEx3dSource_ResetParameters, criAtomEx3dListener_ResetParameters
 */
void CRIAPI criAtomExPlayer_ResetParameters(CriAtomExPlayerHn player);

/*JP
 * \brief パラメーターの取得（浮動小数点数）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	id		パラメーターID
 * \return		パラメーター設定値
 * \par 説明:
 * AtomExプレーヤーに設定されている各種パラメーターの値を取得します。<br>
 * 値は浮動小数点数で取得されます。
 * \sa CriAtomExParameterId, criAtomExPlayer_GetParameterUint32, criAtomExPlayer_GetParameterSint32
 */
CriFloat32 CRIAPI criAtomExPlayer_GetParameterFloat32(CriAtomExPlayerHn player, CriAtomExParameterId id);

/*JP
 * \brief パラメーターの取得（符号なし整数）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	id		パラメーターID
 * \return		パラメーター設定値
 * \par 説明:
 * AtomExプレーヤーに設定されている各種パラメーターの値を取得します。<br>
 * 値は符号なし整数で取得されます。
 * \sa CriAtomExParameterId, criAtomExPlayer_GetParameterFloat32, criAtomExPlayer_GetParameterSint32
 */
CriUint32 CRIAPI criAtomExPlayer_GetParameterUint32(CriAtomExPlayerHn player, CriAtomExParameterId id);

/*JP
 * \brief パラメーターの取得（符号付き整数）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	id		パラメーターID
 * \return		パラメーター設定値
 * \par 説明:
 * AtomExプレーヤーに設定されている各種パラメーターの値を取得します。<br>
 * 値は符号付き整数で取得されます。
 * \sa CriAtomExParameterId, criAtomExPlayer_GetParameterFloat32, criAtomExPlayer_GetParameterUint32
 */
CriSint32 CRIAPI criAtomExPlayer_GetParameterSint32(CriAtomExPlayerHn player, CriAtomExParameterId id);

/*JP
 * \brief ボリュームの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	volume		ボリューム値
 * \par 説明:
 * 出力音声のボリュームを指定します。<br>
 * 本関数でボリュームを設定後、::criAtomExPlayer_Start 関数で再生を開始すると、
 * 設定されたボリュームで音声が再生されます。<br>
 * またボリューム設定後に ::criAtomExPlayer_Update 関数や ::criAtomExPlayer_UpdateAll 
 * 関数を呼び出すことで、すでに再生された音声のボリュームを更新することも可能です。<br>
 * <br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * ボリュームのデフォルト値は1.0fです。<br>
 * \par 例:
 * \code
 * 	：
 * // ボリュームの設定
 * criAtomExPlayer_SetVolume(player, 0.5f);
 * 
 * // 再生の開始
 * // 備考）ボリュームはプレーヤーに設定された値（＝0.5f）で再生される。
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // ボリュームの変更
 * // 注意）この時点では再生中の音声のボリュームは変更されない。
 * criAtomExPlayer_SetVolume(player, 0.3f);
 * 
 * // プレーヤーに設定されたボリュームを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * ボリューム値には0.0f以上の値が設定可能です。<br>
 * （Atomライブラリ Ver.1.21.07より、
 * ボリューム値に1.0fを超える値を指定できるようになりました。）<br>
 * 1.0fを超える値をセットした場合、<b>プラットフォームによっては</b>、
 * 波形データを元素材よりも大きな音量で再生可能です。<br>
 * ボリューム値に0.0f未満の値を指定した場合、値は0.0fにクリップされます。<br>
 * （ボリューム値に負の値を設定した場合でも、
 * 波形データの位相が反転されることはありません。）<br>
 * <br>
 * キュー再生時、データ側にボリュームが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>乗算</b>した値が適用されます。<br>
 * 例えば、データ側のボリュームが0.8f、AtomExプレーヤーのボリュームが0.5fの場合、
 * 実際に適用されるボリュームは0.4fになります。<br>
 * <br>
 * デシベルで設定したい場合、以下の計算式で変換してから設定してください。<br>
 * \code
 * volume = powf(10.0f, db_vol / 20.0f);
 * \endcode
 * ※db_volがデシベル値、volumeがボリューム値です。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
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
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetVolume(
	CriAtomExPlayerHn player, CriFloat32 volume);

/*JP
 * \brief ピッチの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	pitch		ピッチ（セント単位）
 * \par 説明:
 * 出力音声のピッチを指定します。<br>
 * 本関数でピッチを設定後、::criAtomExPlayer_Start 関数で再生を開始すると、
 * 設定されたピッチで音声が再生されます。<br>
 * またピッチ後に ::criAtomExPlayer_Update 関数や ::criAtomExPlayer_UpdateAll 
 * 関数を呼び出すことにより、すでに再生された音声のピッチを更新することが可能です。<br>
 * <br>
 * ピッチはセント単位で指定します。<br>
 * 1セントは1オクターブの1/1200です。半音は100セントです。<br>
 * 例えば、100.0fを指定した場合、ピッチが半音上がります。-100.0fを指定した場合、
 * ピッチが半音下がります。<br>
 * ピッチのデフォルト値は0.0fです。<br>
 * \par 例:
 * \code
 * 	：
 * // ピッチの設定
 * criAtomExPlayer_SetPitch(player, 100.0f);
 * 
 * // 再生の開始
 * // 備考）ピッチはプレーヤーに設定された値（＝0.5f）で再生される。
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // ピッチの変更
 * // 注意）この時点では再生中の音声のピッチは変更されない。
 * criAtomExPlayer_SetPitch(player, -200.0f);
 * 
 * // プレーヤーに設定されたピッチを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にピッチが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>加算</b>した値が適用されます。<br>
 * 例えば、データ側のピッチが-100.0f、AtomExプレーヤーのピッチが200.0fの場合、
 * 実際に適用されるピッチは100.0fになります。
 * <br>
 * サンプリングレートの周波数比率で設定したい場合、以下の計算式で変換してから設定してください。<br>
 * \code
 * pitch = 1200.0f*logf(freq_ratio)/logf(2.0f);
 * \endcode
 * ※freq_ratioが周波数比率、pitchがピッチの値です。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * HCA-MX用にエンコードされた音声データは、ピッチの変更ができません。<br>
 * （本関数を実行しても、ピッチは変わりません。）<br>
 * ピッチを変更したい音声については、ADXやHCA等、他のコーデックでエンコードを行ってください。<br>
 * <br>
 * 設定可能な最大ピッチは、音声データのサンプリングレートとボイスプールの最大サンプリングレートに依存します。<br>
 * 例えば、音声データのサンプリングレートが24kHzで、ボイスプールの最大サンプリングレートが48kHzの場合、
 * 設定可能な最大ピッチは1200(周波数比率2倍)になります。<br>
 * <br>
 * 再生サンプリングレートの上下によりピッチを実装しているため、
 * ピッチを変更すると音程と一緒に再生速度も変化します。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetMaxPitch, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPitch(CriAtomExPlayerHn player, CriFloat32 pitch);

/*JP
 * \brief 最大ピッチの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		Atomプレーヤーハンドル
 * \param[in]	pitch		最大ピッチ
 * \par 説明:
 * 音声の最大ピッチを設定します。<br>
 * 本関数で最大ピッチを指定することで、指定範囲内でのピッチ変更が即座に反映されるようになります。<br>
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
 * 本関数で最大ピッチをあらかじめ設定した場合、
 * 指定された速度を想定して常にバッファリングが行われるようになるため、
 * （指定された範囲内の周波数においては）バッファリングなしにピッチ変更が即座に行われます。<br>
 * 短時間にピッチを上げ下げするケースについては、
 * 予想される最大ピッチをあらかじめ本関数で設定してから再生を行ってください。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_SetPitch, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetMaxPitch(CriAtomExPlayerHn player, CriFloat32 pitch);

/*JP
 * \brief パンニング3D角度の設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	pan3d_angle	パンニング3D角度（-180.0f〜180.0f：度単位）
 * \par 説明:
 * パンニング3D角度を指定します。<br>
 * 本関数でパンニング3D角度を設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたパンニング3D角度で再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のパンニング3D角度を更新することができます。<br>
 * <br>
 * 角度は度単位で指定します。<br>
 * 前方を0度とし、右方向（時計回り）に180.0f、左方向（反時計回り）に-180.0fまで設定できます。<br>
 * 例えば、45.0fを指定した場合、右前方45度に定位します。-45.0fを指定した場合、左前方45度に定位します。<br>
 * \par 例:
 * \code
 * 	：
 * // パンニング3D角度の設定
 * criAtomExPlayer_SetPan3dAngle(player, 45.0f);
 * 
 * // 再生の開始
 * // 備考）パンニング3D角度はプレーヤーに設定された値（＝45.0f）で再生される。
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パンニング3D角度の変更
 * // 注意）この時点では再生中の音声のパンニング3D角度は変更されない。
 * criAtomExPlayer_SetPan3dAngle(player, -45.0f);
 * 
 * // プレーヤーに設定されたパンニング3D角度を再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にパンニング3D角度が設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>加算</b>した値が適用されます。<br>
 * 例えば、データ側のパンニング3D角度が15.0f、AtomExプレーヤーのパンニング3D角度が30.0fの場合、
 * 実際に適用されるパンニング3D角度は45.0fになります。
 * <br>
 * 実際に適用されるパンニング3D角度が180.0fを超える値になった場合、値を-360.0fして範囲内に納めます。<br>
 * 同様に、実際に適用されるボリューム値が-180.0f未満の値になった場合は、値を+360.0fして範囲内に納めます。<br>
 * （+360.0f, -360.0fしても定位は変わらないため、実質的には-180.0f〜180.0fの範囲を超えて設定可能です。）<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPan3dAngle(
	CriAtomExPlayerHn player, CriFloat32 pan3d_angle);

/*JP
 * \brief パンニング3D距離の設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player					AtomExプレーヤーハンドル
 * \param[in]	pan3d_interior_distance	パンニング3D距離（-1.0f〜1.0f）
 * \par 説明:
 * パンニング3Dでインテリアパンニングを行う際の距離を指定します。<br>
 * 本関数でパンニング3D距離を設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたパンニング3D距離で再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のパンニング3D距離を更新することができます。<br>
 * <br>
 * 距離は、リスナー位置を0.0f、スピーカーの配置されている円周上を1.0fとして、-1.0f〜1.0fの範囲で指定します。<br>
 * 負値を指定すると、パンニング3D角度が180度反転し、逆方向に定位します。
 * \par 例:
 * \code
 * 	：
 * // パンニング3D距離の設定
 * criAtomExPlayer_SetPan3dInteriorDistance(player, 0.5f);
 * 
 * // 再生の開始
 * // 備考）パンニング3D距離はプレーヤーに設定された値（＝0.5f）で再生される。
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パンニング3D距離の変更
 * // 注意）この時点では再生中の音声のパンニング3D距離は変更されない。
 * // 備考）以下の処理はパン3D角度を180度反転するのと等価
 * criAtomExPlayer_SetPan3dInteriorDistance(player, -0.5f);
 * 
 * // プレーヤーに設定されたパンニング3D距離を再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にパンニング3D距離が設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>乗算</b>した値が適用されます。<br>
 * 例えば、データ側のパンニング3D距離が0.8f、AtomExプレーヤーのパンニング3D距離が0.5fの場合、
 * 実際に適用されるパンニング3D距離は0.4fになります。
 * <br>
 * 実際に適用されるパンニング3D距離が1.0fを超える値になった場合、値は1.0fにクリップされます。<br>
 * 同様に、実際に適用されるパンニング3D距離が-1.0f未満の値になった場合も、値は-1.0fにクリップされます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPan3dInteriorDistance(
	CriAtomExPlayerHn player, CriFloat32 pan3d_interior_distance);

/*JP
 * \brief パンニング3Dボリュームの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	pan3d_volume	パンニング3Dボリューム（0.0f〜1.0f）
 * \par 説明:
 * パンニング3Dのボリュームを指定します。<br>
 * 本関数でパンニング3Dボリュームを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたパンニング3Dボリュームで再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のパンニング3Dボリュームを更新することができます。<br>
 * <br>
 * パンニング3Dボリュームは、パンニング3D成分と、
 * センター／LFEへの出力レベルとを個別に制御する場合に使用します。<br>
 * 例えば、センドレベルで常にLFEから一定のボリュームで出力させておき、
 * 定位はパンニング3Dでコントロールするような場合です。
 * <br>
 * 値の範囲や扱いは、通常のボリュームと同等です。::criAtomExPlayer_SetVolume 関数を参照してください。
 * \par 例:
 * \code
 * 	：
 * // パンニング3Dボリュームの設定
 * criAtomExPlayer_SetPan3dVolume(player, 0.8f);
 * 
 * // 再生の開始
 * // 備考）パンニング3Dボリュームはプレーヤーに設定された値（＝0.5f）で再生される。
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パンニング3Dボリュームの変更
 * // 注意）この時点では再生中の音声のパンニング3Dボリュームは変更されない。
 * criAtomExPlayer_SetPan3dVolume(player, 0.7f);
 * 
 * // プレーヤーに設定されたパンニング3Dボリュームを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetVolume, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPan3dVolume(
	CriAtomExPlayerHn player, CriFloat32 pan3d_volume);

/*JP
 * \brief パンタイプの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	pan_type		パンタイプ
 * \par 説明:
 * パンタイプを指定します。<br>
 * 本関数でパンタイプを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたパンタイプで再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のパンタイプを更新することができます。<br>
 * \par 備考:
 * キュー再生時に本関数を呼び出すと、データ側に設定されているパンタイプ設定を<b>上書き</b>します（データ側の設定値は無視されます）。<br>
 * 通常はデータ側でパンタイプが設定されているため、本関数を呼び出す必要はありません。<br>
 * ACBファイルを使用せずに音声を再生する場合に、3Dポジショニング処理を有効にするためには、本関数で::CRIATOMEX_PAN_TYPE_3D_POSを設定してください。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * ::CRIATOMEX_PAN_TYPE_UNKNOWN を指定して実行した場合、エラーが発生します。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, CriAtomExPanType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPanType(
	CriAtomExPlayerHn player, CriAtomExPanType pan_type);

/*JP
 * \brief パンニング時の出力スピーカータイプ設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player				AtomExプレーヤーハンドル
 * \param[in]	pan_speaker_type	パンニング時の出力スピーカータイプ
 * \par 説明:
 * パンニング時の出力スピーカータイプを指定します。<br>
 * 本関数でパンニング時の出力スピーカータイプを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定された出力スピーカータイプでパンニング計算されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声の出力スピーカータイプを更新することができます。<br>
 * \par 備考:
 * 本関数の設定はパン3Dと3Dポジショニングにおけるパンニング計算に影響します。<br>
 * ライブラリ初期化時のデフォルト値は4chパンニング（::CRIATOMEX_PAN_SPEAKER_TYPE_4CH）です。<br>
 * デフォルト値は::criAtomExPlayer_ChangeDefaultPanSpeakerType 関数にて変更可能です。<br>
 * ステレオスピーカーのプラットフォームでは、どれを選んだとしても最終的にはステレオにダウンミックスされます。<br>
 * <br>
 * 本パラメーターはデータ側には設定できないため、常に本関数の設定値が適用されます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, CriAtomExPanSpeakerType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPanSpeakerType(
	CriAtomExPlayerHn player, CriAtomExPanSpeakerType pan_speaker_type);

/*JP
 * \brief MixDownCenterボリュームオフセット値の設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player							AtomExプレーヤーハンドル
 * \param[in]	mixdown_center_volume_offset	MixDownCenterボリュームのオフセット値
 * \par 説明:
 * Center, LFE以外の信号をモノラルにミックスしてCenterに出力するためのボリューム値を設定します。<br>
 * 本関数による設定値は、CRI Atom Craftによるデータ設定値に対して加算適用されます。<br>
 * 本関数の第二引数mixdown_center_volume_offsetには0〜1の浮動小数点値で出力ボリュームを設定してください。<br>
 * \attention
 * 設定値の範囲外確認は行われません。範囲外を設定する際には以下の点に注意してください。<br>
 * 1より大きい値：出力振幅値の増幅によりクリッピングノイズ等が発生することがあります。<br>
 * 負値：データ設定値との和が負となった場合は、正値結果に対して位相を反転した結果が出力されます。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, CriAtomExPanSpeakerType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_AddMixDownCenterVolumeOffset(
	CriAtomExPlayerHn player, CriFloat32 mixdown_center_volume_offset);

/*JP
 * \brief MixDownLFEボリュームオフセット値の設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player							AtomExプレーヤーハンドル
 * \param[in]	mixdown_lfe_volume_offset		MixDownLFEボリュームのオフセット値
 * \par 説明:
 * Center, LFE以外の信号をモノラルにミックスしてLFEに出力するためのボリューム値を設定します。<br>
 * 本関数による設定値は、CRI Atom Craftによるデータ設定値に対して加算適用されます。<br>
 * 本関数の第二引数mixdown_lfe_volume_offsetには0〜1の浮動小数点値で出力ボリュームを設定してください。<br>
 * \attention
 * 設定値の範囲外確認は行われません。範囲外を設定する際には以下の点に注意してください。<br>
 * 1より大きい値：出力振幅値の増幅によりクリッピングノイズ等が発生することがあります。<br>
 * 負値：データ設定値との和が負となった場合は、正値結果に対して位相を反転した結果が出力されます。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, CriAtomExPanSpeakerType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_AddMixDownLfeVolumeOffset(
	CriAtomExPlayerHn player, CriFloat32 mixdown_lfe_volume_offset);

/*JP
 * \brief パンニング時の出力スピーカータイプ設定のデフォルト値変更
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	pan_speaker_type	パンニング時の出力スピーカータイプ
 * \par 説明:
 * パンニング時の出力スピーカータイプのデフォルト値を変更します。<br>
 * ::criAtomExPlayer_SetPanSpeakerType 関数を実行していないAtomExプレーヤーは、全て本関数で設定した出力スピーカータイプで再生されます。<br>
 * \par 備考:
 * 本関数の設定はパン3Dと3Dポジショニングにおけるパンニング計算に影響します。<br>
 * ライブラリ初期化時のデフォルト値は4chパンニング（::CRIATOMEX_PAN_SPEAKER_TYPE_4CH）です。<br>
 * ステレオスピーカーのプラットフォームでは、どれを選んだとしても最終的にはステレオにダウンミックスされます。<br>
 * <br>
 * 本パラメーターはデータ側には設定できないため、常に本関数の設定値が適用されます。<br>
 * \attention
 * 再生中の音声がデフォルト値を参照するタイミングはユーザーの操作に依存します。<br>
 * そのため、再生中にデフォルト値を変更した場合、意図したタイミングで変更が反映されるとは限りません。<br>
 * 本関数を使用する場合、初期化時など音声を再生する前に実行するようにしてください。<br>
 * \sa criAtomExPlayer_SetPanSpeakerType, CriAtomExPanSpeakerType
 */
void CRIAPI criAtomExPlayer_ChangeDefaultPanSpeakerType(
	CriAtomExPanSpeakerType pan_speaker_type);

/*JP
 * \brief パンニング時の角度タイプ設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player				AtomExプレーヤーハンドル
 * \param[in]	pan_angle_type	パンニング時の角度タイプ
 * \par 説明:
 * パンニング時の角度タイプを指定します。<br>
 * 角度タイプは、マルチチャンネル（ステレオ、5.1ch等）の音声素材をパンニングするときに、各入力チャンネルをどのような角度として扱うかを表します。<br>
 * 本関数でパンニング時の角度タイプを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定された角度タイプでパンニング計算されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声の角度タイプを更新することができます。<br>
 * \par 備考:
 * 本関数の設定はパン3Dと3Dポジショニングにおけるパンニング計算に影響します。<br>
 * デフォルト値はオフセット（::CRIATOMEX_PAN_ANGLE_TYPE_OFFSET）です。<br>
 * 本関数は、主にはCRI Audioとの互換用に使用します。
 * 本関数で ::CRIATOMEX_PAN_ANGLE_TYPE_FIX を設定することで、CRI Audioでのパン3D計算と同じ挙動になります。<br>
 * <br>
 * 本パラメーターはデータ側には設定できないため、常に本関数の設定値が適用されます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, CriAtomExPanAngleType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPanAngleType(
	CriAtomExPlayerHn player, CriAtomExPanAngleType pan_angle_type);

/*JP
 * \brief パンニング時の音の広がり設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	spread		マルチチャンネル音声の広がり
 * \par 説明:
 * パンニング時の音の広がりを指定します。<br>
 * マルチチャンネル（ステレオ、5.1ch等）の音声素材をパンニングするときに、各入力チャンネル間の角度をどれだけ広げるかを指定します。<br>
 * 引数 spread の値域は 0.0 〜 1.0 です。デフォルト値は 1.0 です。<br>
 * 例えばステレオ音声を広がり0.5で再生すると、正面から見て左チャンネルは-15度(-30度*0.5)、右チャンネルは15度(30度*0.5)に定位するようパンニング計算されます。<br>
 * モノラル音声には影響しません。<br>
 * \par 備考：
 * 本関数でパンニング時の角度タイプを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定された広がりでパンニング計算されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声の広がりを更新することができます。<br>
 * <br>
 * 本パラメーターはデータ側には設定できないため、常に本関数の設定値が適用されます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPanSpread(CriAtomExPlayerHn player, CriFloat32 spread);

/*JP
 * \brief センドレベルの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	ch			チャンネル番号
 * \param[in]	spk			スピーカーID
 * \param[in]	level		センドレベル値（0.0f〜1.0f）
 * \par 説明:
 * センドレベルを指定します。<br>
 * センドレベルは、音声データの各チャンネルの音声を、どのスピーカーから
 * どの程度の音量で出力するかを指定するための仕組みです。<br>
 * 本関数でセンドレベルを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたセンドレベルで再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のセンドレベルを更新することができます。<br>
 * <br>
 * 第2引数のチャンネル番号は"音声データのチャンネル番号"を指定します。<br>
 * 第3引数のスピーカーIDには、指定したチャンネル番号のデータをどのスピーカーから
 * 出力するかを指定し、第4引数では送信時のレベル（ボリューム）を指定します。<br>
 * 例えば、音声データのチャンネル0番のデータをライトスピーカーから
 * フルボリューム（1.0f）で出力したい場合、指定は以下のようになります。
 * \code
 * criAtomExPlayer_SetSendLevel(player, 0, CRIATOMEX_SPEAKER_FRONT_RIGHT, 1.0f);
 * \endcode
 * <br>
 * センドレベル値の範囲や扱いは、ボリュームと同等です。::criAtomExPlayer_SetVolume 関数を参照してください。<br>
 * <br>
 * なお、センタースピーカーのあるプラットフォームで、モノラル音をセンタースピーカーのみから出力したい場合、
 * 本関数ではなく::criAtomExPlayer_SetPanSpeakerType 関数で::CRIATOMEX_PAN_SPEAKER_TYPE_5CH
 * を設定することをお薦めします。<br>
 * \par 例:
 * \code
 * CriSint32 ch = 0;	// channel number 0
 * CriAtomExSpeakerId spk = CRIATOMEX_SPEAKER_FRONT_CENTER;
 * CriFloat32 level = 1.0f;
 * // Set send level(ch0 to center)
 * criAtomExPlayer_SetSendLevel(player, ch, spk, level);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Change send level
 * level = 0.7f;
 * criAtomExPlayer_SetSendLevel(player, ch, spk, level);
 * criAtomExPlayer_Update(player, id);
 * \endcode
 * \par 備考:
 * センドレベルの設定には「自動設定」「手動設定」の2通りが存在します。<br>
 * AtomExプレーヤーを作成した直後や、 ::criAtomExPlayer_ResetParameters 関数で
 * パラメーターをクリアした場合、センドレベルの設定は「自動設定」となります。<br>
 * これに対し、本関数を実行した場合、センドレベルの設定は「手動設定」になります。<br>
 * （ユーザが各スピーカーへのセンドレベルをコントロールし、パンニングを行う必要があります。）<br>
 * <br>
 * 「自動設定」の場合、AtomExプレーヤーは以下のように音声をルーティングします。<br>
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
 * 【5.1ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をセンタースピーカーから、チャンネル3の音声をLFEから、
 * チャンネル4の音声をサラウンドレフトスピーカーから、
 * チャンネル5の音声をサラウンドライトスピーカーからそれぞれ出力します。<br>
 * <br>
 * 【7.1ch音声を再生する場合】<br>
 * チャンネル0の音声をレフトスピーカーから、チャンネル1の音声をライトスピーカーから、
 * チャンネル2の音声をセンタースピーカーから、チャンネル3の音声をLFEから、
 * チャンネル4の音声をサラウンドレフトスピーカーから、
 * チャンネル5の音声をサラウンドライトスピーカーからそれぞれ出力します。<br>
 * チャンネル6の音声をサラウンドバックレフトスピーカーから、
 * チャンネル7の音声をサラウンドバックライトスピーカーからそれぞれ出力します。<br>
 * <br>
 * これに対し、本関数を用いて「手動設定」を行った場合、音声データのチャンネル数に
 * 関係なく、指定されたセンドレベル設定で音声が出力されます。<br>
 * （音声データのチャンネル数に応じて、適宜センドレベル設定を切り替える必要があります。）<br>
 * <br>
 * 過去に指定したセンドレベルをクリアし、ルーティングを「自動設定」の状態に戻したい場合は、
 * ::criAtomExPlayer_ResetParameters 関数を実行してください。<br>
 * <br>
 * 本パラメーターはデータ側には設定できないため、常に本関数の設定値が適用されます。<br>
 * \attention
 * センドレベルを設定していないチャンネルについては、音声が出力されません。<br>
 * 例えば、再生する音声データがステレオにもかかわらず、どちらか一方のチャンネルに対して
 * しかセンドレベルが設定されていない場合、センドレベルを設定していないチャンネルの音声
 * はミュートされます。<br>
 * センドレベルをコントロールする際には、必ず出力を行いたい全てのチャンネルについてセンド
 * レベルの設定を行ってください。<br>
 * <br>
 * 本関数を用いてセンドレベルを設定した場合、パン3Dや3Dポジショニングの設定は無視されます。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetVolume, criAtomExPlayer_SetPanSpeakerType, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetSendLevel(
	CriAtomExPlayerHn player, CriSint32 ch, CriAtomExSpeakerId spk, CriFloat32 level);

/*JP
 * \brief バスセンドレベルの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	bus_name	バス名
 * \param[in]	level		センドレベル値（0.0f〜1.0f）
 * \par 説明:
 * バスセンドレベルを指定します。<br>
 * バスセンドレベルは、音声をどのバスにどれだけ流すかを指定するための仕組みです。<br>
 * 本関数でバスセンドレベルを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたバスセンドレベルで再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のバスセンドレベルを更新することができます。<br>
 * キュー再生時、データ側にバスセンドレベルが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>乗算</b>した値が適用されます。<br>
 * <br>
 * 第2引数にはDSPバス設定内のバス名を指定します。<br>
 * 第3引数では送信時のレベル（ボリューム）を指定します。<br>
 * <br>
 * 第2引数のバス名で指定したバスが適用中のDSPバス設定に存在しない場合、設定値は無効値として処理されます。<br>
 * センドレベル値の範囲や扱いは、ボリュームと同等です。::criAtomExPlayer_SetVolume 関数を参照してください。
 * \par 例:
 * \code
 * 	：
 * // バスセンドレベルを設定
 * cosnt CriChar8* bus_name = "Reverb";
 * CriFloat32 level = 0.3f;
 * criAtomExPlayer_SetBusSendLevelByName(player, bus_name, level);
 * 
 * // 再生の開始
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パラメーターの変更
 * // 注意）この時点では再生中の音声のパラメーターは変更されない。
 * level = 0.5f;
 * criAtomExPlayer_SetBusSendLevelByName(player, bus_name, level);
 * 
 * // プレーヤーに設定されたパラメーターを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * 本関数に異なるバス名を指定して複数回呼び出すことで、複数のバスに流すこともできます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetVolume, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetBusSendLevelByName(
	CriAtomExPlayerHn player, const CriChar8* bus_name, CriFloat32 level);

/*JP
 * \brief バスセンドレベルの取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomEx プレーヤーハンドル
 * \param[in]	bus_name	バス名
 * \param[out]	level		バスセンドレベル値（0.0f〜1.0f）
 * \return		CriBool		バスセンドレベル値が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * 指定した AtomEx プレーヤーに設定されている特定のバスセンドレベルを取得します。<br>
 * <br>
 * 第2引数にはDSPバス設定内のバス名を指定します。<br>
 * <br>
 * なお、以下のケースに該当する場合、バスセンドレベルの取得に失敗します。
 *	- 第2引数のバス名で指定したバスが適用中のDSPバス設定に存在しない
 *	- 第1引数にて指定した AtomEx プレーヤーに第2引数のバス名に関するバスセンドレベルの設定を行っていない
 * 	
 * \sa criAtomExPlayer_SetBusSendLevelByName
 */
CriBool CRIAPI criAtomExPlayer_GetBusSendLevelByName(
	CriAtomExPlayerHn player, const CriChar8* bus_name, CriFloat32* level);

/*JP
 * \brief バスセンドレベルの設定（オフセット指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	bus_name		バス名
 * \param[in]	level_offset	センドレベル値（0.0f〜1.0f）
 * \par 説明:
 * バスセンドレベルをオフセットで指定します。<br>
 * キュー再生時、データ側にバスセンドレベルが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>加算</b>した値が適用されます。<br>
 * それ以外の仕様は ::criAtomExPlayer_SetBusSendLevelByName 関数と同様です。
 * \par 備考:
 * ::criAtomExPlayer_SetBusSendLevelByName 関数で 0.0f を設定し、かつ本関数でオフセット値を設定することで、<br>
 * データ側に設定されていたバスセンドレベルを無視して値が設定可能です。（上書き設定）<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_SetBusSendLevelByName, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetBusSendLevelOffsetByName(
	CriAtomExPlayerHn player, const CriChar8* bus_name, CriFloat32 level_offset);

/*JP
 * \brief バスセンドレベルのオフセットの取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomEx プレーヤーハンドル
 * \param[in]	bus_name		バス名
 * \param[out]	level_offset	バスセンドレベルのオフセット値（0.0f〜1.0f）
 * \return		CriBool			バスセンドレベルのオフセット値が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * 指定した AtomEx プレーヤーに設定されている特定のバスセンドレベルのオフセットを取得します。<br>
 * <br>
 * 第2引数にはDSPバス設定内のバス名を指定します。<br>
 * <br>
 * なお、以下のケースに該当する場合、バスセンドレベルのオフセットの取得に失敗します。
 *	- 第2引数のバス名で指定したバスが適用中のDSPバス設定に存在しない
 *	- 第1引数にて指定した AtomEx プレーヤーに第2引数のバス名に関するバスセンドレベルの設定を行っていない
 * 	
 * \sa criAtomExPlayer_SetBusSendLevelByName
 */
CriBool CRIAPI criAtomExPlayer_GetBusSendLevelOffsetByName(
	CriAtomExPlayerHn player, const CriChar8* bus_name, CriFloat32* level_offset);

/*JP
 * \brief ADX1互換のパンの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	ch			チャンネル番号
 * \param[in]	pan			パン設定値（-1.0f〜1.0f）
 * \par 説明:
 * ADX1互換のパン設定関数です。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 本関数はADX1からの移植タイトル用に用意されています。<br>
 * ADX2環境で新規にパン操作を行うアプリケーションを作成する場合、
 * ::criAtomExPlayer_SetPan3dAngle 関数を使用してください。<br>
 * <br>
 * 本関数でパンを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたパンで再生されます。<br>
 * すでに再生された音声のパンを変更する場合、本関数で新たなパン設定をプレーヤーに指定し、
 * ::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数で再生中の音声にそのパラメーターを適用する必要があります。<br>
 * <br>
 * 本関数でパンをコントロール可能なのは、モノラル音声とステレオ音声のみです。
 * また、左右の定位のみコントロールできます。<br>
 * 3ch以上の音声に対してパンをコントロールしたい場合や、前後を含めた定位をコントロールしたい場合には、
 * ::criAtomExPlayer_SetPan3dAngle 関数や::criAtomExPlayer_SetSendLevel 関数を使用する必要があります。<br>
 * <br>
 * 再生する音声データがステレオの場合、チャンネル0番とチャンネル1番のそれぞれのパン
 * について、独立してコントロールすることが可能です。<br>
 * ただし、設定されたパンがモノラル音声向けなのか、ステレオ音声向けなのかは区別
 * されないため、ステレオ設定用にパン設定を行ったAtomExプレーヤーでモノラル音声を再生
 * した場合、意図としない位置に音源が定位する可能性があります。<br>
 * <br>
 * 再生する音声データがステレオにもかかわらず、どちらか一方のチャンネルに対して
 * しかパンが設定されていない場合、パンを設定していないチャンネルの音声の定位位置
 * は 0.0f （中央からの出力）になります。<br>
 * ステレオ音声のパンをコントロールする際には、必ず両方のチャンネルについてパンの
 * 設定を行ってください。<br>
 * <br>
 * 本関数と::criAtomExPlayer_SetPan3dAngle 関数や ::criAtomExPlayer_SetSendLevel 関数を併用しないでください。<br>
 * 両者を併用した場合、意図しないパンで再生される可能性があります。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll,
 * criAtomExPlayer_SetPan3dAngle, criAtomExPlayer_SetSendLevel, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetPanAdx1Compatible(
	CriAtomExPlayerHn player, CriSint32 ch, CriFloat32 pan);

/*JP
 * \brief バンドパスフィルターのパラメーター設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	cof_low		正規化低域カットオフ周波数（0.0f〜1.0f）
 * \param[in]	cof_high	正規化高域カットオフ周波数（0.0f〜1.0f）
 * \par 説明:
 * バンドパスフィルターのカットオフ周波数を指定します。<br>
 * 本関数でカットオフ周波数を設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたカットオフ周波数でバンドパスフィルターが動作します。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対してバンドパスフィルターのカットオフ周波数を更新することができます。<br>
 * <br>
 * 正規化カットオフ周波数は、対数軸上の24Hz〜24000Hzを、0.0f〜1.0fに正規化した値です。<br>
 * 例えば、正規化低域カットオフ周波数を0.0f、正規化高域カットオフ周波数を1.0fと指定すると、
 * バンドパスフィルターは全域が通過し、正規化低域カットオフ周波数を上げるほど、
 * また正規化高域カットオフ周波数を下げるほど、通過域が狭くなっていきます。<br>
 * \par 例:
 * \code
 * 	：
 * // フィルターのパラメーターを設定
 * CriFloat32 cof_low = 0.0f;
 * CriFloat32 cof_high = 0.3f;
 * criAtomExPlayer_SetBandpassFilterParameters(player, cof_low, cof_high);
 * 
 * // 再生の開始
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パラメーターの変更
 * // 注意）この時点では再生中の音声のパラメーターは変更されない。
 * cof_low = 0.7f;
 * cof_high = 1.0f;
 * criAtomExPlayer_SetBandpassFilterParameters(player, cof_low, cof_high);
 * 
 * // プレーヤーに設定されたパラメーターを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にバンドパスフィルターのパラメーターが設定されている場合に本関数を呼び出すと、
 * 以下のように設定されます。
 * - cof_low<br>
 * 	データに設定された値に対し、「cof_low_rev = 1.0f - cof_low」としてから乗算し、最終的にまた「cof_low = 1.0f - cof_low_rev」と元に戻して適用されます。<br>
 * 	つまり、0.0fを「低域側に最もフィルターを開く」として、開き具合を乗算して適用していく形になります。
 * - cof_high<br>
 * 	データに設定された値に対し、乗算して適用されます。<br>
 * 	つまり、1.0fを「高域側に最もフィルターを開く」として、開き具合を乗算して適用していく形になります。
 * 
 * <br>
 * 実際に適用される正規化カットオフ周波数が1.0fを超える値になった場合、値は1.0fにクリップされます。<br>
 * 同様に、実際に適用される正規化カットオフ周波数が0.0f未満の値になった場合も、値は0.0fにクリップされます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetBandpassFilterParameters(
	CriAtomExPlayerHn player, CriFloat32 cof_low, CriFloat32 cof_high);

/*JP
 * \brief バイクアッドフィルターのパラメーター設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	type		フィルタータイプ
 * \param[in]	frequency	正規化周波数（0.0f〜1.0f）
 * \param[in]	gain		ゲイン（デシベル値）
 * \param[in]	q_value		Q値
 * \par 説明:
 * バイクアッドフィルターの各種パラメーターを指定します。<br>
 * 本関数でパラメーターを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたパラメーターでバイクアッドフィルターが動作します。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対してバイクアッドフィルターのパラメーターを更新することができます。<br>
 * <br>
 * 正規化周波数は、対数軸上の24Hz〜24000Hzを、0.0f〜1.0fに正規化した値です。<br>
 * ゲインはデシベルで指定します。<br>
 * ゲインはフィルタータイプが以下の場合のみ有効です。<br>
 * - CRIATOMEX_BIQUAD_FILTER_TYPE_LOWSHELF：ローシェルフフィルター
 * - CRIATOMEX_BIQUAD_FILTER_TYPE_HIGHSHELF：ハイシェルフフィルター
 * - CRIATOMEX_BIQUAD_FILTER_TYPE_PEAKING：ピーキングフィルター
 * 
 * \par 例:
 * \code
 * 	：
 * // フィルターのパラメーターを設定
 * CriAtomExBiquadFilterType type = CRIATOMEX_BIQUAD_FILTER_TYPE_LOWPASS;
 * CriFloat32 frequency = 0.5f;
 * CriFloat32 gain = 1.0f;
 * CriFloat32 q_value = 3.0f;
 * criAtomExPlayer_SetBiquadFilterParameters(player, type, frequency, gain, q_value);
 * 
 * // 再生の開始
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パラメーターの変更
 * // 注意）この時点では再生中の音声のパラメーターは変更されない。
 * frequency = 0.7f;
 * criAtomExPlayer_SetBiquadFilterParameters(player, type, frequency, gain, q_value);
 * 
 * // プレーヤーに設定されたパラメーターを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * - type<br>
 * 	データに設定された値を上書きします。
 * - frequency<br>
 * 	データに設定された値に加算されます。
 * - gain<br>
 * 	データに設定された値に乗算されます。
 * - q_value<br>
 *	データに設定された値に加算されます。
 * 
 * <br>
 * 実際に適用される正規化カットオフ周波数が1.0fを超える値になった場合、値は1.0fにクリップされます。<br>
 * 同様に、実際に適用される正規化カットオフ周波数が0.0f未満の値になった場合も、値は0.0fにクリップされます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * HCA-MX用にエンコードされた音声データには、バイクアッドフィルターが適用されません。<br>
 * バイクアッドフィルターを使用したい音声は、ADXやHCA等、他のコーデックでエンコードしてください。<br>
 * <br>
 * ASRが利用できる環境では、ネイティブボイス出力時にフィルターを使用できません。<br>
 * ASRが利用可能な環境でバイクアッドフィルターを使用したい場合には、
 * 出力サウンドレンダラをASRに設定する必要があります。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetBiquadFilterParameters(
	CriAtomExPlayerHn player, CriAtomExBiquadFilterType type, CriFloat32 frequency,
	CriFloat32 gain, CriFloat32 q_value);

/*JP
 * \brief ボイスプライオリティの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	priority	ボイスプライオリティ（-255〜255）
 * \par 説明:
 * AtomExプレーヤーにボイスプライオリティを設定します。<br>
 * 本関数でプライオリティをセット後、 ::criAtomExPlayer_Start 関数で音声を再生すると、
 * 再生された音声は本関数でセットしたプライオリティで発音されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のプライオリティを更新することができます。<br>
 * <br>
 * ボイスプライオリティには、-255〜255の範囲で整数値を指定します。<br>
 * 範囲外の値を設定した場合、範囲に収まるようにクリッピングされます。<br>
 * 関数実行前のデフォルト設定値は0です。<br>
 * \par 備考:
 * AtomExプレーヤーが波形データを再生しようとした際、
 * 当該波形データが所属するボイスリミットグループの発音数が上限に達していた場合や、
 * ボイスプール内のボイスが全て使用中であった場合、
 * ボイスプライオリティによる発音制御が行われます。<br>
 * （指定された波形データを再生するかどうかを、ボイスプライオリティを元に判定します。）<br>
 * <br>
 * 具体的には、再生を行おうとした波形データのプライオリティが、
 * 現在ボイスで再生中の波形データのプライオリティよりも高い場合、
 * AtomExプレーヤーは再生中のボイスを奪い取り、リクエストされた波形データの再生を開始します。<br>
 * （再生中の音声が停止され、別の音声が再生されます。）<br>
 * <br>
 * 逆に、再生を行おうとした波形データのプライオリティが、
 * ボイスで再生中の波形データのプライオリティよりも低い場合、
 * AtomExプレーヤーはリクエストされた波形データの再生を行いません。<br>
 * （リクエストされた音声は再生されず、再生中の音声が引き続き鳴り続けます。）<br>
 * <br>
 * 再生しようとした波形データのプライオリティが、
 * ボイスで再生中の波形データのプライオリティと等しい場合、
 * AtomExプレーヤーは発音制御方式（先着優先 or 後着優先）に従い、
 * 以下のような制御が行われます。<br>
 * - 先着優先時は、再生中の波形データを優先し、リクエストされた波形データを再生しません。
 * - 後着優先時は、リクエストされた波形データを優先し、ボイスを奪い取ります。
 * 
 * <br>
 * キュー再生時、データ側にボイスプライオリティが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数による設定値とを<b>加算</b>した値が適用されます。<br>
 * 例えば、データ側のプライオリティが255、AtomExプレーヤーのプライオリティが45の場合、
 * 実際に適用されるプライオリティは300になります。<br>
 * 本関数で設定可能な値の範囲は-255〜255ですが、ライブラリ内部の計算は CriSint32 の範囲で行われるため、
 * データ側と加算した結果は-255〜255を超える場合があります。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 本関数は、波形データにセットされた<b>ボイスプライオリティ</b>を制御します。<br>
 * Atom Craft上でキューに対して設定された<b>カテゴリキュープライオリティ</b>には影響を与えませんので、
 * ご注意ください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetVoiceControlMethod, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetVoicePriority(
	CriAtomExPlayerHn player, CriSint32 priority);

/*JP
 * \brief AISACコントロール値の設定（コントロールID指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	control_id		コントロールID
 * \param[in]	control_value	コントロール値（0.0f〜1.0f）
 * \par 説明:
 * コントロールID指定でAISACのコントロール値を指定します。<br>
 * 本関数でAISACコントロール値を設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたAISACコントロール値で再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のAISACコントロール値を更新することができます。<br>
 * 設定したコントロール値を削除するには、::criAtomExPlayer_ClearAisacControls 関数を使用してください。<br>
 * <br>
 * AISACコントロール値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * \par 例:
 * \code
 * 	：
 * // AISACコントロール値の設定
 * CriAtomExAisacControlId control_id = 0;
 * CriFloat32 control_value = 0.5f;
 * criAtomExPlayer_SetAisacControlById(player, control_id, control_value);
 * 
 * // 再生の開始
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パラメーターの変更
 * // 注意）この時点では再生中の音声のパラメーターは変更されない。
 * control_value = 0.3f;
 * criAtomExPlayer_SetAisacControlById(player, control_id, control_value);
 * 
 * // プレーヤーに設定されたパラメーターを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * AISACのコントロールタイプによって、以下のように挙動が変わります。
 * - オフ
 * 		- 本関数等によるAISACコントロール値が未設定の場合はそのAISACは動作しません。
 * - オートモジュレーション
 * 		- 本関数の設定値には影響されず、時間経過とともに自動的にAISACコントロール値が変化します。
 * - ランダム
 * 		- 本関数等によって設定されたAISACコントロール値を中央値として、データに設定されたランダム幅でランダマイズし、最終的なAISACコントロール値を決定します。
 * 		- ランダマイズ処理は再生開始時のパラメーター適用でのみ行われ、再生中の音声に対するAISACコントロール値変更はできません。
 * 		- 再生開始時にAISACコントロール値が設定されていなかった場合、0.0fを中央値としてランダマイズ処理を行います。
 * 		
 * 
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetAisacControlByName, criAtomExPlayer_ClearAisacControls, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetAisacControlById(
	CriAtomExPlayerHn player, CriAtomExAisacControlId control_id, CriFloat32 control_value);

/*JP
 * \brief AISACコントロール値の設定（コントロール名指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	control_name	コントロール名
 * \param[in]	control_value	コントロール値（0.0f〜1.0f）
 * \par 説明:
 * コントロール名指定でAISACのコントロール値を指定します。<br>
 * 本関数でAISACコントロール値を設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたAISACコントロール値で再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声のAISACコントロール値を更新することができます。<br>
 * 設定したコントロール値を削除するには、::criAtomExPlayer_ClearAisacControls 関数を使用してください。<br>
 * <br>
 * AISACコントロール値の扱いは::criAtomExPlayer_SetAisacControlById 関数と同様です。<br>
 * \par 例:
 * \code
 * 	：
 * // AISACコントロール値の設定
 * const CriChar8 *control_name = "Any";
 * CriFloat32 control_value = 0.5f;
 * criAtomExPlayer_SetAisacControlByName(player, control_name, control_value);
 * 
 * // 再生の開始
 * id = criAtomExPlayer_Start(player);
 * 	：
 * // パラメーターの変更
 * // 注意）この時点では再生中の音声のパラメーターは変更されない。
 * control_value = 0.3f;
 * criAtomExPlayer_SetAisacControlByName(player, control_name, control_value);
 * 
 * // プレーヤーに設定されたパラメーターを再生中の音声にも反映
 * criAtomExPlayer_Update(player, id);
 * 	：
 * \endcode
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_SetAisacControlById, criAtomExPlayer_ClearAisacControls, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetAisacControlByName(
	CriAtomExPlayerHn player, const CriChar8 *control_name, CriFloat32 control_value);

/*JP
 * \brief プレーヤーに設定されているAISACコントロール値の削除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \par 説明:
 * プレーヤーに設定されているAISACコントロール値を全て削除します。<br>
 * また削除後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生中の音声に対してAISACコントロール値の削除が行えます。
 * \sa criAtomExPlayer_SetAisacControlById, criAtomExPlayer_SetAisacControlByName, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll
 */
void CRIAPI criAtomExPlayer_ClearAisacControls(CriAtomExPlayerHn player);


/*JP
 * \brief 3D音源ハンドルの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	source		3D音源ハンドル
 * \par 説明:
 * 3Dポジショニングを実現するための3D音源ハンドルを設定します。<br>
 * 3Dリスナーハンドルと3D音源ハンドルを設定することで、3Dリスナーハンドルと3D音源ハンドルの位置関係等から定位や音量、ピッチ等が自動的に適用されます。<br>
 * 本関数で3D音源ハンドルを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定された3D音源ハンドルを参照して再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声が参照する3D音源ハンドルを変更することができます。<br>
 * sourceにNULLを設定した場合は、すでに設定されている3D音源ハンドルをクリアします。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 3D音源ハンドルのパラメーターの変更、更新は、AtomExプレーヤーの関数ではなく、3D音源ハンドルの関数を使用して行います。<br>
 * デフォルトでは、3Dポジショニングの計算は左手座標系で行われます。<br>
 * 右手座標系で各種ベクトルを設定する場合は、ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）の設定で
 * ::CriAtomExConfig::coordinate_system にCRIATOMEX_COORDINATE_SYSTEM_RIGHT_HANDED を指定してください。<br>
 * ACBファイルを使用せずに音声を再生する場合は、明示的に3Dポジショニングを有効にするために、::criAtomExSetPanType 関数で::CRIATOMEX_PAN_TYPE_3D_POSを設定する必要があります。<br>
 * <br>
 * 本関数と ::criAtomExPlayer_Set3dSourceListHn 関数はお互いに設定を上書きします。<br>
 * 例えば、 ::criAtomExPlayer_Set3dSourceListHn 関数にて3D音源ハンドルリストをAtomExプレーヤーに設定後、本関数にてAtomExプレーヤーに3D音源ハンドルを設定すると、
 * AtomExプレーヤーには新たに3D音源ハンドルが設定され、既に設定されていた3D音源ハンドルリストはAtomExプレーヤーからクリアされます。
 * <br>
 * 本関数を用いてAtomExプレーヤーに設定された3D音源ハンドルは、3D音源ハンドルリストに追加することはできません。
 * もし3D音源ハンドルリストに追加する場合は、既に設定されているAtomExプレーヤーの3D音源ハンドルに関する設定をクリアしてください。
 * \par 例:
 * \code
 * CriAtomEx3dListenerHn listener;
 * CriAtomEx3dSourceHn source;
 * CriAtomExVector pos;
 *
 * listener = criAtomEx3dListener_Create(NULL, NULL, 0);
 * source = criAtomEx3dSource_Create(NULL, NULL, 0);
 * player = criAtomExPlayer_Create(NULL, NULL, 0);
 * criAtomExPlayer_Set3dListenerHn(player, listener);
 * criAtomExPlayer_Set3dSourceHn(player, source);
 *
 * pos.x = 0.0f;
 * pos.y = 0.0f;
 * pos.z = 0.0f;
 * criAtomEx3dSource_SetPosition(source, &pos);
 * criAtomEx3dSource_Update(source);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * pos.x += 10.0f;
 * criAtomEx3dSource_SetPosition(source, &pos);
 * criAtomEx3dSource_Update(source);
 * \endcode
 * \sa CriAtomEx3dSourceHn, CriAtomEx3dSourceListHn, criAtomExPlayer_Set3dSourceListHn, criAtomEx3dListenerHn, criAtomExPlayer_SetListenerHn, criAtomExPlayer_Update, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_Set3dSourceHn(
	CriAtomExPlayerHn player, CriAtomEx3dSourceHn source);

/*JP
 * \brief 3D音源ハンドルリストの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	source_list		3D音源ハンドルリスト
 * \par 説明:
 * マルチポジショニング再生を実現するための3D音源ハンドルリストを設定します。<br>
 * 3Dリスナーハンドルと3D音源ハンドルリストを設定することで、3Dリスナーハンドルと3D音源ハンドルリスト内の
 * 全ての3D音源ハンドルの位置関係等から定位や音量、ピッチ等が自動的に適用されます。<br>
 * 本関数で3D音源ハンドルリストを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定された3D音源ハンドルリストを参照して再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声が参照する3D音源ハンドルリストを変更することができます。<br>
 * source_listにNULLを設定した場合は、すでに設定されている3D音源ハンドルリストをクリアします。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 3D音源ハンドルリストに追加されている3D音源ハンドルの変更、更新は、AtomExプレーヤーの関数ではなく、3D音源ハンドルの関数を使用して行います。<br>
 * 右手座標系で各種ベクトルを設定する場合は、ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）の設定で
 * ::CriAtomExConfig::coordinate_system にCRIATOMEX_COORDINATE_SYSTEM_RIGHT_HANDED を指定してください。<br>
 * ACBファイルを使用せずに音声を再生する場合は、明示的に3Dポジショニングを有効にするために、::criAtomExSetPanType 関数で::CRIATOMEX_PAN_TYPE_3D_POSを設定する必要があります。<br>
 * <br>
 * 本関数と ::criAtomExPlayer_Set3dSourceHn 関数はお互いに設定を上書きします。<br>
 * 例えば、 ::criAtomExPlayer_Set3dSourceHn 関数にて3D音源ハンドルをAtomExプレーヤーに設定後、本関数にてAtomExプレーヤーに3D音源ハンドルリストを設定すると、
 * AtomExプレーヤーには新たに3D音源ハンドルリストが設定され、既に設定されていた3D音源ハンドルはAtomExプレーヤーからクリアされます。
 * \par 例:
 * \code
 * CriAtomEx3dListenerHn listener;
 * CriAtomEx3dSourceListHn source_list;
 * CriAtomEx3dSourceHn source[8];
 * CriAtomExVector pos[8];
 * CriSint32 i;
 *
 * listener = criAtomEx3dListener_Create(NULL, NULL, 0);
 * source_list = criAtomEx3dSourceList_Create(NULL, NULL, 0);
 * for (i = 0; i < 8; i++) {
 *     source[i] = criAtomEx3dSource_Create(NULL, NULL, 0);
 * 
 *     pos[i].x = (CriFloat32)i;
 *     pos[i].y = 0.0f;
 *     pos[i].z = 0.0f;
 *     criAtomEx3dSource_SetPosition(source, &pos);
 *     criAtomEx3dSource_Update(source);
 * 
 *     criAtomEx3dSourceList_Add(source_list, source[i]);
 * }
 * 
 * player = criAtomExPlayer_Create(NULL, NULL, 0);
 * criAtomExPlayer_Set3dListenerHn(player, listener);
 * criAtomExPlayer_Set3dSourceListHn(player, source_list);
 *
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * pos[2].x += 25.0f;
 * criAtomEx3dSource_SetPosition(source[2], &pos);
 * criAtomEx3dSource_Update(source[2]);
 * pos[5].z += 10.0f;
 * criAtomEx3dSource_SetPosition(source[5], &pos);
 * criAtomEx3dSource_Update(source[5]);
 * \endcode
 * \sa CriAtomEx3dSourceListHn, CriAtomEx3dSourceHn, criAtomExPlayer_Set3dSourceHn, CriAtomEx3dListenerHn, CriAtomExPlayer_Set3dListenerHn, criAtomExPlayer_Update, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_Set3dSourceListHn(
	CriAtomExPlayerHn player, CriAtomEx3dSourceListHn source_list);

/*JP
 * \brief 3Dリスナーハンドルの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	listener	3Dリスナーハンドル
 * \par 説明:
 * 3Dポジショニングを実現するための3Dリスナーハンドルを設定します。<br>
 * 3Dリスナーハンドルと3D音源ハンドルまたは3D音源ハンドルリストを設定することで、3Dリスナーと3D音源ハンドルまたは
 * 3D音源ハンドルリスト内の全ての3D音源ハンドルの位置関係等から定位や音量、ピッチ等が自動的に適用されます。<br>
 * 本関数で3Dリスナーハンドルを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定された3Dリスナーハンドルを参照して再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声が参照する3Dリスナーハンドルを変更することができます。<br>
 * listenerにNULLを設定した場合は、すでに設定されている3Dリスナーハンドルをクリアします。<br>
 * \par 備考:
 * 本関数で3Dリスナーハンドルを設定していなくても、以下の条件を満たしている場合は自動的に3D音源に対して最も距離の近い3Dリスナーが割り当てられます。<br>
 *  - 3D音源ハンドルまたは3D音源ハンドルリストが設定されている
 *  - 3DリスナーがcriAtomEx3dListener_Createによって作成されている
 * 	
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 3Dリスナーハンドルのパラメーターの変更、更新は、AtomExプレーヤーの関数ではなく、3Dリスナーハンドルの関数を使用して行います。<br>
 * デフォルトでは、3Dポジショニングの計算は左手座標系で行われます。<br>
 * 右手座標系で各種ベクトルを設定する場合は、ライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）の設定で
 * ::CriAtomExConfig::coordinate_system にCRIATOMEX_COORDINATE_SYSTEM_RIGHT_HANDED を指定してください。<br>
 * <br>
 * \par 例:
 * \code
 * CriAtomEx3dListenerHn listener;
 * CriAtomEx3dSourceHn source;
 * CriAtomExVector pos;
 *
 * listener = criAtomEx3dListener_Create(NULL, NULL, 0);
 * source = criAtomEx3dSource_Create(NULL, NULL, 0);
 * player = criAtomExPlayer_Create(NULL, NULL, 0);
 * criAtomExPlayer_Set3dListenerHn(player, listener);
 * criAtomExPlayer_Set3dSourceHn(player, source);
 *
 * pos.x = 0.0f;
 * pos.y = 0.0f;
 * pos.z = 0.0f;
 * criAtomEx3dSource_SetPosition(source, &pos);
 * criAtomEx3dSource_Update(source);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * pos.x += 10.0f;
 * criAtomEx3dSource_SetPosition(source, &pos);
 * criAtomEx3dSource_Update(source);
 * \endcode
 * \sa CriAtomEx3dListenerHn, criAtomExPlayer_Set3dSourceHn, criAtomExPlayer_Update, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_Set3dListenerHn(
	CriAtomExPlayerHn player, CriAtomEx3dListenerHn listener);

/*JP
 * \brief AISACコントロール値の取得（コントロールID指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	control_id		コントロールID
 * \return		CriFloat32		コントロール値（0.0f〜1.0f）、未設定時は-1.0f
 * \par 説明:
 * コントロールID指定でAISACのコントロール値を取得します。<br>
 * 指定したコントロールIDのAISACコントロール値が設定されていなかった場合、-1.0fを返します。<br>
 * \attention
 * 本関数は、AtomExプレーヤーに設定されたAISACコントロール値を取得します。<br>
 * 再生中の音声にAISACコントロール値を変更するAISACが設定されていたとしても、その変更結果を取得することはできません。
 * \par 例:
 * \code
 * CriAtomExAisacControlId control_id = 0;
 * CriFloat32 control_value = 0.5f;
 * // Set AISAC control value
 * criAtomExPlayer_SetAisacControlById(player, control_id, control_value);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Get AISAC control value
 * control_value = criAtomExPlayer_GetAisacControlById(player, control_id);
 * \endcode
 * \sa criAtomExPlayer_SetAisacControlById, criAtomExPlayer_GetAisacControlByName
 */
CriFloat32 CRIAPI criAtomExPlayer_GetAisacControlById(
	CriAtomExPlayerHn player, CriAtomExAisacControlId control_id);

/*JP
 * \brief AISACコントロール値の取得（コントロール名指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	control_name	コントロール名
 * \return		CriFloat32		コントロール値（0.0f〜1.0f）、未設定時は-1.0f
 * \par 説明:
 * コントロール名指定でAISACのコントロール値を取得します。<br>
 * 指定したコントロール名のAISACコントロール値が設定されていなかった場合、-1.0fを返します。<br>
 * \attention
 * 本関数は、AtomExプレーヤーに設定されたAISACコントロール値を取得します。<br>
 * 再生中の音声にAISACコントロール値を変更するAISACが設定されていたとしても、その変更結果を取得することはできません。
 * \par 例:
 * \code
 * const CriChar8 *control_name = "Any";
 * CriFloat32 control_value = 0.5f;
 * // Set AISAC control value
 * criAtomExPlayer_SetAisacControlByName(player, control_name, control_value);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Get AISAC control value
 * control_value = criAtomExPlayer_GetAisacControlByName(player, control_name);
 * \endcode
 * \sa criAtomExPlayer_SetAisacControlByName, criAtomExPlayer_GetAisacControlById
 */
CriFloat32 CRIAPI criAtomExPlayer_GetAisacControlByName(
	CriAtomExPlayerHn player, const CriChar8 *control_name);

/*JP
 * \brief カテゴリの設定（ID指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	category_id		カテゴリID
 * \par 説明:
 * カテゴリID指定でカテゴリを設定します。<br>
 * 設定したカテゴリ情報を削除するには、 ::criAtomExPlayer_UnsetCategory 関数を使用します。<br>
 * \par 備考:
 * キュー再生時に本関数を呼び出すと、データ側に設定されているカテゴリ設定とマージされます。
 * その際、カテゴリグループが競合している場合には本関数の設定が有効になります。
 * CRI Atomライブラリ Ver.2.20.31未満では
 * データ側に設定されているカテゴリ設定を<b>上書き</b>していました。（データ側の設定値は無視されていた）。<br>
 * 従来の仕様で動作させたい場合はライブラリ初期化時（ ::criAtomEx_Initialize 関数 ）に
 * ::CriAtomExConfig::enable_category_override_by_ex_player にCRI_TRUEを設定してください。
 * 本関数で設定したカテゴリ情報は、ACFのレジスト、アンレジストを行うとクリアされます。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \par 例:
 * \code
 * // Set default category
 * criAtomExPlayer_SetCategoryById(player, (CriUint32)CRIATOMEXCATEGORY_DEFAULT_ID_BGM);
 * \endcode
 * \attention
 * カテゴリ設定は再生開始前に行ってください。再生中の音声に対してカテゴリ設定の更新を行うと、カテゴリの再生数カウントが異常になる危険があります。<br>
 * \sa criAtomExPlayer_UnsetCategory, criAtomExPlayer_SetCategoryByName, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetCategoryById(
	CriAtomExPlayerHn player, CriUint32 category_id);

/*JP
 * \brief カテゴリの設定（カテゴリ名指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	category_name	カテゴリ名
 * \par 説明:
 * カテゴリ名指定でカテゴリを設定します。<br>
 * 設定したカテゴリ情報を削除するには、 ::criAtomExPlayer_UnsetCategory 関数を使用します。<br>
 * \par 備考:
 * カテゴリ指定を名前で行うことを除き、基本的な仕様は::criAtomExPlayer_SetCategoryById 関数と同様です。
 * デフォルトカテゴリ名での指定を行う場合は CRIATOMEXCATEGORY_DEFAULT_NAME_??? を使用してください。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \par 例:
 * \code
 * // Set default category
 * criAtomExPlayer_SetCategoryByName(player, CRIATOMEXCATEGORY_DEFAULT_NAME_BGM);
 * \endcode
 * \sa criAtomExPlayer_UnsetCategory, criAtomExPlayer_SetCategoryById, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetCategoryByName(
	CriAtomExPlayerHn player, const CriChar8 *category_name);

/*JP
 * \brief カテゴリの削除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \par 説明:
 * プレーヤーハンドルに設定されているカテゴリ情報を削除します。<br>
 * \par 例:
 * \code
 * // Unset category
 * criAtomExPlayer_UnsetCategory(player);
 * \endcode
 * \sa criAtomExPlayer_SetCategoryByName, criAtomExPlayer_SetCategoryById
 */
void CRIAPI criAtomExPlayer_UnsetCategory(CriAtomExPlayerHn player);

/*JP
 * \brief カテゴリ数の取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return		CriSint32	カテゴリ数
 * \par 説明:
 * プレーヤーハンドルに設定されているカテゴリの数を取得します。
 */
CriSint32 CRIAPI criAtomExPlayer_GetNumCategories(CriAtomExPlayerHn player);

/*JP
 * \brief カテゴリ情報の取得（インデックス指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	index		インデックス
 * \param[out]	info		カテゴリ情報
 * \return		CriBool		情報が取得できたかどうか？（取得できた：CRI_TRUE／取得できない：CRI_FALSE）
 * \par 説明:
 * インデックスを指定してプレーヤーハンドルに設定されているカテゴリ情報を取得します。<br>
 * 指定したインデックスのカテゴリが存在しない場合、CRI_FALSEが返ります。
 */
CriBool CRIAPI criAtomExPlayer_GetCategoryInfo(CriAtomExPlayerHn player, CriUint16 index, CriAtomExCategoryInfo* info);

/*JP
 * \brief トラック情報の指定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player				AtomExプレーヤーハンドル
 * \param[in]	num_tracks			トラック数
 * \param[in]	channels_per_track	トラック当たりのチャンネル数
 * \par 説明:
 * マルチチャンネル音声のトラック構成を指定します。<br>
 * 本関数を使用することで、6chの音声データをモノラル6トラックの音声や、
 * ステレオ3トラックの音声として扱うことが可能になります。<br>
 * \par 例:
 * \code
 * 		：
 * 	// トラック情報の設定
 * 	// 備考）6chの音声をステレオ3トラックとして扱う
 * 	CriSint32 channels_per_track[3] = { 2, 2, 2 };
 * 	criAtomExPlayer_SetTrackInfo(params.player, 3, channels_per_track);
 * 		：
 * 	// トラックごとにボリュームを設定
 * 	criAtomExPlayer_SetTrackVolume(params.player, 0, 1.0f);
 * 	criAtomExPlayer_SetTrackVolume(params.player, 1, 0.5f);
 * 	criAtomExPlayer_SetTrackVolume(params.player, 2, 0.25f);
 * 		：
 * \endcode
 * \attention
 * 本関数は内部的に ::criAtomExPlayer_SetSendLevel 関数を使用しています。<br>
 * そのため、本関数実行後に ::criAtomExPlayer_SetSendLevel 関数を使用した場合、
 * 音声の出力位置や出力ボリュームが意図としない結果になる可能性があります。<br>
 * （同様に、 ::criAtomExPlayer_SetPan3dAngle 関数や ::criAtomExPlayer_SetSendLevel 
 * 関数も併用できません。）<br>
 * 本関数は、３チャンネル以上の入力に対応した機種でしか利用できません。<br>
 * ２チャンネル（ステレオ）以下の入力までしか対応していない機種ではリンクエラーとなります。<br>
 * \sa criAtomExPlayer_SetTrackVolume
 */
void CRIAPI criAtomExPlayer_SetTrackInfo(CriAtomExPlayerHn player,
	CriSint32 num_tracks, const CriSint32 *channels_per_track);

/*JP
 * \brief トラックのボリューム設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	track_no	トラック番号
 * \param[in]	volume		トラックのボリューム
 * \par 説明:
 * トラックごとのボリュームを設定します。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * 本関数は ::criAtomExPlayer_SetTrackInfo 関数でトラック情報を設定した
 * プレーヤーに対してのみ実行可能です。<br>
 * <br>
 * 本関数は内部的に ::criAtomExPlayer_SetSendLevel 関数を使用しています。<br>
 * そのため、本関数実行後に ::criAtomExPlayer_SetSendLevel 関数を使用した場合、
 * 音声の出力位置や出力ボリュームが意図としない結果になる可能性があります。<br>
 * （同様に、 ::criAtomExPlayer_SetPan3dAngle 関数や ::criAtomExPlayer_SetSendLevel 
 * 関数も併用できません。）<br>
 * 本関数は、３チャンネル以上の入力に対応した機種でしか利用できません。<br>
 * ２チャンネル（ステレオ）以下の入力までしか対応していない機種ではリンクエラーとなります。<br>
 * \sa criAtomExPlayer_SetTrackInfo, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetTrackVolume(
	CriAtomExPlayerHn player, CriSint32 track_no, CriFloat32 volume);

/*JP
 * \brief 無音時処理モードの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	silent_mode	無音時処理モード
 * \par 説明:
 * 無音時処理モードを指定します。<br>
 * 本関数で無音時処理モードを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定された無音時処理モードで再生されます。<br>
 * また設定後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声の無音時処理モードを更新することができます。<br>
 * <br>
 * 無音時処理モードの詳細は、::CriAtomExSilentMode を参照してください。<br>
 * 無音時処理モードのデフォルト値は::CRIATOMEX_SILENT_MODE_NORMAL です。<br>
 * \par 例:
 * \code
 * // Set silent mode
 * criAtomExPlayer_SetSilentMode(player, CRIATOMEX_SILENT_MODE_STOP);
 * // Start playback
 * id = criAtomExPlayer_Start(player);
 *                :
 * // Change volume to silent
 * volume = 0.0f;
 * criAtomExPlayer_SetVolume(player, volume);
 * criAtomExPlayer_Update(player, id);
 * \endcode
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa CriAtomExSilentMode, criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetSilentMode(
	CriAtomExPlayerHn player, CriAtomExSilentMode silent_mode);

/*JP
 * \brief キュープライオリティの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	cue_priority	キュープライオリティ
 * \par 説明:
 * AtomExプレーヤーにキュープライオリティを設定します。<br>
 * 本関数でキュープライオリティをセット後、 ::criAtomExPlayer_Start 関数で音声を再生すると、
 * 再生された音声は本関数でセットしたキュープライオリティで発音されます。<br>
 * 関数実行前のデフォルト設定値は0です。<br>
 * \par 備考:
 * AtomExプレーヤーがキューを再生した際、再生するキューの所属先カテゴリがリミット数
 * 分発音済みの場合、プライオリティによる発音制御が行われます。<br>
 * 具体的には、AtomExプレーヤーの再生リクエストが、再生中のキューのプライオリティよりも
 * 高い場合、AtomExプレーヤーは再生中のキューを停止し、リクエストによる再生を開始します。<br>
 * （再生中の音声が停止され、別の音声が再生されます。）<br>
 * 逆に、AtomExプレーヤーの再生リクエストが、再生中のキューのプライオリティよりも低い場合、
 * AtomExプレーヤーの再生リクエストが拒否されます。<br>
 * （リクエストされたキューは再生されません。）<br>
 * AtomExプレーヤーの再生リクエストが、再生中のキューのプライオリティと等しい場合、
 * AtomExプレーヤーは後着優先で発音制御を行います。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetCuePriority(
	CriAtomExPlayerHn player, CriSint32 cue_priority);

/*JP
 * \brief プリディレイタイムの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player				AtomExプレーヤーハンドル
 * \param[in]	predelay_time_ms	プリディレイ（0.0f〜10000.0f）
 * \par 説明:
 * プリディレイタイムを設定します。<br>
 * 本関数でプリディレイタイムを設定後、::criAtomExPlayer_Start 関数により再生開始すると、
 * 設定されたプリディレイタイム発音を待ちます。<br>
 * <br>
 * プリディレイタイムには、0.0f〜10000.0fの範囲で実数値を指定します。単位はms（ミリ秒）です。<br>
 * プリディレイタイムのデフォルト値は0.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 備考:
 * キュー再生時、データ側にプリディレイタイムが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値と本関数の設定値を<b>加算</b>した値が適用されます。<br>
 * \sa criAtomExPlayer_Start
 */
void CRIAPI criAtomExPlayer_SetPreDelayTime(
	CriAtomExPlayerHn player, CriFloat32 predelay_time_ms);

/*JP
 * \brief エンベロープのアタックタイムの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	attack_time_ms	アタックタイム（0.0f〜2000.0f）
 * \par 説明:
 * エンベロープのアタックタイムを設定します。<br>
 * 本関数でアタックタイムを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたアタックタイムで再生されます。<br>
 * <br>
 * アタックタイムには、0.0f〜2000.0fの範囲で実数値を指定します。単位はms（ミリ秒）です。<br>
 * アタックタイムのデフォルト値は0.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 例:
 * \code
 * CriFloat32 attack_time_ms = 10.0f;
 * // Set attack time
 * criAtomExPlayer_SetEnvelopeAttackTime(player, attack_time_ms);
 * // Start playback(attack time=10ms)
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にアタックタイムが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値を<b>上書き</b>して適用されます（データ側の設定値は無視されます）。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetEnvelopeAttackTime(
	CriAtomExPlayerHn player, CriFloat32 attack_time_ms);

/*JP
 * \brief エンベロープのホールドタイムの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	hold_time_ms	ホールドタイム（0.0f〜2000.0f）
 * \par 説明:
 * エンベロープのホールドタイムを設定します。<br>
 * 本関数でホールドタイムを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたホールドタイムで再生されます。<br>
 * <br>
 * ホールドタイムには、0.0f〜2000.0fの範囲で実数値を指定します。単位はms（ミリ秒）です。<br>
 * ホールドタイムのデフォルト値は0.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 例:
 * \code
 * CriFloat32 hold_time_ms = 10.0f;
 * // Set hold time
 * criAtomExPlayer_SetEnvelopeHoldTime(player, hold_time_ms);
 * // Start playback(hold time=10ms)
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にホールドタイムが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値を<b>上書き</b>して適用されます（データ側の設定値は無視されます）。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetEnvelopeHoldTime(
	CriAtomExPlayerHn player, CriFloat32 hold_time_ms);

/*JP
 * \brief エンベロープのディケイタイムの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	decay_time_ms	ディケイタイム（0.0f〜2000.0f）
 * \par 説明:
 * エンベロープのディケイタイムを設定します。<br>
 * 本関数でディケイタイムを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたディケイタイムで再生されます。<br>
 * <br>
 * ディケイタイムには、0.0f〜2000.0fの範囲で実数値を指定します。単位はms（ミリ秒）です。<br>
 * ディケイタイムのデフォルト値は0.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 例:
 * \code
 * CriFloat32 decay_time_ms = 10.0f;
 * // Set decay time
 * criAtomExPlayer_SetEnvelopeDecayTime(player, decay_time_ms);
 * // Start playback(decay time=10ms)
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にディケイタイムが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値を<b>上書き</b>して適用されます（データ側の設定値は無視されます）。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetEnvelopeDecayTime(
	CriAtomExPlayerHn player, CriFloat32 decay_time_ms);

/*JP
 * \brief エンベロープのリリースタイムの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	release_time_ms	リリースタイム（0.0f〜10000.0f）
 * \par 説明:
 * エンベロープのリリースタイムを設定します。<br>
 * 本関数でリリースタイムを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたリリースタイムで再生されます。<br>
 * <br>
 * リリースタイムには、0.0f〜10000.0fの範囲で実数値を指定します。単位はms（ミリ秒）です。<br>
 * リリースタイムのデフォルト値は0.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 例:
 * \code
 * CriFloat32 release_time_ms = 3000.0f;
 * // Set release time
 * criAtomExPlayer_SetEnvelopeReleaseTime(player, release_time_ms);
 * // Start playback(release time=3000ms)
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にリリースタイムが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値を<b>上書き</b>して適用されます（データ側の設定値は無視されます）。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetEnvelopeReleaseTime(
	CriAtomExPlayerHn player, CriFloat32 release_time_ms);

/*JP
 * \brief エンベロープのサスティンレベルの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	susutain_level	サスティンレベル（0.0f〜1.0f）
 * \par 説明:
 * エンベロープのサスティンレベルを設定します。<br>
 * 本関数でサスティンレベルを設定後、::criAtomExPlayer_Start 関数により再生開始すると、設定されたサスティンレベルで再生されます。<br>
 * <br>
 * サスティンレベルには、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * サスティンレベルのデフォルト値は1.0fです。<br>
 * \attention
 * 再生中に::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数によって更新することはできません。<br>
 * \par 例:
 * \code
 * CriFloat32 susutain_level = 0.5f;
 * // Set susutain level
 * criAtomExPlayer_SetEnvelopeSustainLevel(player, susutain_level);
 * // Start playback(sustain level=0.5)
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にサスティンレベルが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値を<b>上書き</b>して適用されます（データ側の設定値は無視されます）。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetEnvelopeSustainLevel(
	CriAtomExPlayerHn player, CriFloat32 susutain_level);

/*JP
 * \brief データ要求コールバック関数の登録
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	func		データ要求コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * データ要求コールバック関数の登録を行います。<br>
 * <br>
 * データ要求コールバックは、複数の音声データをシームレスに連結して再生する際に
 * 使用します。<br>
 * 登録したコールバック関数は、ボイスが内部的に使用している Atom プレーヤーが
 * 連結再生用のデータを要求するタイミングで実行されます。<br>
 * （前回のデータを読み込み終えて、次に再生すべきデータを要求するタイミングで
 * コールバック関数が実行されます。）<br>
 * 登録したコールバック関数内で ::criAtomPlayer_SetData 関数等を用いて Atom プレーヤーに
 * データをセットすると、セットされたデータは現在再生中のデータに続いてシームレスに
 * 連結されて再生されます。<br>
 * また、コールバック関数内で ::criAtomPlayer_SetPreviousDataAgain 関数を実行することで、
 * 同一データを繰り返し再生し続けることも可能です。<br>
 * \par 備考:
 * 登録したコールバック関数内でデータを指定しなかった場合、現在のデータを再生し
 * 終えた時点で、AtomEx プレーヤーのステータスが CRIATOMEXPLAYER_STATUS_PLAYEND に遷移します。<br>
 * <br>
 * タイミング等の問題により、データを指定することができないが、ステータスを
 * CRIATOMEXPLAYER_STATUS_PLAYEND に遷移させたくない場合には、コールバック関数内で
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
 * void on_data_request(void *obj, CriAtomExPlaybackId id, CriAtomPlayerHn player)
 * {
 * 	// 続けて再生するデータをセット
 * 	criAtomPlayer_SetData(player, buffer2, buffer_size2);
 * }
 * 
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomExPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 * 	
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer1, buffer_size1);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * 以下の処理により、同一音声データを無限にループ再生可能です。<br>
 * \code
 * // データ要求コールバック関数
 * void on_data_request(void *obj, CriAtomExPlaybackId id, CriAtomPlayerHn player)
 * {
 * 	// 前回再生したデータを再セット
 * 	criAtomPlayer_SetPreviousDataAgain(player);
 * }
 * 
 * main()
 * {
 * 		:
 * 	// データ要求コールバック関数の登録
 * 	criAtomExPlayer_SetDataRequestCallback(player, on_data_request, NULL);
 * 	
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetData(player, buffer, buffer_size);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \attention
 * コールバック関数は再生開始前に設定する必要があります。<br>
 * 再生中の音声に対しコールバックを設定したり、
 * 設定済みのコールバックを後からまたは変更することはできません。<br>
 * <br>
 * 複数の波形データを含むキューを再生した場合、
 * 最初に見つかった波形データの再生が終了するタイミングでコールバック関数が実行されます。<br>
 * そのため、複数の波形データを含むキューに対して連結再生の操作を行った場合、
 * 意図としない組み合わせで波形が連結再生される可能性があります。<br>
 * 本機能を使用する際には、 1 つの波形データのみを含むキューを再生するか、
 * またはファイルやオンメモリデータ等を再生してください。<br>
 * <br>
 * データ要求コールバック関数内で長時間処理をブロックすると、音切れ等の問題が
 * 発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数内で実行可能なAPIは、以下のとおりです。<br>
 * 	- criAtomExAcb_GetWaveformInfoById（引数のNULL指定は不可）
 * 	- criAtomExAcb_GetWaveformInfoByName（引数のNULL指定は不可）
 * 	- criAtomExAcb_GetOnMemoryAwbHandle
 * 	- criAtomExAcb_GetStreamingAwbHandle
 * 	- criAtomPlayer_SetData
 * 	- criAtomPlayer_SetFile
 * 	- criAtomPlayer_SetContentId
 * 	- criAtomPlayer_SetWaveId
 * 	- criAtomPlayer_SetPreviousDataAgain
 * 	- criAtomPlayer_DeferCallback
 * 	
 * コールバック関数内で上記以外のAPIを実行した場合、
 * エラーコールバックやデッドロック等の問題が発生する可能性があります。<br>
 * <br>
 * シームレス連結再生をサポートしないコーデックを使用している場合、
 * データ要求コールバック関数内で次のデータをセットしても、
 * データは続けて再生されません。<br>
 * - HCA-MXコーデックを使用する場合、データがシームレスには連結されず、
 * 再生中の音声と次に再生する音声との継ぎ目に無音が入ります。
 * - プラットフォーム固有の音声圧縮コーデックを使用している場合、
 * エラー等が発生する可能性があります。
 * 
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
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExPlayerDataRequestCbFunc, criAtomPlayer_SetData,
 * criAtomPlayer_SetPreviousDataAgain, criAtomPlayer_DeferCallback
 */
void CRIAPI criAtomExPlayer_SetDataRequestCallback(
	CriAtomExPlayerHn player, CriAtomExPlayerDataRequestCbFunc func, void *obj);

/*JP
 * \brief 波形フィルターコールバック関数の登録
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	func		波形フィルターコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * デコード結果の PCM データを受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、ボイスが音声データをデコードしたタイミングで呼び出されます。<br>
 * \attention
 * コールバック関数の登録は、停止中のプレーヤーに対してのみ可能です。<br>
 * 再生中のプレーヤーに対してコールバックを登録することはできません。<br>
 * （エラーコールバックが発生し、登録に失敗します。）<br>
 * <br>
 * 複数の音声データを含むキューを再生した場合、
 * 最初に見つかった波形データについてのみコールバックが実行されます。<br>
 * （複数の波形データを含むキューについては、
 * 2つ目以降の波形データの情報を取ることができません。）<br>
 * <br>
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * 波形フィルターコールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * HCA-MXコーデックやプラットフォーム固有の音声圧縮コーデックを使用している場合、
 * フィルターコールバックは利用できません。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExPlayerFilterCbFunc
 */
void CRIAPI criAtomExPlayer_SetFilterCallback(
	CriAtomExPlayerHn player, CriAtomExPlayerFilterCbFunc func, void *obj);

/*JP
 * \brief 乱数種の設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	seed		乱数種
 * \par 説明:
 * AtomExプレーヤーが保持する疑似乱数生成器に乱数種を設定します。<br>
 * 乱数種を設定することにより、各種ランダム再生処理に再現性を持たせることができます。<br>
 * <br>
 * \sa criAtomEx_SetRandomSeed
 */
void CRIAPI criAtomExPlayer_SetRandomSeed(CriAtomExPlayerHn player, CriUint32 seed);

/*JP
 * \brief DSPパラメーターの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	param_id	パラメーターID（0〜7）
 * \param[in]	param_val	パラメーターID（0.0f〜1.0f）
 * \par 説明:
 * AtomExプレーヤーが保持するインサーションDSPのパラメーターを設定します。<br>
 * DSPを有効化するには、ボイスプールにあらかじめDSPがアタッチされている必要があります。<br>
 * \par 備考:
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetDspParameter(
	CriAtomExPlayerHn player, CriSint32 param_id, CriFloat32 param_val);

/*JP
 * \brief プレーヤーにAISACを取り付ける
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player				AtomExプレーヤーハンドル
 * \param[in]	global_aisac_name	取り付けるグローバルAISAC名
 * \par 説明:
 * プレーヤーにAISACをアタッチ（取り付け）します。
 * AISACをアタッチすることにより、キューやトラックにAISACを設定していなくても、AISACの効果を得ることができます。<br>
 * 本関数でAISACをアタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、アタッチしたAISACを考慮して、各種パラメーターが適用されます。<br>
 * またアタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、アタッチしたAISACによる各種パラメーター設定を適用することができます。<br>
 * <br>
 * AISACのアタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのアタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \par 例:
 * \code
 * // Attach Aisac
 * criAtomExPlayer_AttachAisac(player, "GlobalAisac1");
 * criAtomExPlayer_SetAisacControlByName(player, "Any", 0.5f);
 * criAtomExPlayer_Start(player);
 * \endcode
 * \par 備考:
 * 全体設定（ACFファイル）に含まれるグローバルAISACのみ、アタッチ可能です。<br>
 * AISACの効果を得るには、キューやトラックに設定されているAISACと同様に、該当するAISACコントロール値を設定する必要があります。
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \attention
 * キューやトラックに「AISACコントロール値を変更するAISAC」が設定されていたとしても、その適用結果のAISACコントロール値は、プレーヤーにアタッチしたAISACには影響しません。
 * 現在、「オートモジュレーション」や「ランダム」といったコントロールタイプのAISACのアタッチには対応しておりません。<br>
 * 現在、プレーヤーにアタッチできるAISACの最大数は、8個固定です。
 * \sa criAtomExPlayer_DetachAisac, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_AttachAisac(CriAtomExPlayerHn player, const CriChar8* global_aisac_name);
void CRIAPI criAtomExPlayer_AttachAisacByIndex(CriAtomExPlayerHn player, CriUint16 global_aisac_index);

/*JP
 * \brief プレーヤーからAISACを取り外す
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤー
 * \param[in]	global_aisac_name	取り外すグローバルAISAC名
 * \par 説明:
 * プレーヤーからAISACをデタッチ（取り外し）します。<br>
 * 本関数でAISACをデタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、デタッチしたAISACの影響は受けなくなります。<br>
 * またデタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、デタッチしたAISACによる影響を受けなくなります。<br>
 * <br>
 * AISACのデタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのデタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \sa criAtomExPlayer_AttachAisac
 */
void CRIAPI criAtomExPlayer_DetachAisac(CriAtomExPlayerHn player, const CriChar8* global_aisac_name);
void CRIAPI criAtomExPlayer_DetachAisacByIndex(CriAtomExPlayerHn player, CriUint16 global_aisac_index);

/*JP
 * \brief プレーヤーから全てのAISACを取り外す
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤー
 * \par 説明:
 * プレーヤーから全てのAISACをデタッチ（取り外し）します。<br>
 * 本関数でAISACをデタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、デタッチしたAISACの影響は受けなくなります。<br>
 * またデタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、デタッチしたAISACによる影響を受けなくなります。
 * \sa criAtomExPlayer_AttachAisac
 */
void CRIAPI criAtomExPlayer_DetachAisacAll(CriAtomExPlayerHn player);

/*JP
 * \brief プレーヤーにアタッチされているAISAC数を取得する
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤー
 * \return	プレーヤーにアタッチされているAISAC数
 * \par 説明:
 * プレーヤーにアタッチされているAISAC数を取得します。
 */
CriSint32 CRIAPI criAtomExPlayer_GetNumAttachedAisacs(CriAtomExPlayerHn player);

/*JP
 * \brief プレーヤーにアタッチされているAISACの情報を取得する
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player					AtomExプレーヤー
 * \param[in]	aisac_attached_index	アタッチされているAISACのインデックス
 * \param[out]	aisac_info				AISAC情報
 * \retval	CRI_TRUE = 情報が取得できた
 * \retval	CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * プレーヤーにアタッチされているAISACの情報を取得します。<br>
 * 無効なインデックスを指定した場合、CRI_FALSEが返ります。<br>
 * \sa criAtomExPlayer_GetNumAttachedAisacs
 */
CriBool CRIAPI criAtomExPlayer_GetAttachedAisacInfo(
	CriAtomExPlayerHn player,
	CriSint32 aisac_attached_index,
	CriAtomExAisacInfo *aisac_info
);

/*JP
 * \brief プレーヤーにストリーミングキャッシュを設定します
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤー
 * \param[in]	cache_id		プレーヤーで使用するストリーミングキャッシュID
 * \par 説明:
 * プレーヤーで使用するストリーミングキャッシュをID指定で設定します。<br>
 * \attention
 * プレーヤーで使用中のストリーミングキャッシュを破棄する場合は、
 * 先にプレーヤーを破棄してください。<br>
 * 逆の順序で処理した場合の結果は不定です。<br>
 * \sa criAtomStreamingCache_Create, criAtomStreamingCache_Destroy
 */
void CRIAPI criAtomExPlayer_SetStreamingCacheId(
	CriAtomExPlayerHn player, CriAtomExStreamingCacheId cache_id);

/*JP
 * \brief プレーヤーにトゥイーンを取り付ける
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	tween	トゥイーンハンドル
 * \par 説明:
 * プレーヤーにトゥイーンをアタッチ（取り付け）します。
 * トゥイーンをアタッチすることにより、簡単な手順でパラメーターの時間変化を行うことができます。<br>
 * 本関数でトゥイーンをアタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、アタッチしたトゥイーンを考慮して、各種パラメーターが適用されます。<br>
 * またアタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、アタッチしたトゥイーンによる各種パラメーター設定を適用することができます。<br>
 * \par 例:
 * \code
 * // ボリュームをフェードするTweenの作成
 * CriAtomExTweenConfig config;
 * criAtomExTween_SetDefaultConfig(&config);
 *
 * config.parameter_type = CRIATOMEX_PARAMETER_TYPE_BASIC;
 * config.id.parameter_id = CRIATOMEX_PARAMETER_ID_VOLUME;
 * fade_tween = criAtomExTween_Create(&config, NULL, 0);
 *
 * // Tweenのアタッチ
 * criAtomExPlayer_AttachTween(player, fade_tween);
 *
 * // 再生開始
 * criAtomExPlayer_Start(player);
 *             :
 * // 1秒かけてボリューム0.2にフェード
 * criAtomExTween_MoveTo(fade_tween, 1000, 0.2f);
 *             :
 * // 2秒かけてボリューム1.0に復帰
 * criAtomExTween_MoveTo(fade_tween, 2000, 1.0f);
 * \endcode
 * \par 備考:
 * トゥイーンによって変化したパラメーターは、AtomExプレーヤーに設定されているパラメーターに対し、加算／乗算／上書きされます。<br>
 * 加算／乗算／上書きのどれに該当するかは、AtomExプレーヤーへの設定関数（::criAtomExPlayer_SetVolume 関数等）と同様です。
 * 例えば、ボリュームであれば乗算され、AISACコントロール値であれば上書きします。<br>
 * 現在、プレーヤーにアタッチできるトゥイーンの最大数は、8個固定です。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_DetachTween, criAtomExPlayer_DetachTweenAll, criAtomExTween_Create, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_AttachTween(CriAtomExPlayerHn player, CriAtomExTweenHn tween);

/*JP
 * \brief プレーヤーからトゥイーンを取り外す
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤー
 * \param[in]	tween	取り外すトゥイーンハンドル
 * \par 説明:
 * プレーヤーからトゥイーンをデタッチ（取り外し）します。<br>
 * 本関数でトゥイーンをデタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、デタッチしたトゥイーンの影響は受けなくなります。<br>
 * またデタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、デタッチしたトゥイーンによる影響を受けなくなります。<br>
 * \sa criAtomExPlayer_AttachTween
 */
void CRIAPI criAtomExPlayer_DetachTween(CriAtomExPlayerHn player, CriAtomExTweenHn tween);

/*JP
 * \brief プレーヤーから全てのトゥイーンを取り外す
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player	AtomExプレーヤー
 * \par 説明:
 * プレーヤーから全てのトゥイーンをデタッチ（取り外し）します。<br>
 * 本関数でトゥイーンをデタッチ後、::criAtomExPlayer_Start 関数により再生開始すると、デタッチしたトゥイーンの影響は受けなくなります。<br>
 * またデタッチ後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生された音声に対しても、デタッチしたトゥイーンによる影響を受けなくなります。
 * \sa criAtomExPlayer_AttachTween
 */
void CRIAPI criAtomExPlayer_DetachTweenAll(CriAtomExPlayerHn player);

/*JP
 * \brief 再生開始ブロックのセット（ブロックインデックス指定）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	index			ブロックインデックス
 * \par 説明:
 * 再生開始ブロックインデックスを、AtomExプレーヤーに関連付けます。<br>
 * 本関数で再生開始ブロックインデックスを指定後、ブロックシーケンスキューを
 * ::criAtomExPlayer_Start 関数で再生開始すると指定したブロックから再生を
 * 開始します。
 * \par 例:
 * \code
 * main()
 * {
 * 		:
 * 	// 音声データをセット
 * 	criAtomExPlayer_SetCueIndex(player, acb_hn, 300);
 * 	
 * 	// 開始ブロックをセット
 * 	criAtomExPlayer_SetFirstBlockIndex(player, 1);
 * 	
 * 	// セットされた音声データを再生
 * 	criAtomExPlayer_Start(player);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * AtomExプレーヤーのデフォルトブロックインデックスは 0 です。<br>
 * ::criAtomExPlayer_Start 関数による再生開始時にプレーヤーに設定されているキューが
 * ブロックシーケンスでない場合は、本関数で設定した値は利用されません。<br>
 * 指定したインデックスに対応したブロックがない場合は先頭ブロックから再生が行われます。<br>
 * この際、指定インデックスのブロックが存在しない内容のワーニングが発生します。<br>
 * \par 備考:
 * 再生開始後のブロック遷移は ::criAtomExPlayback_SetNextBlockIndex 関数を使用して行い、
 * 再生中のブロックインデックス取得は ::criAtomExPlayback_GetCurrentBlockIndex 関数を使用します。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayback_SetNextBlockIndex, criAtomExPlayback_GetCurrentBlockIndex, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetFirstBlockIndex(
	CriAtomExPlayerHn player, CriAtomExBlockIndex index);

/*JP
 * \brief ブロックトランジションコールバック関数の登録
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	func		ブロックトランジションコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ブロックシーケンス再生時にブロックトランジションが発生したときに呼び出されるコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、ブロックトランジションが発生すると呼び出されます。<br>
 * \attention
 * コールバック関数の登録は、停止中のプレーヤーに対してのみ可能です。<br>
 * 再生中のプレーヤーに対してコールバックを登録することはできません。<br>
 * （エラーコールバックが発生し、登録に失敗します。）<br>
 * <br>
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExPlayerBlockTransitionCbFunc
 */
void CRIAPI criAtomExPlayer_SetBlockTransitionCallback(
	CriAtomExPlayerHn player, CriAtomExPlayerBlockTransitionCbFunc func, void *obj);

/*JP
 * \brief サウンドオブジェクトの取得
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \return サウンドオブジェクトハンドル
 * \par 説明:
 * このAtomExプレーヤーに関連付けられているサウンドオブジェクトを取得します。<br>
 * どのサウンドオブジェクトにも関連付けられていない場合はNULLを返します。
 * \sa CriAtomExSoundObjectHn, criAtomExSoundObject_AddPlayer
 */
CriAtomExSoundObjectHn CRIAPI criAtomExPlayer_GetSoundObject(CriAtomExPlayerHn player); 

/*JP
 * \brief ドライセンドレベルの設定（CRI Audio互換用）
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	spk				スピーカーID
 * \param[in]	offset			ドライセンドレベルオフセット（加算値）	
 * \param[in]	gain			ドライセンドレベルゲイン（乗算値）
 * \par 説明:
 * 出力音声のドライセンドレベルを設定します。<br>
 * 本関数はCRI Audioとの互換用であり、CRI Audioにあったドライセンドレベルと同じ挙動をします。<br>
 * 本関数でドライセンドレベルを設定後、::criAtomExPlayer_Start 関数で再生を開始すると、
 * 設定されたドライセンドレベルで音声が再生されます。<br>
 * またドライセンドレベル設定後に ::criAtomExPlayer_Update 関数や ::criAtomExPlayer_UpdateAll 
 * 関数を呼び出すことで、すでに再生された音声のドライセンドレベルを更新することも可能です。<br>
 * <br>
 * ドライセンドレベルでは、再生時の各スピーカーへの出力レベルを個別に指定することができます。<br>
 * 各スピーカーへの出力としてどの入力チャンネルを使用するかは、波形のチャンネル数に依存します。
 * 例えばモノラル波形の場合は全てのスピーカーへの出力として0チャンネルを入力として使用し、
 * ステレオ波形の場合はL側のスピーカー（L,SL,SBL）への出力には0チャンネル（Lチャンネル）、
 * R側のスピーカー（R,SR,SBL）への出力には1チャンネル（Rチャンネル）を入力として使用します。
 * （ドライセンドレベルの設定では、ステレオの音はセンタースピーカー、LFEへは出力できません。）<br>
 * <br>
 * ドライセンドレベルは、パン3Dやセンドレベルの設定による出力レベルに対して加算されます。<br>
 * ドライセンドレベル値の範囲や扱いは、基本的にはボリュームと同等です。::criAtomExPlayer_SetVolume 関数を参照してください。<br>
 * ドライセンドレベルのデフォルト値は0.0fです。<br>
 * <br>
 * \par 例:
 * \code
 * main()
 * {
 *  	：
 *  // 備考）再生する音声はモノラルであると仮定
 * 	// ドライセンドレベルを設定（データ側の値を半分にして0.2f加算する）
 * 	criAtomExPlayer_SetDrySendLevel(player, CRIATOMEX_SPEAKER_FRONT_CENTER, 0.2f, 0.5f);
 *  
 *  // 再生の開始
 *  // 備考）ドライセンドレベルはプレーヤーに設定された値で再生される。
 *  id = criAtomExPlayer_Start(player);
 *  	：
 * 	// ドライセンドレベルを設定（データ側の値を無効にして0.8fで上書きする）
 *  // 注意）この時点では再生中の音声のドライセンドレベルは変更されない。
 * 	criAtomExPlayer_SetDrySendLevel(player, CRIATOMEX_SPEAKER_FRONT_CENTER, 0.8f, 0.0f);
 *  
 *  // プレーヤーに設定されたドライセンドレベルを再生中の音声にも反映
 *  criAtomExPlayer_Update(player, id);
 *  	：
 * }
 * \endcode
 * \par 備考:
 * キュー再生時、データ側にドライセンドレベルが設定されている場合に本関数を呼び出すと、
 * データ側に設定されている値に対し gain を乗算し、 offset を加算した値が適用されます。<br>
 * 例えば、データ側のドライセンドレベルが1.0f、AtomExプレーヤーのドライセンドレベルが offset 0.2f、gain 0.5f
 * の場合、実際に適用されるセンドレベルは0.7fになります。<br>
 * ドライセンドレベルは通常ではCRI Atom Craftでは設定できず、CRI Audio Craftで作成した
 * プロジェクトファイルをインポートした場合にのみ、データ側に設定されている場合があります。<br>
 * 通常では6ch素材を再生した際、自動的にセンター／LFEから出力されますが、
 * データ側または本関数でドライセンドレベルが設定された場合、自動では出力されなくなります。
 * また同様に、データ側または本関数でドライセンドレベルが設定された場合、CRI Atom Craftで設定したセンター／LFEミックスレベルは無効となります。<br>
 * <br>
 * 本パラメーターは ::criAtomExPlayer_ResetParameters 関数にてクリアされます。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll, criAtomExPlayer_ResetParameters
 */
void CRIAPI criAtomExPlayer_SetDrySendLevel(
	CriAtomExPlayerHn player, CriAtomExSpeakerId spk, CriFloat32 offset, CriFloat32 gain);

/*JP
 * \brief セレクター情報のプレーヤーへの設定
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	selector		セレクター名
 * \param[in]	label			ラベル名
 * \par 説明:
 * セレクター名とラベル名を指定して、プレーヤーに設定します。<br>
 * トラックにセレクターラベルが指定されているキューを再生した場合、本関数で指定したセレクターラベル
 * と一致したトラックだけを再生します。<br>
 * セレクター名、ラベル名はACFヘッダーに記載されています。<br>
 * プレーヤーに設定したラベル情報の個別削除は、 ::criAtomExPlayer_UnsetSelectorLabel 関数を実行してください。<br>
 * プレーヤーに設定したラベル情報の一括削除は、 ::criAtomExPlayer_ClearSelectorLabels 関数を実行してください。<br>
 * ラベル情報を含む全てのプレーヤー設定値削除は、 ::criAtomExPlayer_ResetParameters 関数を実行してください。<br>
 * \sa criAtomExPlayer_ClearSelectorLabels, criAtomExPlayer_ResetParameters, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll
 */
void CRIAPI criAtomExPlayer_SetSelectorLabel(
	CriAtomExPlayerHn player, const CriChar8 *selector, const CriChar8 *label);

/*JP
 * \brief プレーヤーに設定されているセレクター情報の削除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \param[in]	selector		セレクター名
 * \par 説明:
 * プレーヤーに設定されている指定されたセレクター名とそれに紐づくラベル名の情報を削除します。<br>
 * また削除後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生中の音声に対してセレクター情報の削除が行えますが、再生中音声が停止することはありません。
 * \sa criAtomExPlayer_SetSelectorLabel, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll
 */
void CRIAPI criAtomExPlayer_UnsetSelectorLabel(CriAtomExPlayerHn player, const CriChar8 *selector);

/*JP
 * \brief プレーヤーに設定されている全てのセレクター情報の削除
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player			AtomExプレーヤーハンドル
 * \par 説明:
 * プレーヤーに設定されているセレクター名、ラベル名情報を全て削除します。<br>
 * また削除後、::criAtomExPlayer_Update 関数、::criAtomExPlayer_UpdateAll 関数を呼び出すことにより、
 * すでに再生中の音声に対してセレクター情報の削除が行えますが、再生中音声が停止することはありません。
 * \sa criAtomExPlayer_SetSelectorLabel, criAtomExPlayer_Update, criAtomExPlayer_UpdateAll
 */
void CRIAPI criAtomExPlayer_ClearSelectorLabels(CriAtomExPlayerHn player);

/*JP
 * \brief 再生トラック番号通知コールバック関数の登録
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	func		再生トラック番号通知コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * 再生したトラック番号を通知するためのコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、ポリフォニックタイプ以外のキュー再生時に呼び出されます。<br>
 * \attention
 * コールバック関数の登録は、停止中のプレーヤーに対してのみ可能です。<br>
 * 再生中のプレーヤーに対してコールバックを登録することはできません。<br>
 * （エラーコールバックが発生し、登録に失敗します。）<br>
 * <br>
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExPlayerPlaybackTrackInfoNotificationCbFunc
 */
void CRIAPI criAtomExPlayer_SetPlaybackTrackInfoNotificationCallback(
	CriAtomExPlayerHn player, CriAtomExPlayerPlaybackTrackInfoNotificationCbFunc func, void *obj);

/*JP
 * 再生イベントコールバックの登録
 * \ingroup ATOMEXLIB_PLAYER
 * \param[in]	player		AtomExプレーヤーハンドル
 * \param[in]	func		再生イベントコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * 再生イベントコールバックを登録します。<br>
 * 本関数を使用して再生イベントコールバックを登録することで、
 * 再生イベント（再生用リソースの確保／解放や、ボイスの割り当て、バーチャル化）発生時の詳細情報
 * （再生元のAtomExプレーヤーや再生ID）が取得可能です。<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExPlaybackEventCbFunc の説明をご参照ください。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \attention
 * 1つのAtomExプレーヤーに対し、1つのコールバック関数しか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * \sa CriAtomExVoiceEventCbFunc
 */
void CRIAPI criAtomExPlayer_SetPlaybackEventCallback(
	CriAtomExPlayerHn player, CriAtomExPlaybackEventCbFunc func, void *obj);

/*==========================================================================
 *      CRI AtomEx Playback API
 *=========================================================================*/
/*JP
 * \brief 再生音の停止
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \par 説明:
 * 再生音単位で停止処理を行います。<br>
 * 本関数を使用することで、プレーヤーによって再生された音声を、プレーヤー単位ではなく、
 * 個別に停止させることが可能です。<br>
 * \par 備考:
 * AtomEx プレーヤーによって再生された全ての音声を停止したい場合、
 * 本関数ではなく ::criAtomExPlayer_Stop 関数をご利用ください。<br>
 * （ ::criAtomExPlayer_Stop 関数は、そのプレーヤーで再生中の全ての音声を停止します。）<br>
 * \attention
 * 本関数で再生音の停止を行うと、再生中の音声のステータスは
 * ::CRIATOMEXPLAYBACK_STATUS_REMOVED に遷移します。<br>
 * 停止時にボイスリソースも破棄されるため、一旦 ::CRIATOMEXPLAYBACK_STATUS_REMOVED
 * 状態に遷移した再生 ID からは、以降情報を取得できなくなります。<br>
 * \sa criAtomExPlayer_Stop, criAtomExPlayback_GetStatus
 */
void CRIAPI criAtomExPlayback_Stop(CriAtomExPlaybackId id);

/*JP
 * \brief 再生音の停止（リリースタイム無視）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \par 説明:
 * 再生音単位で停止処理を行います。<br>
 * この際、再生中の音声にエンベロープのリリースタイムが設定されていたとしても、それを無視して停止します。<br>
 * 本関数を使用することで、プレーヤーによって再生された音声を、プレーヤー単位ではなく、
 * 個別に停止させることが可能です。<br>
 * \par 備考:
 * プレーヤーによって再生された全ての音声を停止したい場合、
 * 本関数ではなく ::criAtomExPlayer_StopWithoutReleaseTime 関数をご利用ください。<br>
 * \attention
 * 本関数で再生音の停止を行うと、再生中の音声のステータスは
 * ::CRIATOMEXPLAYBACK_STATUS_REMOVED に遷移します。<br>
 * 停止時にボイスリソースも破棄されるため、一旦 ::CRIATOMEXPLAYBACK_STATUS_REMOVED
 * 状態に遷移した再生 ID からは、以降情報を取得できなくなります。<br>
 * \sa criAtomExPlayer_StopWithoutReleaseTime
 */
void CRIAPI criAtomExPlayback_StopWithoutReleaseTime(CriAtomExPlaybackId id);

/*JP
 * \brief 再生音のポーズ／ポーズ解除
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[in]	sw			スイッチ（ CRI_FALSE = ポーズ解除、 CRI_TRUE = ポーズ ）
 * \par 説明:
 * 再生音単位でポーズ／ポーズ解除を行います。<br>
 * sw に CRI_TRUE を指定して本関数を実行すると、指定したIDの音声がポーズ
 * （一時停止）されます。<br>
 * sw に CRI_FALSE を指定して本関数を実行すると、指定したIDの音声のポーズが
 * 解除され、一時停止していた音声の再生が再開されます。<br>
 * <br>
 * 本関数を使用することで、プレーヤーによって再生された音声を、プレーヤー単位ではなく、
 * 個別にポーズ／ポーズ解除させることが可能です。<br>
 * \par 備考:
 * プレーヤーによって再生された全ての音声をポーズ／ポーズ解除したい場合、
 * 本関数ではなく ::criAtomExPlayer_Pause 関数をご利用ください。<br>
 * <br>
 * フェーダーをアタッチしたプレーヤーで再生した音声に対して本関数で個別にポーズ／ポーズ解除の操作を行った場合、
 * クロスフェード処理はフェードイン側の音声のポーズ状態に同期して行われます。<br>
 * 例えば、クロスフェード中にcriAtomExPlayer_Pause 関数で両方の音声をポーズした場合、
 * フェードイン側の音声のポーズを解除すればクロスフェード処理が再開されますが、
 * フェードアウト側の音声のポーズを解除してもクロスフェード処理は再開されません。<br>
 * \attention
 * 第2引数（sw）に CRI_FALSE を指定してポーズ解除の操作を行った場合、
 * 本関数でポーズをかけた音声だけでなく、::criAtomExPlayer_Prepare 
 * 関数で再生準備中の音声についても再生が開始されてしまいます。<br>
 * （旧バージョンとの互換性維持のための仕様です。）<br>
 * 本関数でポーズをかけた音声についてのみポーズを解除したい場合、
 * 本関数を使用せず、 criAtomExPlayback_Resume(id, CRIATOMEX_RESUME_PAUSED_PLAYBACK);
 * を実行してポーズ解除を行ってください。<br>
 * <br>
 * フェーダーをアタッチしたプレーヤーに対し再生ID指定でポーズの解除を行うと、
 * フェードインする音声の発音リソースが確保できない場合や、
 * フェードインする音声の発音リソースが奪い取られた場合にポーズ解除が行えず、
 * フェードアウト側の音声がいつまで経ってもフェードアウトしない状態となります。<br>
 * フェーダーをアタッチしたプレーヤーで再生した音声に対しては、本関数ではなく、
 * ::criAtomExPlayer_Pause 関数でポーズの解除を行ってください。<br>
 * \sa criAtomExPlayback_IsPaused, criAtomExPlayer_Pause, criAtomExPlayback_Resume
 */
void CRIAPI criAtomExPlayback_Pause(CriAtomExPlaybackId id, CriBool sw);

/*JP
 * \brief 再生音の機能別のポーズ解除
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[in]	mode		ポーズ解除対象
 * \par 説明:
 * 再生音単位で一時停止状態の解除を行います。<br>
 * ::criAtomExPlayback_Pause 関数と異なり、 ::criAtomExPlayer_Prepare
 * 関数で再生開始待ちの音声と、 ::criAtomExPlayer_Pause 関数（または
 * ::criAtomExPlayback_Pause 関数でポーズをかけた音声とを、
 * 個別に再開させることが可能です。<br>
 * <br>
 * 第2引数（mode）に ::CRIATOMEX_RESUME_PAUSED_PLAYBACK を指定して本関数を実行すると、
 * ユーザが ::criAtomExPlayer_Pause 関数（または ::criAtomExPlayback_Pause 
 * 関数）で一時停止状態になった音声の再生が再開されます。<br>
 * 第2引数（mode）に ::CRIATOMEX_RESUME_PREPARED_PLAYBACK を指定して本関数を実行すると、
 * ユーザが ::criAtomExPlayer_Prepare 関数で再生準備を指示した音声の再生が開始されます。<br>
 * <br>
 * ::criAtomExPlayback_Pause 関数でポーズ状態のプレーヤーに対して
 * ::criAtomExPlayer_Prepare 関数で再生準備を行った場合、
 * その音声は ::CRIATOMEX_RESUME_PAUSED_PLAYBACK
 * 指定のポーズ解除処理と、 ::CRIATOMEX_RESUME_PREPARED_PLAYBACK
 * 指定のポーズ解除処理の両方が行われるまで、再生が開始されません。<br>
 * \par 備考:
 * フェーダーをアタッチしたプレーヤーで再生した音声に対して本関数で個別にポーズ解除の操作を行った場合、
 * クロスフェード処理はフェードイン側の音声のポーズ状態に同期して行われます。<br>
 * 例えば、クロスフェード中にcriAtomExPlayer_Pause 関数で両方の音声をポーズした場合、
 * フェードイン側の音声のポーズを解除すればクロスフェード処理が再開されますが、
 * フェードアウト側の音声のポーズを解除してもクロスフェード処理は再開されません。<br>
 * \attention
 * フェーダーをアタッチしたプレーヤーに対し再生ID指定でポーズの解除を行うと、
 * フェードインする音声の発音リソースが確保できない場合や、
 * フェードインする音声の発音リソースが奪い取られた場合にポーズ解除が行えず、
 * フェードアウト側の音声がいつまで経ってもフェードアウトしない状態となります。<br>
 * フェーダーをアタッチしたプレーヤーで再生した音声に対しては、本関数ではなく、
 * ::criAtomExPlayer_Pause 関数でポーズの解除を行ってください。<br>
 * \sa criAtomExPlayback_IsPaused, criAtomExPlayer_Resume, criAtomExPlayer_Pause
 */
void CRIAPI criAtomExPlayback_Resume(CriAtomExPlaybackId id, CriAtomExResumeMode mode);

/*JP
 * \brief 再生音のポーズ状態の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \return		CriBool		ポーズ中かどうか（CRI_FALSE = ポーズされていない、CRI_TRUE = ポーズ中）
 * \par 説明:
 * 再生中の音声がポーズ中かどうかを返します。<br>
 * \sa criAtomExPlayback_Pause
 */
CriBool CRIAPI criAtomExPlayback_IsPaused(CriAtomExPlaybackId id);

/*JP
 * \brief 再生ステータスの取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id						再生ID
 * \return		CriAtomExPlaybackStatus	再生ステータス
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声のステータスを取得します。<br>
 * \par 備考:
 * ::criAtomExPlayer_GetStatus 関数がAtomExプレーヤーのステータスを返すのに対し、
 * 本関数は再生済みの個々の音声のステータスを取得します。<br>
 * <br>
 * 再生中の音声のボイスリソースは、以下の場合に削除されます。<br>
 * - 再生が完了した場合。
 * - criAtomExPlayback_Stop 関数で再生中の音声を停止した場合。
 * - 高プライオリティの発音リクエストにより再生中のボイスが奪い取られた場合。
 * - 再生中にエラーが発生した場合。
 * 
 * そのため、 ::criAtomExPlayback_Stop 関数を使用して明示的に再生を停止したか、
 * その他の要因によって再生が停止されたかの違いに関係なく、
 * 再生音のステータスはいずれの場合も ::CRIATOMEXPLAYBACK_STATUS_REMOVED
 * に遷移します。<br>
 * （エラーの発生を検知する必要がある場合には、本関数ではなく、::criAtomExPlayer_GetStatus
 * 関数で AtomEx プレーヤーのステータスをチェックする必要があります。）<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus, criAtomExPlayback_Stop
 */
CriAtomExPlaybackStatus CRIAPI criAtomExPlayback_GetStatus(CriAtomExPlaybackId id);

/*JP
 * \brief 再生音声のフォーマット情報の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[out]	info		フォーマット情報
 * \return		CriBool		情報が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声のフォーマット情報を取得します。<br>
 * <br>
 * フォーマット情報が取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \par 備考:
 * 複数の音声データを含むキューを再生した場合、最初に見つかった音声
 * データの情報が返されます。<br>
 * \attention
 * 本関数は、音声再生中のみフォーマット情報を取得可能です。<br>
 * 再生準備中や再生終了後、発音数制御によりボイスが消去された場合には、
 * フォーマット情報の取得に失敗します。<br>
 * ボイスの再生状態は criAtomExPlayback_GetStatus 関数で取得することはできないためご注意ください。
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
CriBool CRIAPI criAtomExPlayback_GetFormatInfo(
	CriAtomExPlaybackId id, CriAtomExFormatInfo *info);

/*JP
 * \brief 再生音声の再生元情報の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[out]	source		再生元情報
 * \retval CRI_TRUE = 情報が取得できた
 * \retval CRI_FALSE = 情報が取得できなかった
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声の再生元情報を取得します。<br>
 * 取得した情報を元に、::criAtomExAcb_GetCueInfoByIndex 関数等を利用することで、
 * より詳細な情報を取得することができます。<br>
 * <br>
 * 再生元情報が取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \par 備考
 * 再生元のタイプによって、取得できる情報が異なります。<br>
 * typeを参照し、共用体sourceの中のどの構造体としてアクセスするかを選択してください。<br>
 * \code
 * CriAtomExSourceInfo source;
 * criAtomExPlayback_GetSource(playback_id, &source);
 * 
 * switch (source.type) {
 * case CRIATOMEXPLAYBACK_SOURCE_TYPE_CUE_ID:
 * 	{
 * 		CriAtomExCueInfo cue_info;
 * 		criAtomExAcb_GetCueInfoById(source.info.cue_id.acb, source.info.cue_id.id, &cue_info);
 *			:
 * 	}
 * 	break;
 * 		:
 * }
 * \endcode
 * \attention
 * 本関数は、音声再生中のみ再生元情報を取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 再生元情報の取得に失敗します。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetStatus
 */
CriBool CRIAPI criAtomExPlayback_GetSource(
	CriAtomExPlaybackId id, CriAtomExSourceInfo *source);

/*JP
 * \brief Atomプレーヤーの取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \retval CriAtomPlayerHn	Atomプレーヤーハンドル
 * \par 説明:
 * 再生IDに紐づけられたボイス（＝Atomプレーヤーハンドル）を取得します。<br>
 * \par 備考:
 * 複数の波形データを含むキューを再生している場合、
 * 本関数は最初に見つかったボイスに対応するAtomプレーヤーハンドルを返します。<br>
 * 波形データが再生されていない場合、本関数はNULLを返します。<br>
 */
CriAtomPlayerHn CRIAPI criAtomExPlayback_GetAtomPlayer(CriAtomExPlaybackId id);

/*JP
 * \brief 再生時刻の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id		再生ID
 * \return		Sint64	再生時刻（ミリ秒単位）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声の再生時刻を取得します。<br>
 * <br>
 * 再生時刻が取得できた場合、本関数は 0 以上の値を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は負値を返します。<br>
 * \par 備考:
 * 本関数が返す再生時刻は「再生開始後からの経過時間」です。<br>
 * ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じて時刻が巻き戻ることはありません。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズをかけた場合、
 * 再生時刻のカウントアップも停止します。<br>
 * （ポーズを解除すれば再度カウントアップが再開されます。）
 * <br>
 * 本関数で取得可能な時刻の精度は、サーバー処理の周波数に依存します。<br>
 * （時刻の更新はサーバー処理単位で行われます。）<br>
 * より精度の高い時刻を取得する必要がある場合には、本関数の代わりに
 * ::criAtomExPlayback_GetNumPlayedSamples 関数を使用し、
 * 再生済みサンプル数を取得してください。<br>
 * \attention
 * 戻り値の型はCriSint64ですが、現状、32bit以上の精度はありません。<br>
 * 再生時刻を元に制御を行う場合、約24日で再生時刻が異常になる点に注意が必要です。<br>
 * （ 2147483647 ミリ秒を超えた時点で、再生時刻がオーバーフローし、負値になります。）<br>
 * <br>
 * 本関数は、音声再生中のみ時刻を取得可能です。<br>
 * （ ::criAtomExPlayer_GetTime 関数と異なり、本関数は再生中の音声ごとに時刻を
 * 取得可能ですが、再生終了時刻を取ることができません。）<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 再生時刻の取得に失敗します。<br>
 * （負値が返ります。）<br>
 * <br>
 * ドライブでリードリトライ処理等が発生し、一時的に音声データの供給が途切れた場合でも、
 * 再生時刻のカウントアップが途切れることはありません。<br>
 * （データ供給停止により再生が停止した場合でも、時刻は進み続けます。）<br>
 * そのため、本関数で取得した時刻を元に映像との同期を行った場合、
 * リードリトライ発生毎に同期が大きくズレる可能性があります。<br>
 * 波形データと映像の同期を厳密に取る必要がある場合は、本関数の代わりに
 * ::criAtomExPlayback_GetNumPlayedSamples 関数を使用し、
 * 再生済みサンプル数との同期を取ってください。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_GetTime, criAtomExPlayback_GetNumPlayedSamples
 */
CriSint64 CRIAPI criAtomExPlayback_GetTime(CriAtomExPlaybackId id);

/*JP
 * \brief 再生時刻の取得（再生音声に同期した補正込み）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id		再生ID
 * \return		Sint64	再生時刻（ミリ秒単位）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声の再生時刻を取得します。<br>
 * <br>
 * 再生時刻が取得できた場合、本関数は 0 以上の値を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は負値を返します。<br>
 * \par 備考:
 * ::criAtomExPlayback_GetTime 関数が返す「再生開始後からの経過時間」とは
 * 異なり、本関数からは再生中の音声に同期した再生時刻を取得することが
 * 可能です。<br>
 * デバイスのリードリトライ処理等により音声データの供給が途切れて
 * 再生が停止した場合、またはシステムによる割り込みにより音声出力が妨げられた
 * 場合には、再生時刻のカウントアップが一時的に停止します。<br>
 * 再生された音声に厳密に同期した処理を行いたい場合は、本関数で
 * 取得した再生時刻を用いてください。<br>
 * ただし、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じて時刻が巻き戻ることはありません。<br>
 * また、波形の詰まっていないシーケンスキューや
 * 再生波形が切り替わるブロックシーケンスキューに対しては、正常に再生時刻を
 * 取得することができません。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズをかけた場合、
 * 再生時刻のカウントアップも停止します。<br>
 * （ポーズを解除すれば再度カウントアップが再開されます。）<br>
 * <br>
 * 本関数による再生時刻の取得を行う場合は、対応するAtomExプレーヤー作成時に、
 * ::CriAtomExPlayerConfig 構造体の enable_audio_synced_timer を CRI_TRUE に
 * 設定してください。<br>
 * デフォルトでは無効になっています。<br>
 * <br>
 * 戻り値の型は long ですが、現状、32bit以上の精度はありません。<br>
 * 再生時刻を元に制御を行う場合、約24日で再生時刻が異常になる点に注意が必要です。<br>
 * （ 2147483647 ミリ秒を超えた時点で、再生時刻がオーバーフローし、負値になります。）<br>
 * <br>
 * 本関数は、音声再生中のみ時刻を取得可能です。<br>
 * （ ::criAtomExPlayer_GetTime 関数と異なり、本関数は再生中の音声ごとに時刻を
 * 取得可能ですが、再生終了時刻を取ることができません。）<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 再生時刻の取得に失敗します。<br>
 * （負値が返ります。）<br>
 * <br>
 * 本関数は内部で時刻計算を行っており、プラットフォームによっては処理負荷が
 * 問題になる可能性があります。また、アプリケーションの同じフレーム内であっても、
 * 呼び出し毎に更新された時刻を返します。<br>
 * アプリケーションによる再生時刻の利用方法にもよりますが、基本的に本関数を用いた
 * 時刻取得は1フレームにつき一度のみ行うようにしてください。<br>
 * \sa criAtomExPlayer_Create, criAtomExPlayer_Start, criAtomExPlayback_GetTime
 */
CriSint64 CRIAPI criAtomExPlayback_GetTimeSyncedWithAudio(CriAtomExPlaybackId id);

/*JP
 * \brief 再生時刻の取得（再生音声に同期した補正込み）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id		再生ID
 * \return		Sint64	再生時刻（マイクロ秒単位）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声の再生時刻を取得します。<br>
 * <br>
 * 再生時刻が取得できた場合、本関数は 0 以上の値を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は負値を返します。<br>
 * \par 備考:
 * ::criAtomExPlayback_GetTime 関数が返す「再生開始後からの経過時間」とは
 * 異なり、本関数からは再生中の音声に同期した再生時刻を取得することが
 * 可能です。<br>
 * デバイスのリードリトライ処理等により音声データの供給が途切れて
 * 再生が停止した場合、またはシステムによる割り込みにより音声出力が妨げられた
 * 場合には、再生時刻のカウントアップが一時的に停止します。<br>
 * 再生された音声に厳密に同期した処理を行いたい場合は、本関数で
 * 取得した再生時刻を用いてください。<br>
 * ただし、ループ再生時や、シームレス連結再生時を行った場合でも、
 * 再生位置に応じて時刻が巻き戻ることはありません。<br>
 * また、波形の詰まっていないシーケンスキューや
 * 再生波形が切り替わるブロックシーケンスキューに対しては、正常に再生時刻を
 * 取得することができません。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズをかけた場合、
 * 再生時刻のカウントアップも停止します。<br>
 * （ポーズを解除すれば再度カウントアップが再開されます。）<br>
 * <br>
 * 本関数による再生時刻の取得を行う場合は、対応するAtomExプレーヤー作成時に、
 * ::CriAtomExPlayerConfig 構造体の enable_audio_synced_timer を CRI_TRUE に
 * 設定してください。<br>
 * デフォルトでは無効になっています。<br>
 * <br>
 * 本関数は、音声再生中のみ時刻を取得可能です。<br>
 * （ ::criAtomExPlayer_GetTime 関数と異なり、本関数は再生中の音声ごとに時刻を
 * 取得可能ですが、再生終了時刻を取ることができません。）<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 再生時刻の取得に失敗します。<br>
 * （負値が返ります。）<br>
 * <br>
 * 本関数は内部で時刻計算を行っており、プラットフォームによっては処理負荷が
 * 問題になる可能性があります。また、アプリケーションの同じフレーム内であっても、
 * 呼び出し毎に更新された時刻を返します。<br>
 * アプリケーションによる再生時刻の利用方法にもよりますが、基本的に本関数を用いた
 * 時刻取得は1フレームにつき一度のみ行うようにしてください。<br>
 * \sa criAtomExPlayer_Create, criAtomExPlayer_Start, criAtomExPlayback_GetTime
 */
CriSint64 CRIAPI criAtomExPlayback_GetTimeSyncedWithAudioMicro(CriAtomExPlaybackId id);

/*JP
 * \brief シーケンス再生位置の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id		再生ID
 * \return		Sint64	シーケンス再生位置（ミリ秒単位）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声のシーケンス再生位置を取得します。<br>
 * <br>
 * 再生位置が取得できた場合、本関数は 0 以上の値を返します。<br>
 * 指定したシーケンスが既に消去されている場合等には、本関数は負値を返します。<br>
 * \par 備考:
 * 本関数が返す再生時刻は「シーケンスデータ上の再生位置」です。<br>
 * シーケンスループや、ブロック遷移を行った場合は、巻き戻った値が返ります。<br>
 * <br>
 * キュー指定以外での再生ではシーケンサーが動作しません。キュー再生以外の再生に対して
 * 本関数は負値を返します。<br>
 * <br>
 * ::criAtomExPlayer_Pause 関数でポーズをかけた場合、
 * 再生位置の更新も停止します。<br>
 * （ポーズを解除すれば再度更新が再開されます。）
 * <br>
 * 本関数で取得可能な時刻の精度は、サーバー処理の周波数に依存します。<br>
 * （時刻の更新はサーバー処理単位で行われます。）<br>
 * \attention
 * 戻り値の型はCriSint64ですが、現状、32bit以上の精度はありません。<br>
 * 再生位置を元に制御を行う場合、シーケンスループ等の設定がないデータでは約24日で再生位置が異常になる点に注意が必要です。<br>
 * （ 2147483647 ミリ秒を超えた時点で、再生位置がオーバーフローし、負値になります。）<br>
 * <br>
 * 本関数は、音声再生中のみ位置を取得可能です。<br>
 * 再生終了後や、発音数制御によりシーケンスが消去された場合には、
 * 再生位置の取得に失敗します。<br>
 * （負値が返ります。）<br>
 */
CriSint64 CRIAPI criAtomExPlayback_GetSequencePosition(CriAtomExPlaybackId id);

/*JP
 * \brief 再生サンプル数の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id				再生ID
 * \param[out]	num_samples		再生済みサンプル数
 * \param[out]	sampling_rate	サンプリングレート
 * \return		CriBool			サンプル数が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声の再生サンプル数、
 * およびサンプリングレートを返します。<br>
 * <br>
 * 再生サンプル数が取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * （エラー発生時は num_samples や sampling_rate の値も負値になります。）<br>
 * \par 備考:
 * 再生済みサンプル数の値の精度は、プラットフォーム SDK 
 * のサウンドライブラリに依存します。<br>
 * （プラットフォームによって、再生済みサンプル数の正確さは異なります。）<br>
 * <br>
 * 複数の音声データを含むキューを再生した場合、最初に見つかった音声
 * データの情報が返されます。<br>
 * \attention
 * ドライブでリードリトライ処理等が発生し、音声データの供給が途切れた場合、
 * 再生サンプル数のカウントアップが停止します。<br>
 * （データ供給が再開されれば、カウントアップが再開されます。）<br>
 * <br>
 * 本関数は、音声再生中のみ再生サンプル数を取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 再生サンプル数の取得に失敗します。<br>
 * \sa criAtomExPlayer_Start
 */
CriBool CRIAPI criAtomExPlayback_GetNumPlayedSamples(
	CriAtomExPlaybackId id, CriSint64 *num_samples, CriSint32 *sampling_rate);

/*JP
 * \brief サウンドバッファーへの書き込みサンプル数の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id				再生ID
 * \param[out]	num_samples		書き込み済みサンプル数
 * \param[out]	sampling_rate	サンプリングレート
 * \return		CriBool			サンプル数が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声について、
 * サウンドバッファーへの書き込み済みサンプル数、およびサンプリングレートを返します。<br>
 * 本関数は ::criAtomExPlayback_GetNumPlayedSamples 関数と異なり、
 * サウンドバッファーに書き込まれた未出力の音声データのサンプル数を含む値を返します。
 * <br>
 * 書き込み済みサンプル数が取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * （エラー発生時は num_samples や sampling_rate の値も負値になります。）<br>
 * \par 備考:
 * 書き込み済みサンプル数の値の精度は、プラットフォーム SDK 
 * のサウンドライブラリに依存します。<br>
 * （プラットフォームによって、書き込み済みサンプル数の正確さは異なります。）<br>
 * <br>
 * 複数の音声データを含むキューを再生した場合、最初に見つかった音声
 * データの情報が返されます。<br>
 * \attention
 * ドライブでリードリトライ処理等が発生し、音声データの供給が途切れた場合、
 * 書き込み済みサンプル数のカウントアップが停止します。<br>
 * （データ供給が再開されれば、カウントアップが再開されます。）<br>
 * <br>
 * 本関数は、音声再生中のみ書き込み済みサンプル数を取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * 書き込み済みサンプル数の取得に失敗します。<br>
 * \sa criAtomExPlayback_GetNumPlayedSamples
 */
CriBool CRIAPI criAtomExPlayback_GetNumRenderedSamples(
	CriAtomExPlaybackId id, CriSint64 *num_samples, CriSint32 *sampling_rate);

/*JP
 * \brief パラメータの取得（浮動小数点数）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	playback_id		再生ID
 * \param[in]	parameter_id	パラメーターID
 * \param[out]	value_float32	パラメーター設定値
 * \return		パラメーターが取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声に設定されている各種パラメーターの値を取得します。<br>
 * 値は浮動小数点数で取得されます。<br>
 * パラメーターが取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみパラメーターを取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * パラメーターの取得に失敗します。<br>
 * \sa CriAtomExParameterId, criAtomExPlayback_GetParameterUint32, criAtomExPlayback_GetParameterSint32
 */
CriBool CRIAPI criAtomExPlayback_GetParameterFloat32(
	CriAtomExPlaybackId playback_id,
	CriAtomExParameterId parameter_id,
	CriFloat32 *value_float32
);

/*JP
 * \brief パラメーターの取得（符号なし整数）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	playback_id		再生ID
 * \param[in]	parameter_id	パラメーターID
 * \param[out]	value_uint32	パラメーター設定値
 * \return		パラメーターが取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声に設定されている各種パラメーターの値を取得します。<br>
 * 値は符号なし整数で取得されます。<br>
 * パラメーターが取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみパラメーターを取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * パラメーターの取得に失敗します。<br>
 * \sa CriAtomExParameterId, criAtomExPlayback_GetParameterFloat32, criAtomExPlayback_GetParameterSint32
 */
CriBool CRIAPI criAtomExPlayback_GetParameterUint32(
	CriAtomExPlaybackId playback_id,
	CriAtomExParameterId parameter_id,
	CriUint32* value_uint32
);

/*JP
 * \brief パラメーターの取得（符号付き整数）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	playback_id		再生ID
 * \param[in]	parameter_id	パラメーターID
 * \param[out]	value_sint32	パラメーター設定値
 * \return		パラメーターが取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声に設定されている各種パラメーターの値を取得します。<br>
 * 値は符号付き整数で取得されます。<br>
 * パラメーターが取得できた場合、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみパラメーターを取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * パラメーターの取得に失敗します。<br>
 * \sa CriAtomExParameterId, criAtomExPlayback_GetParameterFloat32, criAtomExPlayback_GetParameterUint32
 */
CriBool CRIAPI criAtomExPlayback_GetParameterSint32(
	CriAtomExPlaybackId playback_id,
	CriAtomExParameterId parameter_id,
	CriSint32* value_sint32
);

/*JP
 * \brief AISACコントロール値の取得（コントロールID指定）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	playback_id		再生ID
 * \param[in]	control_id		コントロールID
 * \param[out]	control_value	コントロール値（0.0f〜1.0f）、未設定時は-1.0f
 * \return		AISACコントロール値が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声に設定されているAISACコントロール値を、コントロールID指定で取得します。<br>
 * AISACコントロール値が取得できた場合（未設定時も「-1.0fが取得できた」と扱われます）、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみAISACコントロール値を取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * AISACコントロール値の取得に失敗します。<br>
 * \sa criAtomExPlayer_SetAisacControlById, criAtomExPlayback_GetAisacControlByName
 */
CriBool CRIAPI criAtomExPlayback_GetAisacControlById(
	CriAtomExPlaybackId playback_id, CriAtomExAisacControlId control_id, CriFloat32 *control_value);

/*JP
 * \brief AISACコントロール値の取得（コントロール名指定）
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	playback_id		再生ID
 * \param[in]	control_name	コントロール名
 * \param[out]	control_value	コントロール値（0.0f〜1.0f）、未設定時は-1.0f
 * \return		AISACコントロール値が取得できたかどうか（ CRI_TRUE = 取得できた、 CRI_FALSE = 取得できなかった）
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生された音声に設定されているAISACコントロール値を、コントロール名指定で取得します。<br>
 * AISACコントロール値が取得できた場合（未設定時も「-1.0fが取得できた」と扱われます）、本関数は CRI_TRUE を返します。<br>
 * 指定したボイスが既に消去されている場合等には、本関数は CRI_FALSE を返します。<br>
 * \attention
 * 本関数は、音声再生中のみAISACコントロール値を取得可能です。<br>
 * 再生終了後や、発音数制御によりボイスが消去された場合には、
 * AISACコントロール値の取得に失敗します。<br>
 * \sa criAtomExPlayer_SetAisacControlById, criAtomExPlayback_GetAisacControlByName
 */
CriBool CRIAPI criAtomExPlayback_GetAisacControlByName(
	CriAtomExPlaybackId playback_id, const CriChar8 *control_name, CriFloat32 *control_value);

/*JP
 * \brief 再生音のブロック遷移
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[in]	index		ブロックインデックス
 * \par 説明:
 * 再生音単位でブロック遷移を行います。<br>
 * 本関数を実行すると、指定したIDの音声がブロックシーケンスの場合はデータの
 * 設定に従った任意の遷移タイミングで指定ブロックに遷移します。
 * <br>
 * \par 備考:
 * 再生開始ブロックの指定は ::criAtomExPlayer_SetFirstBlockIndex 関数を使用して行い、
 * 再生中のブロックインデックス取得は ::criAtomExPlayback_GetCurrentBlockIndex 関数を使用します。
 * \sa criAtomExPlayer_SetFirstBlockIndex, criAtomExPlayback_GetCurrentBlockIndex
 */
void CRIAPI criAtomExPlayback_SetNextBlockIndex(CriAtomExPlaybackId id, CriAtomExBlockIndex index);

/*JP
 * \brief 再生音のカレントブロックインデックスの取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id						再生ID
 * \return		CriAtomExBlockIndex		カレントブロックインデックス
 * \par 説明:
 * ::criAtomExPlayer_Start 関数で再生されたブロックシーケンスの
 * カレントブロックインデックスを取得します。<br>
 * \par 備考:
 * 再生IDにより再生しているデータがブロックシーケンスではない場合は、
 * ::CRIATOMEX_INVALID_BLOCK_INDEX が返ります。<br>
 * \sa criAtomExPlayer_Start, criAtomExPlayer_SetFirstBlockIndex, criAtomExPlayback_SetNextBlockIndex
 */
CriAtomExBlockIndex CRIAPI criAtomExPlayback_GetCurrentBlockIndex(CriAtomExPlaybackId id);

/*JP
 * \brief 再生トラック情報の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[out]	info		再生トラック情報
 * \return		CriBool		成功／失敗
 * \par 説明:
 * 再生中のキューのトラック情報を取得します。<br>
 * 取得できるトラック情報はキュー直下の情報だけです、サブシーケンスやキューリンクの情報は取得できません。<br>
 * \par 備考:
 * 以下に該当するデータを再生中の場合、トラック情報の取得に失敗します。<br>
 * - キュー以外のデータを再生している。（トラック情報が存在しないため）<br>
 * - 再生中のキューがポリフォニックタイプ、またはセレクター参照のスイッチタイプである。（トラック情報が複数存在する可能性があるため）<br>
 * - 再生中のキューがトラック遷移タイプである。（遷移により再生トラックが変わるため）<br>
 */
CriBool CRIAPI criAtomExPlayback_GetPlaybackTrackInfo(CriAtomExPlaybackId id, CriAtomExPlaybackTrackInfo* info);

/*JP
 * \brief ビート同期情報の取得
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[out]	info		ビート同期情報
 * \return		CriBool		成功／失敗
 * \par 説明:
 * 再生中のキューのビート同期情報を取得します。<br>
 * 現在のBPM、小節のカウント、拍のカウント、拍の進捗割合(0.0〜1.0)を取得することができます。<br>
 * キューにはビート同期情報が設定されている必要があります。<br>
 * キューリンクやスタートアクションで再生しているキューの情報は取得できません。<br>
 * \par 備考:
 * 以下に該当するデータを再生中の場合、ビート同期情報の取得に失敗します。<br>
 * - キュー以外のデータを再生している。（ビート同期情報が存在しないため）<br>
 * - ビート同期情報が設定されていないキューを再生している。<br>
 * - ビート同期情報が設定されているキューを"間接的"に再生している。（キューリンクやスタートアクションで再生している）<br>
 */
CriBool CRIAPI criAtomExPlayback_GetBeatSyncInfo(CriAtomExPlaybackId id, CriAtomExBeatSyncInfo* info);

/*JP
 * \brief ビート同期オフセットの設定
 * \ingroup ATOMEXLIB_PLAYBACK
 * \param[in]	id			再生ID
 * \param[in]	time_ms		オフセット時間
 * \return		CriBool		成功／失敗
 * \par 説明:
 * 再生中のキューのビート同期オフセットを設定します。<br>
 * キューにはビート同期情報が設定されている必要があります。<br>
 * キューリンクやスタートアクションで再生しているキューへの設定はできません。<br>
 * \par 備考:
 * 以下に該当するデータを再生中の場合、ビート同期オフセットの設定に失敗します。<br>
 * - キュー以外のデータを再生している。（ビート同期情報が存在しないため）<br>
 * - ビート同期情報が設定されていないキューを再生している。<br>
 * - ビート同期情報が設定されているキューを"間接的"に再生している。（キューリンクやスタートアクションで再生している）<br>
 */
CriBool CRIAPI criAtomExPlayback_SetBeatSyncOffset(CriAtomExPlaybackId id, CriSint16 time_ms);

/*==========================================================================
 *      CRI AtomEx Fader API
 *=========================================================================*/
/*JP
 * \brief フェーダーのアタッチに必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	config		フェーダーアタッチ用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * AtomExプレーヤーにフェーダーをアタッチするのに必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずにフェーダーをアタッチする場合、あらかじめ本関数で計算した
 * ワーク領域サイズ分のメモリをワーク領域として ::criAtomExPlayer_AttachFader 関数に
 * セットする必要があります。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExFader_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。<br>
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomExFaderConfig, criAtomExPlayer_AttachFader
 */
CriSint32 CRIAPI criAtomExPlayer_CalculateWorkSizeForFader(
	const CriAtomExFaderConfig *config);

/*JP
 * \brief プレーヤーにフェーダーを取り付ける
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player		AtomExプレーヤー
 * \param[in]	config		フェーダーアタッチ用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * プレーヤーにフェーダーをアタッチ（取り付け）し、
 * AtomExPlayerをクロスフェード専用のプレーヤーに変化させます。<br>
 * （複数音の同時再生等、従来のAtomExPlayerの持つ機能が一部利用できなくなります。）<br>
 * <br>
 * 本関数でフェーダーをアタッチしたプレーヤーは、以降音声再生開始毎
 * （ ::criAtomExPlayer_Start 関数や ::criAtomExPlayer_Prepare 実行を実行する毎）に、
 * 以下の制御を行います。<br>
 * - 既にフェードアウト中の音があれば強制停止。
 * - 現在再生中（またはフェードイン中）の音声をフェードアウト。
 * - 新規に再生を開始する音声をフェードイン。
 * 
 * <br>
 * また、再生停止時（ ::criAtomExPlayer_Stop 関数実行時）には、
 * 以下の制御を行います。<br>
 * - 既にフェードアウト中の音があれば強制停止。
 * - 現在再生中（またはフェードイン中）の音声をフェードアウト。
 * 
 * <br>
 * プレーヤーにフェーダーを取り付ける際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExPlayer_CalculateWorkSizeForFader 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * <br>
 * フェーダーのアタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * フェーダーのアタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \par 例:
 * 2 つのキュー（ MUSIC1 と MUSIC2 ）をクロスフェードさせる場合の処理は、以下のとおりです。<br>
 * \code
 * 		：
 * 	// AtomExプレーヤーの作成
 * 	player = criAtomExPlayer_Create(NULL, NULL, 0);
 * 	
 * 	// プレーヤーにフェーダーをアタッチ
 * 	criAtomExPlayer_AttachFader(player, NULL, NULL, 0);
 * 	
 * 	// フェードイン／アウト時間の指定
 * 	// 備考）下記の例では5秒でクロスフェードを行うよう指定。
 * 	criAtomExPlayer_SetFadeInTime(player, 5000);	// フェードイン時間の指定
 * 	criAtomExPlayer_SetFadeOutTime(player, 5000);	// フェードアウト時間の指定
 * 	
 * 	// 再生する音声データをセット
 * 	criAtomExPlayer_SetCueName(player, acb_hn, "MUSIC1");
 * 	
 * 	// 再生の開始
 * 	// 備考）この処理により、MUSIC1が5秒でフェードインしながら再生される。
 * 	criAtomExPlayer_Start(player);
 * 		：
 * 	（再生ループ）
 * 		：
 * 	// 次に再生する音声データをセット
 * 	criAtomExPlayer_SetCueName(player, acb_hn, "MUSIC2");
 * 	
 * 	// 再生の開始
 * 	// 備考）この処理により、MUSIC1がフェードアウトしつつ、MUSIC2がフェードインしながら再生される。
 * 	criAtomExPlayer_Start(player);
 * 		：
 * \endcode
 * \par 備考:
 * フェーダーをアタッチするプレーヤーが音声再生中の場合、本関数を実行したタイミングで
 * プレーヤーが再生中の音声は全て停止されます。<br>
 * <br>
 * フェーダーは、アタッチ中のプレーヤーに対して ::criAtomExPlayer_Start
 * 関数や、 ::criAtomExPlayer_Stop 関数が実行される度、
 * 当該プレーヤーで再生中の音声に対して以下の制御を行います。<br>
 * <br>
 * -# 既にフェードアウト中の音声が存在する場合、その音声を即座に停止する。
 * -# フェードイン中の音声（または再生中の音声）が存在する場合、
 * その音声をその時点の音量から ::criAtomExPlayer_SetFadeOutTime 
 * 関数で指定された時間をかけてフェードアウトさせる。
 * -# ::criAtomExPlayer_Start 関数が実行された場合、
 * プレーヤーにセットされている音声データをボリューム0で再生開始し、
 * ::criAtomExPlayer_SetFadeInTime 関数で指定された時間をかけてフェードインさせる。
 * 
 * <br>
 * （ ::criAtomExPlayer_Start 関数の代わりに ::criAtomExPlayer_Prepare 
 * 関数を使用した場合、ポーズを解除する時点で上記の制御が行われます。）<br>
 * \attention
 * 本関数を実行すると、AtomExPlayerに対する再生／停止操作が大きく変更されます。<br>
 * （フェーダーアタッチ前後で挙動が大きく変わります。）<br>
 * 具体的には、同時に発音可能な音声の数が1音（クロスフェード中のみ2音）に限定され、
 * ::CriAtomExPlaybackId を用いた制御も行えなくなります。<br>
 * <br>
 * 本関数は、クロスフェード処理を行いたい場合にのみ必要となります。<br>
 * 1音だけのフェードイン／アウトについては、エンベロープやTweenをご利用ください。<br>
 * <br>
 * 本関数にワーク領域をセットした場合、セットした領域のメモリをフェーダーデタッチ時
 * までアプリケーション中で保持し続ける必要があります。<br>
 * （セット済みのワーク領域に値を書き込んだり、メモリ解放したりしてはいけません。）<br>
 * <br>
 * フェーダーの動作仕様の都合上、フェードイン／アウトの処理対象となるのは、
 * 過去2回の音声再生のみです。<br>
 * それ以前に再生された音声は、 ::criAtomExPlayer_Start 関数や
 * ::criAtomExPlayer_Stop 関数が実行された時点で強制的に停止されます。<br>
 * 強制停止処理のタイミングで意図しないノイズが発生する恐れがありますので、
 * 同時再生数が3音以上にならないよう注意してください。<br>
 * （ ::criAtomExPlayer_GetNumPlaybacks 関数で同時再生数を確認してください。）<br>
 * <br>
 * フェードイン／アウトが機能するのは『AtomExプレーヤーに対する操作』のみです。<br>
 * ::criAtomExPlayer_Start 関数実行時に取得した再生IDに対し、
 * ::criAtomExPlayback_Stop を実行しても、フェードアウトは行われません。<br>
 * （フェーダーの設定が無視され、即座に停止処理が行われます。）<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa CriAtomExFaderConfig, criAtomExPlayer_CalculateWorkSizeForFader
 */
void CRIAPI criAtomExPlayer_AttachFader(CriAtomExPlayerHn player,
	const CriAtomExFaderConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief プレーヤーからフェーダーを取り外す
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player		AtomExプレーヤー
 * \par 説明:
 * プレーヤーからフェーダーをデタッチ（取り外し）します。<br>
 * 本関数でフェーダーをデタッチしたプレーヤーには、以降フェードイン／アウトの処理が行われなくなります。<br>
 * \par 備考:
 * フェーダーをデタッチするプレーヤーが音声再生中の場合、本関数を実行したタイミングで
 * プレーヤーが再生中の音声は全て停止されます。<br>
 * <br>
 * 本関数を実行せずにプレーヤーを破棄した場合、プレーヤー破棄時（ ::criAtomExPlayer_Destroy 関数実行時）
 * にライブラリ内でフェーダーのデタッチが行われます。<br>
 * \sa criAtomExPlayer_AttachFader
 */
void CRIAPI criAtomExPlayer_DetachFader(CriAtomExPlayerHn player);

/*JP
 * \brief フェードアウト時間の設定
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	ms		フェードアウト時間（ミリ秒指定）
 * \par 説明:
 * フェーダーをアタッチ済みのプレーヤーに対し、フェードアウト時間を指定します。<br>
 * 次回音声再生時（ ::criAtomExPlayer_Start 関数実行時）には、本関数で設定された
 * 時間で再生中の音声がフェードアウトします。<br>
 * <br>
 * フェードアウト時間のデフォルト値は 500 ミリ秒です。<br>
 * \par 備考:
 * フェードアウト時間が設定されている場合、AtomExプレーヤーは以下の順序で再生を停止します。<br>
 * <br>
 *	-# 指定された時間で音声のボリュームを 0 まで落とす。
 *	-# ボリュームが 0 の状態でディレイ時間が経過するまで再生を続ける。
 *	-# ディレイ時間経過後に再生を停止する。
 * 	
 * <br>
 * フェードアウト時のボリュームコントロールは、音声再生停止前に行われます。<br>
 * そのため、波形データにあらかじめ設定されたエンベロープのリリース時間は無視されます。<br>
 * （厳密には、ボリュームが 0 になってからエンベロープのリリース処理が適用されます。）<br>
 * <br>
 * 第2引数（ ms ）に 0 を指定する場合と、 ::CRIATOMEX_IGNORE_FADE_OUT
 * を指定する場合とでは、以下のように挙動が異なります。<br>
 * <br>
 *	- 0指定時：即座にボリュームが 0 に落とされ、停止処理が行われる。
 *	- CRIATOMEX_IGNORE_FADE_OUT指定時：ボリューム変更は行われず、停止処理が行われる。
 * 	
 * <br>
 * 再生停止時にフェードアウト処理を行わず、波形にあらかじめ設定されている
 * エンベロープのリリース処理を有効にしたい場合、第2引数（ ms ）に、
 * ::CRIATOMEX_IGNORE_FADE_OUT を指定してください。<br>
 * ::CRIATOMEX_IGNORE_FADE_OUT を指定することで、
 * フェードアウト処理によるボリューム制御が行われなくなるため、
 * ::criAtomExPlayer_Stop 関数実行後、ディレイ時間経過後に通常の停止処理が行われます。<br>
 * （波形データにエンベロープのリリースが設定されている場合、リリース処理が行われます。）<br>
 * \attention
 * 本関数を実行する前に、 ::criAtomExPlayer_AttachFader 関数を使用して
 * あらかじめプレーヤーにフェーダーをアタッチしておく必要があります。<br>
 * <br>
 * 本関数で設定した値は、既に再生中の音声には一切影響しません。<br>
 * 本関数で設定したフェード時間は、本関数実行後に ::criAtomExPlayer_Start 関数や
 * ::criAtomExPlayer_Stop 関数を実行するタイミングで適用されます。<br>
 * （既にフェードアウトを開始している音声に対しては、
 * 本関数で後からフェードアウト時間を変更することはできません。）<br>
 * \sa criAtomExPlayer_AttachFader, criAtomExPlayer_SetFadeInTime
 */
void CRIAPI criAtomExPlayer_SetFadeOutTime(CriAtomExPlayerHn player, CriSint32 ms);

/*JP
 * \brief フェードアウト時間の取得
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \return	CriSint32	フェードアウト時間（ミリ秒単位）
 * \par 説明:
 * フェードアウト時間を取得します。<br>
 * \par 備考:
 * 本関数は ::criAtomExPlayer_SetFadeOutTime 関数でセットした値を返します。<br>
 * \sa criAtomExPlayer_SetFadeOutTime
 */
CriSint32 CRIAPI criAtomExPlayer_GetFadeOutTime(CriAtomExPlayerHn player);

/*JP
 * \brief フェードイン時間の設定
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	ms		フェードイン時間（ミリ秒指定）
 * \par 説明:
 * フェーダーをアタッチ済みのプレーヤーに対し、フェードイン時間を指定します。<br>
 * 次回音声再生時（ ::criAtomExPlayer_Start 関数実行時）には、本関数で設定された
 * 時間で新規に音声がフェードイン再生されます。<br>
 * <br>
 * フェードイン時間のデフォルト値は 0 秒です。<br>
 * そのため、本関数を使用しない場合フェードインは行われず、即座にフルボリューム
 * で音声の再生が開始されます。<br>
 * \attention
 * 本関数を実行する前に、 ::criAtomExPlayer_AttachFader 関数を使用して
 * あらかじめプレーヤーにフェーダーをアタッチしておく必要があります。<br>
 * <br>
 * 本関数で設定した値は、既に再生中の音声には一切影響しません。<br>
 * 本関数で設定したフェード時間は、本関数実行後に ::criAtomExPlayer_Start 関数を
 * 実行するタイミングで適用されます。<br>
 * （既にフェードインを開始している音声に対しては、
 * 本関数で後からフェードイン時間を変更することはできません。）<br>
 * \sa criAtomExPlayer_AttachFader, criAtomExPlayer_SetFadeInTime
 */
void CRIAPI criAtomExPlayer_SetFadeInTime(CriAtomExPlayerHn player, CriSint32 ms);

/*JP
 * \brief フェードイン時間の取得
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \return	CriSint32	フェードイン時間（ミリ秒単位）
 * \par 説明:
 * フェードイン時間を取得します。<br>
 * \par 備考:
 * 本関数は ::criAtomExPlayer_SetFadeInTime 関数でセットした値を返します。<br>
 * \sa criAtomExPlayer_SetFadeInTime
 */
CriSint32 CRIAPI criAtomExPlayer_GetFadeInTime(CriAtomExPlayerHn player);

/*JP
 * \brief フェードイン開始オフセットの設定
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	ms		フェードイン開始オフセット（ミリ秒指定）
 * \par 説明:
 * フェーダーをアタッチ済みのプレーヤーに対し、フェードイン開始オフセットを指定します。<br>
 * 本関数を使用することで、フェードインを開始するタイミングをフェードアウトに対して
 * 任意の時間早めたり、遅らせることが可能です。<br>
 * 例えば、フェードアウト時間を5秒、フェードイン開始オフセットを5秒に設定した場合、
 * フェードアウトが5秒で完了した直後に次の音声をフェードインさせることが可能です。<br>
 * 逆に、フェードイン時間を5秒、フェードイン開始オフセットを-5秒に設定した場合、
 * フェードインが5秒で完了した直後に再生中の音のフェードアウトを開始させることが可能です。<br>
 * <br>
 * フェードイン開始オフセットのデフォルト値は 0 秒です。<br>
 * （フェードインとフェードアウトが同時に開始されます。）<br>
 * \par 備考:
 * フェードイン開始のタイミングは、フェードインする音声の再生準備が整ったタイミングです。<br>
 * そのため、フェードイン開始オフセットが 0 秒に設定されている場合でも、フェードイン音声
 * のバッファリングに時間がかかる場合（ストリーム再生時等）には、フェードアウトの開始までに
 * しばらく時間がかかります。<br>
 * （本パラメーターは、フェードインとフェードアウトのタイミングを調整するための相対値です。）<br>
 * \attention
 * 本関数を実行する前に、 ::criAtomExPlayer_AttachFader 関数を使用して
 * あらかじめプレーヤーにフェーダーをアタッチしておく必要があります。<br>
 * <br>
 * 本関数で設定した値は、既に再生中の音声には一切影響しません。<br>
 * 本関数で設定したフェード時間は、本関数実行後に ::criAtomExPlayer_Start 関数や
 * ::criAtomExPlayer_Stop 関数を実行するタイミングで適用されます。<br>
 * （既にフェード処理を開始している音声に対しては、
 * 本関数で後からフェード処理のタイミングを変更することはできません。）<br>
 * \sa criAtomExPlayer_AttachFader, criAtomExPlayer_SetFadeInTime
 */
void CRIAPI criAtomExPlayer_SetFadeInStartOffset(CriAtomExPlayerHn player, CriSint32 ms);

/*JP
 * \brief フェードイン開始オフセットの取得
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \return	CriSint32	フェードイン開始オフセット（ミリ秒単位）
 * \par 説明:
 * フェードイン開始オフセットを取得します。<br>
 * \par 備考:
 * 本関数は ::criAtomExPlayer_SetFadeInStartOffset 関数でセットした値を返します。<br>
 * \sa criAtomExPlayer_SetFadeInStartOffset
 */
CriSint32 CRIAPI criAtomExPlayer_GetFadeInStartOffset(CriAtomExPlayerHn player);

/*JP
 * \brief フェードアウト後のディレイ時間の設定
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \param[in]	ms		フェードイン開始オフセット（ミリ秒指定）
 * \par 説明:
 * フェードアウト完了後、ボイスを破棄するまでのディレイ時間を設定します。<br>
 * 本関数を使用することで、フェードアウトを終えたボイスが破棄されるまでのタイミングを任意に設定可能です。<br>
 * <br>
 * ディレイ時間のデフォルト値は 500 ミリ秒です。<br>
 * （フェードアウト音を再生するボイスは、ボリュームが 0 に設定された後、 500 ミリ秒後に破棄されます。）<br>
 * \par 備考:
 * 音声のフェードアウトが完了する前にボイスが停止されるプラットフォーム以外は、
 * 本関数を使用する必要はありません。<br>
 * \attention
 * 本関数を実行する前に、 ::criAtomExPlayer_AttachFader 関数を使用して
 * あらかじめプレーヤーにフェーダーをアタッチしておく必要があります。<br>
 * <br>
 * 本関数で設定した値は、既に再生中の音声には一切影響しません。<br>
 * 本関数で設定したフェード時間は、本関数実行後に ::criAtomExPlayer_Start 関数や
 * ::criAtomExPlayer_Stop 関数を実行するタイミングで適用されます。<br>
 * （既にフェードアウトを開始している音声に対しては、
 * 本関数で後からフェードアウト後のディレイ時間を変更することはできません。）<br>
 * <br>
 * ボリュームの制御とボイスの停止が反映されるタイミングは、プラットフォームによって異なります。<br>
 * そのため、本関数に 0 を指定した場合、プラットフォームによってはボリュームの変更が反映される
 * 前にボイスが停止される恐れがあります。<br>
 * \sa criAtomExPlayer_AttachFader, criAtomExPlayer_SetFadeInTime
 */
void CRIAPI criAtomExPlayer_SetFadeOutEndDelay(CriAtomExPlayerHn player, CriSint32 ms);

/*JP
 * \brief フェードアウト後のディレイ時間の取得
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \return	CriSint32	フェードアウト後のディレイ時間（ミリ秒単位）
 * \par 説明:
 * フェードアウト後のディレイ時間を取得します。<br>
 * \par 備考:
 * 本関数は ::criAtomExPlayer_SetFadeOutEndDelay 関数でセットした値を返します。<br>
 * \sa criAtomExPlayer_SetFadeOutEndDelay
 */
CriSint32 CRIAPI criAtomExPlayer_GetFadeOutEndDelay(CriAtomExPlayerHn player);

/*JP
 * \brief フェード処理中かどうかのチェック
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \return	CriBool		フェード処理中かどうか（CRI_TRUE = フェード処理中、CRI_FALSE = フェード処理中ではない）
 * \par 説明:
 * フェード処理が行われている最中かどうかをチェックします。<br>
 * \par 備考:
 * 本関数は、以下の処理期間中 CRI_TRUE を返します。<br>
 * - クロスフェード開始のための同期待ち中。
 * - フェードイン／フェードアウト処理中（ボリューム変更中）。
 * - フェードアウト完了後のディレイ期間中。
 * 
 */
CriBool CRIAPI criAtomExPlayer_IsFading(CriAtomExPlayerHn player);

/*JP
 * \brief フェーダーパラメーターの初期化
 * \ingroup ATOMEXLIB_FADER
 * \param[in]	player	AtomExプレーヤーハンドル
 * \par 説明:
 * フェーダーに設定されている各種パラメーターをクリアし、初期値に戻します。<br>
 * \attention
 * 本関数を実行する前に、 ::criAtomExPlayer_AttachFader 関数を使用して
 * あらかじめプレーヤーにフェーダーをアタッチしておく必要があります。<br>
 * <br>
 * 本関数でフェーダーパラメーターをクリアしても、既に再生中の音声には一切影響しません。<br>
 * 本関数でクリアしたフェーダーパラメーターは、本関数実行後に ::criAtomExPlayer_Start 関数や
 * ::criAtomExPlayer_Stop 関数を実行するタイミングで適用されます。<br>
 * （既にフェード処理を開始している音声に対しては、
 * 本関数でクリアしたフェーダーパラメーターを適用することはできません。）<br>
 * \sa criAtomExPlayer_AttachFader, criAtomExPlayer_SetFadeInTime
 */
void CRIAPI criAtomExPlayer_ResetFaderParameters(CriAtomExPlayerHn player);


/*==========================================================================
 *      CRI AtomEx Sequencer API
 *=========================================================================*/
/*JP
 * \brief シーケンスコールバック関数の登録
 * \ingroup ATOMEXLIB_SEQUENCER
 * \param[in]	func		シーケンスコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * シーケンスデータに埋め込まれたコールバック情報を受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、サーバー関数内でコールバックイベントを処理したタイミングで実行されます。<br>
 * \attention
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExSequencerEventCbFunc
 */
void CRIAPI criAtomExSequencer_SetEventCallback(CriAtomExSequencerEventCbFunc func, void* obj);

/*==========================================================================
 *      CRI AtomEx Beat Sync API
 *=========================================================================*/
/*JP
 * \brief ビート同期位置検出コールバック関数の登録
 * \ingroup ATOMEXLIB_BEATSYNC
 * \param[in]	func		ビート同期位置検出コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ビート同期位置検出情報を受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、サーバー関数内でビート同期位置検出を処理されるタイミングで実行されます。<br>
 * \attention
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \sa CriAtomExBeatSyncCbFunc
 */
void CRIAPI criAtomExBeatSync_SetCallback(CriAtomExBeatSyncCbFunc func, void* obj);

/*==========================================================================
 *      CRI AtomEx 3D API
 *=========================================================================*/
/*JP
 * \brief 3D音源ハンドルの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config		3D音源ハンドル作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	3D音源ハンドル作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 3D音源ハンドルを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずに3D音源ハンドルを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomEx3dSource_Create 関数にセットする必要があります。<br>
 * <br>
 * 3D音源ハンドルの作成に必要なワークメモリのサイズは、3D音源ハンドル作成用コンフィグ
 * 構造体（ ::CriAtomEx3dSourceConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx3dSource_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。

 * \sa criAtomEx3dSource_Create, CriAtomEx3dSourceConfig
 */
CriSint32 CRIAPI criAtomEx3dSource_CalculateWorkSize(const CriAtomEx3dSourceConfig *config);

/*JP
 * \brief 3D音源ハンドルの作成
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config				3D音源ハンドル作成用コンフィグ構造体へのポインタ
 * \param[in]	work				3D音源ハンドル作成用ワーク領域へのポインタ
 * \param[in]	work_size			3D音源ハンドル作成用ワークサイズ
 * \return		CriAtomEx3dSourceHn	3D音源ハンドル
 * \par 説明:
 * 3D音源ハンドル作成用コンフィグに基づいて、3D音源ハンドルを作成します。<br>
 * 作成に成功すると、3D音源ハンドルを返します。<br>
 * 3D音源ハンドルを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomEx3dSource_CalculateWorkSize 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomEx3dSource_CalculateWorkSize, criAtomEx3dSource_Destroy
 */
CriAtomEx3dSourceHn CRIAPI criAtomEx3dSource_Create(
	const CriAtomEx3dSourceConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief 3D音源ハンドルの破棄
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \par 説明:
 * 3D音源ハンドルを破棄します。<br>
 * 本関数を実行した時点で、3D音源ハンドル作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定した3D音源ハンドルも無効になります。<br>
 * 3D音源ハンドルをセットしたAtomExプレーヤーで再生している音声がある場合、
 * 本関数を実行する前に、それらの音声を停止するか、そのAtomExプレーヤーを破棄してください。
 * \sa criAtomEx3dSource_Create
 */
void CRIAPI criAtomEx3dSource_Destroy(CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源の更新
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \par 説明:
 * 3D音源に設定されているパラメーターを使用して、3D音源を更新します。<br>
 * 本関数では、3D音源に設定されている全てのパラメーターを更新します。
 * パラメーターをひとつ変更する度に本関数にて更新処理を行うよりも、
 * 複数のパラメーターを変更してから更新処理を行った方が効率的です。
 * \par 例:
 * \code
 * CriAtomExVector pos;
 * CriAtomExVector vel;
 * 
 * // Set position
 * pos.x = 0.0f
 * pos.y = 0.0f
 * pos.z = 1.0f
 * criAtomEx3dSource_SetPosition(source, &pos);
 * // Set velocity
 * vel.x = 1.0f
 * vel.y = 0.0f
 * vel.z = 0.0f
 * criAtomEx3dSource_SetVelocity(source, &vel);
 * 
 * // Update source parameters
 * criAtomEx3dSource_Update(source);
 * \endcode
 * \attention
 * 本関数はAtomExプレーヤーのパラメーター更新（::criAtomExPlayer_UpdateAll, criAtomExPlayer_Update）
 * とは独立して動作します。3D音源のパラメーターを変更した際は、本関数にて更新処理を行ってください。
 */
void CRIAPI criAtomEx3dSource_Update(CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源パラメーターの初期化
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \par 説明:
 * 3D音源に設定されているパラメーターをクリアし、初期値に戻します。<br>
 * \attention
 * クリアしたパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_ResetParameters(CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源の位置の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	position			位置ベクトル
 * \par 説明:
 * 3D音源の位置を設定します。<br>
 * 位置は、距離減衰、および定位計算に使用されます。<br>
 * 位置は、3次元ベクトルで指定します。<br>
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * データ側には位置は設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetPosition(CriAtomEx3dSourceHn ex_3d_source, const CriAtomExVector *position);

/*JP
 * \brief 3D音源の位置の取得
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \par 説明:
 * 3D音源の位置を取得します。<br>
 * 位置は、3次元ベクトルで取得します。<br>
 */
CriAtomExVector CRIAPI criAtomEx3dSource_GetPosition(CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源の速度の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	velocity			速度ベクトル
 * \par 説明:
 * 3D音源の速度を設定します。<br>
 * 速度は、ドップラー効果の計算に使用されます。<br>
 * 速度は、3次元ベクトルで指定します。速度の単位は、1秒あたりの移動距離です。
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * データ側には速度は設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetVelocity(CriAtomEx3dSourceHn ex_3d_source, const CriAtomExVector *velocity);

/*JP
 * \brief 3D音源の向きの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	front				前方ベクトル
 * \param[in]	top					上方ベクトル			
 * \par 説明:
 * 3D音源の向きを設定します。<br>
 * 本関数で設定した向きは、サウンドコーンの向きとして設定されます。<br>
 * サウンドコーンは、音源から音が発生する方向を表し、音の指向性の表現に使用されます。<br>
 * サウンドコーンの向きは、3次元ベクトルで指定します。設定された向きベクトルは、ライブラリ内部で正規化して使用されます。<br>
 * データ側にはサウンドコーンの向きは設定できないため、常に本関数での設定値が使用されます。<br>
 * デフォルト値以下のとおりです。<br>
 * 	- 前方ベクトル：(0.0f, 0.0f, 1.0f)
 * 	- 上方ベクトル：(0.0f, 1.0f, 0.0f)
 * 	
 * \par 備考:
 * サウンドコーンの向きを設定した場合、上方ベクトルは無視され、前方ベクトルのみが使用されます。<br>
 * また、Ambisonics再生を使用している場合、本関数で指定した向きおよびリスナーの向きに従ってAmbisonicsが回転します。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * また、Ambiosnicsに対してサウンドコーンを適用することは出来ません。
 * \sa criAtomEx3dSource_SetConeParameter, criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetOrientation(CriAtomEx3dSourceHn ex_3d_source, const CriAtomExVector *front, const CriAtomExVector *top);

/*JP
 * \brief 3D音源のサウンドコーンパラメーターの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	inside_angle		サウンドコーンのインサイドアングル
 * \param[in]	outside_angle		サウンドコーンのアウトサイドアングル
 * \param[in]	outside_volume		サウンドコーンのアウトサイドボリューム
 * \par 説明:
 * 3D音源のサウンドコーンパラメーターを設定します。<br>
 * サウンドコーンは、音源から音が発生する方向を表し、音の指向性の表現に使用されます。<br>
 * サウンドコーンは、内側コーン、外側コーンで構成されます。インサイドアングルは内側コーンの角度、
 * アウトサイドアングルは外側コーンの角度、アウトサイドボリュームは外側コーンの角度以上の方向での音量をそれぞれ表します。<br>
 * 内側コーンの角度より小さい角度の方向では、コーンによる減衰を受けません。
 * 内側コーンと外側コーンの間の方向では、徐々にアウトサイドボリュームまで減衰します。<br>
 * インサイドアングルおよびアウトサイドアングルは、0.0f〜360.0fを度で指定します。<br>
 * アウトサイドボリュームは、0.0f〜1.0fを振幅に対する倍率で指定します（単位はデシベルではありません）。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりであり、コーンによる減衰は行われません。<br>
 * 	- インサイドアングル：360.0f
 * 	- アウトサイドアングル：360.0f
 * 	- アウトサイドボリューム：0.0f
 * 	
 * デフォルト値は、::criAtomEx3dSource_ChangeDefaultConeParameter 関数にて変更可能です。<br>
 * データ側に当該パラメーターが設定されている場合に本関数を呼び出すと、以下のように適用されます。
 * 	- インサイドアングル：加算
 * 	- アウトサイドアングル：加算
 * 	- アウトサイドボリューム：乗算
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultConeParameter
 */
void CRIAPI criAtomEx3dSource_SetConeParameter(CriAtomEx3dSourceHn ex_3d_source,
	CriFloat32 inside_angle,
	CriFloat32 outside_angle,
	CriFloat32 outside_volume
);

/*JP
 * \brief 3D音源のサウンドコーンパラメーターのデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	inside_angle		サウンドコーンのインサイドアングル
 * \param[in]	outside_angle		サウンドコーンのアウトサイドアングル
 * \param[in]	outside_volume		サウンドコーンのアウトサイドボリューム
 * \par 説明:
 * 3D音源のサウンドコーンパラメーターのデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * サウンドコーンパラメーターの初期値が本関数で設定した値となります。<br>
 * ライブラリ初期化時のデフォルト値については、 ::criAtomEx3dSource_SetConeParameter 関数を参照して下さい。<br>
 * \attention
 * 当該パラメーターに関して「ツール側で値が変更されていない（デフォルト状態）」データの場合、暗黙的にデフォルト値が適用されます。<br>
 * そのため、本関数でデフォルト値を変更すると、ツールでの編集時に意図していたパラメーターと異なってしまう可能性があります。<br>
 * 但し、インゲームプレビュー用にビルドされたデータは本関数の影響を受けません。
 * \sa criAtomEx3dSource_SetConeParameter
 */
void CRIAPI criAtomEx3dSource_ChangeDefaultConeParameter(
	CriFloat32 inside_angle,
	CriFloat32 outside_angle,
	CriFloat32 outside_volume
);

/*JP
 * \brief 3D音源の最小距離／最大距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	min_attenuation_distance		最小距離
 * \param[in]	max_attenuation_distance		最大距離
 * \par 説明:
 * 3D音源の最小距離／最大距離を設定します。<br>
 * 最小距離は、これ以上音量が大きくならない距離を表します。最大距離は、最小音量になる距離を表します。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 最小距離：0.0f
 * 	- 最大距離：0.0f
 * 	
 * デフォルト値は、::criAtomEx3dSource_ChangeDefaultMinMaxAttenuationDistance 関数にて変更可能です。<br>
 * データ側に当該パラメーターが設定されている場合に本関数を呼び出すと、データ側の値を上書き（無視）して適用されます。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultMinMaxAttenuationDistance
 */
void CRIAPI criAtomEx3dSource_SetMinMaxAttenuationDistance(CriAtomEx3dSourceHn ex_3d_source,
	CriFloat32 min_attenuation_distance,
	CriFloat32 max_attenuation_distance
);

/*JP
 * \brief 3D音源の最小距離／最大距離のデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	min_attenuation_distance		最小距離
 * \param[in]	max_attenuation_distance		最大距離
 * \par 説明:
 * 3D音源の最小距離／最大距離のデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * 最小距離／最大距離の初期値が本関数で設定した値となります。<br>
 * ライブラリ初期化時のデフォルト値については、 ::criAtomEx3dSource_SetMinMaxAttenuationDistance 関数を参照して下さい。<br
 * \attention
 * 当該パラメーターに関して「ツール側で値が変更されていない（デフォルト状態）」データの場合、暗黙的にデフォルト値が適用されます。<br>
 * そのため、本関数でデフォルト値を変更すると、ツールでの編集時に意図していたパラメーターと異なってしまう可能性があります。<br>
 * 但し、以下に該当するデータは本関数の影響を受けません。<br>
 * 	- ツールのプロパティにて、最小距離／最大距離の初期値設定を0.0以外に設定している
 * 	- インゲームプレビュー用にビルドしている
 * 	
 * \sa criAtomEx3dSource_SetMinMaxAttenuationDistance
 */
void CRIAPI criAtomEx3dSource_ChangeDefaultMinMaxAttenuationDistance(
	CriFloat32 min_attenuation_distance,
	CriFloat32 max_attenuation_distance
);

/*JP
 * \brief 3D音源のインテリアパンニング境界距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	source_radius		3D音源の半径
 * \param[in]	interior_distance	インテリア距離
 * \par 説明:
 * 3D音源のインテリアパンニング境界距離の設定をします。<br>
 * 3D音源の半径は、3D音源を球としたときの半径です。<br>
 * インテリア距離は、インテリアパンニング適用される3D音源の半径からの距離です。<br>
 * 3D音源の半径内では、インテリアパンニング適用されますが、インテリア距離が0.0と扱われるため、
 * 全てのスピーカーから同じ音量で音声が再生されます。<br>
 * インテリア距離内では、インテリアパンニング適用されます。<br>
 * インテリア距離外では、インテリアパンニング適用されず、音源位置に最も近い1つ、
 * または2つのスピーカーから音声が再生されます。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 3D音源の半径：0.0f
 * 	- インテリア距離：0.0f（3D音源の最小距離に依存）
 * 	
 * デフォルト値は、 ::criAtomEx3dSource_ChangeDefaultInteriorPanField 関数にて変更可能です。<br>
 * また、現在ツールにて当該パラメーターを設定できないため、常に本関数での設定値が使用されます。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultInteriorPanField
 */
void CRIAPI criAtomEx3dSource_SetInteriorPanField(CriAtomEx3dSourceHn ex_3d_source, CriFloat32 source_radius, CriFloat32 interior_distance);

/*JP
 * \brief 3D音源のインテリアパンニング境界距離のデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	source_radius		3D音源の半径
 * \param[in]	interior_distance	インテリア距離
 * \par 説明:
 * 3D音源のインテリアパンニング境界距離のデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * インテリアパンニング境界距離の初期値が本関数で設定した値となります。<br>
 * ライブラリ初期化時のデフォルト値については、 ::criAtomEx3dSource_SetInteriorPanField 関数を参照して下さい。<br>
 * \sa criAtomEx3dSource_SetInteriorPanField
 */
void CRIAPI criAtomEx3dSource_ChangeDefaultInteriorPanField(CriFloat32 source_radius, CriFloat32 interior_distance);

/*JP
 * \brief 3D音源のドップラー係数の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	doppler_factor		ドップラー係数
 * \par 説明:
 * 3D音源のドップラー係数を設定します。<br>
 * ドップラー係数は、音速を340m/sとして計算されたドップラー効果に対して、誇張表現するための倍率を指定します。<br>
 * 例えば、2.0fを指定すると、音速を340m/sとして計算したピッチを2倍して適用します。<br>
 * 0.0fを指定すると、ドップラー効果は無効になります。
 * ライブラリ初期化時のデフォルト値は0.0fです。<br>
 * デフォルト値は、::criAtomEx3dSource_ChangeDefaultDopplerFactor 関数にて変更可能です。<br>
 * データ側に当該パラメーターが設定されている場合に本関数を呼び出すと、データ側の値を上書き（無視）して適用されます。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultDopplerFactor
 */
void CRIAPI criAtomEx3dSource_SetDopplerFactor(CriAtomEx3dSourceHn ex_3d_source, CriFloat32 doppler_factor);

/*JP
 * \brief 3D音源のドップラー係数のデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	doppler_factor		ドップラー係数
 * \par 説明:
 * 3D音源のドップラー係数のデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * ドップラー係数の初期値が本関数で設定した値となります。<br>
 * ライブラリ初期化時のデフォルト値については、 ::criAtomEx3dSource_SetDopplerFactor 関数を参照して下さい。<br>
 * \attention
 * 当該パラメーターに関して「ツール側で値が変更されていない（デフォルト状態）」データの場合、暗黙的にデフォルト値が適用されます。<br>
 * そのため、本関数でデフォルト値を変更すると、ツールでの編集時に意図していたパラメーターと異なってしまう可能性があります。<br>
 * 但し、インゲームプレビュー用にビルドされたデータは本関数の影響を受けません。
 * \sa criAtomEx3dSource_SetDopplerFactor
 */
void CRIAPI criAtomEx3dSource_ChangeDefaultDopplerFactor(CriFloat32 doppler_factor);

/*JP
 * \brief 3D音源のボリュームの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	volume				ボリューム
 * \par 説明:
 * 3D音源のボリュームを設定します。<br>
 * 3D音源のボリュームは、定位に関わる音量（L,R,SL,SR）にのみ影響し、LFEやセンターへの出力レベルには影響しません。<br>
 * ボリューム値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * ライブラリ初期化時のデフォルト値は1.0fです。<br>
 * デフォルト値は、::criAtomEx3dSource_ChangeDefaultVolume 関数にて変更可能です。<br>
 * データ側に当該パラメーターが設定されている場合に本関数を呼び出すと、データ側の値と乗算して適用されます。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dSource_Update, criAtomEx3dSource_ChangeDefaultVolume
 */
void CRIAPI criAtomEx3dSource_SetVolume(CriAtomEx3dSourceHn ex_3d_source, CriFloat32 volume);

/*JP
 * \brief 3D音源のボリュームのデフォルト値変更
 * \ingroup ATOMEXLIB_3D
 * \param[in]	volume				ボリューム
 * \par 説明:
 * 3D音源のボリュームのデフォルト値を変更します。<br>
 * 本関数によってデフォルト値を変更すると、以降に作成する3D音源ハンドル（ ::CriAtomEx3dSourceHn ）の
 * ボリュームの初期値が本関数で設定した値となります。<br>
 * ライブラリ初期化時のデフォルト値については、 ::criAtomEx3dSource_SetVolume 関数を参照して下さい。<br>
 * \attention
 * 当該パラメーターに関して「ツール側で値が変更されていない（デフォルト状態）」データの場合、暗黙的にデフォルト値が適用されます。<br>
 * そのため、本関数でデフォルト値を変更すると、ツールでの編集時に意図していたパラメーターと異なってしまう可能性があります。<br>
 * 但し、インゲームプレビュー用にビルドされたデータは本関数の影響を受けません。
 * \sa criAtomEx3dSource_SetVolume
 */
void CRIAPI criAtomEx3dSource_ChangeDefaultVolume(CriFloat32 volume);

/*JP
 * \brief 角度AISACコントロール値の最大変化量の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	max_delta			角度AISACコントロール値の最大変化量
 * \par 説明:
 * 角度AISACによりAISACコントロール値が変更される際の、最大変化量を設定します。<br>
 * 最大変化量を低めに変更すると、音源とリスナー間の相対角度が急激に変わった場合でも、
 * 角度AISACによるAISACコントロール値の変化をスムーズにすることができます。<br>
 * 例えば、(0.5f / 30.0f)を設定すると、角度が0度→180度に変化した場合に、30フレームかけて変化するような変化量となります。<br>
 * デフォルト値は1.0f（制限なし）です。
 * データ側では本パラメーターは設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数で設定している最大変化量は、定位角度を元に計算されている、角度AISACコントロール値の変化にのみ適用されます。
 * 定位角度自体には影響はありません。
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetMaxAngleAisacDelta(CriAtomEx3dSourceHn ex_3d_source, CriFloat32 max_delta);

/*JP
 * \brief 距離AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	aisac_control_id	距離AISACコントロールID
 * \par 説明:
 * 最小距離、最大距離間の距離減衰に連動するAISACコントロールIDを指定します。<br>
 * 本関数でAISACコントロールIDを設定した場合、デフォルトの距離減衰は無効になります。<br>
 * データ側に設定されている距離AISACコントロールIDは、本関数によって上書き適用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数を実行すると指定した3D音源に前に設定されていたAISACコントールIDの値の変更によるパラメーター変更は無効化されますが、<br>
 * 再生済みの音声については前に適用されたパラメーターが適用され続けます。<br>
 * 指定する3D音源に紐づく音声が再生されていない状態で本関数を実行することを推奨します。<br>
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetDistanceAisacControlId(CriAtomEx3dSourceHn ex_3d_source, CriUint16 aisac_control_id);

/*JP
 * \brief リスナー基準方位角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	aisac_control_id	リスナー基準方位角AISACコントロールID
 * \par 説明:
 * リスナーから見た音源の方位角に連動するAISACコントロールIDを指定します。<br>
 * データ側に設定されているリスナー基準方位角AISACコントロールIDは、本関数によって上書き適用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数を実行すると指定した3D音源に前に設定されていたAISACコントールIDの値の変更によるパラメーター変更は無効化されますが、<br>
 * 再生済みの音声については前に適用されたパラメーターが適用され続けます。<br>
 * 指定する3D音源に紐づく音声が再生されていない状態で本関数を実行することを推奨します。<br>
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetListenerBasedAzimuthAngleAisacControlId(CriAtomEx3dSourceHn ex_3d_source, CriUint16 aisac_control_id);

/*JP
 * \brief リスナー基準仰俯角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	aisac_control_id	リスナー基準仰俯角AISACコントロールID
 * \par 説明:
 * リスナーから見た音源の仰俯角に連動するAISACコントロールIDを指定します。<br>
 * データ側に設定されているリスナー基準仰俯角AISACコントロールIDは、本関数によって上書き適用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数を実行すると指定した3D音源に前に設定されていたAISACコントールIDの値の変更によるパラメーター変更は無効化されますが、<br>
 * 再生済みの音声については前に適用されたパラメーターが適用され続けます。<br>
 * 指定する3D音源に紐づく音声が再生されていない状態で本関数を実行することを推奨します。<br>
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetListenerBasedElevationAngleAisacControlId(CriAtomEx3dSourceHn ex_3d_source, CriUint16 aisac_control_id);

/*JP
 * \brief 音源基準方位角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	aisac_control_id	音源基準方位角AISACコントロールID
 * \par 説明:
 * 音源から見たリスナーの方位角に連動するAISACコントロールIDを指定します。<br>
 * データ側に設定されている音源基準方位角AISACコントロールIDは、本関数によって上書き適用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数を実行すると指定した3D音源に前に設定されていたAISACコントールIDの値の変更によるパラメーター変更は無効化されますが、<br>
 * 再生済みの音声については前に適用されたパラメーターが適用され続けます。<br>
 * 指定する3D音源に紐づく音声が再生されていない状態で本関数を実行することを推奨します。<br>
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetSourceBasedAzimuthAngleAisacControlId(CriAtomEx3dSourceHn ex_3d_source, CriUint16 aisac_control_id);

/*JP
 * \brief 音源基準仰俯角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source		3D音源ハンドル
 * \param[in]	aisac_control_id	音源基準仰俯角AISACコントロールID
 * \par 説明:
 * 音源から見たリスナーの仰俯角に連動するAISACコントロールIDを指定します。<br>
 * データ側に設定されている音源基準仰俯角AISACコントロールIDは、本関数によって上書き適用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * 本関数を実行すると指定した3D音源に前に設定されていたAISACコントールIDの値の変更によるパラメーター変更は無効化されますが、<br>
 * 再生済みの音声については前に適用されたパラメーターが適用され続けます。<br>
 * 指定する3D音源に紐づく音声が再生されていない状態で本関数を実行することを推奨します。<br>
 * \sa criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_SetSourceBasedElevationAngleAisacControlId(CriAtomEx3dSourceHn ex_3d_source, CriUint16 aisac_control_id);

/*JP
 * \brief 3D音源ハンドルに対する3Dリージョンハンドルの設定
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3D音源ハンドルに対して3Dリージョンハンドルを設定します。
 *
 * \attention
 * 同一のExPlayerに設定されている3D音源と3Dリスナーに設定されているリージョンが異なり、
 * かつ3D音源と同じリージョンが設定されている3Dトランシーバーがない場合、音声はミュートされます。<br>
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。
 * <br>
 * \sa criAtomEx3dRegion_Create, criAtomEx3dSource_Update
 */
void CRIAPI criAtomEx3dSource_Set3dRegionHn(CriAtomEx3dSourceHn ex_3d_source, CriAtomEx3dRegionHn ex_3d_region);

/*JP
 * \brief 3D音源に対する位置のランダム化の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source	3D音源ハンドル
 * \param[in]	config			3D音源の位置のランダム化に関するコンフィグ構造体のポインタ
 * \par 説明:
 * 3D音源ハンドルに対して位置のランダム化の設定をします。
 * 本関数を実行すると、再生時に音声の位置が元の位置情報および設定値に従って
 * ランダムに変化します。
 * \par 備考:
 * 第2引数 config に対して NULL を指定すると、設定を解除することが可能です。
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * <br>
 * 本関数は再生中の音声に対してパラメーターは適用されません。<br>
 * 次回再生の音声から適用されます。
 * \sa CriAtomEx3dSourceRandomPositionConfig
 */
void CRIAPI criAtomEx3dSource_SetRandomPositionConfig(
	CriAtomEx3dSourceHn ex_3d_source, const CriAtomEx3dSourceRandomPositionConfig *config);

/*JP
 * \brief 3D音源の位置のランダム化における位置座標算出コールバック関数の登録
 * \param[in]	ex_3d_source	3D音源ハンドル
 * \param[in]	func			3D音源のランダム化における位置座標算出コールバック関数
 * \param[in]	obj				ユーザー指定オブジェクト
 * \par 説明:
 * 3D音源に対して、3D音源の位置のランダム化における位置座標算出コールバック関数を登録します。<br>
 * 登録したコールバック関数は、3D音源の位置のランダム化が有効な場合、
 * 座標算出を行うタイミングで実行されます。
 * \par 備考:
 * 3D音源の位置のランダム化に関するコンフィグ構造体である
 * ::CriAtomEx3dSourceRandomPositionConfig の変数 calculation_type に対して
 * ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_CALLBACK
 * を設定している場合のみ、座標算出時に指定したコールバック関数を実行します。
 * \attention
 * コールバック登録の適用には、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * <br>
 * サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は各3D音源のハンドルにつき、1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。
 * \sa CriAtomEx3dSourceRandomPositionCalculationCbFunc, CriAtomEx3dSourceRandomPositionConfig
 */
void CRIAPI criAtomEx3dSource_SetRandomPositionCalculationCallback(
	CriAtomEx3dSourceHn ex_3d_source, CriAtomEx3dSourceRandomPositionCalculationCbFunc func, void *obj);

/*JP
 * \brief 3D音源の位置のランダム化における位置座標リストの設定
 * \param[in]	ex_3d_source	3D音源ハンドル
 * \param[in]	position_list	位置座標リスト
 * \param[in]	length			リストの要素数
 * \par 説明:
 * 位置座標リストの配列を指定します。<br>
 * 3D音源の位置のランダム化が有効の場合、指定した配列の座標からランダムに座標が決定されます。
 * \par 備考:
 * 位置座標の算出方法として ::CRIATOMEX3DSOURCE_RANDOM_POSITION_CALCULATION_TYPE_LIST
 * を設定している場合のみ、本パラメーターを参照します。<br>
 * その他の算出方法を設定している場合、本パラメーターは無視されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * <br>
 * 本関数に設定した領域は、 ::criAtomEx3dSource_SetRandomPositionList 関数
 * の実行完了後は、内部からは参照されません。<br>
 * 代わりに内部で確保した位置座標リストに保存します。<br>
 * そのため、 ::CriAtomEx3dSourceConfig::random_position_list_max_length を
 * 超える値を設定するとエラーが発生します。
 * \sa CriAtomEx3dSourceRandomPositionConfig, CriAtomEx3dSourceConfig
 */
void CRIAPI criAtomEx3dSource_SetRandomPositionList(
	CriAtomEx3dSourceHn ex_3d_source, const CriAtomExVector *position_list, CriUint32 length);

/*JP
 * \brief 3D音源の位置のランダム化における位置座標結果コールバック関数の登録
 * \param[in]	ex_3d_source	3D音源ハンドル
 * \param[in]	func			3D音源のランダム化における位置座標結果コールバック関数
 * \param[in]	obj				ユーザー指定オブジェクト
 * \par 説明:
 * 3D音源の位置のランダム化における位置座標結果コールバック関数を登録します。<br>
 * 登録したコールバック関数は、3D音源の位置のランダム化が有効な場合、
 * 座標算出が行われた後のタイミングで実行されます。
 * \par 備考:
 * 追従設定が有効の場合、元のソースの移動に応じて本コールバック関数が実行されます。
 * \attention
 * コールバック登録の適用には、::criAtomEx3dSource_Update 関数を呼び出す必要があります。<br>
 * <br>
 * サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされます。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。
 * \sa CriAtomEx3dSourceRandomPositionResultCbFunc
 */
void CRIAPI criAtomEx3dSource_SetRandomPositionResultCallback(
	CriAtomEx3dSourceHn ex_3d_source, CriAtomEx3dSourceRandomPositionResultCbFunc func, void *obj);

/*JP
 * \brief 3D音源ハンドルリストの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config		3D音源ハンドルリスト作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	3D音源ハンドルリスト作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 3D音源ハンドルリストを作成するために必要なワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずに3D音源ハンドルリストを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomEx3dSourceList_Create 関数にセットする必要があります。<br>
 * <br>
 * 3D音源ハンドルリストの作成に必要なワークメモリのサイズは、3D音源ハンドルリストリスト作成用コンフィグ
 * 構造体（ ::CriAtomEx3dSourceListConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx3dSourceList_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx3dSourceList_Create, CriAtomEx3dSourceListConfig
 */
CriSint32 CRIAPI criAtomEx3dSourceList_CalculateWorkSize(const CriAtomEx3dSourceListConfig *config);

/*JP
 * \brief 3D音源ハンドルリストの作成
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config					3D音源ハンドルリスト作成用コンフィグ構造体へのポインタ
 * \param[in]	work					3D音源ハンドルリスト作成用ワーク領域へのポインタ
 * \param[in]	work_size				3D音源ハンドルリスト作成用ワークサイズ
 * \return		CriAtomEx3dSourceListHn	3D音源ハンドルリスト
 * \par 説明:
 * 3D音源ハンドルリスト作成用コンフィグに基づいて、3D音源ハンドルリストを作成します。<br>
 * 作成に成功すると、3D音源ハンドルリストを返します。<br>
 * 3D音源ハンドルリストを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomEx3dSourceList_CalculateWorkSize 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomEx3dSourceList_CalculateWorkSize, criAtomEx3dSourceList_Destroy
 */
CriAtomEx3dSourceListHn CRIAPI criAtomEx3dSourceList_Create(
	const CriAtomEx3dSourceListConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief 3D音源ハンドルリストの破棄
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source_list		3D音源ハンドルリスト
 * \par 説明:
 * 3D音源ハンドルリストを破棄します。<br>
 * 本関数を実行した時点で、3D音源ハンドルリスト作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定した3D音源ハンドルリストも無効になります。<br>
 * 3D音源ハンドルリストをセットしたAtomExプレーヤーで再生している音声がある場合、
 * 本関数を実行する前に、それらの音声を停止するか、そのAtomExプレーヤーを破棄してください。
 * \par 備考:
 * 3D音源ハンドルリストに3D音源ハンドルが追加されている状態で本関数を実行した場合、
 * 追加されていた3D音源ハンドルは自動的に3D音源ハンドルリストから削除されます。
 * \sa criAtomEx3dSourceList_Create
 */
void CRIAPI criAtomEx3dSourceList_Destroy(CriAtomEx3dSourceListHn ex_3d_source_list);

/*JP
 * \brief 3D音源ハンドルリストへの3D音源ハンドルの追加
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source_list		3D音源ハンドルリスト
 * \param[in]	ex_3d_source			3D音源ハンドル
 * \par 説明:
 * 3D音源ハンドルリストに3D音源ハンドルを追加します。<br>
 * 追加したAtomExプレーヤーは3D音源ハンドルリストと関連付けられ、
 * マルチポジショニング再生が可能となります。<br>
 * 追加した3D音源ハンドルを3D音源ハンドルリストから削除する場合は、 ::criAtomEx3dSourceList_Remove 関数または
 * ::criAtomEx3dSourceList_RemoveAll 関数を呼び出してください。<br>
 * \par 備考:
 * 以下の条件に当てはまる3D音源ハンドルは3D音源ハンドルリストに追加することはできません。<br>
 * - 既にAtomExプレーヤーに設定されている
 * - 既に他の3D音源ハンドルリストに追加されている
 * <br>
 * 本関数は再生中のAtomExプレーヤーに取り付けられている3D音源ハンドルリストに対しても使用可能です。<br>
 * \attention 注意:
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx3dSourceList_Remove, criAtomEx3dSourceList_RemoveAll
 */
void CRIAPI criAtomEx3dSourceList_Add(
	CriAtomEx3dSourceListHn ex_3d_source_list, CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源ハンドルリストから3D音源ハンドルの削除
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source_list		3D音源ハンドルリスト
 * \param[in]	ex_3d_source			3D音源ハンドル
 * \par 説明:
 * 3D音源ハンドルリストから追加されている3D音源ハンドルの内、指定した3D音源ハンドルを削除します。<br>
 * 3D音源ハンドルリストから全ての3D音源ハンドルを削除したい場合は、 ::criAtomEx3dSourceList_Remove 関数を
 * 呼び出してください。<br>
 * 3D音源ハンドルリストに3D音源ハンドルを追加したい場合は、 ::criAtomEx3dSourceList_Add 関数を呼び出してください。 
 * \par 備考:
 * 本関数は再生中のAtomExプレーヤーに取り付けられている3D音源ハンドルリストに対しても使用可能です。<br>
 * \attention 注意:
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx3dSourceList_RemoveAll
 */
void CRIAPI criAtomEx3dSourceList_Remove(
	CriAtomEx3dSourceListHn ex_3d_source_list, CriAtomEx3dSourceHn ex_3d_source);

/*JP
 * \brief 3D音源ハンドルリストから3D音源ハンドルの全削除
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_source_list		3D音源ハンドルリスト
 * \par 説明:
 * 3D音源ハンドルリストから追加されている全ての3D音源ハンドルを削除します。<br>
 * 3D音源ハンドルリストから特定の3D音源ハンドルを削除したい場合は、 ::criAtomEx3dSourceList_Remove 関数を
 * 呼び出してください。<br>
 * 3D音源ハンドルリストに3D音源ハンドルを追加したい場合は、 ::criAtomEx3dSourceList_Add 関数を呼び出してください。 
 * \par 備考:
 * 本関数は再生中のAtomExプレーヤーに取り付けられている3D音源ハンドルリストに対しても使用可能です。<br>
 * \attention 注意:
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx3dSourceList_Remove
 */
void CRIAPI criAtomEx3dSourceList_RemoveAll(CriAtomEx3dSourceListHn ex_3d_source_list);

/*JP
 * \brief 3Dリスナーハンドルの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config		3Dリスナーハンドル作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	3Dリスナーハンドル作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 3Dリスナーハンドルを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずに3Dリスナーハンドルを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomEx3dListener_Create 関数にセットする必要があります。<br>
 * <br>
 * 3Dリスナーハンドルの作成に必要なワークメモリのサイズは、3Dリスナーハンドル作成用コンフィグ
 * 構造体（ ::CriAtomEx3dListenerConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx3dListener_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx3dListener_Create, CriAtomEx3dListenerConfig
 */
CriSint32 CRIAPI criAtomEx3dListener_CalculateWorkSize(const CriAtomEx3dListenerConfig *config);

/* 3Dリスナーの作成 */
/*JP
 * \brief 3Dリスナーハンドルの作成
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config				3Dリスナーハンドル作成用コンフィグ構造体へのポインタ
 * \param[in]	work				3Dリスナーハンドル作成用ワーク領域へのポインタ
 * \param[in]	work_size			3Dリスナーハンドル作成用ワークサイズ
 * \return		CriAtomEx3dListenerHn	3Dリスナーハンドル
 * \par 説明:
 * 3Dリスナーハンドル作成用コンフィグに基づいて、3Dリスナーハンドルを作成します。<br>
 * 作成に成功すると、3Dリスナーハンドルを返します。<br>
 * 3Dリスナーハンドルを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomEx3dListener_CalculateWorkSize 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomEx3dListener_CalculateWorkSize, criAtomEx3dListener_Destroy
 */
CriAtomEx3dListenerHn CRIAPI criAtomEx3dListener_Create(
	const CriAtomEx3dListenerConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief 3Dリスナーハンドルの破棄
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \par 説明:
 * 3Dリスナーハンドルを破棄します。<br>
 * 本関数を実行した時点で、3Dリスナーハンドル作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定した3Dリスナーハンドルも無効になります。<br>
 * 3DリスナーハンドルをセットしたAtomExプレーヤーで再生している音声がある場合、
 * 本関数を実行する前に、それらの音声を停止するか、そのAtomExプレーヤーを破棄してください。
 * \sa criAtomEx3dListener_Create
 */
void CRIAPI criAtomEx3dListener_Destroy(CriAtomEx3dListenerHn ex_3d_listener);

/*JP
 * \brief 3Dリスナーの更新
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \par 説明:
 * 3Dリスナーに設定されているパラメーターを使用して、3Dリスナーを更新します。<br>
 * 本関数では、3Dリスナーに設定されている全てのパラメーターを更新します。
 * パラメーターをひとつ変更する度に本関数にて更新処理を行うよりも、
 * 複数のパラメーターを変更してから更新処理を行った方が効率的です。
 * \par 例:
 * \code
 * CriAtomExVector pos;
 * CriAtomExVector vel;
 * 
 * // Set position
 * pos.x = 0.0f
 * pos.y = 0.0f
 * pos.z = 1.0f
 * criAtomEx3dListener_SetPosition(source, &pos);
 * // Set velocity
 * vel.x = 1.0f
 * vel.y = 0.0f
 * vel.z = 0.0f
 * criAtomEx3dListener_SetVelocity(source, &vel);
 * 
 * // Update source parameters
 * criAtomEx3dListener_Update(source);
 * \endcode
 * \attention
 * 本関数はAtomExプレーヤーのパラメーター更新（::criAtomExPlayer_UpdateAll, criAtomExPlayer_Update）
 * とは独立して動作します。3Dリスナーのパラメーターを変更した際は、本関数にて更新処理を行ってください。
 */
void CRIAPI criAtomEx3dListener_Update(CriAtomEx3dListenerHn ex_3d_listener);

/*JP
 * \brief 3D音源パラメーターの初期化
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \par 説明:
 * 3Dリスナーに設定されているパラメーターをクリアし、初期値に戻します。<br>
 * \attention
 * クリアしたパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_ResetParameters(CriAtomEx3dListenerHn ex_3d_listener);

/*JP
 * \brief 3Dリスナーの位置の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \param[in]	position			位置ベクトル
 * \par 説明:
 * 3Dリスナーの位置を設定します。<br>
 * 位置は、距離減衰、および定位計算に使用されます。<br>
 * 位置は、3次元ベクトルで指定します。<br>
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * データ側には位置は設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_SetPosition(CriAtomEx3dListenerHn ex_3d_listener, const CriAtomExVector *position);

/*JP
 * \brief 3Dリスナーの位置の取得
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル

 * \par 説明:
 * 3Dリスナーの位置を取得します。<br>
 * 位置は、3次元ベクトルで取得します。<br>
 */
CriAtomExVector CRIAPI criAtomEx3dListener_GetPosition(CriAtomEx3dListenerHn ex_3d_listener);

/*JP
 * \brief 3Dリスナーの速度の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \param[in]	velocity			速度ベクトル
 * \par 説明:
 * 3Dリスナーの速度を設定します。<br>
 * 速度は、ドップラー効果の計算に使用されます。<br>
 * 速度は、3次元ベクトルで指定します。速度の単位は、1秒あたりの移動距離です。
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * データ側には速度は設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_SetVelocity(CriAtomEx3dListenerHn ex_3d_listener, const CriAtomExVector *velocity);

/*JP
 * \brief 3Dリスナーの向きの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \param[in]	front				前方ベクトル
 * \param[in]	top				上方ベクトル
 * \par 説明:
 * 3Dリスナーの向きを前方ベクトルと上方ベクトルで設定します。<br>
 * 向きは、3次元ベクトルで指定します。設定された向きベクトルは、ライブラリ内部で正規化して使用されます。<br>
 * デフォルト値以下のとおりです。<br>
 * 	- 前方ベクトル：(0.0f, 0.0f, 1.0f)
 * 	- 上方ベクトル：(0.0f, 1.0f, 0.0f)
 * 	
 * データ側にはリスナーの向きは設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_SetOrientation(CriAtomEx3dListenerHn ex_3d_listener, const CriAtomExVector *front, const CriAtomExVector *top);

/*JP
 * \brief 3Dリスナーのドップラー倍率の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \param[in]	doppler_multiplier	ドップラー倍率
 * \par 説明:
 * 3Dリスナーのドップラー倍率を設定します。この倍率はドップラー効果の計算に使用されます。<br>
 * 例えば、doppler_multiplierに10.0fを指定すると、ドップラー効果が通常の10倍になります。<br>
 * doppler_multiplierには0.0f以上の値を指定します。
 * デフォルト値は1.0fです。<br>
 * データ側にはリスナーのドップラー倍率は設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_SetDopplerMultiplier(CriAtomEx3dListenerHn ex_3d_listener, CriFloat32 doppler_multiplier);

/*JP
 * \brief 3Dリスナーの注目点の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener		3Dリスナーハンドル
 * \param[in]	focus_point			注目点ベクトル
 * \par 説明:
 * 3Dリスナーの注目点を設定します。<br>
 * 注目点は、3Dポジショニングを行うにあたって、
 * 注目点を設定すると、リスナーの位置と注目点の間が直線で結ばれ、その直線上でマイクを移動させることができるようになります。<br>
 * 例えば、リスナーはカメラと常に同期させておき、主要キャラクタの位置に注目点を設定することで、状況に応じて、客観的か主観的かを柔軟に表現／調整するような使い方ができます。<br>
 * なお、リスナーの位置と注目点の間で移動できるマイクは、現実世界のマイクと異なり、距離センサ（距離減衰計算用）と方向センサ（定位計算用）を分離しています。<br>
 * これらを独立して操作することで、例えば「主役キャラに注目するので、距離減衰はキャラ位置基準で行いたい」「定位は画面の見た目に合わせたいため、定位計算はカメラ位置基準で行いたい」という表現を行うことができます。<br>
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。距離センサや方向センサのフォーカスレベルを設定しない状況では、注目点を設定する必要はありません。その場合、従来どおり、全ての3Dポジショニング計算をリスナー位置基準で行います。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update, criAtomEx3dListener_SetDistanceFocusLevel, criAtomEx3dListener_SetDirectionFocusLevel
 */
void CRIAPI criAtomEx3dListener_SetFocusPoint(CriAtomEx3dListenerHn ex_3d_listener, const CriAtomExVector *focus_point);

/*JP
 * \brief 距離センサのフォーカスレベルの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener			3Dリスナーハンドル
 * \param[in]	distance_focus_level	距離センサのフォーカスレベル
 * \par 説明:
 * 距離センサのフォーカスレベルを設定します。<br>
 * 距離センサは、3Dポジショニング計算のうち、距離減衰計算の基準となる位置を表します。定位を無視して距離減衰のかかり具合のみを感知するマイク、といった扱いです。<br>
 * フォーカスレベルは、注目点に対してどれだけセンサ（マイク）を近づけるかを表します。センサ（マイク）は、リスナー位置と注目点の間を結んだ直線上で動かすことができ、0.0fがリスナー位置、1.0fが注目点と同じ位置になります。<br>
 * 例えば、距離センサのフォーカスレベルを1.0f、方向センサのフォーカスレベルを0.0fとすることで、注目点を基準に距離減衰を適用し、リスナー位置を基準に定位を決定します。<br>
 * デフォルト値は0.0fです。距離センサや方向センサのフォーカスレベルを設定しない状況では、従来どおり、全ての3Dポジショニング計算をリスナー位置基準で行います。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update, criAtomEx3dListener_SetFocusPoint, criAtomEx3dListener_SetDirectionFocusLevel
 */
void CRIAPI criAtomEx3dListener_SetDistanceFocusLevel(CriAtomEx3dListenerHn ex_3d_listener, CriFloat32 distance_focus_level);

/*JP
 * \brief 方向センサのフォーカスレベルの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_listener			3Dリスナーハンドル
 * \param[in]	direction_focus_level	方向センサのフォーカスレベル
 * \par 説明:
 * 方向センサのフォーカスレベルを設定します。<br>
 * 方向センサは、3Dポジショニング計算のうち、定位計算の基準となる位置を表します。距離減衰を無視して定位のみを感知するマイク、といった扱いです。<br>
 * 方向センサの向きについては、リスナーの向き（::criAtomEx3dListener_SetOrientation 関数で設定）をそのまま使用します。<br>
 * フォーカスレベルは、注目点に対してどれだけセンサ（マイク）を近づけるかを表します。センサ（マイク）は、リスナー位置と注目点の間を結んだ直線上で動かすことができ、0.0fがリスナー位置、1.0fが注目点と同じ位置になります。<br>
 * 例えば、距離センサのフォーカスレベルを1.0f、方向センサのフォーカスレベルを0.0fとすることで、注目点を基準に距離減衰を適用し、リスナー位置を基準に定位を決定します。<br>
 * デフォルト値は0.0fです。距離センサや方向センサのフォーカスレベルを設定しない状況では、従来どおり、全ての3Dポジショニング計算をリスナー位置基準で行います。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dListener_Update, criAtomEx3dListener_SetFocusPoint, criAtomEx3dListener_SetDistanceFocusLevel
 */
void CRIAPI criAtomEx3dListener_SetDirectionFocusLevel(CriAtomEx3dListenerHn ex_3d_listener, CriFloat32 direction_focus_level);

/*JP
 * \brief パンタイプがパン3Dの時に、距離減衰AISACと角度AISACコントロール値を音源に反映するか設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	flag	AISACコントロール値を適用するか？（CRI_TRUE:する、CRI_FALSE:しない）
 * \par 説明:
 * 引数の flag に CRI_TRUE を設定すると、パンタイプがパン3Dの音源を再生する際に、3Dソースと3Dリスナーハンドルが<br>
 * 設定されているときは常に距離減衰AISACと角度AISACの計算結果が音源に適用されます。
 * \attention
 * Atomライブラリのデフォルトでは、パン3D音源に対して距離減衰AISACと角度AISACの計算結果は適用されません。<br>
 * 本関数はCRI Atomライブラリ Ver.2.17.19 以前の動作との互換の為に追加されました。
 * <br>
 * \sa criAtomEx_IsEnableCalculationAisacControlFrom3dPosition
 */
void CRIAPI criAtomEx_EnableCalculationAisacControlFrom3dPosition(CriBool flag);

/*JP
 * \brief パンタイプがパン3Dの時に、距離減衰AISACと角度AISACコントロール値を音源に反映しているか取得
 * \ingroup ATOMEXLIB_3D
 * \retval	CRI_TRUE	計算結果を適用している
 * \retval	CRI_FALSE	計算結果を適用していない
 * \par 説明:
 * パンタイプがパン3Dの音源を再生する際に、3Dソースと3Dリスナーハンドルが<br>
 * 設定されているときに距離減衰AISACと角度AISACの計算結果が音源に適用されているか否かを取得します。
 * \attention
 * Atomライブラリのデフォルトでは、パン3D音源に対して距離減衰AISACと角度AISACの計算結果は適用されません。<br>
 * 本関数はCRI Atomライブラリ Ver.2.17.19 以前の動作との互換の為に追加されました。
 * <br>
 * \sa criAtomEx_EnableCalculationAisacControlFrom3dPosition
 */
CriBool CRIAPI criAtomEx_IsEnableCalculationAisacControlFrom3dPosition(void);

/*JP
 * \brief 3Dリスナーハンドルに対する3Dリージョンハンドルの設定
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dリスナーハンドルに対して3Dリージョンハンドルを設定します。
 *
 * \attention
 * 同一のExPlayerに設定されている3D音源と3Dリスナーに設定されているリージョンが異なり、
 * かつ3D音源と同じリージョンが設定されている3Dトランシーバーがなsい場合、音声はミュートされます。<br>
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dListener_Update 関数を呼び出す必要があります。
 * <br>
 * \sa criAtomEx3dRegion_Create, criAtomEx3dListener_Update
 */
void CRIAPI criAtomEx3dListener_Set3dRegionHn(CriAtomEx3dListenerHn ex_3d_listener, CriAtomEx3dRegionHn ex_3d_region);

/*JP
 * \brief 3Dリージョンハンドルの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config		3Dリージョンハンドル作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	3Dリージョンハンドル作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 3Dリージョンハンドルを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずに3Dリージョンハンドルを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomEx3dRegion_Create 関数にセットする必要があります。<br>
 * <br>
 * 3Dリージョンハンドルの作成に必要なワークメモリのサイズは、3Dリージョンハンドル作成用コンフィグ
 * 構造体（ ::CriAtomEx3dRegionConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx3dRegion_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx3dRegion_Create, CriAtomEx3dRegionConfig
 */
CriSint32 CRIAPI criAtomEx3dRegion_CalculateWorkSize(const CriAtomEx3dRegionConfig *config);

/*JP
 * \brief 3Dリージョンハンドルの作成
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config				3Dリージョンハンドル作成用コンフィグ構造体へのポインタ
 * \param[in]	work				3Dリージョンハンドル作成用ワーク領域へのポインタ
 * \param[in]	work_size			3Dリージョンハンドル作成用ワークサイズ
 * \return		criAtomEx3dRegionHn	3Dリージョンハンドル
 * \par 説明:
 * 3Dリージョンハンドル作成用コンフィグに基づいて、3Dリージョンハンドルを作成します。<br>
 * 作成に成功すると、3Dリージョンハンドルを返します。<br>
 * 3Dリージョンハンドルを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomEx3dRegion_CalculateWorkSize
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomEx3dRegion_CalculateWorkSize, criAtomEx3dRegion_Destroy
 */
CriAtomEx3dRegionHn CRIAPI criAtomEx3dRegion_Create(
	const CriAtomEx3dRegionConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief 3Dリージョンハンドルの破棄
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_region		3Dリージョンハンドル
 * \par 説明:
 * 3Dリージョンハンドルを破棄します。<br>
 * 本関数を実行した時点で、3Dリージョンハンドル作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定した3Dリージョンハンドルも無効になります。<br>
 * \sa criAtomEx3dRegion_Create
 */
void CRIAPI criAtomEx3dRegion_Destroy(CriAtomEx3dRegionHn ex_3d_region);

/*JP
 * \brief 3Dトランシーバーハンドルの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config		3Dトランシーバーハンドル作成用コンフィグ構造体へのポインタ
 * \return		CriSint32	3Dトランシーバーハンドル作成用ワークサイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * 3Dトランシーバーハンドルを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずに3Dトランシーバーハンドルを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomEx3dTransceiver_Create 関数にセットする必要があります。<br>
 * <br>
 * 3Dトランシーバーハンドルの作成に必要なワークメモリのサイズは、3Dトランシーバーハンドル作成用コンフィグ
 * 構造体（ ::CriAtomEx3dTransceiverConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomEx3dTransceiver_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx3dTransceiver_Create, CriAtomEx3dTransceiverConfig
 */
CriSint32 CRIAPI criAtomEx3dTransceiver_CalculateWorkSize(const CriAtomEx3dTransceiverConfig *config);

/*JP
 * \brief 3Dトランシーバーハンドルの作成
 * \ingroup ATOMEXLIB_3D
 * \param[in]	config				3Dトランシーバーハンドル作成用コンフィグ構造体へのポインタ
 * \param[in]	work				3Dトランシーバーハンドル作成用ワーク領域へのポインタ
 * \param[in]	work_size			3Dトランシーバーハンドル作成用ワークサイズ
 * \return		criAtomEx3dTransceiverHn	3Dトランシーバーハンドル
 * \par 説明:
 * 3Dトランシーバーハンドル作成用コンフィグに基づいて、3Dトランシーバーハンドルを作成します。<br>
 * 作成に成功すると、3Dトランシーバーハンドルを返します。<br>
 * 3Dトランシーバーハンドルを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomEx3dTransceiver_CalculateWorkSize
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomEx3dTransceiver_CalculateWorkSize, criAtomEx3dTransceiver_Destroy
 */
CriAtomEx3dTransceiverHn CRIAPI criAtomEx3dTransceiver_Create(const CriAtomEx3dTransceiverConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief 3Dトランシーバーハンドルの破棄
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \par 説明:
 * 3Dトランシーバーハンドルを破棄します。<br>
 * 本関数を実行した時点で、3Dトランシーバーハンドル作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定した3Dトランシーバーハンドルも無効になります。<br>
 * \sa criAtomEx3dTransceiver_Create
 */
void CRIAPI criAtomEx3dTransceiver_Destroy(CriAtomEx3dTransceiverHn ex_3d_transceiver);

/*JP
 * \brief 3Dトランシーバーの更新
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \par 説明:
 * 3Dトランシーバーに設定されているパラメーターを使用して、3Dトランシーバーを更新します。<br>
 * 本関数では、3Dトランシーバーに設定されている全てのパラメーターを更新します。
 * パラメーターをひとつ変更する度に本関数にて更新処理を行うよりも、
 * 複数のパラメーターを変更してから更新処理を行った方が効率的です。
 * \par 例:
 * \code
 * CriAtomExVector in_pos, out_pos;
 *
 * // Set input position
 * in_pos.x = 0.0f
 * in_pos.y = 0.0f
 * in_pos.z = 1.0f
 * criAtomEx3dTransceiver_SetInputPosition(transceiver, &in_pos);
 *
 * // Set output position
 * out_pos.x = 0.0f
 * out_pos.y = 0.0f
 * out_pos.z = 1.0f
 * criAtomEx3dTransceiver_SetOutputPosition(transceiver, &out_pos);
 *
 * // Update transceiver parameters
 * criAtomEx3dTransceiver_Update(transceiver);
 * \endcode
 * \attention
 * 本関数はAtomExプレーヤーのパラメーター更新（::criAtomExPlayer_UpdateAll, criAtomExPlayer_Update）
 * とは独立して動作します。3Dトランシーバーのパラメーターを変更した際は、本関数にて更新処理を行ってください。
 */
void CRIAPI criAtomEx3dTransceiver_Update(CriAtomEx3dTransceiverHn ex_3d_transceiver);

/*JP
 * \brief 3Dトランシーバー入力の位置の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	position			位置ベクトル
 * \par 説明:
 * 3Dトランシーバー入力の位置を設定します。<br>
 * 位置は、距離減衰、および定位計算に使用されます。<br>
 * 位置は、3次元ベクトルで指定します。<br>
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetInputPosition(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriAtomExVector *position);

/*JP
 * \brief 3Dトランシーバー出力の位置の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	position			位置ベクトル
 * \par 説明:
 * 3Dトランシーバー出力の位置を設定します。<br>
 * 位置は、距離減衰、および定位計算に使用されます。<br>
 * 位置は、3次元ベクトルで指定します。<br>
 * デフォルト値は(0.0f, 0.0f, 0.0f)です。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputPosition(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriAtomExVector *position);

/*JP
 * \brief 3Dトランシーバー入力の向きの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	front				前方ベクトル
 * \param[in]	top					上方ベクトル
 * \par 説明:
 * 3Dトランシーバーの向きを前方ベクトルと上方ベクトルで設定します。<br>
 * 向きは、3次元ベクトルで指定します。設定された向きベクトルは、ライブラリ内部で正規化して使用されます。<br>
 * デフォルト値以下のとおりです。<br>
 * 	- 前方ベクトル：(0.0f, 0.0f, 1.0f)
 * 	- 上方ベクトル：(0.0f, 1.0f, 0.0f)
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetInputOrientation(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriAtomExVector *front, const CriAtomExVector *top);

/*JP
 * \brief 3Dトランシーバー出力の向きの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	front				前方ベクトル
 * \param[in]	top					上方ベクトル
 * \par 説明:
 * 3Dトランシーバー出力の向きを設定します。<br>
 * 本関数で設定した向きは、サウンドコーンの向きとして設定されます。<br>
 * サウンドコーンは、3Dトランシーバーから音が発生する方向を表し、音の指向性の表現に使用されます。<br>
 * サウンドコーンの向きは、3次元ベクトルで指定します。設定された向きベクトルは、ライブラリ内部で正規化して使用されます。<br>
 * デフォルト値以下のとおりです。<br>
 * 	- 前方ベクトル：(0.0f, 0.0f, 1.0f)
 * 	- 上方ベクトル：(0.0f, 1.0f, 0.0f)
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_SetOutputConeParameter, criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputOrientation(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriAtomExVector *front, const CriAtomExVector *top);

/*JP
 * \brief 3Dトランシーバー出力のサウンドコーンパラメーターの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	inside_angle		サウンドコーンのインサイドアングル
 * \param[in]	outside_angle		サウンドコーンのアウトサイドアングル
 * \param[in]	outside_volume		サウンドコーンのアウトサイドボリューム
 * \par 説明:
 * 3Dトランシーバー出力のサウンドコーンパラメーターを設定します。<br>
 * サウンドコーンは、3Dトランシーバーから音が発生する方向を表し、音の指向性の表現に使用されます。<br>
 * サウンドコーンは、内側コーン、外側コーンで構成されます。インサイドアングルは内側コーンの角度、
 * アウトサイドアングルは外側コーンの角度、アウトサイドボリュームは外側コーンの角度以上の方向での音量をそれぞれ表します。<br>
 * 内側コーンの角度より小さい角度の方向では、コーンによる減衰を受けません。
 * 内側コーンと外側コーンの間の方向では、徐々にアウトサイドボリュームまで減衰します。<br>
 * インサイドアングルおよびアウトサイドアングルは、0.0f〜360.0fを度で指定します。<br>
 * アウトサイドボリュームは、0.0f〜1.0fを振幅に対する倍率で指定します（単位はデシベルではありません）。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりであり、コーンによる減衰は行われません。<br>
 * 	- インサイドアングル：360.0f
 * 	- アウトサイドアングル：360.0f
 * 	- アウトサイドボリューム：0.0f
 * 	
 * デフォルト値は、::criAtomEx3dTransceiver_ChangeDefaultConeParameter 関数にて変更可能です。<br>
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputConeParameter(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 inside_angle, CriFloat32 outside_angle, CriFloat32 outside_volume);

/*JP
 * \brief 3Dトランシーバーの最小距離／最大距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	min_attenuation_distance		最小距離
 * \param[in]	max_attenuation_distance		最大距離
 * \par 説明:
 * 3Dトランシーバーの最小距離／最大距離を設定します。<br>
 * 最小距離は、これ以上音量が大きくならない距離を表します。最大距離は、最小音量になる距離を表します。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 最小距離：0.0f
 * 	- 最大距離：0.0f
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputMinMaxAttenuationDistance(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 min_attenuation_distance, CriFloat32 max_attenuation_distance);

/*JP
 * \brief 3Dトランシーバー出力のインテリアパンニング境界距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	transceiver_radius		3Dトランシーバーの半径
 * \param[in]	interior_distance	インテリア距離
 * \par 説明:
 * 3Dトランシーバー出力のインテリアパンニング境界距離の設定をします。<br>
 * 3Dトランシーバー出力の半径は、3Dトランシーバー出力を球としたときの半径です。<br>
 * インテリア距離は、インテリアパンニング適用される3Dトランシーバーの半径からの距離です。<br>
 * 3Dトランシーバーの半径内では、インテリアパンニング適用されますが、インテリア距離が0.0と扱われるため、
 * 全てのスピーカーから同じ音量で音声が再生されます。<br>
 * インテリア距離内では、インテリアパンニング適用されます。<br>
 * インテリア距離外では、インテリアパンニング適用されず、3Dトランシーバー位置に最も近い1つ、
 * または2つのスピーカーから音声が再生されます。<br>
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 3Dトランシーバーの半径：0.0f
 * 	- インテリア距離：0.0f（3Dトランシーバーの最小距離に依存）
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputInteriorPanField(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 transceiver_radius, CriFloat32 interior_distance);

/*JP
 * \brief 3Dトランシーバー入力のクロスフェード境界距離の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	direct_audio_radius		直接音領域の半径
 * \param[in]	crossfade_distance	クロスフェード距離
 * \par 説明:
 * 3Dトランシーバー入力のクロスフェード境界距離の設定をします。<br>
 * 直接音領域の半径内では、3Dトランシーバーの出力からの音声は再生されず、3D音源からの音声のみが再生されます。<br>
 * クロスフェード距離は、3Dトランシーバー出力と3D音源からの音声のクロスフェードが適用される直接音領域からの距離です。<br>
 * 直接音領域では、クロスフェードの割合が音源からの音声=1、3Dトランシーバーからの音声=0になるので、
 * 3Dトランシーバー出力からの音声は聞こえなくなり、音源からの音声のみが再生されます。<br>
 * クロスフェード距離内では、リスナーの位置に応じてクロスフェードが適用されます。<br>
 * クロスフェード距離外では、3D音源からの音声は聞こえず、3Dトランシーバー出力からの音声のみが聞こえるようになります。
 * ライブラリ初期化時のデフォルト値は以下のとおりです。<br>
 * 	- 直接音領域の半径：0.0f
 * 	- クロスフェード距離：0.0f
 * 	
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetInputCrossFadeField(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 direct_audio_radius, CriFloat32 crossfade_distance);

/*JP
 * \brief 3Dトランシーバー出力のボリュームの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver		3Dトランシーバーハンドル
 * \param[in]	volume				ボリューム
 * \par 説明:
 * 3Dトランシーバー出力のボリュームを設定します。<br>
 * 3Dトランシーバー出力のボリュームは、定位に関わる音量（L,R,SL,SR）にのみ影響し、LFEやセンターへの出力レベルには影響しません。<br>
 * ボリューム値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * ライブラリ初期化時のデフォルト値は1.0fです。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetOutputVolume(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 volume);

/*JP
 * \brief 3DトランシーバーにAISACを取り付ける
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	global_aisac_name	取り付けるグローバルAISAC名
 * \par 説明:
 * 3DトランシーバーにAISACをアタッチ（取り付け）します。
 * AISACをアタッチすることにより、キューやトラックにAISACを設定していなくても、AISACの効果を得ることができます。<br>
 * <br>
 * AISACのアタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのアタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \par 備考:
 * 全体設定（ACFファイル）に含まれるグローバルAISACのみ、アタッチ可能です。<br>
 * AISACの効果を得るには、キューやトラックに設定されているAISACと同様に、該当するAISACコントロール値を設定する必要があります。<br>
 * \attention
 * キューやトラックに「AISACコントロール値を変更するAISAC」が設定されていたとしても、
 * その適用結果のAISACコントロール値は、3DトランシーバーにアタッチしたAISACには影響しません。<br>
 * 現在、「オートモジュレーション」や「ランダム」といったコントロールタイプのAISACのアタッチには対応しておりません。<br>
 * 現在、3DトランシーバーにアタッチできるAISACの最大数は、8個固定です。
 * \sa criAtomEx3dTransceiver_DetachAisac
 */
void CRIAPI criAtomEx3dTransceiver_AttachAisac(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriChar8* global_aisac_name);

/*JP
 * \brief 3DトランシーバーからAISACを取り外す
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	global_aisac_name	取り外すグローバルAISAC名
 * \par 説明:
 * 3DトランシーバーからAISACをデタッチ（取り外し）します。<br>
 * <br>
 * AISACのデタッチに失敗した場合、関数内でエラーコールバックが発生します。<br>
 * AISACのデタッチに失敗した理由については、エラーコールバックのメッセージを確認してください。<br>
 * \sa criAtomEx3dTransceiver_AttachAisac
 */
void CRIAPI criAtomEx3dTransceiver_DetachAisac(CriAtomEx3dTransceiverHn ex_3d_transceiver, const CriChar8* global_aisac_name);

/*JP
 * \brief 角度AISACコントロール値の最大変化量の設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	max_delta			角度AISACコントロール値の最大変化量
 * \par 説明:
 * 角度AISACによりAISACコントロール値が変更される際の、最大変化量を設定します。<br>
 * 最大変化量を低めに変更すると、3Dトランシーバーとリスナー間の相対角度が急激に変わった場合でも、
 * 角度AISACによるAISACコントロール値の変化をスムーズにすることができます。<br>
 * 例えば、(0.5f / 30.0f)を設定すると、角度が0度→180度に変化した場合に、30フレームかけて変化するような変化量となります。<br>
 * デフォルト値は1.0f（制限なし）です。
 * データ側では本パラメーターは設定できないため、常に本関数での設定値が使用されます。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * 本関数で設定している最大変化量は、定位角度を元に計算されている、角度AISACコントロール値の変化にのみ適用されます。
 * 定位角度自体には影響はありません。
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetMaxAngleAisacDelta(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriFloat32 max_delta);

/*JP
 * \brief 距離AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	aisac_control_id	距離AISACコントロールID
 * \par 説明:
 * 最小距離、最大距離間の距離減衰に連動するAISACコントロールIDを指定します。<br>
 * 本関数でAISACコントロールIDを設定した場合、デフォルトの距離減衰は無効になります。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetDistanceAisacControlId(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriUint16 aisac_control_id);

/*JP
 * \brief リスナー基準方位角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	aisac_control_id	リスナー基準方位角AISACコントロールID
 * \par 説明:
 * リスナーから見た3Dトランシーバーの方位角に連動するAISACコントロールIDを指定します。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetListenerBasedAzimuthAngleAisacControlId(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriUint16 aisac_control_id);

/*JP
 * \brief リスナー基準仰俯角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	aisac_control_id	リスナー基準仰俯角AISACコントロールID
 * \par 説明:
 * リスナーから見た3Dトランシーバーの仰俯角に連動するAISACコントロールIDを指定します。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetListenerBasedElevationAngleAisacControlId(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriUint16 aisac_control_id);

/*JP
 * \brief 3Dトランシーバー出力基準方位角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	aisac_control_id	3Dトランシーバー基準方位角AISACコントロールID
 * \par 説明:
 * 3Dトランシーバー出力の位置から見たリスナーの方位角に連動するAISACコントロールIDを指定します。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetTransceiverOutputBasedAzimuthAngleAisacControlId(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriUint16 aisac_control_id);

/*JP
 * \brief 3Dトランシーバー出力基準仰俯角AISACコントロールIDの設定
 * \ingroup ATOMEXLIB_3D
 * \param[in]	ex_3d_transceiver	3Dトランシーバーハンドル
 * \param[in]	aisac_control_id	3Dトランシーバー基準仰俯角AISACコントロールID
 * \par 説明:
 * 3Dトランシーバー出力の位置から見たリスナーの仰俯角に連動するAISACコントロールIDを指定します。<br>
 * \attention
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。<br>
 * \sa criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_SetTransceiverOutputBasedElevationAngleAisacControlId(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriUint16 aisac_control_id);

/*JP
 * \brief 3Dトランシーバーハンドルに対する3Dリージョンハンドルの設定
 * \ingroup ATOMEXLIB_3D
 * \par 説明:
 * 3Dトランシーバーハンドルに対して3Dリージョンハンドルを設定します。
 *
 * \attention
 * 同一のExPlayerに設定されている3D音源と3Dリスナーに設定されているリージョンが異なり、
 * かつ3D音源と同じリージョンが設定されている3Dトランシーバーがない場合、音声はミュートされます。<br>
 * 設定したパラメーターを実際に適用するには、::criAtomEx3dTransceiver_Update 関数を呼び出す必要があります。
 * <br>
 * \sa criAtomEx3dRegion_Create, criAtomEx3dTransceiver_Update
 */
void CRIAPI criAtomEx3dTransceiver_Set3dRegionHn(CriAtomEx3dTransceiverHn ex_3d_transceiver, CriAtomEx3dRegionHn ex_3d_region);

/*==========================================================================
 *      CRI AtomEx DSP API
 *=========================================================================*/

/*JP
 * \brief DSPのデタッチ
 * \ingroup ATOMEXLIB_DSP
 * \param[in]	pool		ボイスプールハンドル
 * \par 説明:
 * ボイスプールに追加したDSPを取り外します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \attention 備考:
 * 現在、本関数を使用できないプラットフォームが存在します。<br>
 */
void CRIAPI criAtomExVoicePool_DetachDsp(CriAtomExVoicePoolHn pool);

/*JP
 * \brief ピッチシフタDSPアタッチ用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_DSP
 * \param[in]	config		アタッチ用コンフィグ
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * ピッチシフタDSPのアタッチに必要なワーク領域サイズを計算します。
 * \sa criAtomExVoicePool_AttachDspPitchShifter
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForDspPitchShifter(
	const CriAtomExDspPitchShifterConfig *config);

/*JP
 * \brief ピッチシフタDSPのアタッチ
 * \ingroup ATOMEXLIB_DSP
 * \param[in]	pool		アタッチ先ボイスプールハンドル
 * \param[in]	config		アタッチ用コンフィグ
 * \param[in]	work		アタッチ用ワーク領域へのポインタ
 * \param[in]	work_size	アタッチ用ワーク領域のサイズ
 * \par 説明:
 * ボイスプールにピッチシフタDSPを追加します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \attention 備考:
 * 現在、本関数を使用できないプラットフォームが存在します。<br>
 */
void CRIAPI criAtomExVoicePool_AttachDspPitchShifter(CriAtomExVoicePoolHn pool,
	const CriAtomExDspPitchShifterConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief タイムストレッチDSPアタッチ用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_DSP
 * \param[in]	config		アタッチ用コンフィグ
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * タイムストレッチDSPのアタッチに必要なワーク領域サイズを計算します。
 * \sa criAtomExVoicePool_AttachDspTimeStretch
 */
CriSint32 CRIAPI criAtomExVoicePool_CalculateWorkSizeForDspTimeStretch(
	const CriAtomExDspTimeStretchConfig *config);

/*JP
 * \brief タイムストレッチDSPのアタッチ
 * \ingroup ATOMEXLIB_DSP
 * \param[in]	pool		アタッチ先ボイスプールハンドル
 * \param[in]	config		アタッチ用コンフィグ
 * \param[in]	work		アタッチ用ワーク領域へのポインタ
 * \param[in]	work_size	アタッチ用ワーク領域のサイズ
 * \par 説明:
 * ボイスプールにタイムストレッチDSPを追加します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \attention 備考:
 * 現在、本関数を使用できないプラットフォームが存在します。<br>
 */
void CRIAPI criAtomExVoicePool_AttachDspTimeStretch(CriAtomExVoicePoolHn pool,
	const CriAtomExDspTimeStretchConfig *config, void *work, CriSint32 work_size);

/* ========================================================================*/
/*       CRI AtomEx Streaming Cache API                                    */
/* ========================================================================*/
/*JP
 * \brief 指定したCue（ID指定）のストリーム用データがキャッシュ済みかを取得します
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id	対象とするストリーミングキャッシュID
 * \param[in]	acb_hn			Cueを含んでいるACBハンドル
 * \param[in]	id				キャッシュ済み確認対象のCueID
 * \retval	CRI_TRUE	= キャッシュ済み
 * \retval	CRI_FALSE	= 未キャッシュ
 * \par 説明:
 * 対象とするストリーミングキャッシュにおいて、
 * IDで指定したCueのストリーミング用データがキャッシュ済みかを取得します。<br>
 * \attention
 * 本関数は、Cueが複数のストリーム用データを持つ場合については正確な情報を返しません。<br>
 * Cueが複数のストリーム用データを持つ場合、
 * Cue内で最初に見つかったストリーム用データがキャッシュされた段階で
 * CRI_TRUEを返します。<br>
 * \sa criAtomStreamingCache_IsCachedWaveformByName
 */
CriBool CRIAPI criAtomExStreamingCache_IsCachedWaveformById(
	CriAtomExStreamingCacheId stm_cache_id, CriAtomExAcbHn acb_hn, CriAtomExCueId id);

/*JP
 * \brief 指定したCue（名前指定）のストリーム用データがキャッシュ済みかを取得します
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id	対象とするストリーミングキャッシュID
 * \param[in]	acb_hn			Cueを含んでいるACBハンドル
 * \param[in]	name			キャッシュ済み確認対象のCue名
 * \retval	CRI_TRUE	= キャッシュ済み
 * \retval	CRI_FALSE	= 未キャッシュ
 * \par 説明:
 * 対象とするストリーミングキャッシュにおいて、
 * Cue名で指定したCueのストリーミング用データがキャッシュ済みかを取得します。<br>
 * \attention
 * 本関数は、Cueが複数のストリーム用データを持つ場合については正確な情報を返しません。<br>
 * Cueが複数のストリーム用データを持つ場合、
 * Cue内で最初に見つかったストリーム用データがキャッシュされた段階で
 * CRI_TRUEを返します。<br>
 * \sa criAtomStreamingCache_IsCachedWaveformById
 */
CriBool CRIAPI criAtomExStreamingCache_IsCachedWaveformByName(
	CriAtomExStreamingCacheId stm_cache_id, CriAtomExAcbHn acb_hn, const CriChar8 *name);



/*JP
 * \brief 指定したCue（ID指定）のストリーム用データをキャッシュにロード
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id	対象とするストリーミングキャッシュID
 * \param[in]	acb_hn			Cueを含んでいるACBハンドル
 * \param[in]	cue_id			キャッシュ対象のCueID
 * \return		CriBool			成功／失敗
 * \retval	CRI_FALSE	= ロードの失敗
 * \retval	CRI_TRUE	= ロードの成功
 * \par 説明:
 * ストリーミングキャッシュに対し、IDで指定したCueのストリーミング用データをロードします。<br>
 * 本関数に成功すると::CRI_TRUEを返し、指定したCueがキャッシュ完了状態になります。<br>
 * 本関数に失敗すると、::CRI_FALSEを返します。<br>
 * \par 備考:
 * 本関数は完了復帰です。
 * \attention
 * Cueが複数のストリーム用データを持つ場合、
 * 本関数はCue内で最初に見つかったストリーム用データのみをロードします。<br>
 */
CriBool CRIAPI criAtomExStreamingCache_LoadWaveformById(
	CriAtomExStreamingCacheId stm_cache_id, CriAtomExAcbHn acb_hn, CriAtomExCueId cue_id);

/*JP
 * \brief 指定したCue（名前指定）のストリーム用データをキャッシュにロード
 * \ingroup ATOMEXLIB_STREAMING_CACHE
 * \param[in]	stm_cache_id	対象とするストリーミングキャッシュID
 * \param[in]	acb_hn			Cueを含んでいるACBハンドル
 * \param[in]	name			キャッシュ対象のCue名
 * \return		CriBool			成功／失敗
 * \retval	CRI_FALSE	= ロードの失敗
 * \retval	CRI_TRUE	= ロードの成功
 * \par 説明:
 * ストリーミングキャッシュに対し、IDで指定したCueのストリーミング用データをロードします。<br>
 * 本関数に成功すると::CRI_TRUEを返し、指定したCueがキャッシュ完了状態になります。<br>
 * 本関数に失敗すると、::CRI_FALSEを返します。<br>
 * \par 備考:
 * 本関数は完了復帰です。
 * \attention
 * Cueが複数のストリーム用データを持つ場合、
 * 本関数はCue内で最初に見つかったストリーム用データのみをロードします。<br>
 */
CriBool CRIAPI criAtomExStreamingCache_LoadWaveformByName(
	CriAtomExStreamingCacheId stm_cache_id, CriAtomExAcbHn acb_hn, const CriChar8 *name);


/* ========================================================================*/
/*       CRI AtomEx Tween(Parameter Animation) API                         */
/* ========================================================================*/
/*JP
 * \brief トゥイーンの作成に必要なワーク領域サイズの計算
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	config		トゥイーン作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * トゥイーンを作成するのに必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずにトゥイーンを作成する場合、あらかじめ本関数で計算した
 * ワーク領域サイズ分のメモリをワーク領域として ::criAtomExTween_Create 関数に
 * セットする必要があります。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExTween_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。<br>
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomExTweenConfig, criAtomExTween_Create
 */
/* トゥイーンの作成に必要なワーク領域サイズの計算 */
CriSint32 CRIAPI criAtomExTween_CalculateWorkSize(const CriAtomExTweenConfig *config);

/*JP
 * \brief トゥイーンの作成
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	config				トゥイーン作成用コンフィグ構造体へのポインタ
 * \param[in]	work				トゥイーン作成用ワーク領域へのポインタ
 * \param[in]	work_size			トゥイーン作成用ワークサイズ
 * \return		CriAtomExTweenHn	トゥイーンハンドル
 * \par 説明:
 * トゥイーン作成用コンフィグに基づいて、トゥイーンを作成します。<br>
 * 作成に成功すると、トゥイーンハンドルを返します。<br>
 * トゥイーンを作成する際には、ワーク領域としてメモリを渡す必要があります。<br>
 * 必要なメモリのサイズは、 ::criAtomExTween_CalculateWorkSize 
 * 関数で計算します。<br>
 * （::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。）<br>
 * 作成したトゥイーンは、::criAtomExPlayer_AttachTween 関数にてAtomExプレーヤーにアタッチすることで効果を発揮します。
 * \par 備考:
 * トゥイーンの保持するパラメーターの初期値は、コンフィグ構造体でパラメータータイプに::CRIATOMEX_PARAMETER_TYPE_BASICを指定した場合は各パラメーターのデフォルト値、またはパラメータータイプに::CRIATOMEX_PARAMETER_TYPE_AISACを指定した場合は0.0fです。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * \sa criAtomExTween_CalculateWorkSize, criAtomExTween_Destroy, criAtomExPlayer_AttachTween
 */
CriAtomExTweenHn CRIAPI criAtomExTween_Create(
	const CriAtomExTweenConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief トゥイーンの破棄
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \par 説明:
 * トゥイーンを破棄します。<br>
 * 本関数を実行した時点で、トゥイーン作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定したトゥイーンハンドルも無効になります。<br>
 * トゥイーンをアタッチしたAtomExプレーヤーで再生している音声がある場合、
 * 本関数を実行する前に、それらの音声を停止するか、そのAtomExプレーヤーを破棄してください。
 * \sa criAtomExTween_Create
 */
void CRIAPI criAtomExTween_Destroy(CriAtomExTweenHn tween);

/*JP
 * \brief 現在値の取得
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \par 説明:
 * トゥイーンが保持しているパラメーターの現在値を取得します。<br>
 */
CriFloat32 CRIAPI criAtomExTween_GetValue(CriAtomExTweenHn tween);

/*JP
 * \brief 現在値から指定値に変化
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \param[in]	time_ms		変化に要する時間（ミリ秒単位）
 * \param[in]	value		変化後の最終値
 * \par 説明:
 * time_msで指定した時間をかけて、本関数呼び出し時にトゥイーンが保持している現在値から、valueで指定した値へと変化します。<br>
 * 変化カーブはリニア（線形）です。
 */
void CRIAPI criAtomExTween_MoveTo(CriAtomExTweenHn tween, CriUint16 time_ms, CriFloat32 value);

/*JP
 * \brief 指定値から現在値に変化
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \param[in]	time_ms		変化に要する時間（ミリ秒単位）
 * \param[in]	value		変化前の開始値
 * \par 説明:
 * time_msで指定した時間をかけて、valueで指定した値から、本関数呼び出し時にトゥイーンが保持している現在値へと変化します。<br>
 * 変化カーブはリニア（線形）です。
 */
void CRIAPI criAtomExTween_MoveFrom(CriAtomExTweenHn tween, CriUint16 time_ms, CriFloat32 value);

/*JP
 * \brief トゥイーンの停止
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \par 説明:
 * トゥイーンによるパラメーターの時間変化を停止します。<br>
 */
void CRIAPI criAtomExTween_Stop(CriAtomExTweenHn tween);

/*JP
 * \brief トゥイーンのリセット
 * \ingroup ATOMEXLIB_TWEEN
 * \param[in]	tween		トゥイーンハンドル
 * \par 説明:
 * トゥイーンの保持しているパラメーターの現在値をリセットし、初期値に戻します。<br>
 * トゥイーンの保持するパラメーターの初期値は、コンフィグ構造体でパラメータータイプに::CRIATOMEX_PARAMETER_TYPE_BASICを指定した場合は各パラメーターのデフォルト値、またはパラメータータイプに::CRIATOMEX_PARAMETER_TYPE_AISACを指定した場合は0.0fです。
 * \par 備考:
 * トゥイーンによる時間変化が動作していた場合、動作を停止します。
 */
void CRIAPI criAtomExTween_Reset(CriAtomExTweenHn tween);

/*==========================================================================
 *      CRI AtomEx Voice Event API
 *=========================================================================*/
/*JP
 * \brief ボイスイベントコールバックの登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		ボイスイベントコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ボイスイベントコールバックを登録します。<br>
 * 本関数を使用してボイスイベントコールバックを登録することで、
 * ボイスイベント（ボイスの取得／解放／奪い取り）発生時の詳細情報
 * （再生／停止される音声データの詳細情報等）が取得可能です。<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExVoiceEventCbFunc の説明をご参照ください。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \attention
 * 本関数で登録したコールバックには、ボイス単位のリミット制御
 *（ボイスプライオリティに基づいた波形単位のプライオリティ制御）
 * に関する情報のみが返されます。<br>
 * （カテゴリキュープライオリティによる制御に関する情報は、現状取得できません。）<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * \sa CriAtomExVoiceEventCbFunc
 */
void CRIAPI criAtomEx_SetVoiceEventCallback(CriAtomExVoiceEventCbFunc func, void *obj);

/*JP
 * \brief ボイス情報の列挙
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		ボイス情報コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * 再生中のボイスの情報を列挙します。<br>
 * <br>
 * 本関数を実行すると、第 1 引数（ func ）
 * でセットされたコールバック関数が再生中のボイスの数分だけ呼び出されます。<br>
 * コールバック関数には、再生中のボイスに関する詳細情報が
 * CriAtomExVoiceInfoDetail 構造体として渡されます。<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExVoiceInfoCbFunc の説明をご参照ください。<br>
 * <br>
 * funcにNULLを指定することで登録済み関数の登録解除が行えます。<br>
 * \attention
 * 本関数で登録したコールバックには、
 * 発音可能なボイスリソースを持つボイスの情報だけが返されます。<br>
 * （バーチャル化されたボイスの情報は返されません。）<br>
 * \sa CriAtomExVoiceInfoCbFunc
 */
void CRIAPI criAtomEx_EnumerateVoiceInfos(CriAtomExVoiceInfoCbFunc func, void *obj);

/*JP
 * \brief ボイス停止を監視するコールバック関数の登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	func		ボイス停止監視コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * ボイスの停止を監視するコールバック関数の登録をします。<br>
 * <br>
 * 本関数を実行すると、第 1 引数（ func ）
 * でセットされたコールバック関数が監視している再生ID内で発音しているボイスが停止する際に呼び出されます。<br>
 * コールバック関数には、停止ボイスに関する情報が
 * CriAtomExMonitoringVoiceStopInfo 構造体として渡されます。<br>
 * \par 備考:
 * 第 2 引数（ obj ）にセットした値は、コールバック関数の引数として渡されます。<br>
 * コールバック関数のその他の引数については、
 * 別途 ::CriAtomExMonitoringVoiceStopCbFunc の説明をご参照ください。<br>
 * \sa CriAtomExMonitoringVoiceStopCbFunc
 */
void CRIAPI criAtomEx_SetMonitoringVoiceStopCallback(CriAtomExMonitoringVoiceStopCbFunc func, void *obj);

/*JP
 * \brief ボイス停止を監視する再生IDの登録
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	playback_id		ボイス停止を監視する再生ID
 * \par 説明:
 * ボイスの停止を監視する再生IDを登録をします。<br>
 * <br>
 * 監視可能な再生IDは１つだけです。<br>
 * 既に再生IDが設定済みの状態で本関数を呼び出した場合は、監視再生ID情報が上書きされます。<br>
 * 監視を行うためには::criAtomEx_SetMonitoringVoiceStopCallback 関数で通知を行うためのコールバック関数を登録してください。<br>
 * \sa criAtomEx_SetMonitoringVoiceStopCallback
 */
void CRIAPI criAtomEx_SetMonitoringVoiceStopPlaybackId(CriAtomExPlaybackId playback_id);


/*==========================================================================
 *      CRI AtomEx Sound Object API
 *=========================================================================*/
/*JP
 * \brief サウンドオブジェクト用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	config		サウンドオブジェクト作成用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \retval		0以上		正常に処理が完了
 * \retval		-1			エラーが発生
 * \par 説明:
 * サウンドオブジェクトを作成するために必要な、ワーク領域のサイズを取得します。<br>
 * アロケーターを登録せずにサウンドオブジェクトを作成する場合、
 * あらかじめ本関数で計算したワーク領域サイズ分のメモリを
 * ワーク領域として ::criAtomExSoundObject_Create 関数にセットする必要があります。<br>
 * <br>
 * プレーヤーの作成に必要なワークメモリのサイズは、プレーヤー作成用コンフィグ
 * 構造体（ ::CriAtomExSoundObjectConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExSoundObject_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * ワーク領域サイズ計算時に失敗した場合、戻り値は -1 になります。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックの
 * メッセージで確認可能です。<br>
 * \par 備考:
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * \sa CriAtomExSoundObjectConfig, criAtomExSoundObject_Create
 */
CriSint32 CRIAPI criAtomExSoundObject_CalculateWorkSize(
	const CriAtomExSoundObjectConfig *config);

/*JP
 * \brief サウンドオブジェクトの作成
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	config		サウンドオブジェクト作成用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \return		CriAtomExSoundObjectHn	サウンドオブジェクトハンドル
 * \par 説明:
 * サウンドオブジェクトを作成します。<br>
 * \sa CriAtomExSoundObjectConfig, criAtomExSoundObject_CalculateWorkSize,
 * CriAtomExSoundObjectHn, criAtomExSoundObject_Destroy
 */
CriAtomExSoundObjectHn CRIAPI criAtomExSoundObject_Create(
	const CriAtomExSoundObjectConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief サウンドオブジェクトの破棄
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	sound_object	サウンドオブジェクト
 * \par 説明:
 * サウンドオブジェクトを破棄します。<br>
 * 本関数を実行した時点で、サウンドオブジェクト作成時に確保されたリソースが全て解放されます。<br>
 * また、引数に指定したサウンドオブジェクトハンドルも無効になります。<br>
 * \sa criAtomExSoundObject_Create, CriAtomExSoundObjectHn
 */
void CRIAPI criAtomExSoundObject_Destroy(CriAtomExSoundObjectHn sound_object);

/*JP
 * \brief AtomExプレーヤーの追加
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	sound_object	サウンドオブジェクト
 * \param[in]	player			AtomExプレーヤー
 * \par 説明:
 * サウンドオブジェクトにAtomExプレーヤーを追加します。<br>
 * 追加したAtomExプレーヤーはサウンドオブジェクトと関連付けられ、
 * サウンドオブジェクトによる以下の影響を受けるようになります。<br>
 * - 発音数制限やイベント機能が影響する範囲（スコープ）の限定
 * - 再生コントロール（停止、ポーズ等）
 * - パラメーターコントロール
 * 
 * 追加したAtomExプレーヤーをサウンドオブジェクトから削除する場合は、 ::criAtomExSoundObject_DeletePlayer
 * 関数を呼び出してください。<br>
 * 対象のAtomExプレーヤーが既にサウンドオブジェクトに追加済みの場合は、何も起こりません。<br>
 * \attention
 * 本関数の呼び出しは、追加しようとしているAtomExプレーヤーで音声を再生していない状態で行ってください。<br>
 * ステータスが ::CRIATOMEXPLAYER_STATUS_STOP ではないAtomExプレーヤーが指定された場合、
 * 追加時に ::criAtomExPlayer_StopWithoutReleaseTime 関数にて再生停止が行われます。
 * \sa criAtomExSoundObject_DeletePlayer, criAtomExSoundObject_DeleteAllPlayers
 */
void CRIAPI criAtomExSoundObject_AddPlayer(CriAtomExSoundObjectHn sound_object, CriAtomExPlayerHn player);

/*JP
 * \brief AtomExプレーヤーの削除
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	sound_object	サウンドオブジェクト
 * \param[in]	player			AtomExプレーヤー
 * \par 説明:
 * サウンドオブジェクトからAtomExプレーヤーを削除します。<br>
 * 削除したAtomExプレーヤーはサウンドオブジェクトとの関連付けが切られ、
 * サウンドオブジェクトによる影響を受けなくなります。<br>
 * \attention
 * 本関数の呼び出しは、削除しようとしているAtomExプレーヤーで音声を再生していない状態で行ってください。<br>
 * ステータスが ::CRIATOMEXPLAYER_STATUS_STOP ではないAtomExプレーヤーが指定された場合、
 * 削除時に ::criAtomExPlayer_StopWithoutReleaseTime 関数にて再生停止が行われます。
 * \sa criAtomExSoundObject_AddPlayer, criAtomExSoundObject_DeleteAllPlayers
 */
void CRIAPI criAtomExSoundObject_DeletePlayer(CriAtomExSoundObjectHn sound_object, CriAtomExPlayerHn player);

/*JP
 * \brief 全てのAtomExプレーヤーの削除
 * \ingroup ATOMEXLIB_SOUND_OBJECT
 * \param[in]	sound_object	サウンドオブジェクト
 * \par 説明:
 * サウンドオブジェクトに関連付けられている全てのAtomExプレーヤーを削除します。<br>
 * 削除したAtomExプレーヤーはサウンドオブジェクトとの関連付けが切られ、
 * サウンドオブジェクトによる影響を受けなくなります。<br>
 * \attention
 * 本関数の呼び出しは、削除しようとしているAtomExプレーヤーで音声を再生していない状態で行ってください。<br>
 * ステータスが ::CRIATOMEXPLAYER_STATUS_STOP ではないAtomExプレーヤーが含まれていた場合、
 * 削除時に ::criAtomExPlayer_StopWithoutReleaseTime 関数にて再生停止が行われます。
 * \sa criAtomExSoundObject_AddPlayer, criAtomExSoundObject_DeletePlayer
 */
void CRIAPI criAtomExSoundObject_DeleteAllPlayers(CriAtomExSoundObjectHn sound_object);

/***************************************************************************
 *      暫定API（使用はお控え下さい）
 *      Tentative API (Please don't use it)
 ***************************************************************************/
/* 以下に宣言されている関数はAtomの内部処理用、ゲームエンジンとの連携等にて
 * 暫定的に使用されているAPIです。
 * 今後のアップデートにて予告なく変更・削除が行われるため、使用はお控え下さい。
 */
typedef void (CRIAPI *CriAtomExAcbReleasedCbFunc)(void *obj);
void CRIAPI criAtomExAcb_ReleaseAsync(
	CriAtomExAcbHn acb_hn, CriAtomExAcbReleasedCbFunc func, void *obj);
CriBool CRIAPI criAtomExPlayer_IsReadyToStartAsync(CriAtomExPlayerHn player);
CriBool CRIAPI criAtomExPlayer_StartAsync(CriAtomExPlayerHn player);
void CRIAPI criAtomExPlayer_UpdateAllAsync(CriAtomExPlayerHn player);
CriSint64 CRIAPI criAtomExPlayer_GetTimeReal(CriAtomExPlayerHn player);
CriSint64 CRIAPI criAtomExPlayback_GetTimeReal(CriAtomExPlaybackId id);
void CRIAPI criAtomExPlayback_EnumerateAtomPlayers(
	CriAtomExPlaybackId id, CriAtomPlayerCbFunc func, void* obj);
void CRIAPI criAtomEx3dListener_GetFocusPoint(CriAtomEx3dListenerHn ex_3d_listener, CriAtomExVector *focus_point);
CriFloat32 CRIAPI criAtomEx3dListener_GetDistanceFocusLevel(CriAtomEx3dListenerHn ex_3d_listener);
CriFloat32 CRIAPI criAtomEx3dListener_GetDirectionFocusLevel(CriAtomEx3dListenerHn ex_3d_listener);
CriAtomExAcbHn CRIAPI criAtomExAcb_GetCurrentAcb(void);
CriBool CRIAPI criAtomExAcb_IsParameterPalletAssignedByName(CriAtomExAcbHn acb_hn, const CriChar8 *cue_name);
void CRIAPI criAtomEx3dSource_SetAttenuationDistanceSetting(CriAtomEx3dSourceHn ex_3d_source, CriBool sw);
CriBool CRIAPI criAtomEx3dSource_GetAttenuationDistanceSetting(const CriAtomEx3dSourceHn ex_3d_source);
CriBool CRIAPI criAtomExAcb_IsCompatibleWithAcf(CriAtomExAcbHn acb_hn);

#ifdef __cplusplus
}
#endif


#define criAtomExPlayer_SetAisacById(player, control_id, control_value) \
	criAtomExPlayer_SetAisacControlById(player, control_id, control_value)
#define criAtomExPlayer_SetAisacByName(player, control_name, control_value) \
	criAtomExPlayer_SetAisacControlByName(player, control_name, control_value)
#define criAtomExPlayer_GetAisacById(player, control_id) \
	criAtomExPlayer_GetAisacControlById(player, control_id)
#define criAtomExPlayer_GetAisacByName(player, control_name) \
	criAtomExPlayer_GetAisacControlByName(player,control_name)
#define criAtomExPlayback_GetAisacById(playback_id, control_id, control_value) \
	criAtomExPlayback_GetAisacControlById(playback_id, control_id, control_value)
#define criAtomExPlayback_GetAisacByName(playback_id, control_name, control_value) \
	criAtomExPlayback_GetAisacControlByName(playback_id, control_name, control_value)
#define criAtomExCategory_SetAisacById(id, control_id, control_value) \
	criAtomExCategory_SetAisacControlById(id, control_id, control_value)
#define criAtomExCategory_SetAisacByName(name, control_name, control_value) \
	criAtomExCategory_SetAisacControlByName(name, control_name, control_value)
#define criAtomEx3dSource_SetListenerBasedAngleAisacControlId(ex_3d_source, aisac_control_id) \
	criAtomEx3dSource_SetListenerBasedAzimuthAngleAisacControlId((ex_3d_source), (aisac_control_id))
#define criAtomEx3dSource_SetSourceBasedAngleAisacControlId(ex_3d_source, aisac_control_id) \
	criAtomEx3dSource_SetSourceBasedAzimuthAngleAisacControlId((ex_3d_source), (aisac_control_id))
/* レンダラーの出力Ch数設定に応じて、自動でダウンミックスするため下記関数は無効にしています */

#define CRIATOMEX_VERSION					(0xFFFFFFFF)

#ifdef __cplusplus
extern "C" {
#endif
/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 */

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 */


/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExPlayer_SetBusSendLevelByName 関数の使用を検討してください。
 */
void CRIAPI criAtomExPlayer_SetBusSendLevel(
	CriAtomExPlayerHn player, CriSint32 bus_index, CriFloat32 level);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExPlayer_SetBusSendLevelOffsetByName 関数の使用を検討してください。
 */
void CRIAPI criAtomExPlayer_SetBusSendLevelOffset(
	CriAtomExPlayerHn player, CriSint32 bus_index, CriFloat32 level_offset);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExDebug_GetResourcesInfo 関数の使用を検討してください。
 */
void CRIAPI criAtomEx_GetNumUsedVirtualVoices(CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExDebug_GetResourcesInfo 関数の使用を検討してください。
 */
void CRIAPI criAtomEx_GetNumUsedSequences(CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExDebug_GetResourcesInfo 関数の使用を検討してください。
 */
void CRIAPI criAtomEx_GetNumUsedSequenceTracks(CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExDebug_GetResourcesInfo 関数の使用を検討してください。
 */
void CRIAPI criAtomEx_GetNumUsedSequenceTrackItems(CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomEx3dListener_SetDopplerMultiplier 関数の使用を検討してください。
 * ただし第二引数に指定する値はdistance_factorの逆数に変更する必要があります。
 */
void CRIAPI criAtomEx3dListener_SetDistanceFactor(CriAtomEx3dListenerHn ex_3d_listener, CriFloat32 distance_factor);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出しても効果はありません。
 */
void CRIAPI criAtomEx_GetNumUsedAisacAutoModulations(CriSint32 *cur_num, CriSint32 *limit);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomEx3dSource_SetOrientation 関数の使用を検討してください。
 */
void CRIAPI criAtomEx3dSource_SetConeOrientation(CriAtomEx3dSourceHn ex_3d_source, const CriAtomExVector *cone_orient);



/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出しても効果はありません。
 */
void CRIAPI criAtomExPlayer_SetSequencePrepareTime(
	CriAtomExPlayerHn player, CriUint32 seq_prep_time_ms);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAcf_GetDspFxName 関数の使用を検討してください。
 */
CriUint32 CRIAPI criAtomExAcf_GetDspFxType(CriUint16 index);

#ifdef __cplusplus
}
#endif

/*JP
 * \endcond
 */

#endif /* CRI_INCL_CRI_ATOM_EX_H */

/* --- end of file --- */
