#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "TwoShotPair.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FTwoShotPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType PhotoM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType PhotoF;
    
};

