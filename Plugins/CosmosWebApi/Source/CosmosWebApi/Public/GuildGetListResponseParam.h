#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.h"
#include "GuildGetListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildGetListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildInfo> guildList;
};

