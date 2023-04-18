#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BackupEquipWeapon.generated.h"

USTRUCT(BlueprintType)
struct FBackupEquipWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinID;
};

