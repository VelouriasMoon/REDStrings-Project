#include "PlayerManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class ARSCharacterBase;

void APlayerManager::UpdatLastNoSallyTime(EPlayerID ID, const int32 PlayBrainTalkTimeMin) {
}


void APlayerManager::UpdateLastUseSasTime(EPlayerID ID, const bool isPlayBrainTalk) {
}

void APlayerManager::UpdateLastSallyTime(EPlayerID ID, const int32 PlayBrainTalkTimeMin) {
}

void APlayerManager::UnregisterKeepOutArea(int32 registerId) {
}

void APlayerManager::UnregisterExtraPlayer(ARSCharacterBase* extraPlayer) {
}

void APlayerManager::SwapPartyMemberInfo(int32 first, int32 second) {
}

void APlayerManager::SetPlayerParameter(EPlayerID ID, const FCharactersParameterTable& Table, bool bMaxHP) {
}

void APlayerManager::SetPlayerAIOrder(EPlayerID ID, EPlayerAIOrder Order) {
}


void APlayerManager::SetPartyMemberInfo(EPlayerID ID, FPlayerInfo Info, bool bDelayLoad) {
}

void APlayerManager::SetLevelDifferentExpRate(const FLevelDifferentExpRateData& Data) {
}

void APlayerManager::SetDriveUsedFlag(bool bFlag) {
}

void APlayerManager::SetDisableBattleActionFlag(bool bDisable) {
}

void APlayerManager::SetBattleMemberToEmpty(EPlayerID ID) {
}

bool APlayerManager::SetBattleMemberCore_Implementation(RSPartyPlayerKind::Type kind, EPlayerID ID, bool bSpawn) {
    return false;
}

void APlayerManager::SetBattleMember_Implementation(RSPartyPlayerKind::Type kind, EPlayerID ID, bool bSpawn) {
}

void APlayerManager::SetBattleEndReserveMemberStatus(float ReviveHPRate) {
}

void APlayerManager::SetAjitoTogetherCountDirect(EPlayerID playerId, int32 CountHP, int32 CountAttack, int32 CountPsychic, int32 CountDefence) {
}

void APlayerManager::ReturnPartyMember(EPlayerID ID, const bool isCheckBattleMemberMain) {
}

void APlayerManager::ReturnEventRemvoeMembers() {
}

void APlayerManager::RemovePartyMember(EPlayerID ID, bool bDestroy, bool bDequipAttachment, bool bDefaultCostume) {
}

void APlayerManager::RegisterKeepOutAreaCircle(int32& outRegisterId, const FVector& Location, float Radius) {
}

void APlayerManager::RegisterKeepOutAreaBox(int32& outRegisterId, FVector InMin, FVector InMax) {
}

void APlayerManager::RegisterExtraPlayer(ARSCharacterBase* extraPlayer) {
}

void APlayerManager::ReflectBattleMemberParameterPersonal(EPlayerID playerId) {
}

void APlayerManager::ReflectBattleMemberParameter() {
}

void APlayerManager::RecoveryReserveMemberHP() {
}

void APlayerManager::RecoveryReserveMemberBadStatus() {
}


ARSCharacterBase* APlayerManager::ProtectedSpawnNotPartyPlayer(TSubclassOf<ARSCharacterBase> playerClass, FTransform Transform, AActor* createOwner) {
    return NULL;
}



void APlayerManager::NotifyBattleSimulatorEnd(bool bMissionCancel) {
}

bool APlayerManager::NeedsStatusAssist() const {
    return false;
}

void APlayerManager::MainPlayerAccessoryBackup(EPlayerID playerId) {
}

void APlayerManager::LocationChangeParameterReset_Implementation() {
}

void APlayerManager::kpiAddNpcSupportRevive(EPlayerID ID) {
}

void APlayerManager::kpiAddNpcSupportCover(EPlayerID ID) {
}

void APlayerManager::kpiAddNpcSupportBrainField(EPlayerID ID) {
}

void APlayerManager::kpiAddNpcSupportAttack(EPlayerID ID) {
}


bool APlayerManager::IsPluginNpcAutoReviveAble(EPlayerID playerId) {
    return false;
}






bool APlayerManager::IsNpcThinkAssistAttackCPP() const {
    return false;
}


bool APlayerManager::IsExistPartyMember(EPlayerID ID) const {
    return false;
}

bool APlayerManager::IsExistBattleMember(EPlayerID ID) {
    return false;
}



bool APlayerManager::IsEquipHoodCostume(EPlayerID playerId) {
    return false;
}


bool APlayerManager::IsEnableAjitoTogetherEvent(EPlayerID TogetherPlayerID) {
    return false;
}

bool APlayerManager::IsEnableAccessoryEffectSameEquipVisionSupport(EPlayerID NpcPlayerID) {
    return false;
}

bool APlayerManager::IsDriveUsedFlag() {
    return false;
}

bool APlayerManager::IsDisableBattleActionFlag() const {
    return false;
}

bool APlayerManager::IsCreatePlayerCharacters() {
    return false;
}


void APlayerManager::InitializeAll(const bool isNoResetPartyInfo) {
}

FWeaponExtraAbilityParameter APlayerManager::GetWeaponExtraAbilityParameter(EPlayerID playerId, EWeaponExtraAbility Ability) {
    return FWeaponExtraAbilityParameter{};
}

void APlayerManager::GetWeaponExtraAbilityDamageRate(float& OutDamageRate, float& OutPsychicDamageRate, float& OutCrashRate, EPlayerID playerId, AActor* DamageActor) {
}


float APlayerManager::GetPlayerUseTime(EPlayerID ID) const {
    return 0.0f;
}

int32 APlayerManager::GetPlayerUseCount(EPlayerID ID) const {
    return 0;
}

int32 APlayerManager::GetPlayerNum() const {
    return 0;
}

TArray<ARSCharacterBase*> APlayerManager::GetPlayerList() const {
    return TArray<ARSCharacterBase*>();
}

bool APlayerManager::GetPlayerCharacterParam(TEnumAsByte<RSPartyPlayerKind::Type> Type, FVector& Location, FRotator& Rotation) {
    return false;
}


ARSCharacterBase* APlayerManager::GetPlayer(TEnumAsByte<RSPartyPlayerKind::Type> kind) const {
    return NULL;
}


FPartyPlayerCacheData APlayerManager::GetPartyPlayerCache(EPlayerID ID) {
    return FPartyPlayerCacheData{};
}

FPlayerInfo APlayerManager::GetPartyMemberInfo(EPlayerID ID) const {
    return FPlayerInfo{};
}

TArray<FPlayerInfo> APlayerManager::GetPartyInfoList() {
    return TArray<FPlayerInfo>();
}




TArray<ARSCharacterBase*> APlayerManager::GetExtraPlayerList() {
    return TArray<ARSCharacterBase*>();
}

FCharactersParameterTable APlayerManager::GetCharactersParameterTable(EPlayerID ID) const {
    return FCharactersParameterTable{};
}

EPlayerID APlayerManager::GetBattleMemberPlayerID(TEnumAsByte<RSPartyPlayerKind::Type> kind) {
    return EPlayerID::Invalid;
}

ARSCharacterBase* APlayerManager::GetBattleMemberActorFromKind(TEnumAsByte<RSPartyPlayerKind::Type> kind) {
    return NULL;
}

ARSCharacterBase* APlayerManager::GetBattleMemberActorFromID(EPlayerID ID) {
    return NULL;
}

FPlayerAddStatusByAjitoTogether APlayerManager::GetAjitoTogetherData(EPlayerID playerId) {
    return FPlayerAddStatusByAjitoTogether{};
}

int32 APlayerManager::GetAjitoTogetherCount(EPlayerID playerId, EAjitoTogetherUpKind kind) {
    return 0;
}

bool APlayerManager::GetAccessoryExtendParameter(TArray<float>& outParameter, EPlayerID ID, EEffecacyType effectType) {
    return false;
}


void APlayerManager::GetAccessoryEffectShoppingSupport(float& outBuyRate, float& outSellRate) {
}

bool APlayerManager::GetAccessoryEffectSameEquipVisionSupport(float& outOffsetAV, int32& outOffsetPV, float& outOffsetCV, int32& outLotParam1, int32& outLotParam2) {
    return false;
}

bool APlayerManager::GetAccessoryEffect(float& outValue, EPlayerID ID, EEffecacyType effectType) {
    return false;
}


void APlayerManager::EventRemvoeMembers(TArray<EPlayerID> IgnoreActorList, bool bDisableSAS) {
}

void APlayerManager::EventDefaultWeapon(EPlayerID playerId) {
}

void APlayerManager::EventCutSceneAfterFunc() {
}

void APlayerManager::EquipWeaponSkin(EPlayerID ID, int32 WeaponId) {
}

void APlayerManager::EquipWeapon(EPlayerID ID, int32 WeaponId, bool bTempEquip) {
}

void APlayerManager::EquipCostume(EPlayerID ID, int32 CostumeId) {
}

void APlayerManager::EquipAttachment(EPlayerID ID, EPlayerAttachment Index, int32 attachmentId) {
}

void APlayerManager::EquipAccessory(EPlayerID ID, EPlayerAccessory Index, int32 accessoryId, bool bTempEquip) {
}

void APlayerManager::EndEventDefaultWeapon(EPlayerID playerId) {
}


void APlayerManager::DestroyPlayerCharacters() {
}

void APlayerManager::DestroyPlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type) {
}

void APlayerManager::DelayLoadPlayerEquip() {
}

void APlayerManager::DebugDrawKeepOutArea() {
}

void APlayerManager::CreatePlayerCharacters(const FString& playerStartName) {
}

ARSCharacterBase* APlayerManager::CreatePlayerCharacterFromID(TEnumAsByte<RSPartyPlayerKind::Type> Type, EPlayerID ID, FVector Location, FRotator Rotation) {
    return NULL;
}

ARSCharacterBase* APlayerManager::CreatePlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type, TSubclassOf<ARSCharacterBase> playerClass, FVector Location, FRotator Rotation) {
    return NULL;
}

void APlayerManager::ClearPluginNpcAutoReviveCount() {
}

void APlayerManager::ClearPlayerUseInfo() {
}

void APlayerManager::ClearPlayerInfoDrive(EPlayerID ID) {
}

void APlayerManager::ClearPlayerInfoBadStatus(EPlayerID ID) {
}

void APlayerManager::ClearPartyMember() {
}

bool APlayerManager::CheckRareArrangeItem() {
    return false;
}

void APlayerManager::ChangePlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type, TSubclassOf<ARSCharacterBase> playerClass) {
}

float APlayerManager::CalcLevelDifferentExpRate(int32 DifferentLevel) {
    return 0.0f;
}

FCharactersParameterTable APlayerManager::ApplyAjitoTogetherCharactersParameter(EPlayerID playerId, const FCharactersParameterTable& BaseData) {
    return FCharactersParameterTable{};
}

void APlayerManager::AllPlayerCharacterTickStop() {
}

void APlayerManager::AllDestroyPlayerCharacter() {
}

void APlayerManager::AjitoTogetherParameterRandomUp(EPlayerID NpcID, EAjitoTogetherUpKind& OutNpcUpKind, int32& OutNpcUpValue, EAjitoTogetherUpKind& OutPlayerUpKind, int32& OutPlayerUpValue) {
}

void APlayerManager::AddPluginNpcAutoReviveCount(EPlayerID playerId) {
}

void APlayerManager::AddPartyMemberByPreset(FAddPartyPresetData Preset, const bool isCheckBattleMemberMain, bool bNotEquipSAS) {
}

void APlayerManager::AddPartyMember(FPlayerInfo Info, const bool isSaveDataLoadFlow) {
}

APlayerManager::APlayerManager() {
    this->_playerList.AddDefaulted(3);
    this->_BattleMemberMain = EPlayerID::Invalid;
    this->_BattleMemberLeft = EPlayerID::Invalid;
    this->_BattleMemberRight = EPlayerID::Invalid;
    this->_partyInfoList.AddDefaulted(10);
    this->_partyParameterTableList.AddDefaulted(10);
    this->_delayLoadList.AddDefaulted(11);
    this->WeaponExtraAbilityDataTable = NULL;
    this->AccessoryExtendParameterDataTable = NULL;
    this->_partyPlayerCache.AddDefaulted(11);
    this->bNpcThinkAssistAttack = false;
    this->AjitoTogetherDataTable = NULL;
    this->PluginNpcAutoReviveCount.AddDefaulted(10);
}

