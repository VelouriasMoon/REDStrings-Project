#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIBrainCrashGauge.generated.h"

class ARSCharacterBase;
class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBrainCrashGauge : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* m_pTarget;
    
public:
    UUIBrainCrashGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTarget(ARSCharacterBase* Target, bool isBossGauge);
    
    UFUNCTION(BlueprintCallable)
    void SetBg(UImage* pImage);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isBossMiniGauge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animFull, UWidgetAnimation* animDecision, UWidgetAnimation* animDecision2, UImage* imageGaugeAdd, UImage* imageGaugeNormal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGaugeTimerRate(float& Rate);
    
};

