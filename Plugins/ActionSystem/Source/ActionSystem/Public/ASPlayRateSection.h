#pragma once
#include "CoreMinimal.h"
#include "ASPlayRateSection.generated.h"

USTRUCT(BlueprintType)
struct FASPlayRateSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    ACTIONSYSTEM_API FASPlayRateSection();
};

