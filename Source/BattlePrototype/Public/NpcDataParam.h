#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NpcDataParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UNpcDataParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookAtClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookAtFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionIcon2OffsetX;
    
    UNpcDataParam();
};

