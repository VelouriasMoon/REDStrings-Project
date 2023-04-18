#pragma once
#include "CoreMinimal.h"
#include "PatchParam_DLC01.generated.h"

USTRUCT(BlueprintType)
struct FPatchParam_DLC01 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InformedPatchVer;
    
public:
};

