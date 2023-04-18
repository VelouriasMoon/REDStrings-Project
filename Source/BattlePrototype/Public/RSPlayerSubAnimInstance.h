#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RSPlayerSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSPlayerSubAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsIdlingSec;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKawaiiPhysics;
    
public:
    URSPlayerSubAnimInstance();
};

