#pragma once
#include "CoreMinimal.h"
#include "MissionInfo.h"
#include "MissionInfoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FMissionInfoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionInfo MissionInfo;
};

