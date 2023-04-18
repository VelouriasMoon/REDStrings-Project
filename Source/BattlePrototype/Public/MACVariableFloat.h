#pragma once
#include "CoreMinimal.h"
#include "MACVariableBase.h"
#include "MACVariableFloat.generated.h"

USTRUCT(BlueprintType)
struct FMACVariableFloat : public FMACVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
};

