#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "ASEquipWeapon.generated.h"

USTRUCT(BlueprintType)
struct FASEquipWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale3D;
    
    ACTIONSYSTEM_API FASEquipWeapon();
};

