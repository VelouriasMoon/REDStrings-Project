#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerBase.h"
#include "GameTimer.h"
#include "BTTask_RSPlayerJump.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerJump : public UBTTask_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer Timer;
    
public:
    UBTTask_RSPlayerJump();
};

