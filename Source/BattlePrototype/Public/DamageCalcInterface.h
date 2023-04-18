#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharactersParameterTable.h"
#include "HCCollisionCommonInfo.h"
#include "HCSkillAttackType.h"
#include "HCSkillCommonInfo.h"
#include "DamageCalcInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UDamageCalcInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IDamageCalcInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OverwriteAttackCollisionInfo(UPARAM(Ref) FHCCollisionCommonInfo& refCommonInfo, UPARAM(Ref) FHCSkillCommonInfo& refSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPsychicFieldDamageRateToBoss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsIgnoreCritical();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMaxDamageRateLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMaxCrashScaleLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FCharactersParameterTable GetCharactersParameterTableInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcFinalDamageByDefence(float Damage, AActor* attackActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcFinalDamageByAttack(float Damage, AActor* defenseActor, const FHCSkillCommonInfo& skillInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcDefence(UPARAM(Ref) float& refPhysicsDefence, UPARAM(Ref) float& refObjDefence, UPARAM(Ref) float& refFlameDefence, UPARAM(Ref) float& refElectricPhysics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcDamageByDefence(UPARAM(Ref) float& refPhysicsDamage, UPARAM(Ref) float& refObjDamage, UPARAM(Ref) float& refFlameDamage, UPARAM(Ref) float& refElectricDamage, UPARAM(Ref) float& refCriticalDamageRate, AActor* attackActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcDamageByAttack(UPARAM(Ref) float& refPhysicsDamage, UPARAM(Ref) float& refObjDamage, UPARAM(Ref) float& refFlameDamage, UPARAM(Ref) float& refElectricDamage, UPARAM(Ref) float& refCriticalDamageRate, AActor* defenseActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcCritical(float Critical, AActor* defenseActor, bool bAssassinAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcAccumulationByDefence(UPARAM(Ref) float& refWince, UPARAM(Ref) float& refKnockback, UPARAM(Ref) float& refDown, UPARAM(Ref) float& refLaunch, UPARAM(Ref) float& refFlame, UPARAM(Ref) float& refElectric, UPARAM(Ref) float& refFlooded, UPARAM(Ref) float& refOil, UPARAM(Ref) float& refConfusion, UPARAM(Ref) float& refCrashScale, UPARAM(Ref) float& refCrashCapCheckRate, AActor* attackActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcAccumulationByAttack(UPARAM(Ref) float& refWince, UPARAM(Ref) float& refKnockback, UPARAM(Ref) float& refDown, UPARAM(Ref) float& refLaunch, UPARAM(Ref) float& refFlame, UPARAM(Ref) float& refElectric, UPARAM(Ref) float& refFlooded, UPARAM(Ref) float& refOil, UPARAM(Ref) float& refConfusion, UPARAM(Ref) float& refCrashScale, UPARAM(Ref) float& refCrashCapCheckRate, AActor* defenseActor, HCSkillAttackType AttackType, bool bCopyActor, const FHCSkillCommonInfo& skillInfo);
    
};

