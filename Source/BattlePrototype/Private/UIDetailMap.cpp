#include "UIDetailMap.h"
#include "Templates/SubclassOf.h"

class ABP_UI_SceneMap;
class UREDOverlay;
class UWidgetAnimation;

void UUIDetailMap::UpdateStateDetailMap(int32 State, int32 SubState, float DeltaSeconds) {
}



void UUIDetailMap::InitializeMouseRectWidget(UREDOverlay* pc_pg1_1, UREDOverlay* pc_pg1_2, UREDOverlay* pc_pg2_2, UREDOverlay* pc_pg2_1) {
}

void UUIDetailMap::InitializeDetailMap() {
}


void UUIDetailMap::InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_, UWidgetAnimation* iconinfoin, UWidgetAnimation* iconinfoout, UWidgetAnimation* default_iconinfo_none) {
}

TSubclassOf<ABP_UI_SceneMap> UUIDetailMap::getDetaileMapRefalence(const FString& Path) {
    return NULL;
}



UUIDetailMap::UUIDetailMap() {
    this->m_ParentSceneMap = NULL;
    this->m_pHudBase = NULL;
}

