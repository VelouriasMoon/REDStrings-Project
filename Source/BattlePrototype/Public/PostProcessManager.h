#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "PostProcessManager.generated.h"

class UPostProcessComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APostProcessManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    APostProcessManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterPostProcess(UPostProcessComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPostProcess(UPostProcessComponent* InComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

