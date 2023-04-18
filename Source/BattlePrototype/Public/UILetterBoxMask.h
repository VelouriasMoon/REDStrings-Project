#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UILetterBoxMask.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUILetterBoxMask : public UUIBase {
    GENERATED_BODY()
public:
    UUILetterBoxMask();
    UFUNCTION(BlueprintCallable)
    void setResolution();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UImage* Image1, UImage* Image2);
    
};

