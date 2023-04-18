#pragma once
#include "CoreMinimal.h"
#include "FallingFloorBlockOne.generated.h"

class UDestructibleMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FFallingFloorBlockOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BlockStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleMesh* BlockDestructible;
    
};

