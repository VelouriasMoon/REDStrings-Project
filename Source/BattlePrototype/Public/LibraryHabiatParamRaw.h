#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryHabiatParamRaw.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryHabiatParamRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Habitat;
    
};

