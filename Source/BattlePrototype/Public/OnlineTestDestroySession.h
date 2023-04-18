#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedOnlineTestDestroySessionDelegate.h"
#include "OnlineTestDestroySession.generated.h"

class APlayerController;
class UObject;
class UOnlineTestDestroySession;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOnlineTestDestroySession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestDestroySession OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestDestroySession OnFailure;
    
    UOnlineTestDestroySession();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineTestDestroySession* OnlineTestDestroySession(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

