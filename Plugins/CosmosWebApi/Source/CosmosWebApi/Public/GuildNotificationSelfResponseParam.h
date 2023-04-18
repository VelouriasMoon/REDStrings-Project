#pragma once
#include "CoreMinimal.h"
#include "GuildNotificationInfo.h"
#include "GuildNotificationSelfResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildNotificationSelfResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildNotificationInfo> notificationSelfList;
};

