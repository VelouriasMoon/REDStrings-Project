#pragma once
#include "CoreMinimal.h"
#include "MissionInfo.h"
#include "MissionGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FMissionGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionInfo> missionList;
};

