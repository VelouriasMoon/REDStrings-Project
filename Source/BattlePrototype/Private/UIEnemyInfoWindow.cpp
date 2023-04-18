#include "UIEnemyInfoWindow.h"

class UImage;
class UOverlay;
class UREDOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UUIEnemyDropItem;
class UVerticalBox;
class UWidgetAnimation;

void UUIEnemyInfoWindow::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIEnemyInfoWindow::InitializeThis(UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault1_2, UWidgetAnimation* animDefault2_1, UVerticalBox* verticalBoxDropItem, UUIEnemyDropItem* childDropItem, UVerticalBox* verticalBoxHabitat, UTextBlock* textHabitat, UOverlay* overlayDetails, UTextBlock* textDetailsTitle, UImage* enemyImage, UTextBlock* textEnemyName, UTextBlock* textDropItemTitle, UTextBlock* textHabitatTitle, UREDScrollBoxSimple* scrollBox1, UREDScrollBoxSimple* scrollBox2, UREDOverlay* mousehitthubnail) {
}

UUIEnemyInfoWindow::UUIEnemyInfoWindow() {
    this->m_pDropItemClass = NULL;
}

