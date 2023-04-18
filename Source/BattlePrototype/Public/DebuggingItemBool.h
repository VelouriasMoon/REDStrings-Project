#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedBoolDelegate.h"
#include "DebuggingItemBool.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemBool : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedBool OnChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    ADebuggingItemBool();
    UFUNCTION(BlueprintCallable)
    void SetValue(bool InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeySelectFunc(const ADebuggingItemBase* InItem, bool IsRepeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue() const;
    
};

