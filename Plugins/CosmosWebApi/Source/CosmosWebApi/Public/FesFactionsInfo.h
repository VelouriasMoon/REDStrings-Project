#pragma once
#include "CoreMinimal.h"
#include "FesFactionsInfo.generated.h"

USTRUCT(BlueprintType)
struct FFesFactionsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 factionsNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 factionsTotalPoint;
};

