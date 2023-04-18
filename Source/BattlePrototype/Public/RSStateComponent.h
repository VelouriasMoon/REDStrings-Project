#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSStateComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URSStateComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Update();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Transition();
    
    UFUNCTION(BlueprintCallable)
    void SetState(int32 StateIndex, int32 Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetProcess(int32 NewNextProcess);
    
    UFUNCTION(BlueprintCallable)
    void NextProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProcess() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Exit(int32 NextStateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Enter(int32 Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndProcess();
    
};

