#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MaterialLocationParam.h"
#include "MaterialLocationParamTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMaterialLocationParamTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLocationParam Setting;
    
};

