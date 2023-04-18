#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIDetaileMapCheckAreaData.h"
#include "UIDetaileMapCheckData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIDetaileMapCheckData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapCheckAreaData> areaList;
    
};

