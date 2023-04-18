#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITutoOperationParts.generated.h"

class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITutoOperationParts : public UUIBase {
    GENERATED_BODY()
public:
    UUITutoOperationParts();
private:
    UFUNCTION(BlueprintCallable)
    void InitializeSpacer(USpacer* Spacer);
    
};

