#include "MakeEventActor.h"
#include "Templates/SubclassOf.h"

class AMakeEventActor;
class APlayerController;
class ARSCharacterBase;
class UAnimMontage;
class UCurveFloat;
class ULevelSequence;
class UManaTexture;
class UObject;

void AMakeEventActor::WaitTutoTips(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSubQuestReward(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitShop(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSaveLoad(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSasWindow(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSASCutinExtra(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSASCutinCh0500_0700(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitSASCutinCh0400_0600(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitPresentSequencer(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitPostProcessSequencer(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitPhaseAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, bool IsOrWaitInput, bool OnSkipLatentNodeFlag) {
}

void AMakeEventActor::WaitNewStaticInGeneralAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitMipLoadReadyMesh(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, FName MeshName, float TimeLimitSeconds) {
}

void AMakeEventActor::WaitMipLoadReady(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float TimeLimitSeconds) {
}

void AMakeEventActor::WaitMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, bool FlagCheckClose) {
}

void AMakeEventActor::WaitMainEvent(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, const FWaitMainEventDispatcher onEventDispatcher) {
}

void AMakeEventActor::WaitLogMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitLoadMakeEventAsset(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitLoadingInterlude(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, const FWaitMainEventDispatcher onEventDispatcher, int32 ID) {
}

void AMakeEventActor::WaitLoadChangeScene(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitLoadAssetAll(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitInput(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitGeneralChoice(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitFade(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEventTips(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEventBrainFieldTuto(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndVisionSimulatorSelect(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndSubMenu(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndKeyword(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndCreditEvent(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndCode(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitEndBrainTalk(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitDynamicCutscene(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitDelayOrInput(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float Duration, bool OnSkipLatentNodeFlag) {
}

void AMakeEventActor::WaitCloseSystemMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitCharacterEventMoveEnd(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitBrainFieldDangerLV(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, EPlayerBrainFieldDanger DangerLvType) {
}

void AMakeEventActor::WaitBrainFieldButton(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitBrainField(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitBoardBGAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::WaitBoardAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, int32 CaptureActorIndex) {
}

void AMakeEventActor::UpdateTownPeopleSubQuestState() {
}

void AMakeEventActor::UpdateBondsLevelAllMembers(EPlayerID playerId, TArray<EPlayerID>& levelupMembers, bool isSingleLvUp) {
}

bool AMakeEventActor::UpdateBondsLevel(EPlayerID playerId, EPlayerID TargetID, bool isSingleLvUp) {
    return false;
}

void AMakeEventActor::UnLockInputSubMenu() {
}

void AMakeEventActor::UnloadMessage() {
}

void AMakeEventActor::StoreSequencerInGameTransform(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, ULevelSequence* Sequnece, float SequencePosition) {
}

void AMakeEventActor::StaticEventStart() {
}

void AMakeEventActor::StaticEventEnd(bool isRestoreTransform) {
}

void AMakeEventActor::startVisionSimulatorSelect() {
}

void AMakeEventActor::StartupCutscene(bool IsPartyPlayerBattleReady, bool IsENPCBattleReady, bool PreLoad) {
}

void AMakeEventActor::StartUITutoTipsByID(EHelpTutorial helpTutoID, bool notPauseControll, bool notCloseOfPause) {
}

void AMakeEventActor::StartUITutoTips(FName helpTutoID) {
}

void AMakeEventActor::StartUITutoOperation(FName helpTutoID) {
}

void AMakeEventActor::StartUIRewardSubQuest(FName SubQuestID) {
}

void AMakeEventActor::StartUIEffectSubQuest(FName SubQuestID) {
}

void AMakeEventActor::StartUIEffectBondsQuest(FName bondsQuestId) {
}

void AMakeEventActor::StartTalkEvent(bool IsAutoInput) {
}

void AMakeEventActor::StartSubQuestById(FName SubQuestID, bool NoCheck, bool UiEffectFlag) {
}

void AMakeEventActor::StartSubQuest(bool NoCheck, bool UiEffectFlag) {
}

void AMakeEventActor::StartKeyword() {
}


void AMakeEventActor::StartFadeOut(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption) {
}

void AMakeEventActor::StartFadeIn(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption) {
}

void AMakeEventActor::StartFade(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption) {
}

bool AMakeEventActor::StartEventBattlefield(int32 GroupID, int32 SubGroupID) {
    return false;
}

void AMakeEventActor::StartEvent_Implementation() {
}

void AMakeEventActor::StartDynamicCutscene(ULevelSequence* Sequence, bool IsSeamlessInGame, FName OwnerShipExternalActorTag) {
}

void AMakeEventActor::StartCode() {
}

void AMakeEventActor::StartBondsQuestById(FName bondsQuestId, bool NoCheck, bool UiEffectFlag) {
}

bool AMakeEventActor::StartBattlefield(EBattlefieldEventType Type, int32 GroupID, int32 SubGroupID, TArray<FBattlefieldTutorialInfo> AdditionalTutorialInfo, TSubclassOf<AMakeEventActor> MakeEventActorClass, int32 TutorialGroupID, int32 TutorialSubGroupID, float FenceBattleRate, const FString& SeedString, bool IsOnceBattle) {
    return false;
}

void AMakeEventActor::StartAutoBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, UAnimMontage* AddAnimMontage, EStaticPlType StaticPlType, TSoftObjectPtr<UCurveFloat> PlayRateCurveData) {
}

void AMakeEventActor::SpawnEnemiesBySubGroup(int32 GroupID, int32 SubGroupID) {
}

void AMakeEventActor::SpawnEnemiesByGroup(int32 GroupID) {
}

void AMakeEventActor::SkipMessage(bool NoPlaySE) {
}

void AMakeEventActor::SkipEvent() {
}

void AMakeEventActor::Shop(EEventShopType ShopType, int32 ShopParam, int32 TradeShopParam) {
}

void AMakeEventActor::SetTransformCaptureBGCamera(FTransform Transform) {
}

void AMakeEventActor::SetTransformCaptureBG(FTransform Transform) {
}

void AMakeEventActor::SettingCapture(int32 CaptureActorIndex, int32 BoardMeshIndex, FName CapturePresetName, FName CharaBodyAnimationSectionName, FName CharaFaceAnimationSectionName, int32 NpcMeshTableID, int32 NpcMaterialTableID, FName LightPresetName, ULevelSequence* CaptureSequnece, float CaptureSequnecePositon, FName TextureRowName, EStaticPlType StaticPlType, FName MovieTextureRowName, bool IsUseSaveTexture, bool IsSeamlessInGameCapture, bool IsHiddenPlFrameEffect, FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, const FString& CharaPartsMontagePath) {
}

void AMakeEventActor::SetSubQuestState(FName SubQuestID, QuestProgressState SetState) {
}

void AMakeEventActor::SetStopBoadMotionFlag(bool IsStop) {
}

void AMakeEventActor::SetPlayerController(APlayerController* PlayerController) {
}

void AMakeEventActor::SetPlayBattleUI(bool IsVisible) {
}

void AMakeEventActor::SetIsWaitFlag(bool IsWait) {
}

void AMakeEventActor::SetIsEndMotion(bool IsEndMotion) {
}

void AMakeEventActor::SetEventPause(bool IsPause) {
}

void AMakeEventActor::SetEventMovieTextureAndPrepare(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, UManaTexture* movieTexture) {
}

void AMakeEventActor::SetDirectionalLight(FName LightPresetName) {
}

void AMakeEventActor::SetBondsQuestState(FName bondsQuestId, QuestProgressState SetState) {
}

void AMakeEventActor::SetBondsProgress(EPlayerID heroID, EPlayerID partnerId, int32 SetValue, bool notUpdateBrainMes) {
}

void AMakeEventActor::SetAnimationActor(UObject* Object) {
}

void AMakeEventActor::SetActiveSubQuest(FName SubQuestID) {
}

void AMakeEventActor::SetActionIconType(bool NeedKizunaIcon) {
}

void AMakeEventActor::SaveLoad(EEventSaveLoadType SaveType, EEventSaveLoadExType Mode) {
}

void AMakeEventActor::RestartUpdatingBrainMessage() {
}

void AMakeEventActor::RequestChangeScene(int32 LocationId, int32 areaId, int32 PortalID, FName StartPortalName, bool NoFade, ELoadingScreenType LoadingScreenType, int32 LoadingScreenParam, bool IsAutoSaveEnable) {
}

void AMakeEventActor::PreLoadAllVoice() {
}

void AMakeEventActor::PlayGeneralBoardAnimation(int32 CaptureActorIndex, const FString& boardAnimationName, int32 AttachCaptureActorIndex, UAnimMontage* AddAnimMontage, TSoftObjectPtr<UCurveFloat> PlayRateCurveData) {
}

void AMakeEventActor::PlayBoardBGAnimation(const FString& BoardAnimNamePath, bool IsLoop) {
}

void AMakeEventActor::PlayBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, bool IsLoop, FName SocketName, TSoftObjectPtr<UCurveFloat> PlayRateCurveData) {
}

void AMakeEventActor::OpenScarletLogo() {
}

void AMakeEventActor::OpenEventBrainFieldTuto() {
}


void AMakeEventActor::OnStartEvent() {
}

void AMakeEventActor::OnSkipUnableFlag() {
}

void AMakeEventActor::OnPhotoModeFlag() {
}

void AMakeEventActor::OnFinishEvent() {
}

void AMakeEventActor::OffSkipUnableFlag() {
}

void AMakeEventActor::OffSkipLatentNodeFlag() {
}

void AMakeEventActor::OffPhotoModeFlag() {
}

void AMakeEventActor::NPCTurnToPlayer(float Speed) {
}

void AMakeEventActor::NPCPlayAnimation(const ENpcAnimationKind AnimKind) {
}

void AMakeEventActor::NPCLookAtPlayer(bool IsLookAt) {
}

void AMakeEventActor::LockInputSubMenu() {
}

void AMakeEventActor::LoadMessage(const FString& messageDataPath, bool PreLoad) {
}

int32 AMakeEventActor::LC21ChangePhase(int32 PhaseNo) {
    return 0;
}



bool AMakeEventActor::IsStartBattlefield(int32 GroupID) {
    return false;
}

bool AMakeEventActor::IsSkipUnableFlag() {
    return false;
}


bool AMakeEventActor::isSavedSaveLoadMenuError() {
    return false;
}

bool AMakeEventActor::isSavedSaveLoadMenu() {
    return false;
}

bool AMakeEventActor::IsPhotoModeFlag() {
    return false;
}

bool AMakeEventActor::IsMainEventWait() {
    return false;
}

bool AMakeEventActor::isCancelKeyword() {
    return false;
}

bool AMakeEventActor::isCanceledVisionSimulatorSelect() {
    return false;
}

bool AMakeEventActor::isCanceledCode() {
    return false;
}

QuestProgressState AMakeEventActor::GetSubQuestProgressById(FName SubQuestID) const {
    return QuestProgressState::qpNotOpen;
}

QuestProgressState AMakeEventActor::GetSubQuestProgress() const {
    return QuestProgressState::qpNotOpen;
}

FName AMakeEventActor::getResultVisionSimulatorSelect() {
    return NAME_None;
}

FString AMakeEventActor::getResultKeyword() {
    return TEXT("");
}

FName AMakeEventActor::getResultCode() {
    return NAME_None;
}

FString AMakeEventActor::GetMessageForMessageLabel(const FString& messageLabel) {
    return TEXT("");
}

int32 AMakeEventActor::GetLastChoiceResult() {
    return 0;
}

int32 AMakeEventActor::GetGeneralChoiceResult() {
    return 0;
}

int32 AMakeEventActor::GetEnemyNumInSubGroup(int32 GroupID, int32 SubGroupID) {
    return 0;
}

int32 AMakeEventActor::GetEnemyNumInGroup(int32 GroupID) {
    return 0;
}

FBattlefieldInfo AMakeEventActor::GetCurrentBattlefieldInfo() {
    return FBattlefieldInfo{};
}

int32 AMakeEventActor::GetChoiceResult(int32 MessageIndex) {
    return 0;
}

int32 AMakeEventActor::GetBondsValue(EPlayerID heroID, EPlayerID partnerId) {
    return 0;
}

QuestProgressState AMakeEventActor::GetBondsQuestProgressById(FName bondsQuestId) const {
    return QuestProgressState::qpNotOpen;
}

int32 AMakeEventActor::GetBondsProgress(EPlayerID heroID, EPlayerID partnerId) {
    return 0;
}

int32 AMakeEventActor::GetBondsLevel(EPlayerID heroID, EPlayerID partnerId) {
    return 0;
}

float AMakeEventActor::GetBondsFValue(EPlayerID heroID, EPlayerID partnerId) {
    return 0.0f;
}

void AMakeEventActor::FinishUIEffectSubQuest(FName SubQuestID) {
}

void AMakeEventActor::FinishUIEffectBondsQuest(FName bondsQuestId) {
}

void AMakeEventActor::FinishSubQuestById(FName SubQuestID, bool NoCheck, bool UiEffectFlag) {
}

void AMakeEventActor::FinishSubQuest(bool NoCheck, bool UiEffectFlag) {
}

void AMakeEventActor::EventAllManagerStart(bool TickEnable, bool Visibility) {
}

void AMakeEventActor::EventAllManagerEnd(bool RestoreTickEnable, bool RestoreVisibility) {
}

void AMakeEventActor::EndTalkEvent(bool isRestoreTransform) {
}


void AMakeEventActor::EndFade(float FadeSeconds, bool isUnderCaption) {
}

bool AMakeEventActor::EndEventBattlefield(int32 GroupID, bool ForceCloseFence) {
    return false;
}

void AMakeEventActor::EndCutScene(bool isEndEvent, float PlayerCameraBlendTime, TEnumAsByte<EViewTargetBlendFunction> PlayerCameraBlendFunc, float PlayerCameraBlendExp, FName SkipENPCCamRowName) {
}

void AMakeEventActor::EndBattlefieldForce(int32 GroupID) {
}

bool AMakeEventActor::EnableEventBattlefieldFence(int32 FenceGroupID) {
    return false;
}

void AMakeEventActor::EffectBokeh(int32 CaptureActorIndex, UCurveFloat* Curve, bool CurveReverse) {
}

void AMakeEventActor::DrawMessage(int32 windowType, const FString& messageLabel, FName RipSyncBoardJointID, bool skipable, float DrawSecond, bool isSkipVoiceEnd, bool IsVoiceOnlyMessage, bool isWaitMode) {
}

void AMakeEventActor::DrawGeneralChoice4(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, FName Choice3, FName Choice4, bool isCancelable) {
}

void AMakeEventActor::DrawGeneralChoice3(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, FName Choice3, bool isCancelable) {
}

void AMakeEventActor::DrawGeneralChoice2(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, bool isCancelable) {
}

void AMakeEventActor::DrawGeneralChoice1(ETextType TextType, FName TextMain, FName Choice1, bool isCancelable) {
}

int32 AMakeEventActor::DrawChoiceMessage(const FString& Choice1, const FString& Choice2, const FString& Choice3, const FString& Choice4, const FString& Choice5, int32 DefaultCursor, float DrawSecond, bool isWaitMode) {
    return 0;
}

bool AMakeEventActor::DisableEventBattlefieldFence(int32 FenceGroupID) {
    return false;
}

void AMakeEventActor::CloseUITutoTips() {
}

void AMakeEventActor::CloseUITutoOperation(FName ClosehelpTutoID) {
}

void AMakeEventActor::CloseScarletLogo() {
}

void AMakeEventActor::CloseMessage() {
}

void AMakeEventActor::CloseForceUITutoOperation() {
}

int32 AMakeEventActor::CheckSubQuestRewardResult() {
    return 0;
}

bool AMakeEventActor::CheckBondsLevelUp(EPlayerID playerId, EPlayerID TargetID) {
    return false;
}

void AMakeEventActor::ChangePresetCamera(FCameraTriggerInfo triggerInfo, bool bLerp) {
}

void AMakeEventActor::ChangePlayerFromClass(TEnumAsByte<RSPartyPlayerKind::Type> PartyPlayerType, TSoftClassPtr<ARSCharacterBase> CharacterClass) {
}

void AMakeEventActor::ChangeMainPlayer() {
}

void AMakeEventActor::CaptureSceneBGForLevelSequencerAndDelay(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, ULevelSequence* CaptureSequence, float CaptureSequencePosition) {
}

void AMakeEventActor::CaptureSceneBG(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AMakeEventActor::CaptureScene(int32 CaptureActorIndex) {
}

void AMakeEventActor::BoardEffectAnimationAlpha(int32 CaptureActorIndex, float Time, float Start, float End, UCurveFloat* Curve, bool Loop) {
}

void AMakeEventActor::BGEffectScanline(UCurveFloat* Curve, bool IsLoop) {
}

void AMakeEventActor::BGEffectNoise(UCurveFloat* Curve, bool IsLoop) {
}

void AMakeEventActor::BGEffectGlitch(UCurveFloat* Curve, bool IsLoop) {
}

void AMakeEventActor::BGEffectFringe(UCurveFloat* Curve, bool IsLoop) {
}

void AMakeEventActor::AddBondsValue(EPlayerID heroID, EPlayerID partnerId, float addNum) {
}

void AMakeEventActor::AddBondsLevel(EPlayerID heroID, EPlayerID partnerId, int32 addNum) {
}

void AMakeEventActor::AddBoardBGAnimation(const FString& BoardAnimNamePath, bool IsLoop) {
}

void AMakeEventActor::AddBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, bool IsLoop) {
}

AMakeEventActor::AMakeEventActor() {
    this->IsBattleSimulatorSystemEvent = false;
    this->IsNpcActionButton2Event = false;
    this->IsSkip = false;
    this->IsActiveBPEvent = false;
    this->bStaticToInGame = false;
    this->bStoreSequencerInGameTransform = false;
    this->OwnerActor = NULL;
    this->IsSkipOPEvent = false;
    this->m_InterludeID = -1;
    this->SkipMessageSE = NULL;
    this->m_isWait = false;
    this->m_waitMode = EEventWaitMode::None;
    this->m_waitSecond = 0.00f;
    this->m_PlayerController = NULL;
    this->m_IsEndMotion = false;
    this->m_AnimationActor = NULL;
    this->m_isStartDynamicCutscene = false;
    this->m_isCallSkipMessage = false;
    this->m_MessageFlagCheckClose = true;
    this->m_pWaitAnimMontageActor = NULL;
    this->m_pWaitAnimMontageMontage = NULL;
    this->m_pWaitLoadAsset = NULL;
    this->m_StoreSeqCapStatus = EStoreSeqCapStatus::None;
    this->m_SequenceSkipPhase = ESequenceSkipPhase::None;
    this->m_PhotoModeStatusType = EPhotoModeStatusType::None;
    this->m_IsStopBoadMotion = false;
    this->m_IsSkipLatentNode = false;
    this->m_bInputOnSkipLatentNode = false;
    this->m_Latenter = NULL;
    this->IsKeyDown = false;
    this->KeyDownTime = 0.00f;
    this->m_IsOrWaitInput = false;
    this->IsCurrentStaticEvent = false;
    this->m_PreLoadCurveFloat[0] = NULL;
    this->m_PreLoadCurveFloat[1] = NULL;
    this->m_PreLoadCurveFloat[2] = NULL;
}

