#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnterStateDelegadeDelegate.h"
#include "RSStateManageComponent.generated.h"

class URSStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSStateManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnterStateDelegade DispatchEnterState;
    
    URSStateManageComponent();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SetState(int32 StateIndex, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const TArray<URSStateComponent*>& StateList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrevStateIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateIndex() const;
    
};

