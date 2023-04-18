#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "UIBase.h"
#include "UIEnemyDropItem.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEnemyDropItem : public UUIBase {
    GENERATED_BODY()
public:
    UUIEnemyDropItem();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoBP(int32 itemIconId, EItemRarity itemRariy);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UImage* imageIcon, UTextBlock* textName);
    
};

