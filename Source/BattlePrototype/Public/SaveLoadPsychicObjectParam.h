#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "SaveLoadPsychicObjectParam.generated.h"

USTRUCT(BlueprintType)
struct FSaveLoadPsychicObjectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BPName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
};

