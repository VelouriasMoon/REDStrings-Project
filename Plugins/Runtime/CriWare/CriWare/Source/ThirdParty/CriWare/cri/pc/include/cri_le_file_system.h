/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2006-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRI File System
 * Module   : Library User's Header
 * File     : cri_file_system.h
 *
 ****************************************************************************/
/*!
 *	\file		cri_file_system.h
 */

/* 多重定義防止					*/
/* Prevention of redefinition	*/
#ifndef	CRI_FILE_SYSTEM_H_INCLUDED
#define	CRI_FILE_SYSTEM_H_INCLUDED

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "cri_le_xpt.h"
#include "cri_le_error.h"

#ifdef __cplusplus
#if defined(XPT_TGT_TBCG)
#if !defined(XPT_DISABLE_FSV1API)
	/* 旧バージョンAPI */
	/* Old version API */
	#include "cri_file_system_ver1api.h"
#endif
#endif
#endif

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/* バージョン情報 */
/* Version Number */
#define CRI_FS_VER_NAME		"CRI File System (LE)"
#define CRI_FS_VER_NUM		"2.80.17"
#define CRI_FS_VER_MAJOR	(2)
#define CRI_FS_VER_MINOR	(80)
#define CRI_FS_VER_PATCH	(17)
#define CRI_FS_VER_RELEASE	(0)
#define CRI_FS_VER_REVISION	(0)

/*JP
 * \brief コンフィギュレーションのデフォルト値
 */
#if defined(XPT_TGT_NITRO)
#define	CRIFS_CONFIG_DEFAULT_THREAD_MODEL		CRIFS_THREAD_MODEL_MULTI
#define	CRIFS_CONFIG_DEFAULT_NUM_BINDERS		(8)
#define	CRIFS_CONFIG_DEFAULT_NUM_LOADERS		(32)
#define	CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS	(2)
#define	CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES	(4)
#define	CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS		(0)
#define	CRIFS_CONFIG_DEFAULT_MAX_BINDS			(8)
#define	CRIFS_CONFIG_DEFAULT_MAX_FILES			(32)
#define	CRIFS_CONFIG_DEFAULT_MAX_PATH			(128)
#elif defined(XPT_TGT_3DS)
#define	CRIFS_CONFIG_DEFAULT_THREAD_MODEL		CRIFS_THREAD_MODEL_MULTI
#define	CRIFS_CONFIG_DEFAULT_NUM_BINDERS		(8)
#define	CRIFS_CONFIG_DEFAULT_NUM_LOADERS		(32)
#define	CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS	(2)
#define	CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES	(4)
#define	CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS		(0)
#define	CRIFS_CONFIG_DEFAULT_MAX_BINDS			(8)
#define	CRIFS_CONFIG_DEFAULT_MAX_FILES			(32)
#define	CRIFS_CONFIG_DEFAULT_MAX_PATH			(256)
#elif defined(XPT_TGT_TBCG)
#define	CRIFS_CONFIG_DEFAULT_THREAD_MODEL		CRIFS_THREAD_MODEL_MULTI
#define	CRIFS_CONFIG_DEFAULT_NUM_BINDERS		(8)
#define	CRIFS_CONFIG_DEFAULT_NUM_LOADERS		(32)
#define	CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS	(16)
#define	CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES	(1)
#define	CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS		(0)
#define	CRIFS_CONFIG_DEFAULT_MAX_BINDS			(16)
#define	CRIFS_CONFIG_DEFAULT_MAX_FILES			(32)
#define	CRIFS_CONFIG_DEFAULT_MAX_PATH			(256)
#elif defined(XPT_TGT_EMSCRIPTEN)
#define	CRIFS_CONFIG_DEFAULT_THREAD_MODEL		CRIFS_THREAD_MODEL_SINGLE
#define	CRIFS_CONFIG_DEFAULT_NUM_BINDERS		(8)
#define	CRIFS_CONFIG_DEFAULT_NUM_LOADERS		(32)
#define	CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS	(16)
#define	CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES	(1)
#define	CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS		(0)
#define	CRIFS_CONFIG_DEFAULT_MAX_BINDS			(16)
#define	CRIFS_CONFIG_DEFAULT_MAX_FILES			(32)
#define	CRIFS_CONFIG_DEFAULT_MAX_PATH			(256)
#elif defined(CRI_USE_FILESYSTEM_PLATFORM_HEADER)
#include "cri_file_system_platform.h"
#else
#define	CRIFS_CONFIG_DEFAULT_THREAD_MODEL		CRIFS_THREAD_MODEL_MULTI
#define	CRIFS_CONFIG_DEFAULT_NUM_BINDERS		(16)
#define	CRIFS_CONFIG_DEFAULT_NUM_LOADERS		(16)
#define	CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS	(2)
#define	CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES	(16)
#define	CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS		(0)
#define	CRIFS_CONFIG_DEFAULT_MAX_BINDS			(16)
#define	CRIFS_CONFIG_DEFAULT_MAX_FILES			(16)
#define	CRIFS_CONFIG_DEFAULT_MAX_PATH			(256)
#endif

/*JP
 * \brief デフォルトデバイスID
 */
#define CRIFS_DEVICE_DEFAULT	(CRIFS_DEVICE_00)
/*JP
 * \brief メモリファイルシステムデバイスID
 */

/*JP
 * \brief デフォルトデバイスID旧定義
 * \par 備考:
 * この定義は廃止予定です。かわりに::CRIFS_DEVICE_DEFAULTを使用してください。
 * \sa CRIFS_DEVICE_DEFAULT
 */
#define CRIFS_DEFAULT_DEVICE	(CRIFS_DEVICE_DEFAULT)

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*JP
 * \brief ユーザーアロケーターの登録
 * \ingroup FSLIB_CRIFS
 * \param[in]	p_malloc_func	メモリ確保関数
 * \param[in]	p_free_func		メモリ解放関数
 * \param[in]	p_obj			ユーザー指定オブジェクト
 * \par 説明:
 * CRI File Systemライブラリにメモリアロケーター（メモリの確保／解放関数）を登録します。<br>
 * CRI File Systemライブラリ内がライブラリ内で行なうメモリ解放処理を、
 * ユーザー独自のメモリ解放処理に置き換えたい場合に使用します。
 */
#define criFs_SetUserAllocator(p_malloc_func, p_free_func, p_obj)	\
{\
	criFs_SetUserMallocFunction(p_malloc_func, p_obj);\
	criFs_SetUserFreeFunction(p_free_func, p_obj);\
}

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*==========================================================================
 *      CRI File System API
 *=========================================================================*/
/*JP
 * \brief スレッドモデル
 * \par 説明:
 * CRI File Systemライブラリがどのようなスレッドモデルで動作するかを表します。<br>
 * ライブラリ初期化時（::criFs_InitializeLibrary 関数）に、::CriFsConfig 構造体にて指定します。
 * \sa CriFsConfig
 * \sa criFs_InitializeLibrary
 */
typedef enum CriFsThreadModelTag {
	/*JP
	 * \brief マルチスレッド
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criFs_InitializeLibrary 関数呼び出し時に作成されます。
	 */
	/*EN
	 * \brief Multithread
	 * \par Description:
	 * The library creates threads inside and operates in multithread environment. <br>
	 * A thread is created when the ::criFs_InitializeLibrary function is called.
	 */
	CRIFS_THREAD_MODEL_MULTI = 0,

	/*JP
	 * \brief マルチスレッド（ユーザー駆動式）
	 * \par 説明:
	 * ライブラリは内部でスレッドを作成し、マルチスレッドにて動作します。<br>
	 * スレッドは ::criFs_InitializeLibrary 関数呼び出し時に作成されます。<br>
	 * サーバー処理自体は作成されたスレッド上で実行されますが、
	 * CRIFS_THREAD_MODEL_MULTI とは異なり、自動的には実行されません。<br>
	 * ユーザーは ::criFs_ExecuteMain 関数で明示的にサーバー処理を駆動する必要があります。<br>
	 * （  ::criFs_ExecuteMain 関数を実行すると、スレッドが起動し、サーバー処理が実行されます。）<br>
	 */
	CRIFS_THREAD_MODEL_MULTI_USER_DRIVEN = 3,

	/*JP
	 * \brief ユーザーマルチスレッド
	 * \par 説明:
	 * ライブラリ内部ではスレッドを作成しませんが、ユーザーが独自に作成したスレッドからサーバー処理関数（::criFs_ExecuteFileAccess 関数、::criFs_ExecuteDataDecompression 関数）を呼び出せるよう、内部の排他制御は行います。
	 */
	/*EN
	 * \brief User multithread
	 * \par Description:
	 * No thread is created but exclusion control is performed inside the library for the server processing functions (::criFs_ExecuteFileAccess, ::criFs_ExecuteDataDecompression) to be able to be called from a user-created thread.
	 */
	CRIFS_THREAD_MODEL_USER_MULTI = 1,

	/*JP
	 * \brief シングルスレッド
	 * \par 説明:
	 * ライブラリ内部でスレッドを作成しません。また、内部の排他制御も行いません。<br>
	 * このモデルを選択した場合、各APIとサーバー処理関数（::criFs_ExecuteFileAccess 関数、::criFs_ExecuteDataDecompression 関数）とを同一スレッドから呼び出すようにしてください。
	 */
	/*EN
	 * \brief Single thread
	 * \par Description:
	 * No thread is created inside the library. Exclusion control is not performed inside the library either. <br>
	 * When selecting this model, call the APIs and server processing functions (::criFs_ExecuteFileAccess, ::criFs_ExecuteDataDecompression) from the same thread.
	 */
	CRIFS_THREAD_MODEL_SINGLE = 2,

	/* enum be 4bytes */
	CRIFS_THREAD_MODEL_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriFsThreadModel;

/*JP
 * \brief コンフィギュレーション
 * \par 説明:
 * CRI File Systemライブラリの動作仕様を指定するための構造体です。<br>
 * ライブラリ初期化時（ ::criFs_InitializeLibrary 関数）に引数として本構造体を指定します。<br>
 * \par
 * CRI File Systemライブラリは、初期化時に指定されたコンフィギュレーションに応じて、内部リソースを必要な数分だけ確保します。<br>
 * そのため、コンフィギュレーションに指定する値を小さくすることで、ライブラリが必要とするメモリのサイズを小さく抑えることが可能です。<br>
 * ただし、コンフィギュレーションに指定した数以上のハンドルを確保することはできなくなるため、値を小さくしすぎると、ハンドルの確保に失敗する可能性があります。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criFs_SetDefaultConfig 関数でデフォルトパラメータをセットし、 ::criFs_InitializeLibrary 関数に指定してください。<br>
 * \attention
 * 将来的にメンバーが増える可能性に備え、設定前に::criFs_SetDefaultConfig 関数で初期化してから使用してください。<br>
 * \sa criFs_InitializeLibrary, criFs_SetDefaultConfig
 */
typedef struct CriFsConfigTag {
	/*JP
		\brief スレッドモデル
		\par 説明:
		CRI File Systemのスレッドモデルを指定します。<br>
		\sa CriFsThreadModel
	*/
	CriFsThreadModel thread_model;

	/*JP
		\brief 使用するCriFsBinderの数
		\par 説明:
		アプリケーション中で使用するバインダー（CriFsBinder）の数を指定します。<br>
		アプリケーション中で ::criFsBinder_Create 関数を使用してバインダーを作成する場合、
		本パラメータに使用するバインダーの数を指定する必要があります。<br>
		<br>
		num_bindersには「同時に使用するバインダーの最大数」を指定します。<br>
		例えば、 ::criFsBinder_Create 関数と ::criFsBinder_Destroy 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのバインダーしか使用しないため、関数の呼び出し回数に関係なくnum_bindersに1を指定することが可能です。<br>
		逆に、ある場面でバインダーを10個使用する場合には、その他の場面でバインダーを全く使用しない場合であっても、
		num_bindersに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するバインダーの数分だけのメモリを初期化時に要求します。<br>
		そのため、num_bindersに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\sa criFsBinder_Create, criFsBinder_Destroy
	*/
	CriSint32 num_binders;

	/*JP
		\brief 使用するCriFsLoaderの数
		\par 説明:
		アプリケーション中で使用するローダー（CriFsLoader）の数を指定します。<br>
		アプリケーション中で ::criFsLoader_Create 関数を使用してローダーを作成する場合、
		本パラメータに使用するローダーの数を指定する必要があります。<br>
		<br>
		num_loadersには「同時に使用するローダーの最大数」を指定します。<br>
		例えば、 ::criFsLoader_Create 関数と ::criFsLoader_Destroy 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのローダーしか使用しないため、関数の呼び出し回数に関係なくnum_loadersに1を指定することが可能です。<br>
		逆に、ある場面でローダーを10個使用する場合には、その他の場面でローダーを全く使用しない場合であっても、
		num_loadersに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するローダーの数分だけのメモリを初期化時に要求します。<br>
		そのため、num_loadersに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\sa criFsLoader_Create, criFsLoader_Destroy
	*/
	CriSint32 num_loaders;

	/*JP
		\brief 使用するCriFsGroupLoaderの数
		\par 説明:
		アプリケーション中で使用するグループローダー（CriFsGroupLoader）の数を指定します。<br>
		アプリケーション中で ::criFsGroupLoader_Create 関数を使用してグループローダーを作成する場合、
		本パラメータに使用するグループローダーの数を指定する必要があります。<br>
		<br>
		num_group_loadersには「同時に使用するグループローダーの最大数」を指定します。<br>
		例えば、 ::criFsGroupLoader_Create 関数と ::criFsGroupLoader_Destroy 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのグループローダーしか使用しないため、関数の呼び出し回数に関係なくnum_group_loadersに1を指定することが可能です。<br>
		逆に、ある場面でグループローダーを10個使用する場合には、その他の場面でグループローダーを全く使用しない場合であっても、
		num_group_loadersに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するグループローダーの数分だけのメモリを初期化時に要求します。<br>
		そのため、num_group_loadersに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\sa criFsGroupLoader_Create, criFsGroupLoader_Destroy
	*/
	CriSint32 num_group_loaders;

	/*JP
		\brief 使用するCriFsStdioの数
		\par 説明:
		アプリケーション中で使用するCriFsStdioハンドルの数を指定します。<br>
		アプリケーション中で ::criFsStdio_OpenFile 関数を使用してCriFsStdioハンドルを作成する場合、
		本パラメータに使用するCriFsStdioハンドルの数を指定する必要があります。<br>
		<br>
		num_stdio_handlesには「同時に使用するCriFsStdioハンドルの最大数」を指定します。<br>
		例えば、 ::criFsStdio_OpenFile 関数と ::criFsStdio_CloseFile 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのCriFsStdioハンドルしか使用しないため、関数の呼び出し回数に関係なくnum_stdio_handlesに1を指定することが可能です。<br>
		逆に、ある場面でCriFsStdioハンドルを10個使用する場合には、その他の場面でCriFsStdioハンドルを全く使用しない場合であっても、
		num_stdio_handlesに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するCriFsStdioハンドルの数分だけのメモリを初期化時に要求します。<br>
		そのため、num_stdio_handlesに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\attention
		ブリッジライブラリを使用してADXライブラリや救声主ライブラリを併用する場合、
		ADXTハンドルやcriSsPlyハンドルは内部的にCriFsStdioハンドルを作成します。<br>
		そのため、ブリッジライブラリを使用する場合には、CRI File Systemライブラリ初期化時に
		num_stdio_handlesにADXTハンドルやcriSsPlyハンドルの数を加えた値を指定してください。<br>
		\sa criFsStdio_OpenFile, criFsStdio_CloseFile
	*/
	CriSint32 num_stdio_handles;

	/*JP
		\brief 使用するCriFsInstallerの数
		\par 説明:
		アプリケーション中で使用するインストーラー（CriFsInstaller）の数を指定します。<br>
		アプリケーション中で criFsInstaller_Create 関数を使用してインストーラーを作成する場合、
		本パラメータに使用するインストーラーの数を指定する必要があります。<br>
		<br>
		num_installersには「同時に使用するインストーラーの最大数」を指定します。<br>
		例えば、 criFsInstaller_Create 関数と criFsInstaller_Destroy 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのインストーラーしか使用しないため、関数の呼び出し回数に関係なくnum_installersに1を指定することが可能です。<br>
		逆に、ある場面でインストーラーを10個使用する場合には、その他の場面でインストーラーを全く使用しない場合であっても、
		num_installersに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するインストーラーの数分だけのメモリを初期化時に要求します。<br>
		そのため、num_installersに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\attention
		::criFs_SetDefaultConfig マクロを使用してコンフィギュレーションを初期化する場合、num_installersの数は0に設定されます。<br>
		そのため、インストーラーを使用する場合には、アプリケーション中でnum_installersを明示的に指定する必要があります。<br>
	*/
	CriSint32 num_installers;

	/*JP
		\brief 最大同時バインド数
		\par 説明:
		アプリケーション中でバインド処理を行い、保持するバインドID（CriFsBindId）の数を指定します。<br>
		アプリケーション中で ::criFsBinder_BindCpk 関数等を使用してバインド処理を行う場合、
		本パラメータに使用するバインドIDの数を指定する必要があります。<br>
		<br>
		max_bindsには「同時に使用するバインドIDの最大数」を指定します。<br>
		例えば、 ::criFsBinder_BindCpk 関数と ::criFsBinder_Unbind 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのバインドIDしか使用しないため、関数の呼び出し回数に関係なくmax_bindsに1を指定することが可能です。<br>
		逆に、ある場面でバインドIDを10個使用する場合には、その他の場面でバインドを一切行わない場合であっても、
		max_bindsに10を指定する必要があります。<br>
		\par 備考:
		CRI File Systemライブラリは、使用するバインドIDの数分だけのメモリを初期化時に要求します。<br>
		そのため、max_bindsに必要最小限の値をセットすることで、ライブラリが必要とするメモリのサイズを抑えることが可能です。<br>
		\sa criFsBinder_BindCpk, criFsBinder_BindFile, criFsBinder_BindFiles, criFsBinder_BindDirectory, criFsBinder_Unbind
	*/
	CriSint32 max_binds;

	/*JP
		\brief 最大同時オープンファイル数
		\par 説明:
		アプリケーション中でオープンするファイルの数を指定します。<br>
		アプリケーション中で ::criFsStdio_OpenFile 関数等を使用してファイルをオープンする場合、
		本パラメータにオープンするファイルの数を指定する必要があります。<br>
		<br>
		max_filesには「同時にオープンするファイルの最大数」を指定します。<br>
		例えば、 ::criFsStdio_OpenFile 関数と ::criFsStdio_CloseFile 関数を交互に続けて実行するケースにおいては、
		最大同時には1つのファイルしかオープンしないため、関数の呼び出し回数に関係なくmax_filesに1を指定することが可能です。<br>
		逆に、ある場面でファイルを10個オープンする場合には、その他の場面でファイルを1つしかオープンしない場合であっても、
		max_filesに10を指定する必要があります。<br>
		\par 補足:
		CRI File Systemライブラリは、以下の関数を実行した場合にファイルをオープンします。<br>
		\table "ファイルがオープンされる場面" align=center border=1 cellspacing=0 cellpadding=4
		{関数					|備考	}
		[criFsBinder_BindCpk	|オープンされるファイルの数は1つ。<br> criFsBinder_Unbind 関数が実行されるまでの間ファイルはオープンされ続ける。	]
		[criFsBinder_BindFile	|オープンされるファイルの数は1つ。<br> criFsBinder_Unbind 関数が実行されるまでの間ファイルはオープンされ続ける。	]
		[criFsBinder_BindFiles	|リストに含まれる数分ファイルがオープンされる。<br> criFsBinder_Unbind 関数が実行されるまでファイルはオープンされ続ける。	]
		[criFsLoader_Load		|オープンされるファイルの数は1つ。<br> ロードが完了するまでの間ファイルはオープンされ続ける。<br> バインダーを指定した場合、ファイルはオープンされない（バインダーが既にオープン済みのため）。	]
		[criFsStdio_OpenFile	|オープンされるファイルの数は1つ。<br> criFsStdio_CloseFile 関数が実行されるまでの間ファイルはオープンされ続ける。<br> バインダーを指定した場合、ファイルはオープンされない（バインダーが既にオープン済みのため）。	]
		[criFsInstaller_Copy	|オープンされるファイルの数は2つ。<br> ファイルコピーが完了するまでの間ファイルはオープンされ続ける。<br> バインダーを指定した場合、オープンされるファイルは1つになる（1つをバインダーが既にオープン済みのため）。	]
		\endtable
		\attention
		ブリッジライブラリを使用してADXライブラリや救声主ライブラリを併用する場合、
		ADXTハンドルやcriSsPlyハンドルは内部的にCriFsStdioハンドルを作成します。<br>
		そのため、ブリッジライブラリを使用する場合には、CRI File Systemライブラリ初期化時に
		max_filesにADXTハンドルやcriSsPlyハンドルの数を加えた値を指定してください。<br>
	*/
	CriSint32 max_files;

	/*JP
		\brief パスの最大長（バイト単位）
		\par 説明:
		アプリケーション中で指定するファイルパスの最大長を指定します。<br>
		アプリケーション中で ::criFsLoader_Load 関数等を使用してファイルにアクセスする場合、
		本パラメータにアプリケーションで使用するパス文字列の最大長を指定する必要があります。<br>
		<br>
		max_pathには「使用するパス文字列の最大数」を指定します。<br>
		ある場面で256バイトのファイルパスを使用する場合、その他の場面で32バイトのファイルパスしか使わない場合でも、
		max_pathには256を指定する必要があります。<br>
		\par 備考:
		パスの最大長には、終端のNULL文字を含んだ数を指定する必要があります。<br>
		（「文字数＋１バイト」の値を指定する必要があります。）<br>
		\attention
		PC等、ユーザーがアプリケーションを自由な場所にインストール可能な場合には、想定される最大サイズを max_path に指定する必要がありますので、ご注意ください。<br>
	*/
	CriSint32 max_path;

	/*JP
		\brief ライブラリバージョン番号
		\par 説明:
		CRI File Systemライブラリのバージョン番号です。<br>
		::criFs_SetDefaultConfig 関数により、本ヘッダーに定義されているバージョン番号が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	*/
	CriUint32 version;

	/*JP
		\brief ライブラリバージョン文字列
		\par 説明:
		CRI File Systemライブラリのバージョン文字列です。<br>
		::criFs_SetDefaultConfig 関数により、本ヘッダーに定義されているバージョン文字列が設定されます。<br>
		\attention
		アプリケーションでは、この値を変更しないでください。<br>
	 */
	const CriChar8 *version_string;

	/*JP
		\brief CPKファイルのCRCチェックを行うかどうか
		\par 説明:
		CPKファイル内のCRC情報を使用し、データ整合性チェックを行うかをどうかを切り替えるフラグです。<br>
		本フラグを CRI_TRUE に設定すると、以下のタイミングでCRCチェックを行います。
		 - CPKバインド時にTOC情報のCRCチェック
		 - コンテンツファイルロード時にコンテンツファイル単位のCRCチェック
		CPKに付加されたCRC情報と、実際に読みこんだデータのCRCが一致しない場合、エラーとなります。
	 */
	CriBool enable_crc_check;
} CriFsConfig;

/*JP
 * \brief メモリ確保関数
 * \ingroup FSLIB_CRIFS
 * \param[in]	obj		ユーザー指定オブジェクト
 * \param[in]	size	要求メモリサイズ（バイト単位）
 * \return		void*	確保したメモリのアドレス（失敗時はNULL）
 * \par 説明:
 * メモリ確保関数登録用のインターフェイスです。<br>
 * CRI File Systemライブラリがライブラリ内で行なうメモリ確保処理を、
 * ユーザー独自のメモリ確保処理に置き換えたい場合に使用します。<br>
 * \par 備考:
 * コールバック関数が実行される際には、sizeに必要とされるメモリのサイズがセット
 * されています。<br>
 * コールバック関数内でsize分のメモリを確保し、確保したメモリのアドレスを
 * 戻り値として返してください。<br>
 * 尚、引数の obj には、::criFs_SetUserMallocFunction 関数で登録したユーザー指定
 * オブジェクトが渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを ::criFs_SetUserMallocFunction 関数の引数にセットしておき、
 * 本コールバック関数の引数を経由して参照してください。<br>
 * \attention
 * メモリの確保に失敗した場合、エラーコールバックが返されたり、呼び出し元の関数が
 * 失敗する可能性がありますのでご注意ください。
 * \sa CriFsFreeFunc, criFs_SetUserMallocFunction
 */
typedef void *(CRIAPI *CriFsMallocFunc)(void *obj, CriUint32 size);

/*JP
 * \brief メモリ解放関数
 * \ingroup FSLIB_CRIFS
 * \param[in]	obj		ユーザー指定オブジェクト
 * \param[in]	mem		解放するメモリアドレス
 * \return				なし
 * \par 説明:
 * メモリ解放関数登録用のインターフェイスです。<br>
 * CRI File Systemライブラリ内がライブラリ内で行なうメモリ解放処理を、
 * ユーザー独自のメモリ解放処理に置き換えたい場合に使用します。<br>
 * \par 備考:
 * コールバック関数が実行される際には、memに解放すべきメモリのアドレスがセット
 * されています。<br>
 * コールバック関数内でmemの領域のメモリを解放してください。
 * 尚、引数の obj には、::criFs_SetUserFreeFunction 関数で登録したユーザー指定
 * オブジェクトが渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを ::criFs_SetUserFreeFunction 関数の引数にセットしておき、
 * 本コールバック関数の引数を経由して参照してください。<br>
 * \sa criFsMallocFunc, criFs_SetUserFreeFunction
 */
typedef void (CRIAPI *CriFsFreeFunc)(void *obj, void *mem);


/*==========================================================================
 *      CriFsIo API
 *=========================================================================*/
/*JP
 * \brief デバイスID
 */
/*EN
 * \brief Device ID
 */
typedef enum CriFsDeviceIdTag {
	CRIFS_DEVICE_00 = 0,	/*JP< デフォルトデバイス */
	CRIFS_DEVICE_01,
	CRIFS_DEVICE_02,
	CRIFS_DEVICE_03,
	CRIFS_DEVICE_04,
	CRIFS_DEVICE_05,
	CRIFS_DEVICE_06,
	CRIFS_DEVICE_07,		/*JP< メモリ */
	CRIFS_DEVICE_MAX,

	CRIFS_DEVICE_INVALID	= -1,	/*JP< 無効 */

	/* enum be 4bytes */
	CRIFS_DEVICE_ENUM_BE_SINT32 = 0x7fffffff
} CriFsDeviceId;


/*JP
 * \brief ファイルオープンモード
 */
/*EN
 * \brief File Opening Mode
 */
typedef enum {
	CRIFS_FILE_MODE_APPEND			= 0,	/*JP< 既存ファイルに追記								*/	/*EN< Appends to an existing file						*/
	CRIFS_FILE_MODE_CREATE			= 1,	/*JP< ファイルの新規作成（既存のファイルは上書き）		*/	/*EN< Creates a new file always							*/
	CRIFS_FILE_MODE_CREATE_NEW		= 2,	/*JP< ファイルの新規作成（上書き不可）					*/	/*EN< Creates a new file (Can not overwrite)			*/
	CRIFS_FILE_MODE_OPEN			= 3,	/*JP< 既存ファイルのオープン							*/	/*EN< Opens an existing file							*/
	CRIFS_FILE_MODE_OPEN_OR_CREATE	= 4,	/*JP< ファイルのオープン（存在しない場合は新規作成）	*/	/*EN< Opens a file if available (Or creates new file)	*/
	CRIFS_FILE_MODE_TRUNCATE		= 5,	/*JP< 既存ファイルを0Byteに切り詰めてオープン			*/	/*EN< Opens a file and truncates it						*/

	/* enum be 4bytes */
	CRIFS_FILE_MODE_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriFsFileMode;

/*JP
 * \brief ファイルアクセス種別
 */
/*EN
 * \brief Kind of File Access
 */
typedef enum {
	CRIFS_FILE_ACCESS_READ			= 0,	/*JP< 読み込みのみ		*/	/*EN< Read Only			*/
	CRIFS_FILE_ACCESS_WRITE			= 1,	/*JP< 書き込みのみ		*/	/*EN< Write Only		*/
	CRIFS_FILE_ACCESS_READ_WRITE	= 2,	/*JP< 読み書き			*/	/*EN< Read and Write	*/

	/* enum be 4bytes */
	CRIFS_FILE_ACCESS_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriFsFileAccess;

/*JP
 * \brief I/Oインターフェイスのエラーコード
 */
/*JP
 * \brief Error of I/O Interface
 */
typedef enum {
	CRIFS_IO_ERROR_OK				=   0,	/*JP< エラーなし */
	CRIFS_IO_ERROR_NG				=  -1,	/*JP< 一般エラー */
	CRIFS_IO_ERROR_TRY_AGAIN		=  -2,	/*JP< リトライすべき */

											/* 特殊 */
	CRIFS_IO_ERROR_NG_NO_ENTRY		= -11,	/*JP< 個別エラー（ファイル無し） */
	CRIFS_IO_ERROR_NG_INVALID_DATA	= -12,	/*JP< 個別エラー（データが不正） */

	/* enum be 4bytes */
	CRIFS_IO_ERROR_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriFsIoError;

/*JP
 * \brief ファイルハンドル
 */
/*EN
 * \brief File Handle
 */
typedef void *CriFsFileHn;

/*JP
 * \brief I/Oインターフェイス
 */
/*EN
 * \brief I/O Interface
 */
typedef struct CriFsIoInterfaceTag {
	/*JP
	 * \brief ファイルの有無の確認
	 * \param[in]	path	ファイルのパス
	 * \param[out]	result	ファイルが存在するかどうか
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 指定されたファイルの有無を確認する関数です。<br>
	 * ファイルが存在する場合は CRI_TRUE を、
	 * 存在しない場合は CRI_FALSE を result にセットする必要があります。<br>
	 */
	CriFsIoError (CRIAPI *Exists)(const CriChar8 *path, CriBool *result);

	/*JP
	 * \brief ファイルの削除
	 * \param[in]	path	ファイルのパス
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 指定されたファイルを削除する関数です。<br>
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *Remove)(const CriChar8 *path);

	/*JP
	 * \brief ファイル名の変更
	 * \param[in]	old_path	リネーム前のファイルのパス
	 * \param[in]	new_path	リネーム後のファイルのパス
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * ファイル名の変更を行なう関数です。<br>
	 * old_path で指定されたファイルを、 new_path にリネームします。<br>
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *Rename)(const CriChar8 *old_path, const CriChar8 *new_path);

	/*JP
	 * \brief ファイルのオープン
	 * \param[in]	path	ファイルのパス
	 * \param[in]	mode	ファイルオープンモード
	 * \param[in]	access	ファイルアクセス種別
	 * \param[out]	filehn	ファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 指定されたファイルをオープンする関数です。<br>
	 * オープンに成功した場合、CriFsFileHn 型のファイルハンドルを返す必要があります。<br>
	 * \par 補足:
	 * CriFsFileHn は void ポインターとして定義されています。<br>
	 * 独自のファイル情報構造体を定義し、そのアドレスを CriFsFileHn 型にキャストして返してください。<br>
	 * 尚、ファイルオープン時にメモリの確保が必要な場合には、本関数内で動的にメモリの確保を行なってください。<br>
	 * \attention
	 * 戻り値のエラーコード（ CriFsIoError ）には、関数内で継続不能なエラーが発生した
	 * 場合に限り CRIFS_IO_ERROR_NG をセットしてください。<br>
	 * （ファイルのオープンに失敗した場合でも、アプリケーションで処理を継続可能な場合には
	 * filehn に NULL をセットし、CRIFS_IO_ERROR_OK を返す必要があります。）<br>
	 * また、ディスク挿入待ち等の理由により、関数が実行されたタイミングでオープン処理
	 * を実行できない場合、エラーコードとして CRIFS_IO_ERROR_TRY_AGAIN を返すことで、
	 * 一定時間後（約10ms後）に再度オープン処理をやり直すことが可能です。<br>
	 * （関数の実行タイミングを先送りすることが可能です。）
	 */
	CriFsIoError (CRIAPI *Open)(
		const CriChar8 *path, CriFsFileMode mode, CriFsFileAccess access, CriFsFileHn *filehn);

	/*JP
	 * \brief ファイルのクローズ
	 * \param[in]	filehn	ファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 指定されたファイルハンドルをクローズする関数です。<br>
	 * ファイルオープン時に動的にメモリの確保を行なった場合は、クローズ時にメモリを解放してください。<br>
	 */
	CriFsIoError (CRIAPI *Close)(CriFsFileHn filehn);

	/*JP
	 * \brief ファイルサイズの取得
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	file_size	ファイルサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 指定されたファイルハンドルから、当該ファイルのサイズを取得する関数です。<br>
	 * \attention
	 * この関数はメインスレッド上から直接実行される可能性があります。<br>
	 * そのため、この関数の中で長時間処理をブロックすることは避ける必要があります。<br>
	 * ファイルハンドルからファイルサイズを取得するのに時間がかかる場合には、
	 * ファイルオープン時にあらかじめファイルサイズを取得（ファイルハンドル内に保持）
	 * しておき、本関数実行時にその値を返すよう関数を実装してください。<br>
	 */
	CriFsIoError (CRIAPI *GetFileSize)(CriFsFileHn filehn, CriSint64 *file_size);

	/*JP
	 * \brief 読み込みの開始
	 * \param[in]	filehn	ファイルハンドル
	 * \param[in]	offset	読み込み開始位置
	 * \param[in]	read_size	読み込みサイズ
	 * \param[in]	buffer	読み込み先バッファー
	 * \param[in]	buffer_size	バッファーサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * データの読み込みを開始する関数です。<br>
	 * offset で指定された位置から、 read_size で指定されたサイズ分だけデータを
	 * buffer に読み込みます。<br>
	 * 関数のインターフェイスとしては非同期I/O処理による実装を想定していますが、
	 * スレッドを使用する場合（スレッドモデルに CRIFS_THREAD_MODEL_MULTI を指定する場合）
	 * には、この関数を同期I/O処理を使って実装しても問題ありません。<br>
	 * （関数内でファイルの読み込みを完了するまで待っても問題ありません。）<br>
	 * \attention
	 * 実際に読み込めたサイズは、 GetReadSize 関数で返す必要があります。<br>
	 * 同期I/O処理により本関数を実装する場合でも、読み込めたサイズは GetReadSize 関数
	 * が実行されるまで、ファイルハンドル内に保持する必要があります。<br>
	 */
	CriFsIoError (CRIAPI *Read)(CriFsFileHn filehn, CriSint64 offset, CriSint64 read_size, void *buffer, CriSint64 buffer_size);

	/*JP
	 * \brief 読み込み完了チェック
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	result	ファイルの読み込みが完了したかどうか
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * ファイルの読み込みが完了したかどうかを確認する関数です。<br>
	 * ファイルの読み込みが完了した場合は CRI_TRUE を、
	 * 読み込み途中の場合は CRI_FALSE を result にセットする必要があります。<br>
	 * \attention
	 * result には、リード処理の成否に関係なく、リード処理が完了した時点
	 * （デバイスへのアクセスが終了した時点）で CRI_TRUE をセットする必要があります。<br>
	 * リードエラーが発生した場合でも、 result に CRI_TRUE をセットし、
	 * 関数の戻り値は CRIFS_IO_ERROR_OK を返してください。<br>
	 * （リード処理が成功したかどうかについては、 GetReadSize 関数で判別しています。）<br>
	 * result に CRI_FALSE を返す限りは、CRI File System
	 * ライブラリは他の読み込み要求を一切処理しません。<br>
	 * （リードエラー発生時に result に CRI_FALSE をセットし続けた場合、
	 * ファイルのロードができなくなったり、ハンドルの
	 * Destroy 関数から処理が復帰しなくなる可能性があります。<br>
	 */
	CriFsIoError (CRIAPI *IsReadComplete)(CriFsFileHn filehn, CriBool *result);

	/*JP
	 * \brief ファイル読み込みのキャンセル発行
	 * \param[in]	filehn	ファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * デバイス側のファイル読み込みに対してキャンセルを発行し、即時に復帰する関数です。
	 * 戻り値は CRIFS_IO_ERROR_OK を返してください。<br>
	 * CRIFS_IO_ERROR_OK以外の値を返しても、
	 * CRI File Systemの動作はCRIFS_IO_ERROR_OKを返した場合と同じです。<br>
	 */
	CriFsIoError (CRIAPI *CancelRead)(CriFsFileHn filehn);

	/*JP
	 * \brief 読み込みサイズの取得
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	read_size	読み込めたサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * リード処理を行なった結果、実際にバッファーに読み込めたデータのサイズを返す関数です。<br>
	 * ファイルの終端等では、 Read 関数で指定したサイズ分のデータが必ずしも読み込めるとは限りません。<br>
	 * \attention
	 * リードエラーが発生した場合、 read_size に -1 をセットし、
	 * 関数の戻り値は CRIFS_IO_ERROR_OK を返してください。
	 */
	CriFsIoError (CRIAPI *GetReadSize)(CriFsFileHn filehn, CriSint64 *read_size);

	/*JP
	 * \brief 書き込みの開始
	 * \param[in]	filehn	ファイルハンドル
	 * \param[in]	offset	書き込み開始位置
	 * \param[in]	write_size	書き込みサイズ
	 * \param[in]	buffer	書き込み先バッファー
	 * \param[in]	buffer_size	バッファーサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * データの書き込みを開始する関数です。<br>
	 * offset で指定された位置から、 write_size で指定されたサイズ分だけデータを
	 * buffer から書き込みます。<br>
	 * 関数のインターフェイスとしては非同期I/O処理による実装を想定していますが、
	 * スレッドを使用する場合（スレッドモデルに CRIFS_THREAD_MODEL_MULTI を指定する場合）
	 * には、この関数を同期I/O処理を使って実装しても問題ありません。<br>
	 * （関数内でファイルの書き込みを完了するまで待っても問題ありません。）<br>
	 * \attention
	 * 実際に書き込めたサイズは、 GetWriteSize 関数で返す必要があります。<br>
	 * 同期I/O処理により本関数を実装する場合でも、書き込めたサイズは GetWriteSize 関数
	 * が実行されるまで、ファイルハンドル内に保持する必要があります。<br>
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *Write)(CriFsFileHn filehn, CriSint64 offset, CriSint64 write_size, void *buffer, CriSint64 buffer_size);

	/*JP
	 * \brief 書き込み完了チェック
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	result	ファイルの書き込みが完了したかどうか
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * ファイルの書き込みが完了したかどうかを確認する関数です。<br>
	 * ファイルの書き込みが完了した場合は CRI_TRUE を、
	 * 書き込み途中の場合は CRI_FALSE を result にセットする必要があります。<br>
	 * \attention
	 * ライトエラーが発生した場合、 result に CRI_TRUE をセットし、
	 * 関数の戻り値は CRIFS_IO_ERROR_OK を返してください。
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 * \attention
	 * result には、ライト処理の成否に関係なく、ライト処理が完了した時点
	 * （デバイスへのアクセスが終了した時点）で CRI_TRUE をセットする必要があります。<br>
	 * ライトエラーが発生した場合でも、 result に CRI_TRUE をセットし、
	 * 関数の戻り値は CRIFS_IO_ERROR_OK を返してください。<br>
	 * （ライト処理が成功したかどうかについては、 GetReadSize 関数で判別しています。）<br>
	 * result に CRI_FALSE を返す限りは、CRI File System
	 * ライブラリは他の読み込み要求を一切処理しません。<br>
	 * （ライトエラー発生時に result に CRI_FALSE をセットし続けた場合、
	 * ファイルのロードができなくなったり、ハンドルの
	 * Destroy 関数から処理が復帰しなくなる可能性があります。<br>
	 */
	CriFsIoError (CRIAPI *IsWriteComplete)(CriFsFileHn filehn, CriBool *result);

	/*JP
	 * \brief ファイル書き込みのキャンセル発行
	 * \param[in]	filehn	ファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * デバイス側のファイル書き込みに対してキャンセルを発行し、即時に復帰する関数です。
	 * 戻り値は CRIFS_IO_ERROR_OK を返してください。<br>
	 * CRIFS_IO_ERROR_OK以外の値を返しても、
	 * CRI File Systemの動作はCRIFS_IO_ERROR_OKを返した場合と同じです。<br>
	 */
	CriFsIoError (CRIAPI *CancelWrite)(CriFsFileHn filehn);

	/*JP
	 * \brief 書き込みサイズの取得
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	write_size	書き込めたサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * ライト処理を行なった結果、実際にバッファーに読み込めたデータのサイズを返す関数です。<br>
	 * \attention
	 * ライトエラーが発生した場合、 write_size に -1 をセットし、
	 * 関数の戻り値は CRIFS_IO_ERROR_OK を返してください。
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *GetWriteSize)(CriFsFileHn filehn, CriSint64 *write_size);

	/*JP
	 * \brief フラッシュの実行
	 * \param[in]	filehn	ファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * 書き込み用にバッファーリングされているデータを、
	 * 強制的にデバイスに書き出す処理を行う関数です。<br>
	 * （ ANSI C 標準の API では fflush 関数に相当する処理です。）<br>
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *Flush)(CriFsFileHn filehn);

	/*JP
	 * \brief ファイルサイズの変更
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	size	ファイルサイズ
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * ファイルのサイズを指定したサイズに変更する関数です。<br>
	 * \par 補足:
	 * 本関数は、DMA転送サイズの制限等によりデバイスへの書き込みがバイト単位で
	 * 行なえない場合に、ファイルサイズを補正するために使用します。<br>
	 * そのため、書き込みがバイト単位で可能なデバイスについては、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 * \par 備考:
	 * デバイスで書き込みを行なわない場合には、この関数を実装せず、
	 * 構造体のメンバーに CRI_NULL を指定することも可能です。<br>
	 */
	CriFsIoError (CRIAPI *Resize)(CriFsFileHn filehn, CriSint64 size);

	/*JP
	 * \brief ネイティブファイルハンドルの取得
	 * \param[in]	filehn	ファイルハンドル
	 * \param[out]	native_filehn	ネイティブのファイルハンドル
	 * \return	CriFsIoError	エラーコード
	 * \par 説明:
	 * プラットフォームSDKで利用されるファイルのハンドルを取得する関数です。<br>
	 * 例えば、 ANSI C 標準の fopen 関数を使用してファイルをオープンした場合、
	 * native_filehn としてファイルポインター（ FILE * ）を返す必要があります。<br>
	 * \par 備考:
	 * 現状、PLAYSTATION3以外の機種ではこの関数を実装する必要はありません。<br>
	 */
	CriFsIoError (CRIAPI *GetNativeFileHandle)(CriFsFileHn filehn, void **native_filehn);

	/*JP
	 * \brief 読み込みプログレス加算コールバックの設定
	 * \param[in]	filehn		ファイルハンドル
	 * \param[in]	callback    読み込みプログレス加算コールバック
	 * \param[in]	obj			内部オブジェクト
	 * \par 説明:
	 * 本関数は、::criFsLoader_GetProgress で得られる進捗を、単位読み込みサイズより
	 * 細かい粒度で更新させるための、読み込みプログレス加算コールバックを設定する関数です。<br>
	 * 本関数を実装しない場合や、本関数で渡されたコールバック関数を使用しない場合、
	 * ::criFsLoader_GetProgress で得られる進捗は、基本的に単位読み込みサイズ毎に更新されます。<br>
	 * 本関数を実装する場合は、渡されたコールバック関数を Read 関数内で呼び出してください。
	 * また、呼び出す際には第一引数に obj、第二引数にメモリへの読み込みが完了したサイズを
	 * バイト単位で渡してください。<br>
	 * 例えば、リード要求をデバイス内で 8192byte ずつに分割して読み込む場合は、
	 * 8192byte の読み込み完了毎に、第二引数に 8192 を渡して呼び出してください。<br>
	 * この、読み込みプログレス加算コールバック呼び出しによって ::criFsLoader_GetProgress
	 * で得られる進捗が更新されます。単位読み込みサイズより細かい粒度で更新を
	 * 行うことで ::criFsLoader_GetProgress で得られる進捗の粒度が細かくなります。<br>
	 * \par 備考:
	 * 読み込みリクエストより細かい粒度で読み込み進捗を取得できない場合は、
	 * 実装するメリットはありません。
	 * \sa ::criFsLoader_GetProgress
	 */
	CriFsIoError (CRIAPI *SetAddReadProgressCallback)(CriFsFileHn filehn, void(*callback)(void*, CriSint32), void* obj);

	/*JP
	 * \brief 複数の同時ファイルアクセス要求が可能かどうかの問い合わせ
	 * \param[out]	result	複数の同時ファイルアクセス要求が可能かどうか
	 * \par 説明:
	 * このI/Oインターフェースが複数の同時ファイルアクセス要求が可能であるかどうかを返す関数です。<br>
	 * 本関数を実装しない場合、不可能であるとみなされます。<br>
	 * 本関数を実装されていて、result が CRI_TRUE だった場合、
	 * criFsLoader は効率よく複数ファイルのロードを行うために並列でリード要求を行うようになります。<br>
	 * \par 備考:
	 * 並列でリード要求を行う場合、CriFsFileIoMode が CRIFS_FILE_IO_MODE_OPEN_EVERY_TIME である必要があります。
	 */
	CriFsIoError(CRIAPI *CanParallelRead)(CriBool *result);
} CriFsIoInterface, *CriFsIoInterfacePtr;

/*JP
 * \brief I/O選択コールバック関数
 * \param[in]	path	ファイルのパス
 * \param[out]	device_id	デバイスID
 * \param[out]	ioif	I/Oインターフェイス
 * \par 説明:
 * I/O選択コールバック関数は、CRI File SystemライブラリのI/O処理を、
 * ユーザーの独自I/Oインターフェースで置き換える際に使用します。<br>
 * 具体的には、ユーザーは ::CriFsSelectIoCbFunc 型の関数を実装し、
 * その関数を ::criFs_SetSelectIoCallback 関数にセットする必要があります。<br>
 * ::CriFsSelectIoCbFunc 関数は、入力されたファイルのパス（引数のpath）を解析し、
 * そのファイルが存在するデバイスのID（引数のdevice_id）と、
 * デバイスにアクセスするためのI/Oインターフェイス（引数のioif）を返す必要があります。<br>
 * \par 補足:
 * ライブラリがデフォルト状態で利用するI/Oインターフェイスは、 ::criFs_GetDefaultIoInterface 関数で取得可能です。<br>
 * 特定のファイルのみを独自のI/Oインターフェイスを処理したい場合には、
 * 他のファイルを全て ::criFs_GetDefaultIoInterface 関数で取得したI/Oインターフェイスで処理してください。<br>
 * \code
 * CriError
 * \endcode
 * \sa criFs_SetSelectIoCallback, criFs_GetDefaultIoInterface
 */
typedef CriError (CRIAPI *CriFsSelectIoCbFunc)(const CriChar8 *path, CriFsDeviceId *device_id, CriFsIoInterfacePtr *ioif);

/*==========================================================================
 *      CriFsBinder API
 *=========================================================================*/
struct CriFsBinderHnObjTag;
/*JP
 * \brief CriFsBinderハンドル
 * \ingroup FSLIB_BINDER
 * \par 説明：
 * バインダーとは、ファイルを効率良く扱うためのデータベースです。<br>
 * - CriFsBinderHn (バインダーハンドル)とバインド<br>
 * バインダーを利用するには、バインダーハンドル( CriFsBinderHn )を作成し、
 * CPKファイル／ファイル／ディレクトリをバインダーに結びつけます。
 * このバインダーへの結び付けをバインドと呼びます。<br>
 * バインダーを作成すると、バインダーハンドル( CriFsBinderHn )が取得されます。<br>
 * - CriFsBindId （バインドID）<br>
 * バインダーにバインドを行うと、バインドIDが作成されます。個々のバインドを識別するために使用します。<br>
 * - ファイルのバインドとアンバインド<br>
 * バインダーには、CPKファイルやファイル、ディレクトリをどのような組み合わせででもバインドできます。<br>
 * バインドした項目のバインド状態を解除することをアンバインドと呼びます。<br>
 * - 利用できるバインド数<br>
 * 作成できるバインダー数や同時にバインドできる最大数は、 CriFsConfig の
 * num_binders (バインダー数)や max_binds (同時バインド可能な最大数)で指定します。<br>
 * - CPKファイルのバインド<br>
 * CPKファイルに収納されている個々のファイル（コンテンツファイル）にアクセスするには、
 * CPKファイルをバインドする必要があります。<br>
 * CPKファイルのコンテンツファイルもバインドできます。元のCPKファイルをアンバインドした場合、
 * バインドされているコンテンツファイルもアンバインドされます（暗黙的アンバインド）。<br>
 * - バインダーのプライオリティ<br>
 * バインダーは、目的のファイルがどのバインドIDにあるのかを検索します。<br>
 * このバインドIDの検索順は、基本的にはバインドされた順番になりますが、バインドIDのプライオリティを
 * 操作することで、検索順を変更することができます。<br>
 * - バインダーとCriFsのAPI<br>
 * CriFsLoader, CriFsGroupLoader, CriFsBinderには、バインダーを引数に持つAPIがあります。
 * その際には、 CriFsBinderHn と CriFsBindId 、どちらを指定するのかに注意してください。
 */
typedef struct CriFsBinderHnObjTag *CriFsBinderHn;

/*JP
 * \brief ローダープライオリティ
 */
/*EN
 * \brief Priority
 */
typedef enum {
	CRIFSLOADER_PRIORITY_HIGHEST 		= 2,	/*JP< 最高		*/	/*EN< Highest		*/
	CRIFSLOADER_PRIORITY_ABOVE_NORMAL 	= 1,	/*JP< 高		*/	/*EN< Above normal	*/
	CRIFSLOADER_PRIORITY_NORMAL 		= 0,	/*JP< 普通		*/	/*EN< Normal		*/
	CRIFSLOADER_PRIORITY_BELOW_NORMAL 	= -1,	/*JP< 低		*/	/*EN< Below normal	*/
	CRIFSLOADER_PRIORITY_LOWEST 		= -2,	/*JP< 最低		*/	/*EN< Lowest		*/
	/* enum be 4bytes */
	CRIFSLOADER_PRIORITY_ENUM_BE_SINT32 = 0x7FFFFFFF
} CriFsLoaderPriority;

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

/*==========================================================================
 *      CRI File System API
 *=========================================================================*/
/*JP
 * \brief デフォルトコンフィギュレーションのセット
 * \ingroup FSLIB_CRIFS
 * \param[in]	p_config	コンフィギュレーション
 * \par 説明:
 * ::criFs_InitializeLibrary 関数に設定するコンフィギュレーション（ ::CriFsConfig ）に、デフォルトの値をセットします。<br>
 * \par 補足:
 * コンフィギュレーションに設定する各パラメータを、アプリケーションで使用するハンドルの数に応じて調節することで、
 * ライブラリが必要とするメモリサイズを小さく抑えることが可能です。<br>
 * しかし、アプリケーション中で使用するハンドルの数が明確でない開発初期段階や、メモリサイズがタイトではないケースでは、
 * 本マクロを使用することによりで、初期化処理を簡略化することが可能です。<br>
 * \attention:
 * 本マクロでは、ほとんどのケースで必要充分な数のハンドルが確保できるよう、コンフィギュレーションの各パラメータに大きめの値をセットします。<br>
 * そのため、本マクロを使用した場合、ライブラリが必要とするワーク領域のサイズは大きくなりますので、ご注意ください。<br>
 * （メモリサイズがタイトなケースでは、本マクロでコンフィギュレーションを初期化した後、各パラメータを個別に調節することをオススメいたします。）<br>
 * \sa
 * CriFsConfig
*/
#define criFs_SetDefaultConfig(p_config)	\
{\
	(p_config)->thread_model		= CRIFS_CONFIG_DEFAULT_THREAD_MODEL;\
	(p_config)->num_binders			= CRIFS_CONFIG_DEFAULT_NUM_BINDERS;\
	(p_config)->num_loaders			= CRIFS_CONFIG_DEFAULT_NUM_LOADERS;\
	(p_config)->num_group_loaders	= CRIFS_CONFIG_DEFAULT_NUM_GROUP_LOADERS;\
	(p_config)->num_stdio_handles	= CRIFS_CONFIG_DEFAULT_NUM_STDIO_HANDLES;\
	(p_config)->num_installers		= CRIFS_CONFIG_DEFAULT_NUM_INSTALLERS;\
	(p_config)->max_binds			= CRIFS_CONFIG_DEFAULT_MAX_BINDS;\
	(p_config)->max_files			= CRIFS_CONFIG_DEFAULT_MAX_FILES;\
	(p_config)->max_path			= CRIFS_CONFIG_DEFAULT_MAX_PATH;\
	(p_config)->version				= CRI_FS_VERSION;\
	(p_config)->version_string		= CRI_FS_VER_NUM;\
	(p_config)->enable_crc_check	= CRI_FALSE;\
}




/*JP
 * \brief メモリ確保関数の登録
 * \ingroup FSLIB_CRIFS
 * \param[in]	func		メモリ確保関数
 * \param[in]	obj			ユーザー指定オブジェクト
 * \par 説明:
 * CRI File Systemライブラリにメモリ確保関数を登録します。<br>
 * CRI File Systemライブラリ内がライブラリ内で行なうメモリ確保処理を、
 * ユーザー独自のメモリ確保処理に置き換えたい場合に使用します。<br>
 * <br>
 * 本関数の使用手順は以下のとおりです。<br>
 * (1) ::CriFsMallocFunc インターフェイスに副ったメモリ確保関数を用意する。<br>
 * (2) ::criFs_SetUserMallocFunction 関数を使用し、CRI File Systemライブラリに対して
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
 * 	criFs_SetUserMallocFunction(user_malloc, NULL);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 引数の obj に指定した値は、 ::CriFsMallocFunc に引数として渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを本関数の引数にセットしておき、コールバック関数で引数を経由
 * して参照してください。<br>
 * \attention
 * メモリ確保関数を登録する際には、合わせてメモリ解放関数（ ::CriFsFreeFunc ）を
 * 登録する必要があります。
 * \sa CriFsMallocFunc, criFs_SetUserFreeFunction
 */
void CRIAPI criFs_SetUserMallocFunction(CriFsMallocFunc func, void *obj);

/*JP
 * \brief メモリ解放関数の登録
 * \ingroup FSLIB_CRIFS
 * \param[in]	func		メモリ解放関数
 * \param[in]	obj			ユーザー指定オブジェクト
 * \par 説明:
 * CRI File Systemライブラリにメモリ解放関数を登録します。<br>
 * CRI File Systemライブラリ内がライブラリ内で行なうメモリ解放処理を、
 * ユーザー独自のメモリ解放処理に置き換えたい場合に使用します。<br>
 * <br>
 * 本関数の使用手順は以下のとおりです。<br>
 * (1) ::CriFsFreeFunc インターフェイスに副ったメモリ解放関数を用意する。<br>
 * (2) ::criFs_SetUserFreeFunction 関数を使用し、CRI File Systemライブラリに対して
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
 * 	criFs_SetUserFreeFunction(user_free, NULL);
 * 		:
 * }
 * \endcode
 * \par 備考:
 * 引数の obj に指定した値は、 ::CriFsFreeFunc に引数として渡されます。<br>
 * メモリ確保時にメモリマネージャー等を参照する必要がある場合には、
 * 当該オブジェクトを本関数の引数にセットしておき、コールバック関数で引数を経由
 * して参照してください。<br>
 * \attention
 * メモリ解放関数を登録する際には、合わせてメモリ確保関数（ ::CriFsMallocFunc ）を
 * 登録する必要があります。
 * \sa CriFsFreeFunc, criFs_SetUserMallocFunction
 */
void CRIAPI criFs_SetUserFreeFunction(CriFsFreeFunc func, void *obj);















/*JP
 * \brief I/O選択コールバックの登録
 * \ingroup FSLIB_CRIFS
 * \param[in]	func	I/O選択コールバック
 * \return	CriError	エラーコード
 * \par 説明:
 * I/O選択コールバック関数（ ::CriFsSelectIoCbFunc ）を登録します。<br>
 * CRI File Systemライブラリはファイルにアクセスする際、まず初めに、そのファイルが存在するデバイスのID（ ::CriFsDeviceId ）と、
 * デバイスにアクセスするためのI/Oインターフェイス（ ::CriFsIoInterface ）を選択します。<br>
 * デフォルト状態では、デバイスIDとI/Oインターフェイスの選択はライブラリ内で暗黙的に行なわれますが、
 * 本関数を使用することで、デバイスIDとI/Oインターフェイスをユーザーが自由に指定することが可能になります。<br>
 * これにより、ユーザーが独自に作成したI/Oインターフェイスを使用してファイルにアクセスすることが可能になります。<br>
 * \code
 * // 独自のI/Oインターフェイスを定義
 * // 備考）構造体のメンバー関数はユーザーが独自に実装。
 * static CriFsIoInterface g_userIoInterface = {
 * 	userExists,
 * 	userRemove,
 * 	userRename,
 * 	userOpen,
 * 	userClose,
 * 	userGetFileSize,
 * 	userRead,
 * 	userIsReadComplete,
 * 	userGetReadSize,
 * 	userWrite,
 * 	userIsWriteComplete,
 * 	userGetWriteSize,
 * 	userFlush,
 * 	userResize,
 * 	userGetNativeFileHandle
 * };
 *
 * // I/O選択コールバック関数
 * CriError user_select_io_callback(
 * 	const CriChar8 *path, CriFsDeviceId *device_id, CriFsIoInterfacePtr *ioif)
 * {
 * 	// パスを解析し、デバイスのIDを特定する
 * 	if (strncmp(path, …) == 0) {
 * 		(*device_id) = CRIFS_DEVICE_〜;
 * 	} else {
 * 		(*device_id) = CRIFS_DEFAULT_DEVICE;
 * 	}
 *
 * 	// ファイルアクセスに使用するI/Oインターフェイスを指定する
 * 	(*ioif) = g_userIoInterface;
 *
 * 	return (CRIERR_OK);
 * }
 *
 * int main(…)
 * {
 * 		：
 * 	// I/O選択コールバックを登録
 * 	criFs_SetSelectIoCallback(user_select_io_callback);
 * 		：
 * }
 * \endcode
 * \attention
 * コールバック関数は1つしか登録できません。<br>
 * 登録操作を複数回行った場合、既に登録済みのコールバック関数が、
 * 後から登録したコールバック関数により上書きされてしまいます。<br>
 * <br>
 * funcにNULLを指定するとことで登録済み関数の登録解除が行えます。<br>
 * \sa CriFsSelectIoCbFunc, criFs_GetDefaultIoInterface
 */
CriError CRIAPI criFs_SetSelectIoCallback(CriFsSelectIoCbFunc func);


#ifdef __cplusplus
}
#endif

/***************************************************************************
 *      旧バージョンとの互換用
 *      For compatibility with old version
 ***************************************************************************/
#define CRI_FS_VERSION		(0xFFFFFFFF)

#endif	/* CRI_FILE_SYSTEM_H_INCLUDED */

/* --- end of file --- */
