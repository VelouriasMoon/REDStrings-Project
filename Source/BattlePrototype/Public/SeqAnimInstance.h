#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SeqAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API USeqAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USeqAnimInstance();
};

