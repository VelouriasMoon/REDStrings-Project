#pragma once
#include "CoreMinimal.h"
#include "TmpGuildMemberInfo.h"
#include "GuildInvitationListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildInvitationListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTmpGuildMemberInfo> invitationUserList;
};

