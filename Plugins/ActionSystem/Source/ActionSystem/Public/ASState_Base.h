#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ASState_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API UASState_Base : public UObject {
    GENERATED_BODY()
public:
    UASState_Base();
};

