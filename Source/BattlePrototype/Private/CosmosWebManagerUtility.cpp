#include "CosmosWebManagerUtility.h"

class APlayerController;
class UObject;

void UCosmosWebManagerUtility::CosmosStartMenu() {
}

void UCosmosWebManagerUtility::CosmosStartIngame() {
}

void UCosmosWebManagerUtility::CosmosStartEvent() {
}

void UCosmosWebManagerUtility::CosmosStartBossBattle(const FString& bossName) {
}

void UCosmosWebManagerUtility::CosmosStartBattle() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamStartGame(const UObject* WorldContextObject) {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamNextPhase() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamMapChange() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamGameover() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamAtFirst() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParamAfterSave() {
}

void UCosmosWebManagerUtility::CosmosSendKpiParam() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg9_PlayedPhases(FName Location) {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg9_IsDirtyPlayedPhases() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg8_PlayedPhases(int32 driveModeActivation_num, int32 driveModeActivation_time) {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg8_IsDirtyPlayedPhases() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg7_PlayedPhases(FName Location) {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg7_IsDirtyPlayedPhases() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg6_PlayedPhases() {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg6_IsDirtyPlayedPhases() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg5_KizunaLevel(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg4_PresentInfo(EPlayerID members_id, FName present_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg3_TeamKizunaEpisodeInfo(const FString& team_kizuna_episode_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg3_KizunaEpisodeInfo(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg21_GameVoice(ETextLanguage textLanguage) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg1_LapInfo(EPlayerID character_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg19_PlayedPhases(FName Location) {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg19_IsDirtyPlayedPhases() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg17_ShopVisits() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg17_ShopsUsed(int32 Status, FName Item) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg16_PlayedPhases(EPlayerSkill skill_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg14_Graphic(bool isVerticalSyncOff, EOptionAAQuality antiAliasingQuality, EGradualQuality textureQuality, EGradualQuality shadowQuality, EGradualQuality postQuality, TEnumAsByte<EWindowMode::Type> windowMode, EFPSType fpsType) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg14_Controller(ERSGamepadInputName weaponAttack, ERSGamepadInputName Jump, ERSGamepadInputName strafeAndDash, ERSGamepadInputName specialAttack, ERSGamepadInputName activateSASMenu, ERSGamepadInputName enableComboVisionMenu, ERSGamepadInputName PKAttack, ERSGamepadInputName specialObjectAndBrainCrush, ELockonActionType changeLockOnTarget, ERSGamepadInputName susConvinationVision) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg14_Config(HCGameDifficulty difficult_id, EAttackAutoLockOn attackAutoLockOn, ETargetCameraTrace targetCameraTrace, ECameraAfterMoveType cameraAfterMoveType, EOptionDisplayEnemyDamage dispEnemyDamage, EOptionMinimapDisplay minimapDisplay, EOptionMinimapRotation minimapRotation, EOptionMinimapScaling minimapScaling, EEventMessageAutoPlay messageAutoPlay, uint8 cameraSpeed, EOptionCameraPitch cameraPitch, EOptionCameraYaw cameraYaw, EOptionControllerVibration vibration, EAttackDirOrtho AttackDirOrtho, EAttackDirOrthoLockon AttackDirOrthoLockon, ECameraDistance CameraDistance, uint8 cameraTrackingSpeed, ESASCutin SASCutin, bool brainCrash, ELetterSize textSize, uint8 lockOnCameraSpeed) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg14_Brightness(float Brightness) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_Weapon() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_Plugin() {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg13_IsDirtyCostume() {
    return false;
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg13_IsDirtyAttachment() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_Costume() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_BackupCostume() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_BackupAttachment() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg13_Attachment() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg10_Retry() {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg10_ItemsUsed() {
}

bool UCosmosWebManagerUtility::CosmosSendKpiOrg10_IsDirtyItemsUsed() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg10_GameOver(int32 gameOverState) {
}

void UCosmosWebManagerUtility::CosmosSendKpiOrg10_Avoidance(int32 avoidancestate_0type_cnt, int32 avoidancestate_1type_cnt, int32 avoidancestate_2type_cnt, int32 avoidancestate_3type_cnt, int32 avoidancestate_4type_cnt) {
}

void UCosmosWebManagerUtility::CosmosSendKpi7_Quest(FName sub_quest_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi7_Progress() {
}

void UCosmosWebManagerUtility::CosmosSendKpi7_PlayedQuestLevel(FName sub_quest_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi7_PlayedPhaseLevel() {
}

void UCosmosWebManagerUtility::CosmosSendKpi7_Ending() {
}

void UCosmosWebManagerUtility::CosmosSendKpi5_TimePlayed() {
}

void UCosmosWebManagerUtility::CosmosSendKpi5_ResetTimePlayed() {
}

bool UCosmosWebManagerUtility::CosmosSendKpi5_IsDirtyTimePlayed() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpi338_PhotoMode() {
}

void UCosmosWebManagerUtility::CosmosSendKpi325_VisionSimulator(int32 MissionId, EBattleSimulatorRank TotalScore, EBattleSimulatorRank gaveDamageScore, EBattleSimulatorRank takenDamage, EBattleSimulatorRank brainCrashNumScore, EBattleSimulatorRank itemsusedNumScore, EBattleSimulatorRank cleartimeScore, int32 enemyKillNum) {
}

void UCosmosWebManagerUtility::CosmosSendKpi324_AjitoTogetherSafeHouseMembers(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi324_AjitoTogetherSafeHouseCharacter() {
}

void UCosmosWebManagerUtility::CosmosSendKpi324_AjitoTogether(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi296_ExSAS(EPlayerID members_id, int32 exSAS_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi295_TwoShotPhotoReceipt(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi295_MatchingAttachmentReceipt(FName attachment_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi295_FellowItemSarchingReceipt(const FString& item_id, EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi295_FellowItemReceipt(const FString& item_id, EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi295_BirthdayMessage(EPlayerID members_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi294_ChallengeClearTime(int32 challenge_id, int32 clear_time, int32 item_count, bool isNotItemCount) {
}

void UCosmosWebManagerUtility::CosmosSendKpi294_ChallengeClearNormal(int32 challenge_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi294_ChallengeClearItem(int32 challenge_id, int32 clear_time, int32 item_count) {
}

void UCosmosWebManagerUtility::CosmosSendKpi293_DLCUpdate() {
}

void UCosmosWebManagerUtility::CosmosSendKpi292_AnimationInterlocking(int32 episode_id) {
}

void UCosmosWebManagerUtility::CosmosSendKpi289_UpgradeVer2() {
}

void UCosmosWebManagerUtility::CosmosSendKpi289_Upgrade() {
}

void UCosmosWebManagerUtility::CosmosSendKpi22_GameLanguage() {
}

void UCosmosWebManagerUtility::CosmosSendKpi17_Sale(const UObject* WorldContextObject) {
}

void UCosmosWebManagerUtility::CosmosSendKpi16_PlayedPhasesSelectedMembers() {
}

bool UCosmosWebManagerUtility::CosmosSendKpi16_IsDirtyPlayedPhasesSelectedMembers() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpi14_PlayedPhases() {
}

bool UCosmosWebManagerUtility::CosmosSendKpi14_IsDirtyPlayedPhases() {
    return false;
}

bool UCosmosWebManagerUtility::CosmosSendKpi10_IsDirtyCurrencyCirculation() {
    return false;
}

void UCosmosWebManagerUtility::CosmosSendKpi10_CurrencyCirculation() {
}

void UCosmosWebManagerUtility::CosmosSendedAtOnce() {
}

void UCosmosWebManagerUtility::CosmosResetSendedAtOnce() {
}

void UCosmosWebManagerUtility::CosmosResetKpiParam() {
}

bool UCosmosWebManagerUtility::CosmosIsSendedAtOnce() {
    return false;
}

void UCosmosWebManagerUtility::CosmosGetPlatformUserID(APlayerController* PlayerController, FString& PlatformUserID, bool& Result) {
}

void UCosmosWebManagerUtility::CosmosEndMenu() {
}

void UCosmosWebManagerUtility::CosmosEndIngame() {
}

void UCosmosWebManagerUtility::CosmosEndEvent() {
}

void UCosmosWebManagerUtility::CosmosEndBossBattle() {
}

void UCosmosWebManagerUtility::CosmosEndBattle() {
}

void UCosmosWebManagerUtility::CosmosClearParam() {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg9_PlayedPhases(EPlayerID members_id, int32 supportType, int32 Num) {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg8_PlayedPhases(int32 enemySubjugation_cnt, int32 enemySubjugation_brainCrash_0type_cnt, int32 enemySubjugation_brainCrash_1type_cnt) {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg7_PlayedPhases(int32 brainCrash_type, int32 Num) {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg6_PlayedPhases(EPlayerID members_id, int32 Num) {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg19_PlayedPhases(int32 brainSpaceActivation_cnt) {
}

void UCosmosWebManagerUtility::CosmosAddKpiOrg10_ItemsUsed(EConsumeItemID item_id, int32 Num) {
}

UCosmosWebManagerUtility::UCosmosWebManagerUtility() {
}

