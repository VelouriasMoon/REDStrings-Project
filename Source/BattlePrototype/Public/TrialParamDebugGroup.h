#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "TrialParamDebugGroup.generated.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ATrialParamDebugGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemBool> IsPlayTrialYuito;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemBool> IsPlayTrialKasane;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecParamChange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecLoadTrialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* DebugSaveLoadScreenParamManager;
    
public:
    ATrialParamDebugGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteParameterChange(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteLoadTrialSave(const ADebuggingItemEvent* Item);
    
};

