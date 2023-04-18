#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponExtraAbilityParameter.h"
#include "WeaponExtraAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponExtraAbilityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponExtraAbilityParameter> DefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponExtraAbilityParameter> MainPlayerData;
    
};

