#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "EPsychicWeightGaugeButton.h"
#include "EPsychicWeightGaugeSize.h"
#include "UIBase.h"
#include "UIPsychicWeightGauge.generated.h"

class AActor;
class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPsychicWeightGauge : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
public:
    UUIPsychicWeightGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void setSuccessFlag(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(EPsychicWeightGaugeButton Button, EPsychicWeightGaugeSize Size, int32 maxLevel);
    
    UFUNCTION(BlueprintCallable)
    void setGaugeVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void setGaugeReverse(bool FlagReverse);
    
    UFUNCTION(BlueprintCallable)
    void setGauge(int32 Level, float fPercent);
    
    UFUNCTION(BlueprintCallable)
    void setExObjectFlag(bool IsExObject);
    
    UFUNCTION(BlueprintCallable)
    void setEnabnle(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void setEnableCombo(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void OpenEx();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UImage* imageBar1, UImage* imageBar2, UImage* imageBar1Add, UImage* imageWeightButton, UImage* imageWeightIconFont, UImage* imageFrame1, UImage* imageFrame2, UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault3, UWidgetAnimation* animDefault4, UWidgetAnimation* animIn1, UWidgetAnimation* animIn2, UWidgetAnimation* animIn4, UWidgetAnimation* animOut1, UWidgetAnimation* animOut2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UWidgetAnimation* animDecision1, UWidgetAnimation* animDecision2);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetPsychicObjectWeightGaugePos(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getGaugeReverseFlag() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetFontColorButton2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetFontColorButton1() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseDirectEx();
    
};

