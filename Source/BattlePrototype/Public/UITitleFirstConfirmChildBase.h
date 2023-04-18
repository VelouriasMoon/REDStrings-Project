#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITitleFirstConfirmChildBase.generated.h"

class ARSTitleManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleFirstConfirmChildBase : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTitleManager* TitleManager;
    
public:
    UUITitleFirstConfirmChildBase();
};

