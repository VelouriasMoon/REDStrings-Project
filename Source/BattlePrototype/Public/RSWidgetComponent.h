#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "RSWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    URSWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void CallUpdateWidget();
    
};

