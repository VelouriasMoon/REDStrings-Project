#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "OutgameDebuggingStartupObject.generated.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class ADebuggingItemStringArray;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOutgameDebuggingStartupObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugSystemSaveLoadScreenParamManager;
    
public:
    UOutgameDebuggingStartupObject();
    UFUNCTION(BlueprintCallable)
    void OnUseMouseCursor(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemMaximumProgressDisplayThatHasBeenReached(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemForcedChangeOfExecutionResultReport(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemFastFlowSkip(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemDummyBuffer(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemDataCorrupt(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemChangeZeroEpClearFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemChangeClearFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSavedataUpload(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSavedataDownload(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSavedataDelete(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnReloadLevel(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenPhotoMode(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnForcedChangeOfExecutionResultReportList(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteLoadLevel(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawUIBaseProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawInactiveUIBaseProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDispUserTag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDispTitleMainUI(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDispMouseRectangle(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmosWebManagerHttpLastErrorCodeLog(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLoadLevel(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityReleaseAccordingToTheMaximumProgressThatHasBeenReached(const ADebuggingItemEvent* Item);
    
};

