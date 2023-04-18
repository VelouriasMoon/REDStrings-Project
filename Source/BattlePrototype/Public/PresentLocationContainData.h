#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/DataTable.h"
#include "PresentLocationContainData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentLocationContainData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
};

