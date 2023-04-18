#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIInfoWindow.generated.h"

class UImage;
class UOverlay;
class URSAtomComponentBase;
class USpacer;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIInfoWindow : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWarning;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URSAtomComponentBase* PlayingSE;
    
public:
    UUIInfoWindow();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void setVisibleGuide(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setStyleWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setStyleNormal();
    
    UFUNCTION(BlueprintCallable)
    void setMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* TextMain, USpacer* Spacer, UOverlay* guideOverlay, UImage* imageGuideLine, UImage* imageFade);
    
};

