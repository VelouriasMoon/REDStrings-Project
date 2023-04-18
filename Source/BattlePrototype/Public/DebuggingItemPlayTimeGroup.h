#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemPlayTimeGroup.generated.h"

class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemLabel;
class UUserParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemPlayTimeGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> timeInt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> timeHour;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> timeMinute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> timeSecond;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemLabel> Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserParamManager* paramMan;
    
public:
    ADebuggingItemPlayTimeGroup();
    UFUNCTION(BlueprintCallable)
    void UpdateDebugParam();
    
    UFUNCTION(BlueprintCallable)
    void OnExecChangePlayTime(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePlayTimePartial(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePlayTime(const ADebuggingItemInt* Item);
    
};

