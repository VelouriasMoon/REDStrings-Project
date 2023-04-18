#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EHelpTutorial.h"
#include "TipsCountParamManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTipsCountParamManager : public UObject {
    GENERATED_BODY()
public:
    UTipsCountParamManager();
    UFUNCTION(BlueprintCallable)
    bool WhetherTheConditionsAreMet(EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenTips(bool newFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayedData(EHelpTutorial helpID, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetTips(EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
};

