#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackCalcInfo.h"
#include "CharactersParameterBasic.h"
#include "CharactersParameterTable.h"
#include "DamageCalcInfo.h"
#include "CharacterDatatableAccessorComponent.generated.h"

class AActor;
class UCharacterDatatableAccessorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCharacterDatatableAccessorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackCalcInfo _attackCalcInfo;
    
public:
    UCharacterDatatableAccessorComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackCalcInfo(const FAttackCalcInfo& AttackCalcInfo);
    
    UFUNCTION(BlueprintCallable)
    static void InheritAttackCalcInfo(AActor* Parent, AActor* child);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FCharactersParameterTable GetParamTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FCharactersParameterBasic GetParamBasic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FDamageCalcInfo GetDamageCalcInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCharacterDatatableAccessorComponent* GetCharacterDatatableAccessorComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FAttackCalcInfo GetAttackCalcInfo() const;
    
};

