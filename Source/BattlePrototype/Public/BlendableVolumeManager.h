#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "BlendableVolumeManager.generated.h"

class ABlendableVolume;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ABlendableVolumeManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    ABlendableVolumeManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintAddCalcVolume(const ABlendableVolume* Volume, float Weight);
    
    
    // Fix for true pure virtual functions not being implemented
};

