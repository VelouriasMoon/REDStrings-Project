#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnInFocusDelegate.h"
#include "OnKeyLeftDelegate.h"
#include "OnKeyRightDelegate.h"
#include "OnKeySelectDelegate.h"
#include "OnLostFocusDelegate.h"
#include "DebuggingItemBase.generated.h"

class ADebuggingItemBase;
class UWidget;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HashName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText dispName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInFocus OnInFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLostFocus OnLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyLeft OnKeyLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyRight OnKeyRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeySelect OnKeySelect;
    
    ADebuggingItemBase();
    UFUNCTION(BlueprintCallable)
    ADebuggingItemBase* SearchItem(const FText& InHashName, bool InRecursive, bool InIgnoreCase);
    
    UFUNCTION(BlueprintCallable)
    void Dump(int32 InIndent);
    
    UFUNCTION(BlueprintCallable)
    void DestroyItem(bool DestroyChild);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* CreateWidgetBP();
    
};

