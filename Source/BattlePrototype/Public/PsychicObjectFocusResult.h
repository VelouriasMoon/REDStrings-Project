#pragma once
#include "CoreMinimal.h"
#include "PsychicObjectFocusResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPsychicObjectFocusResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NormalObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UniqueObj;
    
};

