#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "EquipWeaponDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEquipWeaponDelegate, EPlayerID, playerId, int32, WeaponId, int32, WeaponSkinID);

