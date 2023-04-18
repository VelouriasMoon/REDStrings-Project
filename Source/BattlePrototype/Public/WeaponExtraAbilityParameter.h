#pragma once
#include "CoreMinimal.h"
#include "EWeaponExtraAbility.h"
#include "WeaponExtraAbilityParameter.generated.h"

USTRUCT(BlueprintType)
struct FWeaponExtraAbilityParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponExtraAbility Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param1;
    
};

