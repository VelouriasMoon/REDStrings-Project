#pragma once
#include "CoreMinimal.h"
#include "ESasKeyType.h"
#include "UIBase.h"
#include "UISASMenuControl.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASMenuControl : public UUIBase {
    GENERATED_BODY()
public:
    UUISASMenuControl();
    UFUNCTION(BlueprintCallable)
    void SetBg(UImage* pImage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void getSasKey(TEnumAsByte<ESasKeyType> Type, FName& KeyName, FName& KeyName2);
    
public:
    UFUNCTION(BlueprintCallable)
    void BgUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void BgSetVisible(bool IsVisible, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BgIsUpdate() const;
    
};

