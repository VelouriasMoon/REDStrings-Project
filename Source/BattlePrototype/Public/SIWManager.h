#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SIWManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USIWManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WithoutCalcAttenuationNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WithoutCalcAttenuationFarDistance;
    
public:
    USIWManager();
};

