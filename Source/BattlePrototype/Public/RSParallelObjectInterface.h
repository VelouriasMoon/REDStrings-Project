#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERSParallelTiming.h"
#include "RSParallelObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API URSParallelObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IRSParallelObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreParallelTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostParallelTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ParallelTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableParallelTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERSParallelTiming GetParallelTiming();
    
};

