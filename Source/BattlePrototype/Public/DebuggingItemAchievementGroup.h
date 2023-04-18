#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemAchievementGroup.generated.h"

class ADebuggingItemEvent;
class ADebuggingItemLabel;
class ADebuggingItemStringArray;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemAchievementGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemStringArray> StringList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemLabel> Label;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> Unlock;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> Lock;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> EnumValueList;
    
public:
    ADebuggingItemAchievementGroup();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void OnExexUnlock(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExexLock(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSelected(const ADebuggingItemStringArray* Item);
    
};

