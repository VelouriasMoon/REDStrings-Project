#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSCharaAnimationAccessor.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSCharaAnimationAccessor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSettingFaceAnimation;
    
    ARSCharaAnimationAccessor();
};

