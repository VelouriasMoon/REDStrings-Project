#pragma once
#include "CoreMinimal.h"
#include "CosmosSealInfo.generated.h"

class UDecalComponent;

USTRUCT(BlueprintType)
struct FCosmosSealInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
};

