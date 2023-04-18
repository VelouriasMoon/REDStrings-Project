#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoMemberAttach.h"
#include "EAjitoMemberIdleStateType.h"
#include "EAjitoMemberTalkStateType.h"
#include "Templates/SubclassOf.h"
#include "AjitoMemberInfo.generated.h"

class UASAnimationSet;
class UASStateMachine;
class URSAjitoAnimInstance;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoMemberInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSAjitoAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UASStateMachine> StateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UASAnimationSet> AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAtPlayerInTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoMemberAttach> AttachInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberIdleStateType IdleStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAjitoMemberTalkStateType TalkStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIdleOnlyAction;
    
};

