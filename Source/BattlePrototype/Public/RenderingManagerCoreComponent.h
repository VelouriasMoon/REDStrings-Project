#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RenderingManagerCoreComponent.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URenderingManagerCoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadeNoiseProgressScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
public:
    URenderingManagerCoreComponent();
};

