#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Styling/SlateBrush.h"
#include "HorizonDesignableUserWidget.h"
#include "HorizonButtonUserWidget.generated.h"

class UButton;
class UHorizonButtonUserWidget;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HORIZONUI_API UHorizonButtonUserWidget : public UHorizonDesignableUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHorizonButtonFocusEvent, UHorizonButtonUserWidget*, InButton, const FFocusEvent&, InFocusEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonButtonEvent, UHorizonButtonUserWidget*, InButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnButtonClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnButtonPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnButtonReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnButtonHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnButtonUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonFocusEvent OnButtonFocusDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonFocusEvent OnButtonFocusLostDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SlateBrush_ImageMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonFocused;
    
    UHorizonButtonUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnOnButtonFocusLost(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonFocus(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnButtonClicked();
    
};

