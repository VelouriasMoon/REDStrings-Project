#pragma once
#include "CoreMinimal.h"
#include "EMouseIconType.h"
#include "UIBase.h"
#include "UIPkActionIcon.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPkActionIcon : public UUIBase {
    GENERATED_BODY()
public:
    UUIPkActionIcon();
protected:
    UFUNCTION(BlueprintCallable)
    EMouseIconType GetMouseIndex(int32 KeyIndex, bool IsEnableMouseMove);
    
};

