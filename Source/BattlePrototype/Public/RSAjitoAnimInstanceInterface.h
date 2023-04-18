#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "EAjitoMemberState.h"
#include "RSAjitoAnimInstanceInterface.generated.h"

class UASAnimationSet;
class UASStateMachine;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URSAjitoAnimInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRSAjitoAnimInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseOverrideAnim(bool IsOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetPlayerFacePos(FVector PlayerFacePos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetLookAtPlayer(bool IsLookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetASStateMachine(UASStateMachine* StateMachine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetASAnimationSet(UASAnimationSet* AnimationSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestState(EAjitoMemberState State);
    
};

