#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedOnlineTestCreateSessionDelegate.h"
#include "OnlineTestCreateSession.generated.h"

class APlayerController;
class UObject;
class UOnlineTestCreateSession;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOnlineTestCreateSession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestCreateSession OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedOnlineTestCreateSession OnFailure;
    
    UOnlineTestCreateSession();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOnlineTestCreateSession* OnlineTestCreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PubblicConections, bool UseLAN, const FString& LevelName);
    
};

