#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigSelectBase.generated.h"

class UPaperFlipbook;
class UREDHorizonFlipbookWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigSelectBase : public UUIBase {
    GENERATED_BODY()
public:
    UUIConfigSelectBase();
    UFUNCTION(BlueprintCallable)
    void InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF);
    
};

