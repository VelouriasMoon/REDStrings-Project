#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerMoveToBase.h"
#include "BTTask_RSPlayerMoveToHero.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerMoveToHero : public UBTTask_RSPlayerMoveToBase {
    GENERATED_BODY()
public:
    UBTTask_RSPlayerMoveToHero();
};

