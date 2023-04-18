#pragma once
#include "CoreMinimal.h"
#include "ECosmosWebAPIType.generated.h"

UENUM(BlueprintType)
enum class ECosmosWebAPIType : uint8 {
    SysGetEnv,
    SysKPI,
    SysAgreeKPI,
    UserCreate,
    UserLogin,
    UserConvertUserId,
    TusRead,
    TusWrite,
    RankingGetMaster,
    RankingSetScore,
    RankingGetByRange,
    SavedataUpload,
    SavedataMultipartUpload,
    SavedataDownload,
    SavedataDelete,
    HugeTssMultiReadList,
    GetTrackingNum,
    Max,
};

