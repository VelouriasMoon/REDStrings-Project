#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AreaCameraType.generated.h"

USTRUCT(BlueprintType)
struct FAreaCameraType : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraType;
};

