#pragma once
#include "CoreMinimal.h"
#include "EWeaponExtraAbility.generated.h"

UENUM(BlueprintType)
enum class EWeaponExtraAbility : uint8 {
    Invalid,
    DriveRateUp,
    NpcDriveUp,
    ReinforcePsychic,
    ReinforceFire,
    ReinforceMetal,
    ReinforceSeeStealth,
    ReinforceTelepo,
    ReinforceStealth,
    ReinforceElectric,
    ReinforceCopy,
    ReinforceAccelerator,
    SlayerBoss,
    SlayerRummy,
    SlayerPool,
    SlayerSabbat,
    SlayerPaws,
    SlayerYawn,
    SlayerSanta,
    SlayerPendu,
    SlayerPound,
    SlayerRut,
    SlayerChinery,
    EnchantFire,
    EnchantElectric,
};

