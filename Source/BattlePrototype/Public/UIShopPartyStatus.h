#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIShopPartyStatus.generated.h"

class UBorder;
class UUIShopPartyStatusIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopPartyStatus : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TradePositionY;
    
public:
    UUIShopPartyStatus();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UBorder* borderAllColor);
    
    UFUNCTION(BlueprintCallable)
    void InitializeIcons(UUIShopPartyStatusIcon* uiIcon1, UUIShopPartyStatusIcon* uiIcon2, UUIShopPartyStatusIcon* uiIcon3, UUIShopPartyStatusIcon* uiIcon4, UUIShopPartyStatusIcon* uiIcon5, UUIShopPartyStatusIcon* uiIcon6, UUIShopPartyStatusIcon* uiIcon7, UUIShopPartyStatusIcon* uiIcon8, UUIShopPartyStatusIcon* uiIcon9, UUIShopPartyStatusIcon* uiIcon10);
    
};

