#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnEventDelegate.h"
#include "DebuggingItemEvent.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemEvent : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvent OnEvent;
    
    ADebuggingItemEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeySelectFunc(const ADebuggingItemBase* InItem, bool IsRepeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallEvent();
    
};

