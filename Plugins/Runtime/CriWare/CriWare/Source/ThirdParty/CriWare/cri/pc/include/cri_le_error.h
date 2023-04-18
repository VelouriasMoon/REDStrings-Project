#ifndef	CRI_INCL_CRI_ERROR_H
#define	CRI_INCL_CRI_ERROR_H
/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2006 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Error
 * Module   : 
 * File     : cri_error.h
 *
 ****************************************************************************/
/*!
 * \file cri_error.h
 */
/*JP
 * \addtogroup CRI_ERROR
 * エラーハンドリング用関数群
 * @{
 */
/*EN
 * \addtogroup CRI_ERROR
 * Functions for error handling
 * @{
 */

/**************************************************************************** 
 *      Include file														* 
 ****************************************************************************/
#include "cri_le_xpt.h"

/**************************************************************************** 
 *		MACRO CONSTANT														* 
 ****************************************************************************/

/* バージョン番号 */
/*	Version number */
#define CRIERROR_VER_NAME				"CRI Error"
#define CRIERROR_VER_NUM				"1.4.5"
#define CRIERROR_VER_OPTION

/*JP
 * \brief エラーコード
 */
/*EN
 * \brief Error codes
 */
typedef enum {
	CRIERR_OK = 0,							/*JP< 正常終了 */
											/*EN< Succeeded */
	CRIERR_NG = -1,							/*JP< エラーが発生 */
											/*EN< Error occurred */
	CRIERR_INVALID_PARAMETER = -2,			/*JP< 引数が不正 */
											/*EN< Invalid argument */
	CRIERR_FAILED_TO_ALLOCATE_MEMORY = -3,	/*JP< メモリの確保に失敗 */
											/*EN< Failed to allocate memory */
	CRIERR_UNSAFE_FUNCTION_CALL = -4,		/*JP< 非スレッドセーフ関数の並列実行 */
											/*EN< Parallel execution of thread-unsafe function */
	CRIERR_FUNCTION_NOT_IMPLEMENTED = -5,	/*JP< 未実装関数の実行 */
											/*EN< Function not implemented */
	CRIERR_LIBRARY_NOT_INITIALIZED = -6,	/*JP< ライブラリが未初期化 */
											/*EN< Library not initialized */
	/* enum be 4bytes */
	CRIERR_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriError;

/*JP
 * \brief エラー通知レベル
 */
/*EN
 * \brief Error notification level
 */
typedef enum {
	CRIERR_NOTIFY_ALL = 0,		/*JP< 全てのエラーを通知 */
								/*EN< Notify all errors */
	CRIERR_NOTIFY_FATAL = 1,	/*JP< エラーのみ通知（警告は無視） */
								/*EN< Notify error (Disregards warning) */
	/* enum be 4bytes */
	CRIERR_NOTIFY_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriErrorNotificationLevel;

/* エラーレベル */
/* Error level */
typedef enum {
	CRIERR_LEVEL_ERROR = 0,
	CRIERR_LEVEL_WARNING = 1,
	/* enum be 4bytes */
	CRIERR_LEVEL_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriErrorLevel;

/**************************************************************************** 
 *		PROCESS MACRO														* 
 ****************************************************************************/

#if defined(CRIERROR_SIMPLIFY)
	/* エラーの通知 */
	/* Notification of Error */
	#define criErr_NotifyError(id, msg)							criErr_NotifyErrorSimple()
	#define criErr_NotifyError1(id, msg, p1)					criErr_NotifyErrorSimple()
	#define criErr_NotifyError2(id, msg, p1, p2)				criErr_NotifyErrorSimple()
	#define criErr_NotifyErrorPrmArray(id, msg, p1, p2, pa)		criErr_NotifyErrorSimple()
	#define criErr_NotifyErrorGeneric(_error_id, _error_no)		criErr_NotifyErrorSimple()
	/* 警告の通知 */
	/* Notification of Warning */
	#define criErr_NotifyWarning(id, msg)						criErr_NotifyWarningSimple()
	#define criErr_NotifyWarning1(id, msg, p1)					criErr_NotifyWarningSimple()
	#define criErr_NotifyWarning2(id, msg, p1, p2)				criErr_NotifyWarningSimple()
	#define criErr_NotifyWarningPrmArray(id, msg, p1, p2, pa)	criErr_NotifyWarningSimple()
	#define criErr_NotifyWarningGeneric(_error_id, _error_no)	criErr_NotifyWarningSimple()
#else
	/* エラーの通知 */
	/* Notification of Error */
	#define criErr_NotifyError(id, msg)							criErr_Notify(CRIERR_LEVEL_ERROR, id ":" msg)
	#define criErr_NotifyError1(id, msg, p1)					criErr_Notify1(CRIERR_LEVEL_ERROR, (id ":" msg), (CriUintPtr)(p1))
	#define criErr_NotifyError2(id, msg, p1, p2)				criErr_Notify2(CRIERR_LEVEL_ERROR, (id ":" msg), (CriUintPtr)(p1), (CriUintPtr)(p2))
	#define criErr_NotifyErrorPrmArray(id, msg, p1, p2, pa)		criErr_NotifyPrmArray(CRIERR_LEVEL_ERROR, (id ":" msg), (CriUintPtr)(p1), (CriUintPtr)(p2), (CriUintPtr *)(pa))
	#define criErr_NotifyErrorGeneric(_error_id, _error_no)		criErr_NotifyGeneric(CRIERR_LEVEL_ERROR, _error_id, _error_no)
	/* 警告の通知 */
	/* Notification of Warning */
	#define criErr_NotifyWarning(id, msg)						criErr_Notify(CRIERR_LEVEL_WARNING, id ":" msg)
	#define criErr_NotifyWarning1(id, msg, p1)					criErr_Notify1(CRIERR_LEVEL_WARNING, (id ":" msg), (CriUintPtr)(p1))
	#define criErr_NotifyWarning2(id, msg, p1, p2)				criErr_Notify2(CRIERR_LEVEL_WARNING, (id ":" msg), (CriUintPtr)(p1), (CriUintPtr)(p2))
	#define criErr_NotifyWarningPrmArray(id, msg, p1, p2, pa)	criErr_NotifyPrmArray(CRIERR_LEVEL_WARNING, (id ":" msg), (CriUintPtr)(p1), (CriUintPtr)(p2), (CriUintPtr *)(pa))
	#define criErr_NotifyWarningGeneric(_error_id, _error_no)	criErr_NotifyGeneric(CRIERR_LEVEL_WARNING, _error_id, _error_no)
#endif

/**************************************************************************** 
 *      Data type declaration												* 
 ****************************************************************************/

/*	Error Callback Function type	*/
typedef void (CRIAPI *CriErrCbFunc)(const CriChar8 *errid, CriUint32 p1, CriUint32 p2, CriUint32 *parray);

/****************************************************************************
 *		変数の宣言															*
 *      Variable Declaration												*
 ****************************************************************************/
/* エラー出力省略用変数 */
/* default argument of CriError */
#ifdef __cplusplus
namespace criErr {
	extern CriError ErrorContainer;
}
#endif	/* __cplusplus */

/****************************************************************************
 *		関数の宣言															*
 *      Function Declaration												*
 ****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*JP
 * \brief		エラーID文字列からエラーメッセージへ変換
 * \ingroup 	CRI_ERROR
 * \param[in]	errid	エラーID文字列
 * \return		エラーメッセージ
 * \par 説明:
 * エラーID文字列から詳細なエラーメッセージへ変換します。<br>
 * \attention
 * この関数は旧仕様の関数です。<br>
 * 代わりに ::criErr_ConvertIdToMessage 関数を使用してください。
 * \sa criErr_ConvertIdToMessage
 */
/*EN
 * \brief Convert error ID to error message
 * \ingroup 	CRI_ERROR
 * \param[in]	errid	error ID
 * \return		error message
 * \par Explanation:
 * This function converts error ID to detailed error message.<br>
 * \attention
 * This function is an obsolete one.<br>
 * Please use the ::criErr_ConvertIdToMessage function instead.
 * \sa criErr_ConvertIdToMessage
 */
const CriChar8* CRIAPI criErr_ConvertIdToMsg(const CriChar8 *errid);

/*JP
 * \brief		エラーID文字列からエラーメッセージへ変換
 * \ingroup 	CRI_ERROR
 * \param[in]	errid	エラーID文字列
 * \param[in]	p1		補足情報1
 * \param[in]	p2		補足情報2
 * \return		エラーメッセージ
 * \par 説明:
 * エラーID文字列から詳細なエラーメッセージへ変換します。<br>
 * \par 用例:
 * \code
 * void user_error_callback_func(const CriChar8 *errid, CriUint32 p1, CriUint32 p2, CriUint32 *parray);
 * {
 * 	const CriChar8 *errmsg;
 * 	errmsg = criErr_ConvertIdToMessage(errid, p1, p2);
 * 	printf("%s\n", errmsg);
 * }
 * \endcode
 */
/*EN
 * \brief Convert error ID to error message
 * \ingroup 	CRI_ERROR
 * \param[in]	errid	error ID
 * \param[in]	p1		supplementary information 1
 * \param[in]	p2		supplementary information 2
 * \return		error message
 * \par Explanation:
 * This function converts error ID to detailed error message.<br>
 * \par Example:
 * \code
 * void user_error_callback_func(const CriChar8 *errid, CriUint32 p1, CriUint32 p2, CriUint32 *parray);
 * {
 * 	const CriChar8 *errmsg;
 * 	errmsg = criErr_ConvertIdToMessage(errid, p1, p2);
 * 	printf("%s\n", errmsg);
 * }
 * \endcode
 */
const CriChar8* CRIAPI criErr_ConvertIdToMessage(const CriChar8 *errid, CriUint32 p1, CriUint32 p2);

/*JP
 * \brief		エラーコールバック関数の登録
 * \ingroup 	CRI_ERROR
 * \param[in]	cbf	エラーコールバック関数
 * \return		なし
 * \par 説明:
 * エラーコールバック関数を登録します。<br>
 * 登録された関数は、CRIミドルウエアライブラリ内でエラーが発生したときに呼び出されます。<br>
 * \par 用例:
 * \code
 * void user_error_callback_func(const CriChar8 *errid, CriUint32 p1, CriUint32 p2, CriUint32 *parray);
 * {
 * 	const CriChar8 *errmsg;
 * 	errmsg = criErr_ConvertIdToMessage(errid, p1, p2);
 * 	printf("%s\n", errmsg);
 * }
 * 
 * void main(int ac, char *av[])
 * {
 * 		：
 * 	// エラーコールバックの登録
 * 	criErr_SetCallback(user_error_callback_func);
 * 		：
 * }
 * \endcode
 * \attention
 * 同時に登録できるエラーコールバック関数は１つです。<br>
 * 登録後に再度本関数を呼び出した場合は現在の登録を上書きします。<br>
 * <br>
 * エラーコールバックの上書きが発生した場合、上書きした側、された側双方に警告が返されます。<br>
 * アプリケーションの正常な処理の流れとして、意図的にエラーコールバック関数の差し替えを行うケースがある場合には、
 * 一旦「criErr_SetCallback(NULL);」を実行してコールバックの登録を解除し、
 * その後に改めてエラーコールバック関数の登録を行ってください。
 */
/*EN
 * \brief		Register error callback function
 * \ingroup 	CRI_ERROR
 * \param[in]	cbf	error callback function
 * \return		NONE
 * \par Explanation:
 * This function registers an error callback function.<br>
 * The registered function is called if an error occurs within the CRI middleware library.
 * \par Example:
 * \code
 * void user_error_callback_func(const CriChar8 *errid, CriUint32 p1, CriUint32 p2, CriUint32 *parray);
 * {
 * 	const CriChar8 *errmsg;
 * 	errmsg = criErr_ConvertIdToMessage(errid, p1, p2);
 * 	printf("%s\n", errmsg);
 * }
 * 
 * void main(int ac, char *av[])
 * {
 * 		:
 * 	// Registers the error callback function
 * 	criErr_SetCallback(user_error_callback_func);
 * 		:
 * }
 * \endcode
 */
void CRIAPI criErr_SetCallback(CriErrCbFunc cbf);

/*JP
 *  \brief		エラー通知レベルの変更
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	エラー通知レベル
 *	\return		なし
 *	\par 説明:
 *	エラーコールバックに通知するエラーのレベルを変更します。
 */
/*EN
 * \brief Change error notification level
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	error notification level
 *	\return		NONE
 *	\par Explanation:
 *	This function changes the level of error information that is notified to the error callback.
 */
void CRIAPI criErr_SetErrorNotificationLevel(CriErrorNotificationLevel level);

/*JP
 *  \brief		エラー発生回数の取得
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	エラーレベル
 *	\return		エラー発生回数
 *	\par 説明:
 *	エラー発生回数を取得します。
 */
/*EN
 * \brief Retrieve error count
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	error level
 *	\return		number of errors occured
 *	\par Explanation:
 *	This function retrieves the number of errors occured.
 */
CriUint32 CRIAPI criErr_GetErrorCount(CriErrorLevel level);

/*JP
 *  \brief		エラー発生回数のリセット
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	エラーレベル
 *	\return		なし
 *	\par 説明:
 *	エラー発生回数のカウンタを0に戻します。
 */
/*EN
 * \brief Resets error count
 *	\ingroup 	CRI_ERROR
 *	\param[in]	level	error level
 *	\return		NONE
 *	\par Explanation:
 *	This function resets the counter for number of errors occured.
 */
void CRIAPI criErr_ResetErrorCount(CriErrorLevel level);

/* エラーコールバックを発生させる (内部関数) */
/* Error notification (Internal functions) */

#ifdef __cplusplus
}
#endif /* __cplusplus */

/***************************************************************************
 *      旧バージョンとの互換用
 *      For compatibility with old versions
 ***************************************************************************/

/*EN
 * @}
 */
/*JP
 * @}
 */

#endif	//	CRI_INCL_CRI_ERROR_INTR_H

/* --- end of file --- */
