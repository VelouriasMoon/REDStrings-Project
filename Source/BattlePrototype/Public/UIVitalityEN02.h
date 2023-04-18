#pragma once
#include "CoreMinimal.h"
#include "UIHealthControl.h"
#include "UIVitalityEN02.generated.h"

class UImage;
class UTextBlock;
class UUIBrainCrashGauge;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVitalityEN02 : public UUIHealthControl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIBrainCrashGauge* BrainCrashGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BrainCrashGaugeDrawFlag;
    
public:
    UUIVitalityEN02();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubQuestTarget(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault01, UWidgetAnimation* animDefault02, UWidgetAnimation* animDefault03, UWidgetAnimation* animDefault04, UWidgetAnimation* animDefault05, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UImage* imageBarNormal, UImage* imageBarOverride, UImage* imageBarAdd, UTextBlock* textEnemyName);
    
};

