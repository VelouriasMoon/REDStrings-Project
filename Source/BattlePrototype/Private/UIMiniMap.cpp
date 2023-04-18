#include "UIMiniMap.h"
#include "Templates/SubclassOf.h"

class ABP_UI_SceneMap;
class UImage;
class UOverlay;
class UUIMinimapDistance;
class UUserWidget;
class UWidgetAnimation;

void UUIMiniMap::UpdateStateMinimap(int32 State, int32 SubState, float DeltaSeconds) {
}


void UUIMiniMap::StartMinimapBrainField() {
}




void UUIMiniMap::SetDistanceSetting(EUIMinmapDistanceIcon icontype) {
}

void UUIMiniMap::SetDistanceReset() {
}


void UUIMiniMap::SetDirectionDestNative() {
}


void UUIMiniMap::SetBrainField(bool Flag) {
}


void UUIMiniMap::OpenMinimap() {
}

void UUIMiniMap::OnAfterChangeProgress() {
}



bool UUIMiniMap::IsBrainField() {
    return false;
}


void UUIMiniMap::InitializePlayerWidget(UUserWidget* widgetcamera, UUserWidget* widgetplayer) {
}

void UUIMiniMap::InitializeNorthWidget(UUserWidget* widgetnorthring, UUserWidget* widgetnorthicon, UUserWidget* widgetnorthstring) {
}

void UUIMiniMap::InitializeMinimapDistance(UUIMinimapDistance* Distance, int32 Num) {
}

void UUIMiniMap::InitializeMinimap(UOverlay* allset) {
}

void UUIMiniMap::InitializeImage(UImage* imagecamera, UImage* imageplayer) {
}

void UUIMiniMap::InitializeDirectionImage(UImage* imagemain, UImage* imagekizuna) {
}

void UUIMiniMap::InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_, UWidgetAnimation* out_noise, UWidgetAnimation* in_noise, UWidgetAnimation* default_noise) {
}

TSubclassOf<ABP_UI_SceneMap> UUIMiniMap::getMinimapRefalence(const FString& Path) {
    return NULL;
}

bool UUIMiniMap::GetDebugFlagNative() {
    return false;
}

void UUIMiniMap::GetActiveSubquest(FName& subquestName, FName& SubQuestID, bool& Flag) {
}

void UUIMiniMap::ForceLoadMap() {
}

void UUIMiniMap::EndMinimapBrainField() {
}


void UUIMiniMap::CloseMinimap() {
}

UUIMiniMap::UUIMiniMap() {
    this->ConfigMiniMapDisp = false;
    this->ConfigMiniMapScale = false;
    this->ConfigMiniMapRotate = false;
    this->m_limit = 0.00f;
    this->m_ParentSceneMap = NULL;
    this->m_MainQuestGoalWidgete = NULL;
    this->m_SubQuestGoalWidgete = NULL;
    this->m_BondsQuestGoalWidgete = NULL;
    this->m_DebugFlagNative = false;
    this->m_pHudBase = NULL;
    this->m_PlayerController = NULL;
    this->m_MinimapDistanceData.AddDefaulted(2);
}

