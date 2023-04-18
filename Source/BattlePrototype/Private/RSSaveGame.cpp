#include "RSSaveGame.h"

class URSGameInstance;
class USaveLoadScreenParamManager;

bool URSSaveGame::TrialBonusRewardSaveDataCheck() {
    return false;
}

bool URSSaveGame::Trial2AchievementSaveDataCheck() {
    return false;
}

bool URSSaveGame::SystemSave() {
    return false;
}

bool URSSaveGame::SystemLoad() {
    return false;
}

bool URSSaveGame::SystemDataDelete(int32 slotNo, const bool isFileDelete) {
    return false;
}

bool URSSaveGame::SaveRetryData() {
    return false;
}

bool URSSaveGame::SaveNormalOnly(int32 dataNo) {
    return false;
}

bool URSSaveGame::Save(int32 dataNo) {
    return false;
}

bool URSSaveGame::PreLoadNormalOnly() {
    return false;
}

bool URSSaveGame::PreLoad() {
    return false;
}

bool URSSaveGame::LoadTrial2() {
    return false;
}

bool URSSaveGame::LoadTrial() {
    return false;
}

bool URSSaveGame::LoadRetryData() {
    return false;
}

bool URSSaveGame::LoadNormalOnly(int32 slotNo) {
    return false;
}

bool URSSaveGame::Load(int32 slotNo) {
    return false;
}

bool URSSaveGame::IsExistSaveData(ERSSaveGameSaveType Type) {
    return false;
}

void URSSaveGame::Initialize(URSGameInstance* gameInst, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

bool URSSaveGame::GetSaveLoadScreenParam(FSaveLoadScreenParam& slotParam, int32 slotNo) {
    return false;
}

ERedSaveExistsResult URSSaveGame::GetSaveExistsResult() {
    return ERedSaveExistsResult::OK;
}

EConvertTrial2SaveDataAllResult URSSaveGame::GetConvertTrial2SaveDataAllResult() {
    return EConvertTrial2SaveDataAllResult::Invalid;
}

bool URSSaveGame::DeleteData(ERSSaveGameSaveType Type, const FString& Filename, const int32 UserIndex) {
    return false;
}

bool URSSaveGame::Delete(int32 slotNo, const bool isFileDelete) {
    return false;
}

bool URSSaveGame::DebugTimeSave() {
    return false;
}

bool URSSaveGame::DebugSave(int32 dataNo) {
    return false;
}

bool URSSaveGame::DebugLoad_DirectName(const FString& Filename) {
    return false;
}

bool URSSaveGame::DebugLoad(int32 dataNo) {
    return false;
}

void URSSaveGame::Clear() {
}

bool URSSaveGame::CheckAriseCollaboration() {
    return false;
}

bool URSSaveGame::AutoSave() {
    return false;
}

bool URSSaveGame::AutoPreLoad() {
    return false;
}

bool URSSaveGame::AutoLoad() {
    return false;
}

bool URSSaveGame::AutoDelete(int32 slotNo, const bool isFileDelete) {
    return false;
}

bool URSSaveGame::AsyncAutoSave() {
    return false;
}

URSSaveGame::URSSaveGame() {
    this->m_gameInst = NULL;
    this->m_saveType = ERSSaveGameSaveType::Invalid;
    this->m_MasterVersion = 0;
    this->m_SaveLoadScreenParamManager = NULL;
    this->m_SaveExistsResult = ERedSaveExistsResult::NONE;
    this->m_ConvertTrial2SaveDataAllResult = EConvertTrial2SaveDataAllResult::Invalid;
    this->m_pAsyncAutoSaveRSSaveGameInternal = NULL;
}

