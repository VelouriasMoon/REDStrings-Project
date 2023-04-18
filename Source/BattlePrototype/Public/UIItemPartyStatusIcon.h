#pragma once
#include "CoreMinimal.h"
#include "EEquipOrLoveIcon.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UIItemPartyStatusIcon.generated.h"

class UHorizonFlipbookWidget;
class UImage;
class UOverlay;
class UPaperFlipbook;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemPartyStatusIcon : public UUIBase {
    GENERATED_BODY()
public:
    UUIItemPartyStatusIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceIcon(EPlayerID characterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEquipOrLoveIcon(EEquipOrLoveIcon Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animUnselect, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animDarkMax, UImage* imageEquip, UImage* imageDone, UHorizonFlipbookWidget* flipArrowUP, UHorizonFlipbookWidget* flipArrowDOWN, UPaperFlipbook* upDefaultPF, UPaperFlipbook* downDefaultPF, UOverlay* overlayBondSet, UTextBlock* textBondNum, UImage* imageEWeaponSkin);
    
};

