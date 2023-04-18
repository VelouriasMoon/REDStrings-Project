#pragma once
#include "CoreMinimal.h"
#include "TmpGuildMemberInfo.h"
#include "GuildApprovalListResponseParam.generated.h"

USTRUCT(BlueprintType)
struct FGuildApprovalListResponseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTmpGuildMemberInfo> addApplyUserList;
};

