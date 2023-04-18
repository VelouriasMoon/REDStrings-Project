#pragma once
#include "CoreMinimal.h"
#include "GuildCreateResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildCreateResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString guildId;
};

