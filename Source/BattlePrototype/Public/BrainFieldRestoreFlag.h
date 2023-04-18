#pragma once
#include "CoreMinimal.h"
#include "BrainFieldRestoreFlag.generated.h"

USTRUCT(BlueprintType)
struct FBrainFieldRestoreFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LightComponentsFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PrimitiveComponentsFlag;
};

