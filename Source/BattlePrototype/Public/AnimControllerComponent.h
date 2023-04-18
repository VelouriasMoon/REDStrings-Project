#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
#include "Components/ActorComponent.h"
#include "HCDamageKind.h"
#include "AnimControllerComponent.generated.h"

class AActor;
class UAnimControllerComponent;
class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAnimControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAnimControllerComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestTumbleWakeup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestTumble();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestFaintWakeup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestFaint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestDamageFlyWakeup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestDamageFly();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestDamage(HCDamageKind damageKind, float StiffenSec, float HitStopSec, float HitStopRate, FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifySuperArmor(UObject* Notify, int32 ResistStagger, bool bBegin);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveNotifyDirectionControl(UObject* Notify, bool bBegin, float RotateSpeed, bool bUseSocket, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseSocketDirectionControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDirectionControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimTumbleDowning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimTumble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimFaintDowning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimFaint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimDamageFlyRise() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimDamageFlyLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAnimDamageFly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResistStagger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDirectionControlSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectionControllRotateSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimControllerComponent* GetAnimControllerComponentFromActor(AActor* Actor);
    
};

