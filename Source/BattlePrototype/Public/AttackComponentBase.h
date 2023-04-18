#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerAnimKind.h"
#include "RSAttackInputKind.h"
#include "Templates/SubclassOf.h"
#include "AttackComponentBase.generated.h"

class AActor;
class UAnimMontage;
class UAttackComponentBase;
class UAttackInputComponent;
class UPlayerAnimControllerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAttackComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerAnimControllerComponent* _animCon;
    
public:
    UAttackComponentBase();
    UFUNCTION(BlueprintCallable)
    void SpawnSASVisionActor(TSubclassOf<AActor> ActorClass, FName locationTagName, bool bFollow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAttackInputKind(RSAttackInputKind::Type kind);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttacking(bool bAttacking, bool bAddComboCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCustomAttackTimingNotified(const FString& CustomName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnChangeAttacking(bool bAttacking);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimKind(PlayerAnimKind NewKind, PlayerAnimKind OldKind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputButtonByCombo(bool bPressed, bool bComboFirst);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAnimControllerComponent* GetOwnerAnimCon() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBranchComboCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    RSAttackInputKind::Type GetBranchComboAttackInputKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<RSAttackInputKind::Type> GetAttackInputKind() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackInputComponent* GetAttackInputComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAttackComponentBase* FindAttackingComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UAttackComponentBase* FindAttackComponentBySASVisionActor(AActor* Actor, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void DisappearSASVisionActor();
    
    UFUNCTION(BlueprintCallable)
    void DestroySASVisionActor();
    
    UFUNCTION(BlueprintCallable)
    void ClearInputAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckStartAttack(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddComboCount();
    
};

