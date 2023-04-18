#pragma once
#include "CoreMinimal.h"
#include "ASSMNode.h"
#include "ASSMStateNode.generated.h"

class UASSMTransitionNode;
class UASState_Base;

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API UASSMStateNode : public UASSMNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysCanceledCommand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASState_Base* Custom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UASSMTransitionNode*> TransitionList;
    
    UASSMStateNode();
};

