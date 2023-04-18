#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIEnemyListIndex.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEnemyListIndex : public UUIBase {
    GENERATED_BODY()
public:
    UUIEnemyListIndex();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UImage* imageNewIcon, UTextBlock* textName);
    
};

