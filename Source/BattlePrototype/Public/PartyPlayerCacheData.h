#pragma once
#include "CoreMinimal.h"
#include "AccessoryDataCache.h"
#include "WeaponExtraAbilityData.h"
#include "PartyPlayerCacheData.generated.h"

USTRUCT(BlueprintType)
struct FPartyPlayerCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccessoryDataCache> AccessoryDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponExtraAbilityData WeaponExtraAbilityDataCache;
    
};

