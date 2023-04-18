#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryHabitatParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryHabitatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginProgressNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndProgressNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Habitat;
    
};

