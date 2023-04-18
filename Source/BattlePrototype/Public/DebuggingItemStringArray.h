#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedStringArrayDelegate.h"
#include "OnComboBoxSettingChangedStringArrayDelegate.h"
#include "DebuggingItemStringArray.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemStringArray : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedStringArray OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComboBoxSettingChangedStringArray OnComboBoxSettingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> StringArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    ADebuggingItemStringArray();
    UFUNCTION(BlueprintCallable)
    void SetStringIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetComboBoxSetting(const TArray<FText>& InStringArray);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStringIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexByString(FText SearchString) const;
    
};

