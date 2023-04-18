#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryBoolParamRaw.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryBoolParamRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolData;
    
};

