#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Styling/SlateColor.h"
#include "UIBase.h"
#include "UIVisionSimulatorResult.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVisionSimulatorResult : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOpend;
    
public:
    UUIVisionSimulatorResult();
private:
    UFUNCTION(BlueprintCallable)
    bool Share();
    
    UFUNCTION(BlueprintCallable)
    void SetFontColor(UTextBlock* pTextBlock, const FSlateColor& Color, const FLinearColor& OutlineColor);
    
};

