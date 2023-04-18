#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIMiniTips.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMiniTips : public UUIBase {
    GENERATED_BODY()
public:
    UUIMiniTips();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void updateSpacerMiniTips();
    
};

