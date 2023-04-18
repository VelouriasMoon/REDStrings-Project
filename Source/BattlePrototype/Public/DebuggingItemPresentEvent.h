#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemEvent.h"
#include "EPlayerID.h"
#include "DebuggingItemPresentEvent.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemPresentEvent : public ADebuggingItemEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 toLevel;
    
    ADebuggingItemPresentEvent();
};

