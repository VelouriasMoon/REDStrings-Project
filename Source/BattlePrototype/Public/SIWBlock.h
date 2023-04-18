#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SIWBlock.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASIWBlock : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationRate;
    
    ASIWBlock();
};

