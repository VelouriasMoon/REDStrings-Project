#pragma once
#include "CoreMinimal.h"
#include "RSCollisionSoundInfo.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FRSCollisionSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialOther;
    
};

