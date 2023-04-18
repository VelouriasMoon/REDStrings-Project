#include "UserParameterUtility.h"

class UObject;
class USaveLoadExSystemParamManager;

bool UUserParameterUtility::WorldmapSetLocationSelectable_WithPortal(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAreaAll) {
    return false;
}

bool UUserParameterUtility::WorldmapSetLocationSelectable(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isSelectable, bool isForce, bool isAreaAll) {
    return false;
}

bool UUserParameterUtility::WorldmapSetLocationNotSelectableAll(UObject* WorldContextObject, bool isNotSelectable) {
    return false;
}

bool UUserParameterUtility::WorldmapSetLocationNotSelectable(UObject* WorldContextObject, int32 LocationId, bool isNotSelectable) {
    return false;
}

bool UUserParameterUtility::WorldmapSetLocationNewOpen(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isNewOpen, bool isAreaAll) {
    return false;
}

bool UUserParameterUtility::WorldmapOpenLocation(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isSelectable) {
    return false;
}

bool UUserParameterUtility::WorldmapIsLocationSelectable(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo) {
    return false;
}

bool UUserParameterUtility::WorldmapIsLocationNotSelectableAll(UObject* WorldContextObject) {
    return false;
}

bool UUserParameterUtility::WorldmapIsLocationNotSelectable(UObject* WorldContextObject, int32 LocationId) {
    return false;
}

bool UUserParameterUtility::WorldmapIsLocationNewOpen(UObject* WorldContextObject, int32 LocationId, int32 areaId) {
    return false;
}

bool UUserParameterUtility::WorldmapGetOpenParam(UObject* WorldContextObject, TArray<FWorldmapOpenLCParam>& openedList) {
    return false;
}

bool UUserParameterUtility::WorldmapCloseLocation(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isAreaAll) {
    return false;
}

void UUserParameterUtility::WorldmapCheckOpenFromProgressID(UObject* WorldContextObject, int32 ProgressId) {
}

bool UUserParameterUtility::UpdateTeamBondsLevel(UObject* WorldContextObject, EPlayerID playerId, int32 ProgressNo, bool isSingleLvUp) {
    return false;
}

bool UUserParameterUtility::UpdatePresentItemInfo(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, FName ItemId) {
    return false;
}

void UUserParameterUtility::StartDLCBondsEpisode(UObject* WorldContextObject, FName bondsID) {
}

void UUserParameterUtility::StartBondsEpisode(UObject* WorldContextObject, EPlayerID playerId, EPlayerID TargetID, int32 bondsEpNumber) {
}

void UUserParameterUtility::SetZeroEpClear(UObject* WorldContextObject, bool zeroEpFlag) {
}

bool UUserParameterUtility::SetTransferObjectByName(UObject* WorldContextObject, FName ItemId, int32 ObjectID, bool isOverwrite) {
    return false;
}

bool UUserParameterUtility::SetTransferObject(UObject* WorldContextObject, int32 ItemId, int32 ObjectID, bool isOverwrite) {
    return false;
}

void UUserParameterUtility::SetTitleProductFlag(UObject* WorldContextObject, bool endingAfterFlag) {
}

void UUserParameterUtility::SetTeamBondsProgress(UObject* WorldContextObject, EPlayerID playerId, int32 Progress) {
}

void UUserParameterUtility::SetJewelTicketCount(UObject* WorldContextObject, int32 newCount) {
}

void UUserParameterUtility::SetGameDifficulty(UObject* WorldContextObject, HCGameDifficulty diffuculty) {
}

void UUserParameterUtility::SetGameClearState(UObject* WorldContextObject, EGameClearState State) {
}

void UUserParameterUtility::SetGameClear(UObject* WorldContextObject, bool clearFlag) {
}

void UUserParameterUtility::ResetDispTipsState(UObject* WorldContextObject, EHelpTutorial helpID) {
}

bool UUserParameterUtility::IsTipsDispEnable(UObject* WorldContextObject, EHelpTutorial helpID) {
    return false;
}

bool UUserParameterUtility::IsHelpTutoIDMini(UObject* WorldContextObject, EHelpTutorial helpID) {
    return false;
}

bool UUserParameterUtility::IsDispTipsOrMiniTips(UObject* WorldContextObject, EHelpTutorial helpID) {
    return false;
}

bool UUserParameterUtility::HaveJewelTicket(UObject* WorldContextObject) {
    return false;
}

bool UUserParameterUtility::GetTransferObjectByName(UObject* WorldContextObject, FName ItemId, int32& ObjectID, bool isRemove) {
    return false;
}

bool UUserParameterUtility::GetTransferObject(UObject* WorldContextObject, int32 ItemId, int32& ObjectID, bool isRemove) {
    return false;
}

int32 UUserParameterUtility::GetTeamBondsProgress(UObject* WorldContextObject, EPlayerID playerId) {
    return 0;
}

int32 UUserParameterUtility::GetTeamBondsMaxLevel(UObject* WorldContextObject) {
    return 0;
}

int32 UUserParameterUtility::GetTeamBondsLevel(UObject* WorldContextObject, EPlayerID playerId) {
    return 0;
}

void UUserParameterUtility::GetSelectedTogetherCharID(UObject* WorldContextObject, TArray<EPlayerID>& selectedArray) {
}

USaveLoadExSystemParamManager* UUserParameterUtility::GetSaveLoadExSystemParamManager(UObject* WorldContextObject) {
    return NULL;
}

bool UUserParameterUtility::GetSasControllChange(UObject* WorldContextObject) {
    return false;
}

FName UUserParameterUtility::GetPurposeMessage(UObject* WorldContextObject) {
    return NAME_None;
}

bool UUserParameterUtility::GetPresentItemInfoList(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList) {
    return false;
}

int32 UUserParameterUtility::GetNextTips(UObject* WorldContextObject) {
    return 0;
}

int32 UUserParameterUtility::GetMoney(UObject* WorldContextObject) {
    return 0;
}

int32 UUserParameterUtility::GetJewelTicketCount(UObject* WorldContextObject) {
    return 0;
}

int32 UUserParameterUtility::GetItemNum(UObject* WorldContextObject, const FName ItemId) {
    return 0;
}

bool UUserParameterUtility::GetIsProgressBondsEpisode(UObject* WorldContextObject, EPlayerID& playerId, EPlayerID& TargetID) {
    return false;
}

bool UUserParameterUtility::GetHasPresentedItemInfoList(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList, bool includeEvent) {
    return false;
}

HCGameDifficulty UUserParameterUtility::GetGameDifficulty(UObject* WorldContextObject) {
    return HCGameDifficulty::Easy;
}

EGameClearState UUserParameterUtility::GetGameClearState(UObject* WorldContextObject) {
    return EGameClearState::NotClearBoth;
}

int32 UUserParameterUtility::GetBeginningTips(UObject* WorldContextObject, EPlayerID Player, int32 ProgressNo, int32 nextLocation) {
    return 0;
}

void UUserParameterUtility::EndBondsEpisode(UObject* WorldContextObject, bool IsCancel) {
}

float UUserParameterUtility::DisplayTipsOrMiniTipsByHelpID(UObject* WorldContextObject, EHelpTutorial helpID, const bool notPauseControll, const bool notCloseOfPause, const bool isPlayableCheck, const bool IsFade) {
    return 0.0f;
}

void UUserParameterUtility::ClearRetryTips(UObject* WorldContextObject) {
}

bool UUserParameterUtility::CheckTeamBondsLevelUp(UObject* WorldContextObject, EPlayerID playerId, int32 ProgressNo) {
    return false;
}

bool UUserParameterUtility::CheckStartTeamBondsEpisode(UObject* WorldContextObject, EPlayerID playerId, int32& episodeNo) {
    return false;
}

bool UUserParameterUtility::CheckIsNeedRetryTips(UObject* WorldContextObject) {
    return false;
}

bool UUserParameterUtility::CheckAppliedAddContent(UObject* WorldContextObject, FName contentName) {
    return false;
}

void UUserParameterUtility::AllOpenBrainMessageIgnorConditionsAndLock(UObject* WorldContextObject, const int32 targetThread) {
}

bool UUserParameterUtility::AddMoney(UObject* WorldContextObject, const int32 Money) {
    return false;
}

void UUserParameterUtility::AddJewelTicketCount(UObject* WorldContextObject, int32 addCount) {
}

bool UUserParameterUtility::AddItemNum(UObject* WorldContextObject, const FName ItemId, const int32 itemNum, const bool isUpdateMapUsable, const bool isDispLog) {
    return false;
}

void UUserParameterUtility::AddBrainMessageIgnorConditions(UObject* WorldContextObject, const int32 threadNumber, const int32 messageNum) {
}

void UUserParameterUtility::AddBattleLogBuffer(UObject* WorldContextObject, const FBattleLogParam& Param) {
}

UUserParameterUtility::UUserParameterUtility() {
}

