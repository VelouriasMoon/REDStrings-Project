#pragma once
#include "CoreMinimal.h"
#include "ConditionComponent.h"
#include "TumbleConditionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UTumbleConditionComponent : public UConditionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _tumbleSec;
    
public:
    UTumbleConditionComponent();
};

