#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRowTest.generated.h"

USTRUCT(BlueprintType)
struct FDataTableRowTest : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _testIntVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _testFloatVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _testNameVal;
    
};

