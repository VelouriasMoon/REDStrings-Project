#pragma once
#include "CoreMinimal.h"
#include "LibraryHabitatParam.h"
#include "LibraryIntegerParam.h"
#include "LibraryMessageParam.h"
#include "LibraryEnemyDBCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryEnemyDBCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLibraryMessageParam> DetailMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryIntegerParam ImageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DropItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLibraryHabitatParam> Habitat_m;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLibraryHabitatParam> Habitat_f;
    
};

