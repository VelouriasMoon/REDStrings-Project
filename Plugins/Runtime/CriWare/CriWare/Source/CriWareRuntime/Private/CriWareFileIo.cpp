/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : File I/O Interface
 * File     : CriWareFileIo.cpp
 *
 ****************************************************************************/

/***************************************************************************
 * インクルード
 * Header files
 ***************************************************************************/
/* モジュールヘッダ */
#include "CriWareFileIo.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/* CRIWAREヘッダ */
#define CRI_XPT_DISABLE_UNPREFIXED_TYPE
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */
#include <cri_le_xpt.h>
#include <cri_le_file_system.h>
#endif

/* ANSI Cヘッダ */
#include <string.h>
#include <assert.h>

/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "HAL/FileManager.h"

/***************************************************************************
 * 定数マクロ定義
 * Constant macro definitions
 ***************************************************************************/

/***************************************************************************
 * 処理マクロ定義
 * Processing macro definitions
 ***************************************************************************/

/***************************************************************************
 * 型定義
 * Type definitions
 ***************************************************************************/
/* ファイルハンドル */
struct FCriWareFile
{
	FArchive* FileHandle;		/* ネイティブファイルハンドル	*/
	int64 FileSize;				/* ファイルサイズ				*/
	int64 ReadSize;				/* 最終読み込みサイズ			*/
	int64 WriteSize;			/* 最終書き込みサイズ			*/
};

/***************************************************************************
 * 変数宣言
 * Variable declarations
 ***************************************************************************/

/***************************************************************************
 * 関数宣言
 * Function declarations
 ***************************************************************************/
namespace CriWareFile
{
	/* インターフェース登録用関数 */
	/* Functions for the interface registration */
	CriFsIoError Exists(const CriChar8 *Filename, CriBool *OutResult);
	CriFsIoError Remove(const CriChar8 *Filename);
	CriFsIoError Open(const CriChar8 *Filename,
		CriFsFileMode mode, CriFsFileAccess access, CriFsFileHn *OutFile);
	CriFsIoError Close(CriFsFileHn InFile);
	CriFsIoError GetFileSize(CriFsFileHn InFile, CriSint64 *FileSize);
	CriFsIoError Read(CriFsFileHn InFile,
		CriSint64 Offset, CriSint64 ReadSize, void *Buffer, CriSint64 BufferSize);
	CriFsIoError IsReadComplete(CriFsFileHn InFile, CriBool *OutResult);
	CriFsIoError GetReadSize(CriFsFileHn InFile, CriSint64 *ReadSize);
	CriFsIoError Write(CriFsFileHn InFile,
		CriSint64 Offset, CriSint64 WriteSize, void *Buffer, CriSint64 BufferSize);
	CriFsIoError IsWriteComplete(CriFsFileHn InFile, CriBool *OutResult);
	CriFsIoError GetWriteSize(CriFsFileHn InFile, CriSint64 *WriteSize);
	CriFsIoError GetNativeFileHandle(CriFsFileHn InFile, void **native_filehn);
};

/***************************************************************************
 * 変数定義
 * Variable definitions
 ***************************************************************************/
/* I/O処理インターフェース */
/* I/O processing interface */
static CriFsIoInterface GCriFileIoInterface = {
	CriWareFile::Exists,
	CriWareFile::Remove,
	NULL,
	CriWareFile::Open,
	CriWareFile::Close,
	CriWareFile::GetFileSize,
	CriWareFile::Read,
	CriWareFile::IsReadComplete,
	NULL,
	CriWareFile::GetReadSize,
	CriWareFile::Write,
	CriWareFile::IsWriteComplete,
	NULL,
	CriWareFile::GetWriteSize,
	NULL,
	NULL,
	CriWareFile::GetNativeFileHandle
};

/***************************************************************************
 * 関数定義
 * Function definitions
 ***************************************************************************/
/*==========================================================================
 * I/Oインターフェース選択関数
 * I/O interface selection function
 *=========================================================================*/
CriError CriWareFileIo::SelectIo(const CriChar8 *Filename,
	CriFsDeviceId *DeviceId, CriFsIoInterfacePtr *IoInterface)
{
	/* 引数のチェック */
	/* Check the arguments */
	assert(Filename != NULL);
	assert(DeviceId != NULL);
	assert(IoInterface != NULL);

	/* デフォルトのデバイスIDを使用 */
	/* 備考）本サンプルでは1つのデバイスのみを想定 */
    /* The default device ID is specified */
    /* Note: One device is used in this sample */
	(*DeviceId) = CRIFS_DEFAULT_DEVICE;

	/* I/OインターフェースとしてGCriFileIoInterfaceを使用 */
    /* GCriFileIoInterface is used as the I/O interface */
	(*IoInterface) = &GCriFileIoInterface;

	return (CRIERR_OK);
}

/*==========================================================================
 * インターフェース登録用関数
 * Interface registration functions
 *=========================================================================*/
/* ファイルの有無の確認 */
/* Check whether the file exists */
CriFsIoError CriWareFile::Exists(const CriChar8 *Filename, CriBool *OutResult)
{
	/* 引数のチェック */
	/* Check the arguments */
	assert(Filename != NULL);
	assert(OutResult != NULL);

	/* ファイルの有無をチェック */
	/* Check whether the file exists */
	if (IFileManager::Get().FileExists(UTF8_TO_TCHAR(Filename))) {
		(*OutResult) = CRI_TRUE;
	} else {
		(*OutResult) = CRI_FALSE;
	}

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::Remove(const CriChar8 *Filename)
{
	/* 引数のチェック */
	/* Check the arguments */
	assert(Filename != NULL);

	/* ファイルの削除 */
	/* Remove the file */
	if (IFileManager::Get().Delete(UTF8_TO_TCHAR(Filename))) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to DeleteFile %s."), UTF8_TO_TCHAR(Filename));
		return (CRIFS_IO_ERROR_NG);
	}

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::Open(const CriChar8 *Filename,
	CriFsFileMode Mode, CriFsFileAccess Access, CriFsFileHn *OutFile)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(Filename != NULL);
	assert(OutFile != NULL);

	/* 出力値の初期化 */
	(*OutFile) = NULL;

	/* ファイルサイズの取得 */
	/* 備考）ファイルサーバ使用時に、この処理により	*/
	/* 　　　ファイルがローカルにコピーされる。		*/
	const int64 FileSize = IFileManager::Get().FileSize(UTF8_TO_TCHAR(Filename));
	if (FileSize < 0) {
		UE_LOG(LogCriWareRuntime, Warning, TEXT("Could not find file %s."), UTF8_TO_TCHAR(Filename));
	}

	/* 追記かどうかのチェック */
	bool bAppend;
	if (Mode == CRIFS_FILE_MODE_APPEND) {
		bAppend = true;
	} else {
		bAppend = false;
	}

	/* リードの可否をチェック */
	bool bAllowRead;
	if (Access == CRIFS_FILE_ACCESS_WRITE) {
		bAllowRead = false;
	} else {
		bAllowRead = true;
	}

	/* ファイルハンドル領域の確保 */
	/* Allocate a file handle area */
	File = new FCriWareFile;
	if (File == NULL) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to allocate FCriWareFile %s."), UTF8_TO_TCHAR(Filename));
		return (CRIFS_IO_ERROR_NG);
	}
	memset(File, 0, sizeof(FCriWareFile));

	/* ファイルのオープン */
	/* Open a file */
	if (Access == CRIFS_FILE_ACCESS_READ) {
		File->FileHandle = IFileManager::Get().CreateFileReader(UTF8_TO_TCHAR(Filename));
	} else {
		File->FileHandle = IFileManager::Get().CreateFileWriter(UTF8_TO_TCHAR(Filename));
	}
	if (File->FileHandle == nullptr) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to Open %s."), UTF8_TO_TCHAR(Filename));
		delete File;
		return (CRIFS_IO_ERROR_NG);
	}

	/* ファイルサイズの取得 */
	/* Get the file size */
	File->FileSize = File->FileHandle->TotalSize();

	/* ハンドルの保存 */
	/* Store the file handle */
	(*OutFile) = File;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::Close(CriFsFileHn InFile)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* ファイルのクローズ */
	/* Close the file */
	if (File->FileHandle != NULL) {
		delete File->FileHandle;
		File->FileHandle = NULL;
	}

	/* ハンドル領域の解放 */
	/* Deallocate the handle area */
	delete File;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::GetFileSize(CriFsFileHn InFile, CriSint64 *FileSize)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(FileSize != NULL);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* ファイルサイズの保存 */
	/* Store the file size */
	(*FileSize) = File->FileSize;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::Read(CriFsFileHn InFile,
	CriSint64 Offset, CriSint64 ReadSize, void *Buffer, CriSint64 BufferSize)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(Offset >= 0);
	assert(ReadSize >= 0);
	assert(Buffer != NULL);
	assert(BufferSize >= 0);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* 読み込みサイズの計算 */
	ReadSize = FMath::Min(ReadSize, BufferSize);
	ReadSize = FMath::Min(ReadSize, (CriSint64)File->FileSize - Offset);

	/* 読み込みが不要な場合は何もしない */
	if (ReadSize <= 0) {
		File->ReadSize = 0;
		return (CRIFS_IO_ERROR_OK);
	}

	/* 読み込み開始位置まで移動 */
	/* Move to a position for starting file read */
	File->FileHandle->Seek(Offset);

	/* データの読み込み */
	/* Read data */
	File->FileHandle->Serialize(Buffer, ReadSize);

	/* 読み込みサイズの保存 */
	/* Store the read size */
	File->ReadSize = ReadSize;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::IsReadComplete(CriFsFileHn InFile, CriBool *OutResult)
{
	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(OutResult != NULL);

	/* 同期I/Oで実装しているので常にCRI_TRUEを返す */
	/* Always return TRUE as it is implemented as synchronus I/O */
	(*OutResult) = CRI_TRUE;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::GetReadSize(CriFsFileHn InFile, CriSint64 *ReadSize)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(ReadSize != NULL);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* ファイルサイズの保存 */
	/* Store the file size */
	(*ReadSize) = File->ReadSize;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::Write(CriFsFileHn InFile,
	CriSint64 Offset, CriSint64 WriteSize, void *Buffer, CriSint64 BufferSize)
{
	FCriWareFile *File;
	int64 SeekPos;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(Offset >= 0);
	assert(WriteSize >= 0);
	assert(Buffer != NULL);
	assert(BufferSize >= 0);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* 書き込みサイズの計算 */
	WriteSize = FMath::Min(WriteSize, BufferSize);

	/* 書き込みが不要な場合は何もしない */
	if (WriteSize <= 0) {
		File->WriteSize = 0;
		return (CRIFS_IO_ERROR_OK);
	}

	/* 書き込み開始位置まで移動 */
	/* Move to a position for starting file write */
	File->FileHandle->Seek(Offset);

	/* データの書き込み */
	/* Write data */
	File->FileHandle->Serialize(Buffer, WriteSize);

	/* 書き込みサイズの保存 */
	/* Store the write size */
	File->WriteSize = WriteSize;

	/* ファイルサイズの補正 */
	/* Correct file size */
	SeekPos = Offset + WriteSize;
	if (File->FileSize < SeekPos) {
		File->FileSize = SeekPos;
	}

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::IsWriteComplete(CriFsFileHn InFile, CriBool *OutResult)
{
	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(OutResult != NULL);

	/* 同期I/Oで実装しているので常にCRI_TRUEを返す */
	/* Always return TRUE as it is implemented as synchronus I/O */
	(*OutResult) = CRI_TRUE;

	return (CRIFS_IO_ERROR_OK);
}

CriFsIoError CriWareFile::GetWriteSize(CriFsFileHn InFile, CriSint64 *WriteSize)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(WriteSize != NULL);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* ファイルサイズの保存 */
	/* Store the file size */
	(*WriteSize) = File->WriteSize;

	return (CRIFS_IO_ERROR_OK);
}

/* ネイティブファイルハンドルの取得 */
/* Get a native file handle */
CriFsIoError CriWareFile::GetNativeFileHandle(CriFsFileHn InFile, void **native_filehn)
{
	FCriWareFile *File;

	/* 引数のチェック */
	/* Check the arguments */
	assert(InFile != NULL);
	assert(native_filehn);

	/* 変数の初期化 */
	/* Initialize variables */
	File = (FCriWareFile *)InFile;

	/* ファイルポインタの保存 */
	/* Store the file pointer */
	(*native_filehn) = (void *)File->FileHandle;

	return (CRIFS_IO_ERROR_OK);
}

/* --- end of file --- */
