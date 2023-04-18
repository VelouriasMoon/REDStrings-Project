#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterHitCheckComponent.generated.h"

class ARSCharacterBase;
class UCapsuleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCharacterHitCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCharacterHitCheckComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterHitCheck(UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHitCheck(UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegisteredAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetRegisteredHitCharacter(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegisteredCount() const;
    
};

