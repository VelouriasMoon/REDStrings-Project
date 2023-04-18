#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "EEquipOrLoveIcon.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UIShopPartyStatusIcon.generated.h"

class UHorizonFlipbookWidget;
class UImage;
class UOverlay;
class UPaperFlipbook;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopPartyStatusIcon : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorEqual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorDown;
    
public:
    UUIShopPartyStatusIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParameterIcon(int32 Index, int32 Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceIcon(EPlayerID characterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEquipOrLoveIcon(EEquipOrLoveIcon Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animDark, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animDarkMax, UImage* imageEquip, UImage* imageDone, UOverlay* overlayParamL, UHorizonFlipbookWidget* arrowL_UP, UHorizonFlipbookWidget* arrowL_DOWN, UTextBlock* textNumL, UOverlay* overlayParamR, UHorizonFlipbookWidget* arrowR_UP, UHorizonFlipbookWidget* arrowR_DOWN, UTextBlock* textNumR, UOverlay* overlayBondSet, UTextBlock* textBondNum, UPaperFlipbook* pfArrowUP, UPaperFlipbook* pfArrowDown, UImage* imageEWeaponSkin);
    
};

