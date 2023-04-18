#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedFloatDelegate.h"
#include "OnSliderSettingChangedFloatDelegate.h"
#include "DebuggingItemFloat.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemFloat : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedFloat OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderSettingChangedFloat OnSliderSettingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    ADebuggingItemFloat();
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderSettings(float InMin, float InMax, float InStep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
};

