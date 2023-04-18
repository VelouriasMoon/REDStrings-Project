#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "HorizonButton.generated.h"

class UHorizonButton;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonButton : public UButton {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonButtonEvent, UHorizonButton*, Button);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonButtonEvent OnUnhoveredDelegate;
    
    UHorizonButton();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnhoveredButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedButton();
    
};

