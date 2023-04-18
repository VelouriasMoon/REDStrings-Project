#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.h"
#include "GuildMemberInfo.h"
#include "GuildInfoResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildInfoResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuildInfo GuildInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuildMemberInfo> guildMebmerList;
};

