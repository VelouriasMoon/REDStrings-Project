#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ASSMTransitionNodeInterface.generated.h"

class UASSMTransitionNode;
class UASTransition_Base;

UINTERFACE(Blueprintable)
class ACTIONSYSTEM_API UASSMTransitionNodeInterface : public UInterface {
    GENERATED_BODY()
};

class ACTIONSYSTEM_API IASSMTransitionNodeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TransferSharedCustomRules(UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PropagateRulesSettings(UASSMTransitionNode* Caller, int32 SharedRulesIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeRulesShareable(UASSMTransitionNode* Caller, TArray<int32>& Remap);
    
};

