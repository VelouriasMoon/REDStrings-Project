#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FindSessionsCallbackProxy.h"
#include "AsyncCompletedMyJoinSessionDelegate.h"
#include "OnlineTestJoinSession.generated.h"

class APlayerController;
class UObject;
class UOnlineTestJoinSession;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOnlineTestJoinSession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedMyJoinSession OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedMyJoinSession OnFailure;
    
    UOnlineTestJoinSession();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineTestJoinSession* OnlineTestJoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult SearchResult);
    
};

