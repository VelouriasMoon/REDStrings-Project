#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryBoolParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryBoolParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolParam;
    
};

