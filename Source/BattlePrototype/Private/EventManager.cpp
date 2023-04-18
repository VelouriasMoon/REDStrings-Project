#include "EventManager.h"

class AActor;
class UBlueprint;
class UDatabaseManager;
class ULevelSequence;
class UMaterialInterface;
class UObject;
class UTexture2D;
class UUserParamManager;

void AEventManager::WaitSequencerSetting(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void AEventManager::UpdateFacialNormalNative(TArray<AActor*>& TargetSkelMeshActors, bool bUseCache) {
}

void AEventManager::UnloadPPMNative(EEventPostProcessID EventPostProcessID) {
}

void AEventManager::SubMakeEventActorArray(AActor* Actor) {
}


void AEventManager::StartEventFinishWaitMode_AfterCounter() {
}

void AEventManager::StartDynamicCutsceneFromAsset_Implementation(ULevelSequence* Sequence, bool IsSeamlessInGame) {
}

void AEventManager::StartDynamicCutscene_Implementation(const FString& CutsceneName) {
}

AActor* AEventManager::SpawnActorNative(UClass* ActorAsset, const FText& BindingName) {
    return NULL;
}

AActor* AEventManager::SpawnActorFromBP(UBlueprint* ActorAsset, const FText& BindingName) {
    return NULL;
}

AActor* AEventManager::SpawnActorEvent(UClass* ActorAsset, bool IsPersistant) {
    return NULL;
}

void AEventManager::SetupPrestreamTextures(AActor* MakeEventActor, TArray<UTexture2D*>& OutSetupTextures) {
}

bool AEventManager::SetStaticEventSkyPause_Implementation(bool Pause) {
    return false;
}



void AEventManager::SetPPMAsset(EEventPostProcessID EventPostProcessID, TArray<TSoftObjectPtr<UMaterialInterface>> Assets, FName ResetParamName, float ResetParamValue) {
}

void AEventManager::setMessageTableName(const FString& TableName) {
}

void AEventManager::SetIsCutScenePhotoMode(bool EnablePhotoMode) {
}


void AEventManager::ResetPrestreamTextures(const TArray<UTexture2D*>& SetupTextures) {
}

void AEventManager::PreLoadPPMResident(TArray<EEventPostProcessID> EventPostProcessIDList) {
}

void AEventManager::PreLoadPPM(EEventPostProcessID EventPostProcessID, TArray<UMaterialInterface*>& outPPMList) {
}





void AEventManager::IsWorldMapShowDestinationForAreaName2Native(int32 LocationId, int32 areaId, int32 PortalID, uint8 ShowType, UDatabaseManager* DatabaseManager, bool IsProgressBondsEpisode, UUserParamManager* UserParamManager, bool& IsShow, int32& VisibleWeight) {
}






bool AEventManager::IsTalkEvent() {
    return false;
}







bool AEventManager::IsExistMakeEventActor() {
    return false;
}


bool AEventManager::isEndPostProcessSequencer_Implementation() {
    return false;
}

bool AEventManager::isEndDynamicCutscene_Implementation() {
    return false;
}


bool AEventManager::IsCutScenePhotoMode() {
    return false;
}






FArrayOfMID AEventManager::GetOrLoadPPMStatic(EEventPostProcessID EventPostProcessID, bool Load) {
    return FArrayOfMID{};
}

FArrayOfMID AEventManager::GetOrLoadPPMDynamic(EEventPostProcessID EventPostProcessID, bool Load) {
    return FArrayOfMID{};
}

FString AEventManager::getMessageTableName() const {
    return TEXT("");
}

int32 AEventManager::GetMakeEventActorArrayNum() {
    return 0;
}

TArray<AActor*> AEventManager::GetMakeEventActorArray() {
    return TArray<AActor*>();
}


int32 AEventManager::GetCurrentChapterID() {
    return 0;
}




void AEventManager::EventAllManagerStart(bool TickEnable, bool Visibility) {
}

void AEventManager::EventAllManagerEnd(bool RestoreTickEnable, bool RestoreVisibility) {
}



bool AEventManager::EnableEventUnControlMgrFlag(EEventUnControlManagerType UnControlMgrType) {
    return false;
}

void AEventManager::ClearSequencerInCharacter() {
}

void AEventManager::ClearFacialNormalCache() {
}

bool AEventManager::CheckScenarioFlagListC_Implementation(const TArray<FShowDestinationFlgCheck>& FlgCheckList) {
    return false;
}

bool AEventManager::CheckProgressID_Implementation(int32 MinProgressID, int32 MaxProgressID) {
    return false;
}



void AEventManager::CallStartCutSceneNative() {
}

void AEventManager::CallEndCutSceneNative() {
}

void AEventManager::CallBeforeChangeProgressIDNative() {
}

void AEventManager::CallAfterChangeProgressIDNative() {
}

void AEventManager::BindingActorNative(const FName& ActorTag, const FText& BindingName) {
}

void AEventManager::BeforeChangeProgressID() {
}

void AEventManager::AfterChangeProgressID() {
}


void AEventManager::AddMakeEventActorArray(AActor* Actor) {
}

AEventManager::AEventManager() {
    this->ProgressId = 0;
    this->IsInvalidFade = false;
    this->IsSkipEvent = false;
    this->IsCutSceneCalledSkipEvent = false;
    this->IsCurrentSkipFadeOut = false;
    this->IsCurrentTalkEvent = false;
    this->IsCurrentAjitoStayEvent = false;
    this->IsForceBrainTalkMode = false;
    this->StaticEventSoundPressure = 0.00f;
    this->m_StoreUnControlMgrFlags = 0;
    this->IsDisableDynamicResInStaticCutScene = true;
    this->IsStoreSequencerInGameTransformEvent = false;
    this->StaticCutsceneBG = NULL;
    this->Sequencer = NULL;
    this->m_IsCutScenePhotoMode = false;
}

