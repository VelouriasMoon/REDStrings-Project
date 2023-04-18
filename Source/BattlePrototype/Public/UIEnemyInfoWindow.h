#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIEnemyInfoWindow.generated.h"

class UImage;
class UOverlay;
class UREDOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UUIEnemyDropItem;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEnemyInfoWindow : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIEnemyDropItem> m_pDropItemClass;
    
public:
    UUIEnemyInfoWindow();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault1_2, UWidgetAnimation* animDefault2_1, UVerticalBox* verticalBoxDropItem, UUIEnemyDropItem* childDropItem, UVerticalBox* verticalBoxHabitat, UTextBlock* textHabitat, UOverlay* overlayDetails, UTextBlock* textDetailsTitle, UImage* enemyImage, UTextBlock* textEnemyName, UTextBlock* textDropItemTitle, UTextBlock* textHabitatTitle, UREDScrollBoxSimple* scrollBox1, UREDScrollBoxSimple* scrollBox2, UREDOverlay* mousehitthubnail);
    
};

