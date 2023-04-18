#pragma once
#include "CoreMinimal.h"
#include "ASSMStateNode.h"
#include "ASSMState_StateMachine.generated.h"

UCLASS(Blueprintable)
class ACTIONSYSTEM_API UASSMState_StateMachine : public UASSMStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UASSMState_StateMachine();
};

