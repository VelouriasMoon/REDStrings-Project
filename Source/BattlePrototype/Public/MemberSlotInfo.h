#pragma once
#include "CoreMinimal.h"
#include "MemberSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FMemberSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
};

