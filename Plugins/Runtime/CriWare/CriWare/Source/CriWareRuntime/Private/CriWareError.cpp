/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2021 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : CriWareRuntime
* File     : CriWareError.cpp
*
****************************************************************************/

#include "CriWareError.h"

#include "CriWareRuntimePrivatePCH.h"


#define LOCTEXT_NAMESPACE "CriWareError"


namespace UCriWareError_Native
{
	/* ネイティブエラーコールバックに設定する関数
	 * 
	 * ErrorID エラーID
	 * Param1 パラメータ
	 * Param2 パラメータ
	 * Buffer 不明
	 */
	extern "C" void CRIAPI OnNativeErrorCallback(const CriChar8 * ErrorID, CriUint32 Param1, CriUint32 Param2, CriUint32 * Buffer)
	{
		auto Instance = UCriWareError::GetCriWareError();
		if (Instance)
		{
			FString Message;

			if (ErrorID != nullptr)
			{
				Message = FString(FCriWareApi::criErr_ConvertIdToMessage(ErrorID, Param1, Param2));
			} 
			else
			{
				// ErrorID is from Native it is not our job to check if error ID is always correct also it not an user warning.
				Message = FText::Format(LOCTEXT("UnknownCriWareError", "Unknown CriWare Error ({0} - {1})"), { (uint32)Param1, (uint32)Param2 }).ToString();
			}

			ECriWareErrorType ErrorType = ECriWareErrorType::Error;
			Instance->HandleOnNativeErrorCallback(ErrorType, Message);
		}
	}
}

/* UCriWareError implementation 
*****************************************************************************/

UCriWareError* UCriWareError::Instance = nullptr;

void UCriWareError::CreateInstance()
{
	if (IsValid(Instance))
	{
		UE_LOG(LogCriWare, Error, TEXT("Instance of UCriWareError already exist. Please use GetInstance() instead."));
		return;
	}

	Instance = NewObject<UCriWareError>();
	if (!IsValid(Instance))
	{
		UE_LOG(LogCriWare, Error, TEXT("Can`t create an instance of UCriWareError."));
		return;
	}

	Instance->RegisterNativeCallback();
	Instance->AddToRoot();
}

void UCriWareError::DeleteInstance()
{
	if (IsValid(Instance))
	{
		Instance->UnregisterNativeCallback();
		Instance->QueuedErrors.Empty();
		Instance->RemoveFromRoot();
		Instance = nullptr;
	}
}

/* FTickableGameObject overrides
*****************************************************************************/

void UCriWareError::Tick(float DeltaTime)
{
	FCriWareErrorInfo ErrorInfo = {};

	/* 複数のコールバック関数を順次、実行していく */
	while (QueuedErrors.Dequeue(ErrorInfo))
	{
		if (OnCriWareError.IsBound())
		{
			OnCriWareError.Broadcast(ErrorInfo);
		}
	}
}

bool UCriWareError::IsTickable() const
{
	return !QueuedErrors.IsEmpty();
}

/* Functions to interface with Native CriWare error
*****************************************************************************/

void UCriWareError::RegisterNativeCallback()
{
	criErr_SetCallback(&UCriWareError_Native::OnNativeErrorCallback);
}

void UCriWareError::UnregisterNativeCallback()
{
	criErr_SetCallback(nullptr);
}

void UCriWareError::HandleOnNativeErrorCallback(ECriWareErrorType ErrorType, FString Message)
{
	/* 今までの実装と大幅な変化がないようにコールバックが呼ばれた際はログを出力するランタイムスレッドで呼ばれる*/
	if (Message.StartsWith("W"))
	{
		UE_LOG(LogCriWare, Warning, TEXT("%s"), *Message);
		ErrorType = ECriWareErrorType::Warning;
	}
	else
	{
		UE_LOG(LogCriWare, Error, TEXT("%s"), *Message);
	}

	/* エディタ時はログ出力のみ(PIEはコールバック処理が行われる)
	 * エディタ初期化時のエラーは、コールバックで呼び出されない点に注意 */
	if (GIsEditor && !GIsPlayInEditorWorld)
	{
		return;
	}

	/*【エラーID:メッセージ】の形式でエラーの内容を把握できる
	 * 現状、その他の形式は存在しない */
	if (!IsValid(Instance))
	{
		UE_LOG(LogCriWare, Error, TEXT("CriWareError is not initialized."));
		return;
	}

	FString MessageOnly, ErrorID;
	Message.Split(":", &ErrorID, &MessageOnly);
	FCriWareErrorInfo ErrorInfo = { ErrorID, ErrorType, MessageOnly };

	Instance->QueuedErrors.Enqueue(ErrorInfo);
}

#undef LOCTEXT_NAMESPACE
