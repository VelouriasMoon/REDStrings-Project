/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2010 CRI Middleware Co., Ltd.
 *
 * Library  : CRI AtomEx Monitor Library
 * Module   : Monitor Library C Interface Header
 * File     : cri_atom_ex_monitor.h
 *
 ****************************************************************************/
/*!
 *	\file	cri_atom_ex_monitor.h
 */

#ifndef CRI_INCL_CRI_ATOMEX_MONITOR_H
#define CRI_INCL_CRI_ATOMEX_MONITOR_H

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/

#include "cri_le_xpt.h"
#include "cri_le_atom_ex.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/* バージョン情報 */
/* Version Number */
#define CRIATOMEX_MONITOR_VER_NAME				"CRI AtomEx Monitor"
#define CRIATOMEX_MONITOR_VER_NUM				"1.15.11"
#define CRIATOMEX_MONITOR_VER_MAJOR				(1)
#define CRIATOMEX_MONITOR_VER_MINOR				(15)
#define CRIATOMEX_MONITOR_VER_PATCH				(11)
#define CRIATOMEX_MONITOR_VER_RELEASE			(0)
#define CRIATOMEX_MONITOR_VER_REVISION			(0)
#define CRIATOMEX_MONITOR_VER_OPTION


/*JP
 * \brief デフォルトプレビューオブジェクト
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * デフォルトのプレビューオブジェクト数です。<br>
 * \sa criAtomExMonitor_SetDefaultConfig
 */
#define CRIATOMX_MONITOR_DEFAULT_NUM_PUREVIEW_OBJECTS		(200)
/*JP
 * \brief デフォルト通信バッファサイズ
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * デフォルトの通信バッファサイズです。<br>
 * \sa criAtomExMonitor_SetDefaultConfig
 */
#define CRIATOMX_MONITOR_DEFAULT_COMMUNICATION_BUFFER_SIZE	(2*1024*1024)
/*JP
 * \brief デフォルト再生位置情報更新間隔
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * デフォルトの再生位置情報更新間隔です。<br>
 * \sa criAtomExMonitor_SetDefaultConfig
 */
#define CRIATOMX_MONITOR_DEFAULT_PLAYBACK_POSITION_UPDATE_INTERVAL	(8)

/*JP
 * \brief ログ取得モード
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * ログ取得のモードです。<br>
 * \sa criAtomExMonitor_SetLogMode
 */
#define CRIATOMEX_MONITOR_LOG_MODE_OFF						(0)
#define CRIATOMEX_MONITOR_LOG_MODE_PLAYBACK					(1)			/* 再生制御関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_ERROR					(1 << 1)	/* エラー関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_LOW_LEVEL_PLAYBACK		(1 << 2)	/* 低レベル再生制御関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_SYSTEM_INFORMATION		(1 << 3)	/* システム情報関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_HANDLE_INFORMATION		(1 << 4)	/* システム情報関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_CUE_LIMIT				(1 << 5)	/* キューリミット処理関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_PROBABILITY				(1 << 6)	/* プロバビリティ処理関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_CATEGORY					(1 << 7)	/* カテゴリ処理関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_EXECUTING_INFORMATION	(1 << 8)	/* 動作関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_3D_INFO					(1 << 9)	/* 3D動作関連 */
#define CRIATOMEX_MONITOR_LOG_MODE_USER_LOG					(1 << 10)	/* ユーザログ */

#define CRIATOMEX_MONITOR_LOG_MODE_ALL						(0xFFFFFFFF)


/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*JP
 * \brief Atomモニターライブラリ初期化コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * ::criAtomExMonitor_Initialize 関数に設定するコンフィグ構造体
 * （ ::CriAtomExMonitorConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomExMonitor_Initialize, CriAtomExMonitorConfig
 */
#define criAtomExMonitor_SetDefaultConfig(p_config)	\
{\
	(p_config)->max_preivew_object = CRIATOMX_MONITOR_DEFAULT_NUM_PUREVIEW_OBJECTS;\
	(p_config)->communication_buffer_size = CRIATOMX_MONITOR_DEFAULT_COMMUNICATION_BUFFER_SIZE;\
	(p_config)->additional_buffer = 0;\
	(p_config)->additional_buffer_size = 0;\
	(p_config)->playback_position_update_interval = CRIATOMX_MONITOR_DEFAULT_PLAYBACK_POSITION_UPDATE_INTERVAL;\
}
 
/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*JP
 * \brief Atomモニターライブラリ初期化用コンフィグ構造体
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * モニターライブラリの動作仕様を指定するための構造体です。<br>
 * ::criAtomExMonitor_Initialize 関数の引数に指定します。<br>
 * <br>
 * CRI AtomEx Monitorライブラリは、初期化時に本構造体で指定された設定に応じて、内部リソースを
 * 必要なだけ確保します。<br>
 * ライブラリが必要とするワーク領域のサイズは、本構造体で指定されたパラメーターに応じて
 * 変化します。
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomExMonitor_SetDefaultConfig マクロで構造体にデフォルト
 * パラメーターをセットした後、 ::criAtomExMonitor_Initialize 関数に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExMonitor_SetDefaultConfig マクロを使用しない
 * 場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExMonitor_Initialize, criAtomExMonitor_SetDefaultConfig
 */
typedef struct CriAtomExMonitorConfigTag {
	/*JP
		\brief インゲームプレビュー用管理リソースの最大値
		\par 説明:
		ここで指定する管理リソースはインゲームプレビュー時に ACB ハンドル１つに対し１つ消費されます。<br>
		同時に使用する ACB 数より大きな値を設定するようにしてください。<br>
	*/
	CriUint32	max_preivew_object;
	/*JP
		\brief 通信用バッファサイズ
		\par 説明:
		モニタライブラリとオーサリングツール間で行う通信に使用するバッファサイズを指定します。<br>
		バッファは送信用、受信用の2つがあり、それぞれ設定値の半分の拡張領域がさらに付加されます。<br>
		このため実際に必要なバッファサイズは設定値の3倍となります。<br>
	*/
	CriUint32	communication_buffer_size;
	/*JP
		\brief 追加バッファ
		\par 説明:
		TCP/IP接続以外の接続を行う等、通信バッファを外部から指定する必要がある場合に使用します。<br>
		特に指定がない場合は使用しません。<br>
	*/
	CriUintPtr	additional_buffer;
	/*JP
		\brief 追加バッファサイズ
		\par 説明:
		外部指定の通信バッファサイズです。<br>
	*/
	CriUint32	additional_buffer_size;
	/*JP
		\brief 再生位置情報更新間隔
		\par 説明:
		サーバ処理実行時に再生位置情報の送信処理を行う間隔を指定します。<br>
		playback_position_update_interval の値を変更することで、
		サーバ処理の実行回数を変えることなく再生位置情報の送信頻度を下げることが可能です。<br>
		<br>
		playback_position_update_interval には、再生位置情報の送信処理を何サーバごとに行うかを指定します。<br>
		例えば、 playback_position_update_interval を 2 に設定すると、
		サーバ処理 2 回に対し、 1 回だけ再生位置情報の送信が行われます。<br>
		（再生位置情報の送信頻度が 1/2 になります。）<br>
	*/
	CriSint32	playback_position_update_interval;
} CriAtomExMonitorConfig;

/*JP
 * \brief データ更新タイプ
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * インゲームプレビュー時のAtomCraft（オーサリングツール）によるデータ更新のターゲットです。<br>
 * \sa CriAtomExMonitorDataUpdateNotificationInfo
 */
typedef enum CriAtomExMonitorDataUpdateTargetTag {
	CRIATOMEXMONITOR_DATA_UPDATE_TARGET_ACF = 0,			/*JP< ACF更新 */
	CRIATOMEXMONITOR_DATA_UPDATE_TARGET_ACB = 1,			/*JP< ACB更新 */
	/* enum size is 4bytes */
	CRIATOMEXMONITOR_DATA_UPDATE_TARGET_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExMonitorDataUpdateTarget;

/*JP
 * \brief データ更新ステータス
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * インゲームプレビュー時のAtomCraft（オーサリングツール）によるデータ更新の状態です。<br>
 * \sa CriAtomExMonitorDataUpdateNotificationInfo
 */
typedef enum CriAtomExMonitorDataUpdateEventTag {
	CRIATOMEXMONITOR_DATA_UPDATE_EVENT_BEGIN = 0,	/*JP< 開始イベント */
	CRIATOMEXMONITOR_DATA_UPDATE_EVENT_END   = 1,	/*JP< 終了イベント */
	/* enum size is 4bytes */
	CRIATOMEXMONITOR_DATA_UPDATE_EVENT_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExMonitorDataUpdateEvent;

/*JP
 * \brief データ更新情報
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * インゲームプレビュー時のAtomCraft（オーサリングツール）によるデータ更新情報です。<br>
 * \sa criAtomExMonitor_SetDataUpdateNotificationCallback
 */
typedef struct CriAtomExMonitorDataUpdateNotificationInfoTag {
	CriAtomExMonitorDataUpdateTarget target;				/*JP< 更新ターゲット */
	CriAtomExMonitorDataUpdateEvent event;				/*JP< イベント */
	CriAtomExAcbHn acb_hn;								/*JP< ACBハンドル */
	const CriChar8* name;								/*JP< 名前 */
} CriAtomExMonitorDataUpdateNotificationInfo;

/*JP
 * \brief オーサリングツールによるデータ更新通知情報取得コールバック関数
 * \ingroup ATOMEXLIB_ACB
 * \par 説明:
 * \param[in]	obj			ユーザ指定オブジェクト
 * \param[in]	info		データ更新通知情報取得
 * \return					なし
 * \par 説明:
 * インゲームプレビュー時にオーサリングツールからのデータ更新処理が発生した場合に呼び出すコールバック関数です。<br>
 * インゲームプレビュー時にアプリケーション側でデータ更新状態を取得したい場合に使用します。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExMonitor_SetDataUpdateNotificationCallback 関数を使用します。<br>
 * 登録したコールバック関数は、インゲームプレビュー中にオーサリングツールからのデータ更新前後のタイミングで実行されます。<br>
 * \attention
 * 基本的に、コールバック関数内ではAtomライブラリAPIを使用しないでください。<br>
 * 本コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生しますので、
 * ご注意ください。<br>
 * コールバック関数に引数として渡されるCriAtomExMonitorDataUpdateNotificationInfo構造体への参照はコールバック関数内だけで行ってください。<br>
 * コールバック関数外で参照する場合は、別領域に内容を保存してから行ってください。
 * \sa criAtomExMonitor_SetDataUpdateNotificationCallback, CriAtomExMonitorDataUpdateNotificationInfo
 */
typedef void (CRIAPI *CriAtomExMonitorDataUpdateNotificationCbFunc)(
	void *obj, const CriAtomExMonitorDataUpdateNotificationInfo* info);

/*	Log Callback Function type	*/
typedef void (*CriAtomExMonitorLogCbFunc)(void* obj, const CriChar8 *log_string);

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

/*JP
 * \brief モニター機能初期化用ワーク領域サイズの計算
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \par 説明:
 * モニター機能を使用するために必要な、ワーク領域のサイズを取得します。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * モニター機能が必要とするワーク領域のサイズは、モニター機能初期化用コンフィグ
 * 構造体（ ::CriAtomExMonitorConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExMonitor_SetDefaultConfig 適用時と同じパラメータ）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomExMonitor_SetDefaultConfig, criAtomExMonitor_Initialize, CriAtomExMonitorConfig
 */
CriSint32 CRIAPI criAtomExMonitor_CalculateWorkSize(const CriAtomExMonitorConfig* config);

/*JP
 * \brief モニター機能の初期化
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * モニター機能を初期化します。<br>
 * モニター機能を利用するには、必ずこの関数を実行する必要があります。<br>
 * （モニター機能は、本関数を実行後、 ::criAtomExMonitor_Finalize 関数を実行するまでの間、
 * 利用可能です。）<br>
 * 本関数の呼び出しは、criAtomEx_Initialize 関数実行後 ::criAtomEx_Finalize 関数を実行するまでの間に
 * 行うようにしてください。<br>
 * \sa criAtomExMonitor_Finalize, CriAtomExMonitorConfig
 */
void CRIAPI criAtomExMonitor_Initialize(
	const CriAtomExMonitorConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief モニター機能の終了
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * モニター機能を終了します。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomExMonitor_Initialize
 */
void CRIAPI criAtomExMonitor_Finalize(void);

/*JP
 * \brief サーバーIPアドレス文字列の取得
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * サーバーIPアドレス文字列を取得します。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomExMonitor_Initialize, criAtomExMonitor_GetClientIpString
 */
const CriChar8* CRIAPI criAtomExMonitor_GetServerIpString(void);

/*JP
 * \brief クライアントIPアドレス文字列の取得
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \par 説明:
 * クライアントIPアドレス文字列を取得します。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomExMonitor_Initialize, criAtomExMonitor_GetServerIpString
 */
const CriChar8* CRIAPI criAtomExMonitor_GetClientIpString(void);

/*JP
 * \brief ツール接続状態の取得
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \return		CriBool	接続状態（CRI_TRUE:接続、CRI_FALSE:未接続）
 * \par 説明:
 * ツール接続状態を取得します。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomExMonitor_Initialize
 */
CriBool CRIAPI criAtomExMonitor_IsConnected(void);

/*JP
 * \brief ログ取得コールバックの登録
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param		cbf			コールバック関数
 * \param		obj			ユーザ指定オブジェクト
 * \par 説明:
 * ログ取得用コールバック関数を登録します。<br>
 * 関数を登録するとログ取得を開始し、NULLを設定することでログ取得を停止します。<br>
 * 取得するログのモード切替は ::criAtomExMonitor_SetLogMode 関数で設定指定ください。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomExMonitor_Initialize, criAtomExMonitor_SetLogMode
 */
void CRIAPI criAtomExMonitor_SetLogCallback(CriAtomExMonitorLogCbFunc cbf, void* obj);

/*JP
 * \brief ログモードの設定
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param		mode		ログ出力モード
 * \par 説明:
 * ログ取得のモードを設定します。<br>
 * 本関数で設定したモードにしたがって ::criAtomExMonitor_SetLogCallback 関数で
 * 登録したログ取得用コールバック関数が呼び出されます。<br>
 * \sa criAtomExMonitor_SetLogCallback
 */
void CRIAPI criAtomExMonitor_SetLogMode(CriUint32 mode);

/*JP
 * \brief ユーザログの出力
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param		message		ユーザログメッセージ
 * \par 説明:
 * ユーザログを出力します。<br>
 * 本関数によって出力したログはログ取得コールバックやプロファイラで取得、確認が行えます。
 * \sa criAtomExMonitor_SetLogCallback
 */
void CRIAPI criAtomExMonitor_OutputUserLog(const CriChar8* message);

/*JP
 * \brief データ更新通知コールバック関数の登録
 * \ingroup ATOMEXMONITORLIB_GLOBAL
 * \param[in]	func		データ更新通知コールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * インゲームプレビュー時にオーサリングツールからのデータ更新処理が発生した場合に呼び出すコールバック関数を登録します。<br>
 * \attention
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomMonitorライブラリ内のサーバ処理からも実行されます。<br>
 * そのため、サーバ処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * <br>
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \attention
 * ::criAtomExMonitor_Initialize 関数実行前に本関数を実行することはできません。<br>
 * \sa CriAtomExMonitorDataUpdateNotificationCbFunc, CriAtomExMonitorDataUpdateNotificationInfo
 */
void CRIAPI criAtomExMonitor_SetDataUpdateNotificationCallback(
	CriAtomExMonitorDataUpdateNotificationCbFunc func, void *obj);

/***************************************************************************
 *      旧バージョンとの互換用
 *      For compatibility with old version
 ***************************************************************************/
#define CRIATOMEX_MONITOR_VERSION				(0xFFFFFFFF)

#ifdef __cplusplus
}
#endif

#endif //	CRI_INCL_CRI_ATOMEX_MONITOR_H
