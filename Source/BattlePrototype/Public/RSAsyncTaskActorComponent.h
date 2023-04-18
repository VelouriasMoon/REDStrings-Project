#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSAsyncTaskActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSAsyncTaskActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSyncExecFlag;
    
    URSAsyncTaskActorComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetExecAsyncTask(bool bExec);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleAsyncTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneAsyncTask() const;
    
};

