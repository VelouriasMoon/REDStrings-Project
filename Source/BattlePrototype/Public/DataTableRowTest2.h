#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRowTest2.generated.h"

USTRUCT(BlueprintType)
struct FDataTableRowTest2 : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _testIntVal;
    
};

