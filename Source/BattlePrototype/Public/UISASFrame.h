#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "E_SASKindNative.h"
#include "UIBase.h"
#include "UISASFrame.generated.h"

class UImage;
class UOverlay;
class UUINexusDriveSAS;
class UUISASFrame2;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASFrame : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_buttonIndex;
    
public:
    UUISASFrame();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setSasGaugeR(UImage* Image, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void setObject(UUISASFrame2* frameObject, UImage* noneObject, UUINexusDriveSAS* nexusDriveSas, UImage* imageNexusDriveBase, UImage* imageNexusDriveCorner, UImage* imageNexusDriveCenter);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void setIconScale(const FVector2D& Scale);
    
    UFUNCTION(BlueprintCallable)
    void setCombinationVision(bool isCv);
    
    UFUNCTION(BlueprintCallable)
    void setButtonIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void setActiveWidgetFlag(bool isAcitveWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool IsActiveSAS, bool isActiveCv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecide() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animGauge_Full, UWidgetAnimation* animDecision, UWidgetAnimation* animGauge_FullIn, UWidgetAnimation* animGauge_Useing, UWidgetAnimation* animGauge_Full_Out, UWidgetAnimation* animDefault2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UOverlay* overlaySasSet, UImage* imageIcon01, UImage* imageIcon01Add, UImage* imageObjectNone, UImage* imageBaseEffect, UImage* imageSasGaugeUse, UImage* imageSasGaugeUseAdd, UUISASFrame2* UISASFrame2);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckCombinationVisionCost(E_SASKindNative sas) const;
    
};

