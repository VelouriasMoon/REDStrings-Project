#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "ASCharacterBase.h"
#include "ASCollisionInterface.h"
#include "ASTakeHitInfo.h"
#include "EDamageState.h"
#include "Templates/SubclassOf.h"
#include "ASCharacter.generated.h"

class AASCharacter;
class AActor;
class AController;
class UASDamageType;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API AASCharacter : public AASCharacterBase, public IASCollisionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastTakeHitInfo, meta=(AllowPrivateAccess=true))
    FASTakeHitInfo LastTakeHitInfo;
    
public:
    AASCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTakePointDamage(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTakeDamage(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyHit(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTakeHitInfo();
    
    UFUNCTION(BlueprintCallable)
    bool OnAttackOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void JumpDamageState(TEnumAsByte<EDamageState> State);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientTakePointDamage(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientTakeDamage(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientNotifyHit(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection);
    
    
    // Fix for true pure virtual functions not being implemented
};

