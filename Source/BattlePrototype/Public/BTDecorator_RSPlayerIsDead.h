#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_RSPlayerBase.h"
#include "BTDecorator_RSPlayerIsDead.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTDecorator_RSPlayerIsDead : public UBTDecorator_RSPlayerBase {
    GENERATED_BODY()
public:
    UBTDecorator_RSPlayerIsDead();
};

