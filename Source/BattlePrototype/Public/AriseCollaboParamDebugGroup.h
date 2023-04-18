#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "AriseCollaboParamDebugGroup.generated.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAriseCollaboParamDebugGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemBool> IsCheckedSave;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecParamChange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecCheckSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* DebugSaveLoadScreenParamManager;
    
public:
    AAriseCollaboParamDebugGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteParameterChange(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteCheckSave(const ADebuggingItemEvent* Item);
    
};

