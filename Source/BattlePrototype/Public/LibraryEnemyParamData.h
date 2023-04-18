#pragma once
#include "CoreMinimal.h"
#include "LibraryEnemyParamData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryEnemyParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 killNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> DropItems;
    
};

