#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConditionKind.h"
#include "HCCollisionCommonInfo.h"
#include "HCCollisionValueKind.h"
#include "HCElementKind.h"
#include "HitCheckUtility.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UHitCheckUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitCheckUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetElementValueFromCommonInfo(const FHCCollisionCommonInfo& commonInfo, HCElementKind kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetConditionValueFromCommonInfo(const FHCCollisionCommonInfo& commonInfo, ConditionKind kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCollisionValueFromCommonInfo(const FHCCollisionCommonInfo& commonInfo, HCCollisionValueKind kind);
    
};

