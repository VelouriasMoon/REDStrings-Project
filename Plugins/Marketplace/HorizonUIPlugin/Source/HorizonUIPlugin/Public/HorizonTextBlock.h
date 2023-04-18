#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Components/TextBlock.h"
#include "HorizonTextBlock.generated.h"

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UHorizonTextBlock();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETextJustify::Type> GetJustification() const;
    
};

