#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ASStateMachine.generated.h"

class UASAnimationSet;
class UASSMStateNode;

UCLASS(Blueprintable)
class ACTIONSYSTEM_API UASStateMachine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASSMStateNode* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UASSMStateNode*> StateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASAnimationSet* AnimationSetAsset;
    
    UASStateMachine();
};

