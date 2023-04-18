#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "MACVariableBase.h"
#include "MACVariableVector.generated.h"

USTRUCT(BlueprintType)
struct FMACVariableVector : public FMACVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultValue;
    
};

