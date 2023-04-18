#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIItemPartyStatus.generated.h"

class UUIItemPartyStatusIcon;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIItemPartyStatus : public UUIBase {
    GENERATED_BODY()
public:
    UUIItemPartyStatus();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void updatePartyStatus(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault);
    
    UFUNCTION(BlueprintCallable)
    void InitializeIcons(UUIItemPartyStatusIcon* uiIcon1, UUIItemPartyStatusIcon* uiIcon2, UUIItemPartyStatusIcon* uiIcon3, UUIItemPartyStatusIcon* uiIcon4, UUIItemPartyStatusIcon* uiIcon5, UUIItemPartyStatusIcon* uiIcon6, UUIItemPartyStatusIcon* uiIcon7, UUIItemPartyStatusIcon* uiIcon8, UUIItemPartyStatusIcon* uiIcon9, UUIItemPartyStatusIcon* uiIcon10);
    
};

