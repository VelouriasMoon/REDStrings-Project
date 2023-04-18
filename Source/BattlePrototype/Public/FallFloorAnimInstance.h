#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Animation/AnimInstance.h"
#include "FallFloorAnimInstanceInterface.h"
#include "FallFloorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API UFallFloorAnimInstance : public UAnimInstance, public IFallFloorAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBreakAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRemovedAnyBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> BoneScales;
    
    UFallFloorAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
};

