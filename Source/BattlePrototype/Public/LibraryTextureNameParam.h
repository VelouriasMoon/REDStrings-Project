#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryTextureNameParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryTextureNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureName;
    
};

