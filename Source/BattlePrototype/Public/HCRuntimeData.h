#pragma once
#include "CoreMinimal.h"
#include "HCRuntimeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHCRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> wpAttackSourceActor;
    
};

