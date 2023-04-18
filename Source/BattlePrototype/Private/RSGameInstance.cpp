#include "RSGameInstance.h"

class AActionManager;
class AActor;
class AArrangeItemManager;
class ABattleManager;
class ABattleSimulatorManager;
class ABattlefieldManager;
class ABlendableVolumeManager;
class ABrainCrashManager;
class ABrainTalkManager;
class ADebuggingGameActivityManager;
class ADropItemManager;
class AEnemyManager;
class AGameMainManager;
class AIntroTutorialManager;
class ALC21MapGimmickManager;
class AMapGimmickManager;
class AMessageHudManager;
class AModelViewerBase;
class APlayerManager;
class APsychicObjectManager;
class ARSInGameFlow;
class ARSParallelObjectManager;
class ARSParticleSystemManager;
class ARSSoundManager;
class ASASManager;
class AStageManager;
class ATriggerEffectManager;
class ATwoShotParamManager;
class UAchievementManager;
class UActivityManager;
class UAddContentManager;
class UAnimeInterlockingManager;
class UCalcMemoryManager;
class UClearGetterManager;
class UDatabaseManager;
class UFlagManager;
class UObject;
class URSAccountManager;
class URSShareUtilityManager;
class URevisionData;
class USaveLoadParamClassManager;
class UUserParamManager;
class UXGameStreamingManager;

void URSGameInstance::StartGameFlow_Implementation() {
}

void URSGameInstance::SetPPDistortion(bool Enable) {
}

void URSGameInstance::SetPhotoModeStartCameraPositionAxis(const FVector cameraPos, const FVector cameraUp, const FVector cameraRight, const FRotator cameraRot) {
}

void URSGameInstance::SetParticlePhotoMode(const bool Flag) {
}

void URSGameInstance::SetIsUsesSteam(const bool Flag) {
}

void URSGameInstance::SetIsForceCrcCheckError(const bool Flag) {
}

void URSGameInstance::SetIntroTutorialManager(AIntroTutorialManager* pManager) {
}

void URSGameInstance::SetGamePausedRS(bool bPaused, FName ClaimantName, bool bPauseInputManager) {
}

void URSGameInstance::ResetRenderTarget_Implementation() {
}

void URSGameInstance::ResetIntroTutorialManager() {
}

void URSGameInstance::ReloadLevel() {
}

void URSGameInstance::PrintLogBlueprintCallstack() {
}

//void URSGameInstance::OnLoadLevelCompleteUnloadLevel(const UObject* WorldContext) {
//}

void URSGameInstance::LoadLevel(const FName LevelName) {
}

bool URSGameInstance::IsUsesSteam() const {
    return false;
}

bool URSGameInstance::IsReadyManagers() {
    return false;
}

bool URSGameInstance::IsForceCrcCheckError() {
    return false;
}

bool URSGameInstance::IsCreatedSystem() const {
    return false;
}

bool URSGameInstance::IsCreatedResidentSystem() const {
    return false;
}

bool URSGameInstance::IsCreatedResidentManagers() const {
    return false;
}

bool URSGameInstance::IsCreatedManagers() const {
    return false;
}

bool URSGameInstance::IsCreatedGameManagers() const {
    return false;
}

void URSGameInstance::InitializeManagers(EManagerProcTiming Timing) {
}

void URSGameInstance::InitializeAllManagersForPersistentLevel() {
}

bool URSGameInstance::InitializeAllManagers(EManagerProcTiming Timing) {
    return false;
}

UXGameStreamingManager* URSGameInstance::GetXGameStreamingManager() const {
    return NULL;
}

UUserParamManager* URSGameInstance::GetUserParamManager() const {
    return NULL;
}

ATwoShotParamManager* URSGameInstance::GetTwoShotParamManager() const {
    return NULL;
}

ATriggerEffectManager* URSGameInstance::GetTriggerEffectManager() const {
    return NULL;
}

ABlendableVolumeManager* URSGameInstance::GetStageSettingVolumeManager() const {
    return NULL;
}

AStageManager* URSGameInstance::GetStageManagerConst() const {
    return NULL;
}

AStageManager* URSGameInstance::GetStageManager() {
    return NULL;
}

ARSSoundManager* URSGameInstance::GetSoundManager() const {
    return NULL;
}

URSShareUtilityManager* URSGameInstance::GetShareUtilityManager() const {
    return NULL;
}

AActor* URSGameInstance::GetSceneManager() const {
    return NULL;
}

USaveLoadParamClassManager* URSGameInstance::GetSaveLoadParamClassManager() const {
    return NULL;
}

ASASManager* URSGameInstance::GetSASManager() const {
    return NULL;
}

ARSInGameFlow* URSGameInstance::GetRSInGameFlow() const {
    return NULL;
}

URSAccountManager* URSGameInstance::GetRSAccountManager() const {
    return NULL;
}

URevisionData* URSGameInstance::GetRevisionData() const {
    return NULL;
}

AActor* URSGameInstance::GetResourceManager() const {
    return NULL;
}

AActor* URSGameInstance::GetRenderTargetManager() const {
    return NULL;
}

AActor* URSGameInstance::GetRadialBlurManager() const {
    return NULL;
}

APsychicObjectManager* URSGameInstance::GetPsychicObjectManager() const {
    return NULL;
}

AActor* URSGameInstance::GetPostProcessManager() const {
    return NULL;
}

APlayerManager* URSGameInstance::GetPlayerManager() const {
    return NULL;
}

ARSParticleSystemManager* URSGameInstance::GetParticleManager() const {
    return NULL;
}

ARSParallelObjectManager* URSGameInstance::GetParallelObjectManager() const {
    return NULL;
}

AActor* URSGameInstance::GetOutgameDebuggingManager() const {
    return NULL;
}

AActor* URSGameInstance::GetMovieManager() const {
    return NULL;
}

AModelViewerBase* URSGameInstance::GetModelViewerBase() const {
    return NULL;
}

AMessageHudManager* URSGameInstance::GetMessageHudManager() const {
    return NULL;
}

AMapGimmickManager* URSGameInstance::GetMapGimmickManager() const {
    return NULL;
}

AActor* URSGameInstance::GetLevelManager() const {
    return NULL;
}

ALC21MapGimmickManager* URSGameInstance::GetLC21MapGimmickManager() const {
    return NULL;
}

AIntroTutorialManager* URSGameInstance::GetIntroTutorialManager() {
    return NULL;
}

AActor* URSGameInstance::GetInputManager() const {
    return NULL;
}

AActor* URSGameInstance::GetHitManager() const {
    return NULL;
}

AActor* URSGameInstance::GetGameSystemManager() const {
    return NULL;
}

AGameMainManager* URSGameInstance::GetGameMainManager() const {
    return NULL;
}

UFlagManager* URSGameInstance::GetFlagManager() const {
    return NULL;
}

AActor* URSGameInstance::GetFinishMoveActorManager() const {
    return NULL;
}

AActor* URSGameInstance::GetEventManager() const {
    return NULL;
}

AEnemyManager* URSGameInstance::GetEnemyManager() const {
    return NULL;
}

ADropItemManager* URSGameInstance::GetDropItemManager() const {
    return NULL;
}

AActor* URSGameInstance::GetDebuggingManager() const {
    return NULL;
}

ADebuggingGameActivityManager* URSGameInstance::GetDebuggingGameActivityManager() {
    return NULL;
}

UDatabaseManager* URSGameInstance::GetDatabaseManagerConst() const {
    return NULL;
}

UDatabaseManager* URSGameInstance::GetDatabaseManager() {
    return NULL;
}

AActor* URSGameInstance::GetCosmosWebManager() const {
    return NULL;
}

UClearGetterManager* URSGameInstance::GetClearGetterManager() const {
    return NULL;
}

UCalcMemoryManager* URSGameInstance::GetCalcMemoryManager() const {
    return NULL;
}

ABrainTalkManager* URSGameInstance::GetBrainTalkManager() const {
    return NULL;
}

AActor* URSGameInstance::GetBrainFieldManager() const {
    return NULL;
}

ABrainCrashManager* URSGameInstance::GetBrainCrashManager() const {
    return NULL;
}

ABattleSimulatorManager* URSGameInstance::GetBattleSimulatorManager() const {
    return NULL;
}

ABattleManager* URSGameInstance::GetBattleManager() const {
    return NULL;
}

ABattlefieldManager* URSGameInstance::GetBattlefieldManager() const {
    return NULL;
}

AArrangeItemManager* URSGameInstance::GetArrangeItemManager() const {
    return NULL;
}

UAnimeInterlockingManager* URSGameInstance::GetAnimeInterlockingManagerConst() const {
    return NULL;
}

UAnimeInterlockingManager* URSGameInstance::GetAnimeInterlockingManager() {
    return NULL;
}

UAddContentManager* URSGameInstance::GetAddContentManagerConst() const {
    return NULL;
}

UAddContentManager* URSGameInstance::GetAddContentManager() {
    return NULL;
}

UActivityManager* URSGameInstance::GetActivityManager() const {
    return NULL;
}

AActionManager* URSGameInstance::GetActionManager() {
    return NULL;
}

UAchievementManager* URSGameInstance::GetAchievementManager() const {
    return NULL;
}

void URSGameInstance::FinalizeManagers(EManagerProcTiming Timing) {
}

void URSGameInstance::FinalizeAllManagers(EManagerProcTiming Timing) {
}

void URSGameInstance::EndInitializeCallback(EManagerTypeID ID, EManagerProcTiming Timing) {
}

void URSGameInstance::DestroySystem_Implementation() {
}

void URSGameInstance::DestroyResidentSystem() {
}

void URSGameInstance::DestroyResidentManagers_Implementation() {
}

void URSGameInstance::DestroyOutGameManagers_Implementation() {
}

void URSGameInstance::DestroyModelViewerManagers() {
}

void URSGameInstance::DestroyGameManagers_Implementation() {
}

void URSGameInstance::DestroyAllManagers_Implementation() {
}

void URSGameInstance::CreateSystemGameManager_Implementation() {
}

void URSGameInstance::CreateSystem_Implementation() {
}

void URSGameInstance::CreateResidentSystem() {
}

void URSGameInstance::CreateResidentManagers_Implementation() {
}

void URSGameInstance::CreateOutGameManagers_Implementation() {
}

void URSGameInstance::CreateModelViewerManagers() {
}

void URSGameInstance::CreateGameManagers_Implementation() {
}

void URSGameInstance::CreateEnemyManager() {
}

void URSGameInstance::CreateAllManagers_Implementation() {
}

URSGameInstance::URSGameInstance() {
    this->_mainPlayerClass = NULL;
    this->_leftPlayerClass = NULL;
    this->_rightPlayerClass = NULL;
    this->_hitManagerClass = NULL;
    this->_brainCrashManagerClass = NULL;
    this->_sasManagerClass = NULL;
    this->_psychicObjectManagerClass = NULL;
    this->_accountManagerClass = NULL;
    this->_soundManagerClass = NULL;
    this->_particleManagerClass = NULL;
    this->_StageSettingVolumeManagerClass = NULL;
    this->_enemyManagerClass = NULL;
    this->_postProcessManagerClass = NULL;
    this->_renderTargetManagerClass = NULL;
    this->_brainFieldManagerClass = NULL;
    this->_radialBlurManagerClass = NULL;
    this->_eventManagerClass = NULL;
    this->_playerManagerClass = NULL;
    this->_sceneManagerClass = NULL;
    this->_levelManagerClass = NULL;
    this->_resourceManagerClass = NULL;
    this->_battleManagerClass = NULL;
    this->_battlefieldManagerClass = NULL;
    this->_stageManagerClass = NULL;
    this->_movieManagerClass = NULL;
    this->_inputManagerClass = NULL;
    this->_brainTalkManagerClass = NULL;
    this->_GameMainManagerClass = NULL;
    this->_gameSystemManagerClass = NULL;
    this->_inGameFlowClass = NULL;
    this->_mapGimmickManagerClass = NULL;
    this->_lc21MapGimmickManagerClass = NULL;
    this->_cosmosWebManagerClass = NULL;
    this->_triggerEffectManagerClass = NULL;
    this->_battleSimulatorManagerClass = NULL;
    this->_shareUtilityManagerClass = NULL;
    this->_debuggingGameActivityManagerClass = NULL;
    this->_Managers.AddDefaulted(51);
    this->_finishMoveActorManager = NULL;
    this->m_isUsesSteam = false;
    this->_debuggingManagerClass = NULL;
    this->_OutgameDebuggingManagerClass = NULL;
    this->_ModelViewerClass = NULL;
    this->_phychicObjectBaseClass = NULL;
    this->_RevisionData = NULL;
    this->m_isForceCrcCheckError = false;
    this->IsCosmosGetBaseURL = false;
    this->IsCosmosTimeout = false;
    this->CosmosSysKpiParam.AddDefaulted(2);
    this->IsCosmosEnvInitialized = false;
    this->IsCosmosAgreeKpi = false;
    this->IsCosmosSendAgreeKpi = false;
    this->_inputDeviceType = ERSInputDeviceType::eNone;
    this->DebugTodayYear = -1;
    this->DebugTodayMonth = 1;
    this->DebugTodayDay = 1;
    this->BattleSimulatorRareEnemyAppearanceNum.AddDefaulted(2);
}

