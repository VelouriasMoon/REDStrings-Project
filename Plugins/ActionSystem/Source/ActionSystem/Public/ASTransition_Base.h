#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ASTransition_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API UASTransition_Base : public UObject {
    GENERATED_BODY()
public:
    UASTransition_Base();
};

