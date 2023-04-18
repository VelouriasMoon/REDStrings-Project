#pragma once
#include "CoreMinimal.h"
#include "AnimNode_RigidBodyRedCustomInterpolateInfo.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct REDANIMATIONNODE_API FAnimNode_RigidBodyRedCustomInterpolateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* InterpolatePhysicsAssetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* InterpolatePhysicsAssetB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideBodyDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideBodyMass;
};

