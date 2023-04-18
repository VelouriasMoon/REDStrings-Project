#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayerCameraOptionParameter.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCameraOptionParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OffsetFov;
    
};

