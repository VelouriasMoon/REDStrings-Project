#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/DataTable.h"
#include "PresentLocationCameraContainData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentLocationCameraContainData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
};

