#pragma once
#include "CoreMinimal.h"
#include "SnowTraceActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSnowTraceActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* snowActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 useDepthDataNumber;
    
};

