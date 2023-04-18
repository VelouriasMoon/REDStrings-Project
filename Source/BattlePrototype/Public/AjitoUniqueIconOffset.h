#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoUniqueIconOffset.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoUniqueIconOffset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetRowName;
    
};

