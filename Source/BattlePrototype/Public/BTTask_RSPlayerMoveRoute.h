#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerMoveToBase.h"
#include "BTTask_RSPlayerMoveRoute.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerMoveRoute : public UBTTask_RSPlayerMoveToBase {
    GENERATED_BODY()
public:
    UBTTask_RSPlayerMoveRoute();
};

