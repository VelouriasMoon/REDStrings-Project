/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2010-2015 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Atom
 * Module   : Library User's Header for PC
 * File     : cri_atom_pc.h
 *
 ****************************************************************************/
/*!
 *	\file		cri_atom_pc.h
 */

/* 多重定義防止					*/
/* Prevention of redefinition	*/
#ifndef	CRI_INCL_CRI_ATOM_PC_H
#define	CRI_INCL_CRI_ATOM_PC_H

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include <Windows.h>
#include <cri_le_xpt.h>
#include <cri_le_error.h>
#include "cri_le_atom.h"
#include "cri_le_atom_ex.h"
#include "cri_le_atom_asr.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
/*JP
 * \brief ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_PC
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtom_Initialize_PC 関数に設定するコンフィグ構造体
 * （ ::CriAtomConfig_PC ）に、デフォルトの値をセットします。<br>
 * \attention
 * 本マクロは下位レイヤ向けのAPIです。<br>
 * AtomExレイヤの機能を利用する際には、本マクロの代わりに 
 * ::criAtomEx_SetDefaultConfig_PC マクロをご利用ください。
 * \sa CriAtomConfig_PC
 */
#define criAtom_SetDefaultConfig_PC(p_config)				\
{															\
	criAtom_SetDefaultConfig(&(p_config)->atom);			\
	criAtomAsr_SetDefaultConfig(&(p_config)->asr);			\
	criAtomHcaMx_SetDefaultConfig(&(p_config)->hca_mx);		\
}

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMLIB_PC
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomEx_Initialize_PC 関数に設定するコンフィグ構造体
 * （ ::CriAtomExConfig_PC ）に、デフォルトの値をセットします。<br>
 * \sa CriAtomExConfig_PC
 */
#define criAtomEx_SetDefaultConfig_PC(p_config)				\
{															\
	criAtomEx_SetDefaultConfig(&(p_config)->atom_ex);		\
	criAtomExAsr_SetDefaultConfig(&(p_config)->asr);		\
	criAtomExHcaMx_SetDefaultConfig(&(p_config)->hca_mx);	\
}

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
/*JP
 * \brief Atomライブラリ初期化用コンフィグ構造体
 * \ingroup ATOMLIB_PC
 * CRI Atomライブラリの動作仕様を指定するための構造体です。<br>
 * ::criAtom_Initialize_PC 関数の引数に指定します。<br>
 * \attention
 * 本構造体は下位レイヤ向けのAPIです。<br>
 * AtomExレイヤの機能を利用する際には、本構造体の代わりに 
 * ::CriAtomExConfig_PC 構造体をご利用ください。
 * \sa criAtom_Initialize_PC, criAtom_SetDefaultConfig_PC
 */
typedef struct CriAtomConfigTag_PC{
	CriAtomConfig			atom;		/*JP< Atom初期化用コンフィグ構造体		*/
	CriAtomAsrConfig		asr;		/*JP< ASR初期化用コンフィグ			*/
	CriAtomHcaMxConfig		hca_mx;		/*JP< HCA-MX初期化用コンフィグ構造体	*/
} CriAtomConfig_PC;

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief Atomライブラリ初期化用コンフィグ構造体
 * \ingroup ATOMLIB_PC
 * CRI Atomライブラリの動作仕様を指定するための構造体です。<br>
 * ::criAtomEx_Initialize_PC 関数の引数に指定します。<br>
 * \sa criAtomEx_Initialize_PC, criAtomEx_SetDefaultConfig_PC
 */
typedef struct CriAtomExConfigTag_PC{
	CriAtomExConfig			atom_ex;	/*JP< AtomEx初期化用コンフィグ構造体	*/
	CriAtomExAsrConfig		asr;		/*JP< ASR初期化用コンフィグ			*/
	CriAtomExHcaMxConfig	hca_mx;		/*JP< HCA-MX初期化用コンフィグ構造体	*/
} CriAtomExConfig_PC;

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
 * \brief ライブラリ初期化用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \par 説明:
 * ライブラリを使用するために必要な、ワーク領域のサイズを取得します。<br>
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomConfig_PC ）の内容によって変化します。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数は下位レイヤ向けのAPIです。<br>
 * AtomExレイヤの機能を利用する際には、本関数の代わりに 
 * ::criAtomEx_CalculateWorkSize_PC 関数をご利用ください。
 * \sa CriAtomConfig_PC, criAtom_Initialize_PC
 */
CriSint32 CRIAPI criAtom_CalculateWorkSize_PC(const CriAtomConfig_PC *config);

/*JP
 * \brief ライブラリの初期化
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ライブラリを初期化します。<br>
 * ライブラリの機能を利用するには、必ずこの関数を実行する必要があります。<br>
 * （ライブラリの機能は、本関数を実行後、 ::criAtom_Finalize_PC 関数を実行するまでの間、
 * 利用可能です。）<br>
 * <br>
 * ライブラリを初期化する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ライブラリが必要とするワーク領域のサイズは、初期化用コンフィグ構造体の内容に応じて
 * 変化します。<br>
 * ワーク領域サイズの計算には、 ::criAtom_CalculateWorkSize_PC 
 * 関数を使用してください。<br>
 * \par 備考:
 * ::criAtom_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数は内部的に以下の関数を実行します。<br>
 * 	- ::criAtom_Initialize
 * 	- ::criAtomAsr_Initialize
 * 	- ::criAtomHcaMx_Initialize
 * 本関数を実行する場合、上記関数を実行しないでください。<br>
 * <br>
 * 本関数を実行後、必ず対になる ::criAtom_Finalize_PC 関数を実行してください。<br>
 * また、 ::criAtom_Finalize_PC 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * <br>
 * 本関数は下位レイヤ向けのAPIです。<br>
 * AtomExレイヤの機能を利用する際には、本関数の代わりに 
 * ::criAtomEx_Initialize_PC 関数をご利用ください。
 * \sa CriAtomConfig_PC, criAtom_Finalize_PC,
 * criAtom_SetUserAllocator, criAtom_CalculateWorkSize_PC
 */
void CRIAPI criAtom_Initialize_PC(
	const CriAtomConfig_PC *config, void *work, CriSint32 work_size);

/*JP
 * \brief ライブラリの終了
 * \ingroup ATOMLIB_PC
 * \par 説明:
 * ライブラリを終了します。<br>
 * \attention
 * 本関数は内部的に以下の関数を実行します。<br>
 * 	- ::criAtom_Finalize
 * 	- ::criAtomAsr_Finalize
 * 	- ::criAtomHcaMx_Finalize
 * 本関数を実行する場合、上記関数を実行しないでください。<br>
 * <br>
 * ::criAtom_Initialize_PC 関数実行前に本関数を実行することはできません。<br>
 * <br>
 * 本関数は下位レイヤ向けのAPIです。<br>
 * AtomExレイヤの機能を利用する際には、本関数の代わりに 
 * ::criAtomEx_Finalize_PC 関数をご利用ください。
 * \sa criAtom_Initialize_PC
 */
void CRIAPI criAtom_Finalize_PC(void);

/*JP
 * \brief サーバー処理スレッドのプライオリティ変更
 * \ingroup ATOMLIB_PC
 * \param[in]	prio	スレッドプライオリティ
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのプライオリティを変更します。<br>
 * デフォルト状態（本関数を実行しない場合）では、サーバー処理スレッドのプライオリティは
 * THREAD_PRIORITY_HIGHEST に設定されます。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数は何も処理を行いません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行しても、効果はありません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * サーバー処理スレッドは、CRI File Systemライブラリでも利用されています。<br>
 * すでにCRI File SystemライブラリのAPIでサーバー処理スレッドの設定を変更している場合
 * 本関数により設定が上書きされますのでご注意ください。<br>
 * \sa criAtom_Initialize_PC, criAtom_GetThreadPriority_PC
 */
void CRIAPI criAtom_SetThreadPriority_PC(int prio);

/*JP
 * \brief サーバー処理スレッドのプライオリティ取得
 * \ingroup ATOMLIB_PC
 * \return	int		スレッドプライオリティ
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのプライオリティを取得します。<br>
 * 取得に成功すると、本関数はサーバー処理を行うスレッドのプライオリティを返します。<br>
 * 取得に失敗した場合、本関数は THREAD_PRIORITY_ERROR_RETURN を返します。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * \sa criAtom_Initialize_PC, criAtom_SetThreadPriority_PC
 */
int CRIAPI criAtom_GetThreadPriority_PC(void);

/*JP
 * \brief サーバー処理スレッドのアフィニティマスク変更
 * \ingroup ATOMLIB_PC
 * \param[in]	mask	スレッドアフィニティマスク
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのアフィニティマスクを変更します。<br>
 * デフォルト状態（本関数を実行しない場合）では、サーバー処理が動作するプロセッサは
 * 一切制限されません。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数は何も処理を行いません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行しても、効果はありません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * サーバー処理スレッドは、CRI File Systemライブラリでも利用されています。<br>
 * すでにCRI File SystemライブラリのAPIでサーバー処理スレッドの設定を変更している場合
 * 本関数により設定が上書きされますのでご注意ください。<br>
 * \sa criAtom_Initialize_PC, criAtom_GetThreadAffinityMask_PC
 */
void CRIAPI criAtom_SetThreadAffinityMask_PC(DWORD_PTR mask);

/*JP
 * \brief サーバー処理スレッドのアフィニティマスクの取得
 * \ingroup ATOMLIB_PC
 * \return	DWORD_PTR	スレッドアフィニティマスク
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのアフィニティマスクを取得します。<br>
 * 取得に成功すると、本関数はサーバー処理を行うスレッドのアフィニティマスクを返します。<br>
 * 取得に失敗した場合、本関数は 0 を返します。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * \sa criAtom_Initialize_PC, criAtom_SetThreadAffinityMask_PC
 */
DWORD_PTR CRIAPI criAtom_GetThreadAffinityMask_PC(void);

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief ライブラリ初期化用ワーク領域サイズの計算
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \par 説明:
 * ライブラリを使用するために必要な、ワーク領域のサイズを取得します。<br>
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomExConfig_PC ）の内容によって変化します。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * ::CriAtomExConfig 構造体のacf_infoメンバに値を設定している場合、本関数は失敗し-1を返します。<br>
 * 初期化処理内でACFデータの登録を行う場合は、本関数値を使用したメモリ確保ではなくADX2システムによる
 * メモリアロケーターを使用したメモリ確保処理が必要になります。
 * \sa CriAtomExConfig_PC, criAtomEx_Initialize_PC
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSize_PC(const CriAtomExConfig_PC *config);

/*JP
 * \brief ライブラリの初期化
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ライブラリを初期化します。<br>
 * ライブラリの機能を利用するには、必ずこの関数を実行する必要があります。<br>
 * （ライブラリの機能は、本関数を実行後、 ::criAtomEx_Finalize_PC 関数を実行するまでの間、
 * 利用可能です。）<br>
 * <br>
 * ライブラリを初期化する際には、ライブラリが内部で利用するためのメモリ領域（ワーク領域）
 * を確保する必要があります。<br>
 * ライブラリが必要とするワーク領域のサイズは、初期化用コンフィグ構造体の内容に応じて
 * 変化します。<br>
 * ワーク領域サイズの計算には、 ::criAtomEx_CalculateWorkSize_PC 
 * 関数を使用してください。<br>
 * \par 備考:
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * 本関数にワーク領域を指定する必要はありません。<br>
 * （ work に NULL 、 work_size に 0 を指定することで、登録済みのアロケーター
 * から必要なワーク領域サイズ分のメモリが動的に確保されます。）
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数は内部的に以下の関数を実行します。<br>
 * 	- ::criAtomEx_Initialize
 * 	- ::criAtomExAsr_Initialize
 * 	- ::criAtomExHcaMx_Initialize
 * 本関数を実行する場合、上記関数を実行しないでください。<br>
 * <br>
 * 本関数を実行後、必ず対になる ::criAtomEx_Finalize_PC 関数を実行してください。<br>
 * また、 ::criAtomEx_Finalize_PC 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa CriAtomExConfig_PC, criAtomEx_Finalize_PC,
 * criAtomEx_SetUserAllocator, criAtomEx_CalculateWorkSize_PC
 */
void CRIAPI criAtomEx_Initialize_PC(
	const CriAtomExConfig_PC *config, void *work, CriSint32 work_size);

/*JP
 * \brief ライブラリの終了
 * \ingroup ATOMLIB_PC
 * \par 説明:
 * ライブラリを終了します。<br>
 * \attention
 * 本関数は内部的に以下の関数を実行します。<br>
 * 	- ::criAtomEx_Finalize
 * 	- ::criAtomExAsr_Finalize
 * 	- ::criAtomExHcaMx_Finalize
 * 本関数を実行する場合、上記関数を実行しないでください。<br>
 * <br>
 * ::criAtomEx_Initialize_PC 関数実行前に本関数を実行することはできません。<br>
 * \sa criAtomEx_Initialize_PC
 */
void CRIAPI criAtomEx_Finalize_PC(void);

/*JP
 * \brief サーバー処理スレッドのプライオリティ変更
 * \ingroup ATOMLIB_PC
 * \param[in]	prio	スレッドプライオリティ
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのプライオリティを変更します。<br>
 * デフォルト状態（本関数を実行しない場合）では、サーバー処理スレッドのプライオリティは
 * THREAD_PRIORITY_HIGHEST に設定されます。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数は何も処理を行いません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行しても、効果はありません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * サーバー処理スレッドは、CRI File Systemライブラリでも利用されています。<br>
 * すでにCRI File SystemライブラリのAPIでサーバー処理スレッドの設定を変更している場合
 * 本関数により設定が上書きされますのでご注意ください。<br>
 * \sa criAtomEx_Initialize_PC, criAtomEx_GetThreadPriority_PC
 */
#define criAtomEx_SetThreadPriority_PC(prio)	\
	criAtom_SetThreadPriority_PC(prio)

/*JP
 * \brief サーバー処理スレッドのプライオリティ取得
 * \ingroup ATOMLIB_PC
 * \return	int		スレッドプライオリティ
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのプライオリティを取得します。<br>
 * 取得に成功すると、本関数はサーバー処理を行うスレッドのプライオリティを返します。<br>
 * 取得に失敗した場合、本関数は THREAD_PRIORITY_ERROR_RETURN を返します。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * \sa criAtomEx_Initialize_PC, criAtomEx_SetThreadPriority_PC
 */
#define criAtomEx_GetThreadPriority_PC()	\
	criAtom_GetThreadPriority_PC()

/*JP
 * \brief サーバー処理スレッドのアフィニティマスク変更
 * \ingroup ATOMLIB_PC
 * \param[in]	mask	スレッドアフィニティマスク
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのアフィニティマスクを変更します。<br>
 * デフォルト状態（本関数を実行しない場合）では、サーバー処理が動作するプロセッサは
 * 一切制限されません。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数は何も処理を行いません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行しても、効果はありません。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * サーバー処理スレッドは、CRI File Systemライブラリでも利用されています。<br>
 * すでにCRI File SystemライブラリのAPIでサーバー処理スレッドの設定を変更している場合
 * 本関数により設定が上書きされますのでご注意ください。<br>
 * \sa criAtomEx_Initialize_PC, criAtomEx_GetThreadAffinityMask_PC
 */
#define criAtomEx_SetThreadAffinityMask_PC(mask)	\
	criAtom_SetThreadAffinityMask_PC(mask)

/*JP
 * \brief サーバー処理スレッドのアフィニティマスクの取得
 * \ingroup ATOMLIB_PC
 * \return	DWORD_PTR	スレッドアフィニティマスク
 * \par 説明:
 * サーバー処理（ライブラリの内部処理）を行うスレッドのアフィニティマスクを取得します。<br>
 * 取得に成功すると、本関数はサーバー処理を行うスレッドのアフィニティマスクを返します。<br>
 * 取得に失敗した場合、本関数は 0 を返します。<br>
 * \attention:
 * 本関数は、ライブラリ初期化時にスレッドモデルをマルチスレッドモデル
 * （ ::CRIATOM_THREAD_MODEL_MULTI ）に設定した場合にのみ効果を発揮します。<br>
 * 他のスレッドモデルを選択した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * <br>
 * 本関数は初期化後〜終了処理前の間に実行する必要があります。<br>
 * 初期化前や終了処理後に本関数を実行した場合、本関数はエラー値を返します。<br>
 * （エラーコールバックが発生します。）<br>
 * \sa criAtomEx_Initialize_PC, criAtomEx_SetThreadAffinityMask_PC
 */
#define criAtomEx_GetThreadAffinityMask_PC()	\
	criAtom_GetThreadAffinityMask_PC()

/*==========================================================================
 *      Functions for PCM Output
 *=========================================================================*/
/*JP
 * \brief ユーザPCM出力方式用ワーク領域サイズ計算
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \par 説明:
 * ユーザPCM出力方式でライブラリを初期化するために必要な、
 * ワーク領域のサイズを取得します。<br>
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomExConfig_PC ）の内容によって変化します。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数は ::criAtomEx_InitializeForUserPcmOutput_PC 
 * 関数を使用してライブラリを初期化する場合に使用します。<br>
 * ::criAtomEx_Initialize_PC 関数を使用する場合には、本関数ではなく
 * ::criAtomEx_CalculateWorkSize_PC 関数を使用してワーク領域サイズを計算してください。<br>
 * \sa CriAtomExConfig_PC, criAtomEx_InitializeForUserPcmOutput_PC
 */
#define criAtomEx_CalculateWorkSizeForUserPcmOutput_PC(config)	\
	criAtomEx_CalculateWorkSizeForUserPcmOutput(config)

/*JP
 * \brief ユーザPCM出力用ライブラリ初期化
 * \ingroup ATOMLIB_PC
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ユーザPCM出力モードでライブラリを初期化します。<br>
 * <br>
 * 本関数を使用して初期化処理を行った場合、Atomライブラリは音声出力を行いません。<br>
 * ユーザは ::criAtomExAsr_GetPcmDataFloat32 
 * 関数を使用してライブラリから定期的にPCMデータを取得し、
 * アプリケーション側で音声出力を行う必要があります。<br>
 * \attention
 * 本関数と以下の関数は併用できません。<br>
 * 	- ::criAtom_Initialize
 * 	- ::criAtomAsr_Initialize
 * 	- ::criAtomHcaMx_Initialize
 * 	- ::criAtom_Initialize_PC
 * \sa CriAtomExConfig_PC, criAtomEx_FinalizeForUserPcmOutput_PC,
 * criAtomExAsr_GetPcmDataFloat32, criAtomEx_CalculateWorkSizeForUserPcmOutput_PC
 */
#define criAtomEx_InitializeForUserPcmOutput_PC(config, work, work_size)	\
	criAtomEx_InitializeForUserPcmOutput(config, work, work_size)

/*JP
 * \brief ユーザPCM出力用ライブラリ終了処理
 * \ingroup ATOMLIB_PC
 * \par 説明:
 * ユーザPCM出力モードで初期化されたライブラリに対し、終了処理を行います。<br>
 * \attention
 * 本関数は ::criAtomEx_InitializeForUserPcmOutput_PC 
 * 関数を使用してライブラリを初期化した場合に使用します。<br>
 * ::criAtomEx_Initialize_PC 関数を使用した場合には、本関数ではなく
 * ::criAtomEx_Finalize_PC 関数を使用して終了処理を行ってください。<br>
 * \sa criAtomEx_InitializeForUserPcmOutput_PC
 */
#define criAtomEx_FinalizeForUserPcmOutput_PC()	\
	criAtomEx_FinalizeForUserPcmOutput()

#ifdef __cplusplus
}
#endif

#endif	/* CRI_INCL_CRI_ATOM_PC_H */

/* --- end of file --- */
