#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.generated.h"

USTRUCT(BlueprintType)
struct FGuildInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString guildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString guildData;
};

