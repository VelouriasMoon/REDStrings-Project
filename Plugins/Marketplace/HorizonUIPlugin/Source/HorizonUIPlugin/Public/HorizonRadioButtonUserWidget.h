#pragma once
#include "CoreMinimal.h"
#include "HorizonDesignableUserWidget.h"
#include "HorizonRadioButtonUserWidget.generated.h"

class UCheckBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HORIZONUI_API UHorizonRadioButtonUserWidget : public UHorizonDesignableUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHorizonRadioButtonEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonRadioButtonEvent OnCheckedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonRadioButtonEvent OnUnCheckedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* CheckBox_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Main;
    
    UHorizonRadioButtonUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetChecked();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnCheckStateChanged(bool bIsChecked);
    
};

