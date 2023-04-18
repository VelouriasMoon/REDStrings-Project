#pragma once
#include "CoreMinimal.h"
#include "TmpGuildMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct FTmpGuildMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString guildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString guildMemberData;
};

