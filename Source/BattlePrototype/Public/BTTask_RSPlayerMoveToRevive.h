#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerMoveToBase.h"
#include "BTTask_RSPlayerMoveToRevive.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerMoveToRevive : public UBTTask_RSPlayerMoveToBase {
    GENERATED_BODY()
public:
    UBTTask_RSPlayerMoveToRevive();
};

