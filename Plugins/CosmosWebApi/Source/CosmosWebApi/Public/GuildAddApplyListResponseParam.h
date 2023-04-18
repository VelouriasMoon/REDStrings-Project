#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.h"
#include "GuildAddApplyListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildAddApplyListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildInfo> addApplyGuildList;
};

