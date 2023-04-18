#include "BrainTalkManager.h"

class UDataTable;

void ABrainTalkManager::StopBrainTalkVoice() {
}


void ABrainTalkManager::StopBrainTalk() {
}




void ABrainTalkManager::StartBrainTalk() {
}

void ABrainTalkManager::SetVisionSimulatorResultBTLockFlag(const bool Flag) {
}

void ABrainTalkManager::SetStrongestWeaponId(EPlayerID Player, int32 ID) {
}

void ABrainTalkManager::SetReferenceIndex(const int32 Num) {
}

void ABrainTalkManager::SetOpenMenuWindowEquipWeaponIdList() {
}

void ABrainTalkManager::SetNewRowBrainTalk(const float WaitTime) {
}

void ABrainTalkManager::SetMassageWaitTime(const float sec) {
}

void ABrainTalkManager::SetIsStartTalkEventPauseBT(const bool Flag) {
}

void ABrainTalkManager::SetIsStartTalkEventKeepPlayingBT(const bool Flag) {
}

void ABrainTalkManager::SetIsNoStopBrainTalk(const bool Flag) {
}

void ABrainTalkManager::SetIsFinishBrainTalk(const bool Flag) {
}

void ABrainTalkManager::SetIsEnableBrainTalk_ReturnToTheAjito(const bool Flag) {
}

void ABrainTalkManager::SetIsEnableBrainTalk_QuestNpcNearbyCanBeOrdered_ManualAreaChange(const bool Flag) {
}

void ABrainTalkManager::SetIsEnableBrainTalk_QuestNpcNearbyCanBeOrdered(const bool Flag) {
}

void ABrainTalkManager::SetDebugDispBrainTalkLogFlag(const bool Flag) {
}

void ABrainTalkManager::SetDebugBTGiveItemsFromFriendsWithFieldLogFlag(const bool Flag) {
}

void ABrainTalkManager::SetDebugBTGiveItemsFromFriendsWithFieldForceEnable(const bool Flag) {
}

void ABrainTalkManager::SetDebugBTGiveItemsFromFriendsWithAjitoLogFlag(const bool Flag) {
}

void ABrainTalkManager::SetDebbugBrainTalkBTInvalidFlag(const bool Flag) {
}

void ABrainTalkManager::SetDebbugBrainTalkAllInvalidFlag(const bool Flag) {
}

void ABrainTalkManager::ResetVisionSimulatorMissionStart() {
}

void ABrainTalkManager::ResetBrainTalkBt_PlayReqList() {
}

void ABrainTalkManager::PreStartBrainTalk(FBrainTalk_CategoryDatatable categoryDatatable) {
}

void ABrainTalkManager::PlaySystemBrainTalk(EBrainTalkSystemType Type, const int32 Index, EPlayerID player1) {
}

void ABrainTalkManager::PauseBrainTalk(const bool IsPause) {
}

void ABrainTalkManager::OpenBrainTalkUI(const int32 characterId, const int32 ExpressionID, const FString& messageID, const float DrawSecond) {
}

void ABrainTalkManager::LoadBrainTalkDatatable(FBrainTalkMasterData BrainTalkData) {
}

bool ABrainTalkManager::IsVisionSimulatorResultBTLockFlag() {
    return false;
}

bool ABrainTalkManager::IsTimingEnableCheck() {
    return false;
}

bool ABrainTalkManager::IsSysInvalidProgressIDCheck(EBrainTalkBtGroup Group) {
    return false;
}

bool ABrainTalkManager::IsStartTalkEventPauseBT() {
    return false;
}

bool ABrainTalkManager::IsStartTalkEventKeepPlayingBT() {
    return false;
}

bool ABrainTalkManager::IsNoStopBrainTalk() {
    return false;
}

bool ABrainTalkManager::IsLowerPriority() {
    return false;
}

bool ABrainTalkManager::IsGameOverCheck() {
    return false;
}

bool ABrainTalkManager::IsFinishLoad() {
    return false;
}

bool ABrainTalkManager::IsFinishBrainTalk() {
    return false;
}

bool ABrainTalkManager::IsFindBrainTalkOnceCheck_LoadReset(const EBrainTalkCategory _Category, const FName _ID) {
    return false;
}

bool ABrainTalkManager::IsEnableCheck(const bool isPlaySuppressionCheck, const bool isPlayerHPCheck, const bool isCheckVisionSimulatorResultBTLockFlag) {
    return false;
}

bool ABrainTalkManager::IsEnableBrainTalk_ReturnToTheAjito() {
    return false;
}

bool ABrainTalkManager::IsEnableBrainTalk_QuestNpcNearbyCanBeOrdered() {
    return false;
}

bool ABrainTalkManager::IsDoEventCheck() {
    return false;
}

bool ABrainTalkManager::IsCanSASUse(EPlayerID playerId) {
    return false;
}


int32 ABrainTalkManager::GetReferenceIndex() {
    return 0;
}

EBrainTalkPriorityCheckResult ABrainTalkManager::GetPriorityCheck(EBrainTalkPriority playReqPriority) {
    return EBrainTalkPriorityCheckResult::Play;
}

EBrainTalkPriority ABrainTalkManager::GetPriority() {
    return EBrainTalkPriority::Sensitive;
}

float ABrainTalkManager::GetMassageWaitTime() {
    return 0.0f;
}

bool ABrainTalkManager::GetDebugDispBrainTalkLogFlag() {
    return false;
}

bool ABrainTalkManager::GetDebugBTGiveItemsFromFriendsWithFieldLogFlag() {
    return false;
}

bool ABrainTalkManager::GetDebugBTGiveItemsFromFriendsWithFieldForceEnable() {
    return false;
}

bool ABrainTalkManager::GetDebugBTGiveItemsFromFriendsWithAjitoLogFlag() {
    return false;
}

UDataTable* ABrainTalkManager::GetDataTable() {
    return NULL;
}

bool ABrainTalkManager::GetCategoryDataTableRow(EBrainTalkCategory Category, FName BrainTalkID, FBrainTalkMasterData& RowData) {
    return false;
}

UDataTable* ABrainTalkManager::GetCategoryDataTable(EBrainTalkCategory Category) {
    return NULL;
}

bool ABrainTalkManager::GetBrainTalkParam(FName BrainTalkID, EBrainTalkCategory Category, float& OccurRate, bool& IsOnce) {
    return false;
}

FMessageDataCell ABrainTalkManager::GetBrainTalkMessage(const FString& messageID) {
    return FMessageDataCell{};
}

TArray<FBrainTalkMasterData> ABrainTalkManager::GetBrainTalkMasterDataQueList() {
    return TArray<FBrainTalkMasterData>();
}

int32 ABrainTalkManager::GetBrainTalkMapGimmickWaitTime(EBrainTalkGimmickCondition Type, const FString& conditionLabel) {
    return 0;
}




void ABrainTalkManager::DoKillEnemy(const bool isBoss) {
}


void ABrainTalkManager::CloseBrainTalkUI() {
}

void ABrainTalkManager::ClearBrainTalkMasterDataQueList() {
}

bool ABrainTalkManager::CheckEquipChangeBrainTalk() {
    return false;
}

bool ABrainTalkManager::CheckBrainTalkBt_BattleSim_BattleStart() {
    return false;
}


bool ABrainTalkManager::BrainTalkTuto_tutorial_m_J() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_m_I() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_m_H() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_m_G() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_m_F() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_f_J() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_f_I() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_f_H() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_f_G() {
    return false;
}

bool ABrainTalkManager::BrainTalkTuto_tutorial_f_F() {
    return false;
}

bool ABrainTalkManager::BrainTalkMapGimmick(EBrainTalkGimmickCondition Type, const FString& conditionLabel) {
    return false;
}

void ABrainTalkManager::BrainTalkLoadWork() {
}

bool ABrainTalkManager::BrainTalkEm_WaterCharge_WaterAttack() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_OilCharge_OilAttack() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_np1100_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_FlameCharge_OilMember() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_FlameCharge_FlameAttack() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8300_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_09() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_08() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8220_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_08() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_07() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8200_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em8000_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1430_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1430_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1420_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1420_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1420_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1420_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1410_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1410_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1410_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1410_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1410_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1400_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1300_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1300_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1300_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1210_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1210_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1210_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1210_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1210_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1200_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1200_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1200_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1130_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1130_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1130_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1130_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1130_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1120_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1100_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1020_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em1010_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0920_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0830_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0820_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0800_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0700_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_06() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_05() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0630_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0620_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0510_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0510_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0510_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0500_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0330_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0330_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0330_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0320_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0320_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0310_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0310_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0310_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0310_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0300_04() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0300_03() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0300_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0300_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0210_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_em0120_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ElectricCharge_WaterMember() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ElectricCharge_ElectricAttack() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ConfusionCharge_ConfusionAttack() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ch0200_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ch0200_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ch0100_02() {
    return false;
}

bool ABrainTalkManager::BrainTalkEm_ch0100_01() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_WaterEnAtkElectric() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_WaitingVoice(const EPlayerID WaitCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_UnopenedTreasure() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_TouchBFWall() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_StealthLosePL() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SasNoUse(const EPlayerID TargetCharacter, E_SASKindNative SasEffect, const int32 lastSasProgressTime, const int32 lastSasBTProgressTime) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SasHoloPursuit(const EPlayerID HoloCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SasHoloPossible(const EPlayerID HoloCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SasContinuity(E_SASKindNative SasEffect, const int32 Num) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SasCombo(const int32 comboNum) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_SallyTimes(const EPlayerID TargetCharacter, const int32 SallyMinutes, const int32 BeforeBTMinutes) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_Revival(const EPlayerID RevivalFrom, const EPlayerID RevivalTo) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_ReturnToTheAjito() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_RecoveryItemZero() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_RecoveryHpToPL(const EPlayerID RecoveryFrom) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_RecoveryAbToPL(const EPlayerID RecoveryFrom) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_Recovery(const EPlayerID RecoveryTo) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_QuestNpcNearbyCanBeOrdered() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_PTChangeAttachment(const EPlayerID ChangeAttachmentCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_PsychicCombo(const int32 comboNum) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_PLDead() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_PLChangeAttachment() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_OsoroiAttachment(const EPlayerID playerId, const EPlayerID TalkCharaID, const FString& AttachmentItemID) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_OilEnAtkFire() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_NoSallyTimes(const EPlayerID TargetCharacter, const int32 NoSallyMinutes, const int32 BeforeBTMinutes) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_NearCC() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_LvUp_PL() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_LvUp(const EPlayerID LvUpCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KizunaLvUp(const EPlayerID KizunaLvUpCharacter, const bool isRetry) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillQuestTgtEn() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillEnStrategy() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillEnRest(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillEnemyBC() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillByEn() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnStrEn(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnShortTime(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnManyWeakEn(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnManyEn(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnForPT(const EPlayerID KillCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_KillAllEnForPL() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_JumpOff() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_Hp30p() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_HiKizunaEffect(const EPlayerID hologramPlayerID) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_GiveItemsFromFriendsWithField() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_GiveItemsFromFriendsWithAjito() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_GetQuestTgtItem() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_GetItem(const EItemRarity rarity) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_GatherPoint() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_FirstStrike() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EquipStrongestWeapon(const EPlayerID EquiCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EnemyDrop(const EItemRarity rarity) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EnemyDown(const EPlayerID DownCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EnBerserkSign() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EnBerserk() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_EnableSAS_DriveActivationFriend(const EPlayerID TalkCharaID) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DriveGaugeMax() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DriveActiveFriend(const EPlayerID TalkCharaID) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DriveActive() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DispCrashTrg() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DiscStrEn() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DiscStealth() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DiscSasValidEn(E_SASKindNative SasEffect) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DiscQuestEnemy() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DiscEn() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DestroyShell() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DeadInarow(const int32 DeadNum) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_DamageTakeOver(const EPlayerID TakeOverCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_ClearQuest() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BrainCrashByEn() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BirthKizunaEp(const EPlayerID EpCharacter) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BFActivate() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BattleSim_BattleStart_RevivalBoss(const FString& EnemyId) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BattleSim_BattleStart_ENPC(const FString& EnemyId) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BattleSim_BattleStart(const int32 Difficulty) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BattleEscape() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BadStateForEn(const EPlayerID BadStateMember, const HCSkillAttribute BadState) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_BadStateByEn(const EPlayerID BadStateMember, const HCSkillAttribute BadState) {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_AttackEnWeak() {
    return false;
}

bool ABrainTalkManager::BrainTalkBt_AttackEnShell() {
    return false;
}

void ABrainTalkManager::BPFL_PauseBrainTalkAtStartTalkEventBefore() {
}

void ABrainTalkManager::BPFL_PauseBrainTalkAtEndTalkEventAfter() {
}

void ABrainTalkManager::AddBrainTalkMasterDataQueList(FBrainTalkMasterData Data, FBrainTalk_CategoryDatatable categoryDatatable) {
}

ABrainTalkManager::ABrainTalkManager() {
    this->_gameInstance = NULL;
    this->m_pBrainTalkBattleManager = NULL;
    this->m_isUpdateEquipIdList = false;
    this->m_isEnableBrainTalk_ReturnToTheAjito = false;
    this->m_isEnableBrainTalk_QuestNpcNearbyCanBeOrdered = false;
    this->m_isEnableBrainTalk_QuestNpcNearbyCanBeOrdered_ManualAreaChange = false;
    this->m_BrainTalkBt_BattleSim_BattleStart_BattleStartFlag = false;
    this->m_VisionSimulatorResultBTLockFlag = false;
    this->m_dataTable = NULL;
    this->m_Priority = EBrainTalkPriority::Normal;
    this->m_ReferenceIndex = 0;
    this->m_massageWaitTime = 0.00f;
    this->m_isPauseBrainTalk = false;
    this->m_isFinishBrainTalk = true;
    this->m_isNoStopBrainTalk = false;
    this->m_isStartTalkEventPauseBT = false;
    this->m_isStartTalkEventKeepPlayingBT = false;
    this->m_DebbugBrainTalkAllInvalidFlag = false;
    this->m_DebbugBrainTalkBTInvalidFlag = false;
    this->m_DebugDispBrainTalkLogFlag = false;
    this->m_DebugBTGiveItemsFromFriendsWithAjitoLogFlag = false;
    this->m_DebugBTGiveItemsFromFriendsWithFieldForceEnable = false;
    this->m_DebugBTGiveItemsFromFriendsWithFieldLogFlag = false;
}

