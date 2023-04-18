/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2021 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : CriWareRuntime
* File     : CriWareError.h
*
****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Tickable.h"

#include "CriWareApi.h"

#include "CriWareError.generated.h"

namespace UCriWareError_Native
{
	extern "C" void CRIAPI OnNativeErrorCallback(const CriChar8 * ErrorID, CriUint32 Param1, CriUint32 Param2, CriUint32 * Buffer);
}

/* エラータイプ */
UENUM(BlueprintType, Category = "CriWare Error")
enum class ECriWareErrorType : uint8
{
	/* 警告 */
	Warning,
	/* エラー */
	Error
};

/* エラーパラメータ */
USTRUCT(BlueprintType, Category = "CriWare Error")
struct CRIWARERUNTIME_API FCriWareErrorInfo
{
	GENERATED_BODY()

	/** エラーID */
	UPROPERTY(BlueprintReadOnly, Category = "Error", meta = (ToolTip = "The original CriWare error ID."))
	FString ErrorID;
	
	/** エラータイプ */
	UPROPERTY(BlueprintReadOnly, Category = "Error", meta = (ToolTip = "The error type."))
	ECriWareErrorType ErrorType;
	
	/** エラーメッセージ */
	UPROPERTY(BlueprintReadOnly, Category = "Error", meta = (ToolTip = "The message associed with this error."))
	FString Message;
};

UCLASS(BlueprintType, MinimalApi, Category = "CriWare Error")
class UCriWareError : public UObject, public FTickableGameObject
{
	friend void CRIAPI UCriWareError_Native::OnNativeErrorCallback(const CriChar8*, CriUint32, CriUint32, CriUint32*);

	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCriWareError, const FCriWareErrorInfo&, ErrorInfo);

public:

	//~ Begin FTickableGameObject interface
	void Tick(float DeltaTime) override;
	bool IsTickable() const override;
	bool IsTickableInEditor() const override { return false; }
	bool IsTickableWhenPaused() const override { return false; }
	TStatId GetStatId() const override { return TStatId(); }
	//~ End FTickableGameObject interface

public:

	/** インスタンス変数の生成 */
	static void CreateInstance();

	/** インスタンス変数の破棄 */
	static void DeleteInstance();

	/** インスタンス変数の取得
	 * 
	 * @return インスタンス変数
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CriWare Error" , meta = (ToolTip = "Gets the UCriWareError instance."))
	static CRIWARERUNTIME_API UCriWareError* GetCriWareError()
	{
		/* ここでインスタンス化すると、プラグイン初期化時のエラーに対応できない可能性がある*/
		check(Instance);
		return Instance;
	}

	/* エラーデリゲート */
	UPROPERTY(BlueprintAssignable, Category = "CriWare Error", meta = (ToolTip = "An event triggered when an error from CriWare is recevied."))
	FOnCriWareError OnCriWareError;

private:

	void HandleOnNativeErrorCallback(ECriWareErrorType ErrorType, FString Message);

	/* コールバックの登録 */
	void RegisterNativeCallback();
	
	/* コールバックの登録解除 */
	void UnregisterNativeCallback();

private:

	TQueue<FCriWareErrorInfo, EQueueMode::Mpsc> QueuedErrors;

	/* インスタンス変数 */
	static UCriWareError* Instance;
};
