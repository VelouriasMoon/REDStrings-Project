#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerBase.h"
#include "GameTimer.h"
#include "BTTask_RSPlayerBrainField.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerBrainField : public UBTTask_RSPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer Timer;
    
public:
    UBTTask_RSPlayerBrainField();
};

