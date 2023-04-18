#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedOnlineTestFindSessionsDelegate.h"
#include "OnlineTestFindSessions.generated.h"

class APlayerController;
class UObject;
class UOnlineTestFindSessions;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOnlineTestFindSessions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestFindSessions OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestFindSessions OnFailure;
    
    UOnlineTestFindSessions();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineTestFindSessions* OnlineTestFindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bIsLAN);
    
};

