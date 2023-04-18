#include "RSSoundManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class ARSLevelSequenceActor;
class UAtomComponent;
class UCharacterPhysicalSurfaceActionSoundResource;
class ULevelSequence;
class UObject;
class URSAtomComponentBase;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class USoundConcurrency;
class USoundCueSheetManager;

void ARSSoundManager::UnregistLoopSe(FName Name) {
}

void ARSSoundManager::UnregisterSoundEmitterAll() {
}

void ARSSoundManager::UnregisterSoundEmitter(AActor* soundEmitter) {
}

bool ARSSoundManager::UnregisterCueSheet(USoundAtomCueSheet* Sheet) {
    return false;
}

void ARSSoundManager::UnregisterComponentAll() {
}

void ARSSoundManager::UnregisterComponent(URSAtomComponentBase* Component) {
}

void ARSSoundManager::UnregistAllLoopSe(const bool isStopSound) {
}

void ARSSoundManager::UnLoadSequencerSeCueSheet() {
}

bool ARSSoundManager::UnloadFootStep(FName nameId) {
    return false;
}





void ARSSoundManager::StopAllSound() {
}

void ARSSoundManager::StopAllAdlibVoice() {
}

void ARSSoundManager::SetSoundLevelSnapshot(FSoundSnapshot Snapshot) {
}

void ARSSoundManager::SetSoundLevelParam(FSoundLevelParam SoundLevelParam, UAtomComponent* AtomCom) {
}

void ARSSoundManager::SetSoundBusBypass(EDspBus DspBus, bool Bypass) {
}


void ARSSoundManager::SetNotifySoundReplace_EnStr(ENotifySoundReplace_EnStr Param) {
}

void ARSSoundManager::SetNonPlayerCueSheetVolume() {
}








void ARSSoundManager::SetCharacterCueSheetVolume(const FString& CharaID) {
}


void ARSSoundManager::SetBgmTransEffectValue(const float Rate, const bool isDirect) {
}


void ARSSoundManager::SetAisacValue(UAtomComponent* AtomCom, ESoundCategory Category, ESoundAisacControlId Control, float ControlValue) {
}

URSAtomComponentBase* ARSSoundManager::RSAtomCuePlay_AnimNotify_Native(AActor* OwnerPlayer, USoundAtomCue* Sound, bool UseWeaponLocation, EGetPlayerWeaponType WeaponType, TSubclassOf<URSAtomComponentBase> ComponentClass, USceneComponent* AttachToComponent, FName AttachPointName, USoundAttenuation* AttenuationSettings, bool isInvalidProgressIdCheck) {
    return NULL;
}






void ARSSoundManager::ResetNonPlayerCueSheetVolume() {
}

void ARSSoundManager::ResetCharacterCueSheetVolume(const FString& CharaID) {
}

void ARSSoundManager::ResetAllBusBypass(bool Bypass) {
}

USoundAtomCue* ARSSoundManager::ReplaceVoice_VisionSimulator(USoundAtomCue* InputSound) {
    return NULL;
}

USoundAtomCue* ARSSoundManager::ReplaceNotifySound_Native(USoundAtomCue* InputSound) {
    return NULL;
}


void ARSSoundManager::RegistLoopSe(FName Name, URSAtomComponentBase* pSound) {
}

void ARSSoundManager::RegisterSoundEmitter(AActor* soundEmitter) {
}

bool ARSSoundManager::RegisterCueSheet(USoundAtomCueSheet* Sheet) {
    return false;
}

void ARSSoundManager::RegisterComponent(URSAtomComponentBase* Component) {
}

void ARSSoundManager::PlayVoiceAtCueName(const UObject* WorldContextObject, const FString& CueName, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}

void ARSSoundManager::PlayVoiceAtCue(const UObject* WorldContextObject, USoundAtomCue* SoundCue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}




void ARSSoundManager::PlayHitSoundEffect(const FHitDamageInfo& Info) {
}




void ARSSoundManager::PlayAdlibVoiceFromLoadedAsset(const FString& voiceName) {
}








void ARSSoundManager::OnEDBrainFieldBattleEndNativeEvent(EBrainFieldEndType EndType) {
}



FString ARSSoundManager::MakeCueSheetPath(const FString& BaseName) {
    return TEXT("");
}

void ARSSoundManager::MakeBondsChueSheetName(EPlayerID heroID, EPlayerID partnerId, FString& makedName) {
}

bool ARSSoundManager::Macro_IsSpCostume(TEnumAsByte<RSPartyPlayerKind::Type> kind) {
    return false;
}

bool ARSSoundManager::Macro_IsAriseItemEquipped(TEnumAsByte<RSPartyPlayerKind::Type> kind) {
    return false;
}

bool ARSSoundManager::Macro_GetPlayer(TEnumAsByte<RSPartyPlayerKind::Type> kind, USkeletalMeshComponent*& Mesh, EPlayerID& playerId) {
    return false;
}

int32 ARSSoundManager::Macro_GetPartyTotalExp() {
    return 0;
}


void ARSSoundManager::LoadUseAdlibVoicePath(ULevelSequence* seq, TArray<FString>& adlibVoiceNames, bool bCueReset) {
}

void ARSSoundManager::LoadSequencerSeCueSheet(ARSLevelSequenceActor* seqActor) {
}


UCharacterPhysicalSurfaceActionSoundResource* ARSSoundManager::LoadFootStep(FName nameId) {
    return NULL;
}


bool ARSSoundManager::IsValidCurrentSimulatorLevelInfos() {
    return false;
}

bool ARSSoundManager::isRegistLoopSe(FName Name) {
    return false;
}

void ARSSoundManager::Init_ReplaceVoice_VisionSimulator() {
}

FString ARSSoundManager::GetSoundSelectorString(ESoundSelector Selector) {
    return TEXT("");
}

FString ARSSoundManager::GetSoundSelectorLabelString(ESoundSelectorLabel Label) {
    return TEXT("");
}

int32 ARSSoundManager::GetSoundEmitterListCount() {
    return 0;
}

AActor* ARSSoundManager::GetSoundEmitter(const int32 Index) {
    return NULL;
}

USoundAtomCueSheet* ARSSoundManager::GetSoundCueSheet(const FString& SheetName) {
    return NULL;
}

TArray<FNotifyPlaySoundReplaceProgressIdData> ARSSoundManager::GetReplaceEnStrDataTableList() {
    return TArray<FNotifyPlaySoundReplaceProgressIdData>();
}

bool ARSSoundManager::GetPlayerWeaponActorListFromNative(AActor* OwnerPlayer, EGetPlayerWeaponType Type, TArray<AActor*>& WeaponList) {
    return false;
}

FString ARSSoundManager::GetLanguageSettingString() {
    return TEXT("");
}

USoundAtomCue* ARSSoundManager::GetGeneralPhysicalSurfaceActionResource(const EGamePhysicalSurfaceType PhysicsType, FName ActionType) {
    return NULL;
}

FString ARSSoundManager::GetCueSheetName(USoundAtomCue* Cue) {
    return TEXT("");
}

USoundCueSheetManager* ARSSoundManager::GetCueSheetManager() const {
    return NULL;
}


URSAtomComponentBase* ARSSoundManager::DoIsVoiceToSpawnSoundAttachedLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, USoundAttenuation* AttenuationSettings, UObject* Creator) {
    return NULL;
}



ARSSoundManager::ARSSoundManager() {
    this->FootStepDataTable = NULL;
    this->HitSoundIntervalWork = 0.00f;
    this->HitSoundInterval = 0.03f;
    this->CurveBgmTransEffect = NULL;
    this->CueSheetManager = NULL;
    this->PoolManager = NULL;
    this->m_NotifySoundReplace_EnStr = ENotifySoundReplace_EnStr::None;
    this->SoundVolumeController = NULL;
    this->SoundState = ESoundState::Stage;
    this->MenuVolumeRate = 0.00f;
    this->isDlc1Available = false;
    this->isDlc2Available = false;
    this->isDlc3Available = false;
}

