#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.h"
#include "GuildEditResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildEditResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuildInfo GuildInfo;
};

