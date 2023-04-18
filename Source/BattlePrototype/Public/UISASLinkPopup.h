#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UISASLinkPopup.generated.h"

class UREDScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASLinkPopup : public UUIBase {
    GENERATED_BODY()
public:
    UUISASLinkPopup();
    UFUNCTION(BlueprintCallable)
    void updateSasLinkPopupMouseFocus();
    
    UFUNCTION(BlueprintCallable)
    void InitializeScrollBox(UREDScrollBox* ScrollBox);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getMaxCell() const;
    
};

