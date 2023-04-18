#pragma once
#include "CoreMinimal.h"
#include "PsychicObjectListInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPsychicObjectListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
};

