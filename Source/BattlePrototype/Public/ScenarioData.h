#pragma once
#include "CoreMinimal.h"
#include "ScenarioData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FScenarioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hoge;
    
};

