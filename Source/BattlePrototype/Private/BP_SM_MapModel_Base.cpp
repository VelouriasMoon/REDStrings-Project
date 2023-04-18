#include "BP_SM_MapModel_Base.h"

void ABP_SM_MapModel_Base::SetVisionSimulator(bool Flag) {
}

void ABP_SM_MapModel_Base::SetSubModelVisible(FName SubName, bool Flag) {
}

void ABP_SM_MapModel_Base::SetScale(bool Scale) {
}

void ABP_SM_MapModel_Base::SetPlayerRate(float NewPlayerrate) {
}

void ABP_SM_MapModel_Base::SetPersSwitch(bool pers) {
}

void ABP_SM_MapModel_Base::SetGradationValue(float Gradation) {
}

void ABP_SM_MapModel_Base::SetFloorPGAdjuster(TArray<FUIMapFloorAdjustData> Update) {
}

void ABP_SM_MapModel_Base::SetFloorIndextoGame(int32 floorindex) {
}


void ABP_SM_MapModel_Base::SetDetaileMap(bool detaileMap) {
}

void ABP_SM_MapModel_Base::SetBrainField(bool Flag) {
}


bool ABP_SM_MapModel_Base::isVisionSimulator() {
    return false;
}

bool ABP_SM_MapModel_Base::isPgIconHeightFlag() {
    return false;
}

bool ABP_SM_MapModel_Base::isMinimapOnlyIconGradationValue() {
    return false;
}

bool ABP_SM_MapModel_Base::isCenterOffsetProc() {
    return false;
}

bool ABP_SM_MapModel_Base::IsBrainField() {
    return false;
}

bool ABP_SM_MapModel_Base::isAdjusterFlag() {
    return false;
}



TArray<float> ABP_SM_MapModel_Base::GetPgIconHeightFlag() {
    return TArray<float>();
}

float ABP_SM_MapModel_Base::GetMinimapOnlyIconGradationValue() {
    return 0.0f;
}

float ABP_SM_MapModel_Base::GetMinimapGradationValue() {
    return 0.0f;
}

float ABP_SM_MapModel_Base::GetMapIconScaleRate() {
    return 0.0f;
}

float ABP_SM_MapModel_Base::GetMapIconDetail_ZOffset() {
    return 0.0f;
}

TArray<FUIMapFloorAdjustData> ABP_SM_MapModel_Base::GetFloorPGAdjuster() {
    return TArray<FUIMapFloorAdjustData>();
}

int32 ABP_SM_MapModel_Base::GetFloorIndextoGameWidthNum() {
    return 0;
}

bool ABP_SM_MapModel_Base::GetFloorIndextoGameWidthFlag() {
    return false;
}

float ABP_SM_MapModel_Base::GetFloorIndextoGameWidthData(int32 floorindex) {
    return 0.0f;
}

int32 ABP_SM_MapModel_Base::GetFloorIndextoGameWidth() {
    return 0;
}




TArray<FUIDetaileMapSubAreaCenterPosition> ABP_SM_MapModel_Base::GetAreaCenterPosArray() {
    return TArray<FUIDetaileMapSubAreaCenterPosition>();
}

FVector ABP_SM_MapModel_Base::GetAreaCenterPos() {
    return FVector{};
}

void ABP_SM_MapModel_Base::CalcMaterialUpDateParam(float RateHeight, float Width) {
}

ABP_SM_MapModel_Base::ABP_SM_MapModel_Base() {
    this->isDetaileMap = false;
    this->isScale = false;
    this->playerrate = 0.00f;
    this->MinimapGradationValue = 800.00f;
    this->MapIconScaleRate = 1.00f;
    this->MapIconDetail_ZOffset = 600.00f;
    this->MinimapOnlyIconGradationValue = 800.00f;
    this->MinimapOnlyIconGradationValueFlag = false;
    this->m_MaterialDynamicMinimap = NULL;
    this->m_MaterialDynamicDetail = NULL;
    this->m_pgAdjusterFlag = false;
    this->m_pgIconHeightFlag = false;
    this->m_isCenterOffsetProc = false;
    this->m_FloorWidthDataCheck = false;
    this->m_FloorWidthIndex = 0;
}

