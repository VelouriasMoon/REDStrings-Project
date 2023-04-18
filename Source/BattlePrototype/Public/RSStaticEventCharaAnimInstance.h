#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RSStaticEventCharaAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSStaticEventCharaAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeXAxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeYAxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeBlendWeight;
    
    URSStaticEventCharaAnimInstance();
};

