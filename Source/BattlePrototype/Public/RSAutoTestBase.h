#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERSAutoTestResult.h"
#include "RSAutoTestEventSignatureDelegate.h"
#include "RSAutoTestBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ARSAutoTestBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSAutoTestEventSignature OnTestPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSAutoTestEventSignature OnTestStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSAutoTestEventSignature OnTestFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSAutoTestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDelayGCInTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreparationTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TimesUpMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSAutoTestResult TimesUpResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> TestArgs;
    
    ARSAutoTestBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStartTest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePrepareTest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable)
    void FinishTest(ERSAutoTestResult TestResult, const FString& Message);
    
};

