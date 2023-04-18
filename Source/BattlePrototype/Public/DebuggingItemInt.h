#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedIntDelegate.h"
#include "OnSliderSettingChangedIntDelegate.h"
#include "DebuggingItemInt.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemInt : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedInt OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderSettingChangedInt OnSliderSettingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    ADebuggingItemInt();
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderSettings(int32 InMin, int32 InMax, int32 InStep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
};

