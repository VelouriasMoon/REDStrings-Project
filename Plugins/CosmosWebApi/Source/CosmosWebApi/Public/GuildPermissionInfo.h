#pragma once
#include "CoreMinimal.h"
#include "GuildPermissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FGuildPermissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 apiNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 permission;
};

