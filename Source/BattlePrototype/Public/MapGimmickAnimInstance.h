#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MapGimmickAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API UMapGimmickAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UMapGimmickAnimInstance();
};

