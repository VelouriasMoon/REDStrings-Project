#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Math/Vector2D.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemClearGetterGroup.generated.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class UClearGetterManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemClearGetterGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemBool> DebugDispBool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecParamChange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UClearGetterManager> Manager;
    
public:
    ADebuggingItemClearGetterGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteParameterChange(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugParam(float X, float Y, FLinearColor Color, FVector2D Scale);
    
};

