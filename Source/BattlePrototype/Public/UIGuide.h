#pragma once
#include "CoreMinimal.h"
#include "EGuideKey.h"
#include "UIBase.h"
#include "UIGuide.generated.h"

class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIGuide : public UUIBase {
    GENERATED_BODY()
public:
    UUIGuide();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
public:
    UFUNCTION(BlueprintCallable)
    void setGuide(int32 Index, EGuideKey Key, FName String);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(USpacer* guideSpacer);
    
public:
    UFUNCTION(BlueprintCallable)
    void clearGuide();
    
    UFUNCTION(BlueprintCallable)
    void buildGuide();
    
};

