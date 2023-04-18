#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemAppVersionGroup.generated.h"

class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemLabel;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemAppVersionGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemLabel> DispLabel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> VersionInt;
    
public:
    ADebuggingItemAppVersionGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnExecChangeReleaseVersion(const ADebuggingItemEvent* Item);
    
};

