#pragma once
#include "CoreMinimal.h"
#include "BoolVector2.generated.h"

USTRUCT(BlueprintType)
struct FBoolVector2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Y;
};

