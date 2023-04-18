#pragma once
#include "CoreMinimal.h"
#include "SkipStruct.generated.h"

USTRUCT(BlueprintType)
struct FSkipStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkipName;
    
};

