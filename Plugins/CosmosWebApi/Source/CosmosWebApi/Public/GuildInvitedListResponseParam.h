#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.h"
#include "GuildInvitedListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildInvitedListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildInfo> addApplyGuildList;
};

