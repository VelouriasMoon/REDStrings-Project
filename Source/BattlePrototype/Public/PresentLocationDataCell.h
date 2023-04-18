#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PresentLocationCameraContainData.h"
#include "PresentLocationContainData.h"
#include "PresentLocationDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentLocationDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationContainData PlayerLocationAndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationContainData ForCharaLocationAndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresentLocationCameraContainData CameraLocationAndYawPitch;
    
};

