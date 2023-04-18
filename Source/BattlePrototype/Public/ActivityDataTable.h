#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActivityDataTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FActivityDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugMessage;
    
};

