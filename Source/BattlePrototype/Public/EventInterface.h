#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMaterialShadowOffsetID.h"
#include "EventInterface.generated.h"

class UAnimMontage;
class UTexture2D;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UEventInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TalkEventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TalkEventEnd(bool isRestoreTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopEventAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StaticEventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StaticEventEnd(bool isRestoreTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetShadowOffsetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetShadowOffsetMapID(EMaterialShadowOffsetID ShadowOffsetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetHoodVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEventVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetShadowOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayEventAnimMontage(UAnimMontage* AnimMontage, FName Section, float InPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEndEventAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventPhysicsIdling(float IdlingSec, float IdleRestoreDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventInputRestrictNative(bool Restrict);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EventEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DynamicEventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DynamicEventEnd(bool isRestoreTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DynamicEventBeforeBindCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BattleSequencerStart(bool isSetEnemyEvent, bool bDriveSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BattleSequencerEnd(bool isRestoreTransform, bool isSetEnemyEvent, bool bDriveSequence);
    
};

