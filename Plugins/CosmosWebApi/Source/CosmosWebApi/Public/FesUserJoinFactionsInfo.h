#pragma once
#include "CoreMinimal.h"
#include "FesUserJoinFactionsInfo.generated.h"

USTRUCT(BlueprintType)
struct FFesUserJoinFactionsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 factionsNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 factionsPoint;
};

