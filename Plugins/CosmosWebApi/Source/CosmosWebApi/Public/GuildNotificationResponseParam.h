#pragma once
#include "CoreMinimal.h"
#include "GuildNotificationInfo.h"
#include "GuildNotificationResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildNotificationResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildNotificationInfo> notificationList;
};

