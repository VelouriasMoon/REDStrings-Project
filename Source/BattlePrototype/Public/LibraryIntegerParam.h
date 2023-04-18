#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryIntegerParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryIntegerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntParem;
    
};

