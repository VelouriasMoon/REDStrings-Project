#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedLabelDelegate.h"
#include "DebuggingItemLabel.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemLabel : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DispLabel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedLabel OnChanged;
    
    ADebuggingItemLabel();
    UFUNCTION(BlueprintCallable)
    void SetText(FText text);
    
};

