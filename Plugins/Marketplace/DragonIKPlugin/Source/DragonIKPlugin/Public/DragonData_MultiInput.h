#pragma once
#include "CoreMinimal.h"
#include "DragonData_FootData.h"
#include "DragonData_MultiInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_MultiInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Start_Spine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Pelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDragonData_FootData> FeetBones;
};

