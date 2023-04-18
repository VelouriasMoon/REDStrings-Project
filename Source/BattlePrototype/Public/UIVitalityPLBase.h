#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "UIHealthControl.h"
#include "UIVitalityPLBase.generated.h"

class UCharacterVitalityDataAsset;
class UImage;
class UMaterialInstanceDynamic;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVitalityPLBase : public UUIHealthControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterVitalityDataAsset* WaveDesignerDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float gaugeWidth_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> gaugeMaterialInstDynamics_;
    
public:
    UUIVitalityPLBase();
    UFUNCTION(BlueprintCallable)
    void SetName(EPlayerID CharaID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThisParam(UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UTextBlock* textPlayerName, UTextBlock* _textMaxHP, UTextBlock* _textCurrentHP);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UImage* imageBarNormal, UImage* imageBarOverride, UImage* imageBarAdd, UTextBlock* textPlayerName, UTextBlock* _textMaxHP, UTextBlock* _textCurrentHP);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateDynamicGaugeMaterial();
    
};

