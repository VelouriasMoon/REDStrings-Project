#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChangeLevelDelegateDelegate.h"
#include "PlayerWeaponChargeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerWeaponChargeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeLevelDelegate DispatchChangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ChargeTimeList;
    
    UPlayerWeaponChargeComponent();
    UFUNCTION(BlueprintCallable)
    void StartCharge(UPARAM(Ref) TArray<float>& TimeList);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCharge();
    
};

