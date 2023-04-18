#include "UserParamManager.h"

class UBattleLogBuffer;
class UBrainMessageParamManager;
class UDeepenTheBondsParamManager;
class ULibraryCharacterParam;
class ULibraryEnemyParam;
class ULoadTipsParamManager;
class UOptionParam;
class UPresentInfoParam;
class UPurposeMessageParamManager;
class UQuestParamManager;
class UTipsCountParamManager;
class UWorldmapOpenParam;

bool UUserParamManager::WorldmapSetLocationSelectable_WithPortal(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAreaAll) {
    return false;
}

bool UUserParamManager::WorldmapSetLocationSelectable(int32 LocationNo, int32 AreaNo, bool isSelectable, bool isForce, bool isAreaAll) {
    return false;
}

bool UUserParamManager::WorldmapSetLocationNotSelectable(int32 LocationNo, bool isNotSelectable) {
    return false;
}

bool UUserParamManager::WorldmapSetLocationNewOpen(int32 LocationNo, int32 AreaNo, bool isNewOpen, bool isAreaAll) {
    return false;
}

bool UUserParamManager::WorldmapSetAllLocationNotSelectable(bool isNotSelectable) {
    return false;
}

bool UUserParamManager::WorldmapOpenLocation(int32 LocationNo, int32 AreaNo, bool isSelectable) {
    return false;
}

bool UUserParamManager::WorldmapIsLocationSelectable(int32 LocationNo, int32 AreaNo) {
    return false;
}

bool UUserParamManager::WorldmapIsLocationNotSelectable(int32 LocationNo) {
    return false;
}

bool UUserParamManager::WorldmapIsLocationNewOpen(int32 LocationNo, int32 AreaNo) {
    return false;
}

bool UUserParamManager::WorldmapIsAllLocationNotSelectable() {
    return false;
}

bool UUserParamManager::WorldmapGetOpenParam(TArray<FWorldmapOpenLCParam>& openedList) {
    return false;
}

bool UUserParamManager::WorldmapCloseLocation(int32 LocationNo, int32 AreaNo, bool isAreaAll) {
    return false;
}

void UUserParamManager::WorldmapCheckOpenFromProgressIDAndCharaID(EPlayerID playerId, int32 ProgressId, bool checkNearly) {
}

void UUserParamManager::WorldmapCheckOpenFromProgressID(int32 ProgressId, bool checkNearly) {
}

bool UUserParamManager::UpdateTeamBondsLevel(EPlayerID playerId, int32 ProgressNo, bool isSingleLvUp) {
    return false;
}

bool UUserParamManager::UpdatePresentItemInfo(EPlayerID sendCharaID, EPlayerID recvCharaID, FName ItemId) {
    return false;
}

bool UUserParamManager::UpdateBondsLevel(EPlayerID playerId, EPlayerID TargetID, bool isSingleLvUp) {
    return false;
}

void UUserParamManager::TempDisableSkill(bool bDisable) {
}

void UUserParamManager::StartBondsEpisode(EPlayerID playerId, EPlayerID TargetID) {
}

void UUserParamManager::SetZeroEpClear(bool Flag) {
}

bool UUserParamManager::SetWishList(const TArray<int32>& wishList) {
    return false;
}

bool UUserParamManager::SetTransferObjectByName(const FName& ItemId, int32 ObjectID, bool isOverwrite) {
    return false;
}

bool UUserParamManager::SetTransferObject(int32 ItemId, int32 ObjectID, bool isOverwrite) {
    return false;
}

void UUserParamManager::SetTitleProductFlag(bool Flag) {
}

void UUserParamManager::SetTeamBondsProgress(EPlayerID playerId, int32 Progress) {
}

void UUserParamManager::SetTeamBondsLevel(EPlayerID playerId, int32 teamBondsLevel) {
}

void UUserParamManager::SetSuspendPauseTimeLockFlag(const bool Flag) {
}

void UUserParamManager::SetStartSuspendPauseTime(const int32 Time) {
}

void UUserParamManager::SetSkillPoint(int32 Point) {
}

void UUserParamManager::SetSelectSaveSlot(int32 selectSlot) {
}

void UUserParamManager::SetSelectNewGame(bool selectSlot) {
}

void UUserParamManager::SetSelectedScenario(const int32 Value) {
}

void UUserParamManager::SetSelectedMapUsableItem(FName ItemId) {
}

void UUserParamManager::SetSeenAjitoPattern(const FName AjitoPatternName) {
}

void UUserParamManager::SetSASEquipStatus(E_SASKindNative kind, ESASEquipStatus Status, bool bNotEquip) {
}

void UUserParamManager::SetReceiveOrderQuestID(const int32 ID) {
}

void UUserParamManager::SetPurchasedAddContentNameList(TArray<FName> List) {
}

void UUserParamManager::SetPrivacyPolicy(bool Flag) {
}

void UUserParamManager::SetNpcAccessoryExtend2(EPlayerID playerId) {
}

void UUserParamManager::SetNpcAccessoryExtend1(EPlayerID playerId) {
}

void UUserParamManager::SetNotifiedNotAppliedAddContentsNameList(TArray<FName> nameList) {
}

void UUserParamManager::SetMoney(const int32 Value) {
}

void UUserParamManager::SetMemberSlotInfo(const int32 Index, const int32 ID) {
}

void UUserParamManager::SetLibraryTerminologyFlag(const int32 ID, const uint8 Flag) {
}

void UUserParamManager::SetLibraryEpisodeFlag(const int32 ID, const uint8 Flag) {
}

void UUserParamManager::SetLibraryEnemyFlag(const int32 ID, const uint8 Flag) {
}

void UUserParamManager::SetLearnedSkill(EPlayerID playerId, EPlayerSkill SkillID, bool bLearn) {
}

void UUserParamManager::SetJewelTicketCount(int32 newCount) {
}

void UUserParamManager::SetItemNum(const FName& ID, const int32 Num) {
}

void UUserParamManager::SetItemKind(const FName& ID, const int32 Num) {
}

void UUserParamManager::SetIsForceNewGameFlowFlag(const bool Flag) {
}

void UUserParamManager::SetIsExNewGameFlow(const bool Flag) {
}

void UUserParamManager::SetIsExNewGame_TakeOverCharacterLevel(const bool Flag) {
}

void UUserParamManager::SetIsExNewGame_TakeOverBrainMap(const bool Flag) {
}

void UUserParamManager::SetGameDifficulty(HCGameDifficulty diffuculty) {
}

void UUserParamManager::SetGameClearState(EGameClearState State) {
}

void UUserParamManager::SetGameClear(bool Flag) {
}

void UUserParamManager::SetExtendEquipSAS(bool bExtend) {
}

void UUserParamManager::SetEula(bool Flag) {
}

void UUserParamManager::SetEquipSAS(E_SASButton Button, E_SASKindNative kind) {
}

void UUserParamManager::SetEnableNexusDrive(bool bEnable, EPlayerID playerId) {
}

void UUserParamManager::SetEnableCrashVision(bool bEnable, EPlayerID playerId) {
}

void UUserParamManager::SetClearLapNum(const int32 Num) {
}

void UUserParamManager::SetCeBank(bool Flag) {
}

void UUserParamManager::SetBrainTalkBt_ReturnToTheAjito_BeforePlayTime(const int32 beforePlayTime) {
}

void UUserParamManager::SetBrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime(const int32 beforePlayTime) {
}

void UUserParamManager::SetBrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime(const int32 beforePlayTime) {
}

void UUserParamManager::SetBondsValue(EPlayerID playerId, EPlayerID TargetID, int32 Value) {
}

void UUserParamManager::SetBondsProgress(EPlayerID playerId, EPlayerID TargetID, int32 Progress) {
}

void UUserParamManager::SetBondsMaxLevel(int32 maxLevel) {
}

void UUserParamManager::SetBondsLevel(EPlayerID playerId, EPlayerID TargetID, int32 Level, bool adjustExp) {
}

void UUserParamManager::SetBondsFValue(EPlayerID playerId, EPlayerID TargetID, float Value) {
}

void UUserParamManager::SetBattlefieldRandomSeed(const int32 Seed) {
}

void UUserParamManager::SetBattlefieldInfos(const TMap<FString, FBattlefieldInfo>& Infos) {
}

void UUserParamManager::SetAppliedAddContentsNameList(TArray<FName> List) {
}

void UUserParamManager::SetAllAddContentsNameList(TArray<FName> List) {
}

void UUserParamManager::ResetTotalPlayTimeCount() {
}

void UUserParamManager::ResetMapGimmickUseTimesAll() {
}

void UUserParamManager::ResetMapGimmickUseTimes(EMapGimmickType Type) {
}

void UUserParamManager::ResetLearnedSkill(EPlayerID playerId) {
}

void UUserParamManager::ResetBattlefieldInfos() {
}

bool UUserParamManager::RemoveWishList(int32 Content) {
    return false;
}

void UUserParamManager::RemoveItemList(const FName _ID) {
}

void UUserParamManager::RegisterUseMapGimmick(EMapGimmickType Type) {
}

void UUserParamManager::ReCalcSkillPoint() {
}

void UUserParamManager::OnSetEventProgressID(int32 ProgressNo) {
}

bool UUserParamManager::IsValidLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const {
    return false;
}

bool UUserParamManager::IsValidLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const {
    return false;
}

bool UUserParamManager::IsValidLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const {
    return false;
}

bool UUserParamManager::IsSuspendPauseTimeLockFlag() {
    return false;
}

bool UUserParamManager::IsSeenAjitoPattern(const FName AjitoPatternName) {
    return false;
}

bool UUserParamManager::IsSASEquipAble(E_SASKindNative kind) const {
    return false;
}

bool UUserParamManager::IsReleaseNexusDrive() {
    return false;
}

bool UUserParamManager::IsReleaseCrashVision() {
    return false;
}

bool UUserParamManager::IsNpcAccesoryExtend2(EPlayerID playerId) {
    return false;
}

bool UUserParamManager::IsNpcAccesoryExtend1(EPlayerID playerId) {
    return false;
}

bool UUserParamManager::IsLearnedSkill(EPlayerID playerId, EPlayerSkill SkillID) const {
    return false;
}

bool UUserParamManager::IsHaveRepairItem() {
    return false;
}

bool UUserParamManager::IsForceNewGameFlowFlag() {
    return false;
}

bool UUserParamManager::IsExtendEquipSAS() const {
    return false;
}

bool UUserParamManager::IsExNewGameFlow() {
    return false;
}

bool UUserParamManager::IsExNewGame_TakeOverCharacterLevel() {
    return false;
}

bool UUserParamManager::IsExNewGame_TakeOverBrainMap() {
    return false;
}

bool UUserParamManager::IsExistInWishList(int32 Content) {
    return false;
}

bool UUserParamManager::IsEquipSAS(E_SASKindNative kind) {
    return false;
}

bool UUserParamManager::isEnableNexusDrive(EPlayerID playerId) {
    return false;
}

bool UUserParamManager::isEnableCrashVision(EPlayerID playerId) {
    return false;
}

bool UUserParamManager::IsBrainTalkOnceCheck_InSaveData_Find(const EBrainTalkCategory _Category, const FName _ID) {
    return false;
}

bool UUserParamManager::isBattleFieldCheckToWorldMapSystems() {
    return false;
}

void UUserParamManager::InitializeTotalPlayTime() {
}

void UUserParamManager::InitializeParam(bool isNewGame) {
}

void UUserParamManager::InitializeItemParam() {
}

bool UUserParamManager::HaveJewelTicket() {
    return false;
}

bool UUserParamManager::GetZeroEpClear() {
    return false;
}

UWorldmapOpenParam* UUserParamManager::GetWorldmapOpenParam() {
    return NULL;
}

int32 UUserParamManager::GetWishListNum() {
    return 0;
}

TArray<int32> UUserParamManager::GetWishList() const {
    return TArray<int32>();
}

bool UUserParamManager::GetTransferObjectByName(const FName& ItemId, int32& ObjectID, bool isRemove) {
    return false;
}

bool UUserParamManager::GetTransferObject(int32 ItemId, int32& ObjectID, bool isRemove) {
    return false;
}

int32 UUserParamManager::GetTotalPlayTime(const bool isRealData) {
    return 0;
}

bool UUserParamManager::GetTitleProductFlag() {
    return false;
}

UTipsCountParamManager* UUserParamManager::GetTipsCountParam() {
    return NULL;
}

int32 UUserParamManager::GetTeamBondsProgress(EPlayerID playerId) const {
    return 0;
}

int32 UUserParamManager::GetTeamBondsMaxLevel() const {
    return 0;
}

int32 UUserParamManager::GetTeamBondsLevel(EPlayerID playerId) {
    return 0;
}

int32 UUserParamManager::GetStartSuspendPauseTime() {
    return 0;
}

int32 UUserParamManager::GetSkillPoint() const {
    return 0;
}

int32 UUserParamManager::GetSelectSaveSlot() {
    return 0;
}

bool UUserParamManager::GetSelectNewGame() {
    return false;
}

int32 UUserParamManager::GetSelectedScenario() const {
    return 0;
}

FName UUserParamManager::GetSelectedMapUsableItem() {
    return NAME_None;
}

ESASEquipStatus UUserParamManager::GetSASEquipStatus(E_SASKindNative kind) const {
    return ESASEquipStatus::LinkAble;
}

int32 UUserParamManager::GetReceiveOrderQuestID() const {
    return 0;
}

UQuestParamManager* UUserParamManager::GetQuestParamManager() {
    return NULL;
}

UPurposeMessageParamManager* UUserParamManager::GetPurposeMessageParamManager() {
    return NULL;
}

TArray<FName> UUserParamManager::GetPurchasedAddContentNameList() {
    return TArray<FName>();
}

bool UUserParamManager::GetPrivacyPolicy() {
    return false;
}

bool UUserParamManager::GetPresentItemInfoList(EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList) {
    return false;
}

UPresentInfoParam* UUserParamManager::GetPresentInfoParam() {
    return NULL;
}

UOptionParam* UUserParamManager::GetOptionParam() {
    return NULL;
}

int32 UUserParamManager::GetNpcAccessoryExtendNum(EPlayerID playerId) {
    return 0;
}

TArray<FName> UUserParamManager::GetNotifiedNotAppliedAddContentsNameList() {
    return TArray<FName>();
}

bool UUserParamManager::GetMoneyDirty() const {
    return false;
}

int32 UUserParamManager::GetMoney() const {
    return 0;
}

FMemberSlotInfo UUserParamManager::GetMemberSlotInfo(const int32 Index) const {
    return FMemberSlotInfo{};
}

FUserItemInfo UUserParamManager::GetMapUsableItemListPrevInfo(const int32 CurrentIndex) const {
    return FUserItemInfo{};
}

int32 UUserParamManager::GetMapUsableItemListPrevIndex(const int32 CurrentIndex) const {
    return 0;
}

int32 UUserParamManager::GetMapUsableItemListNum() const {
    return 0;
}

FUserItemInfo UUserParamManager::GetMapUsableItemListNextInfo(const int32 CurrentIndex) const {
    return FUserItemInfo{};
}

int32 UUserParamManager::GetMapUsableItemListNextIndex(const int32 CurrentIndex) const {
    return 0;
}

FUserItemInfo UUserParamManager::GetMapUsableItemListInfo(const int32 Index) const {
    return FUserItemInfo{};
}

TMap<EMapGimmickType, int32> UUserParamManager::GetMapGimmickUseTimes() const {
    return TMap<EMapGimmickType, int32>();
}

ULoadTipsParamManager* UUserParamManager::GetLoadTipsParamManager() {
    return NULL;
}

uint8 UUserParamManager::GetLibraryTerminologyFlag(const int32 ID) const {
    return 0;
}

uint8 UUserParamManager::GetLibraryEpisodeFlag(const int32 ID) const {
    return 0;
}

ULibraryEnemyParam* UUserParamManager::GetLibraryEnemyParam() {
    return NULL;
}

uint8 UUserParamManager::GetLibraryEnemyFlag(const int32 ID) const {
    return 0;
}

ULibraryCharacterParam* UUserParamManager::GetLibraryCharaParam() {
    return NULL;
}

int32 UUserParamManager::GetLastTradeShopID() const {
    return 0;
}

int32 UUserParamManager::GetLastShopID() const {
    return 0;
}

int32 UUserParamManager::GetLastAcquisitionTime(const FName& ID) const {
    return 0;
}

int32 UUserParamManager::GetJewelTicketCount() {
    return 0;
}

int32 UUserParamManager::GetItemNum(const FName& ID) const {
    return 0;
}

TArray<FUserItemInfo> UUserParamManager::GetItemList() {
    return TArray<FUserItemInfo>();
}

bool UUserParamManager::GetIsProgressBondsEpisode(EPlayerID& playerId, EPlayerID& TargetID) {
    return false;
}

bool UUserParamManager::GetHasPresentedItemInfoList(EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList, bool includeEvent) {
    return false;
}

HCGameDifficulty UUserParamManager::GetGameDifficulty() {
    return HCGameDifficulty::Easy;
}

EGameClearState UUserParamManager::GetGameClearState() const {
    return EGameClearState::NotClearBoth;
}

bool UUserParamManager::GetGameClear() {
    return false;
}

bool UUserParamManager::GetEula() {
    return false;
}

E_SASKindNative UUserParamManager::GetEquipSAS(E_SASButton Button) const {
    return E_SASKindNative::Fire;
}

UDeepenTheBondsParamManager* UUserParamManager::GetDeepenTheBondsParamManager() {
    return NULL;
}

int32 UUserParamManager::GetClearLapNum() const {
    return 0;
}

bool UUserParamManager::GetCeBank() {
    return false;
}

int32 UUserParamManager::GetBrainTalkBt_ReturnToTheAjito_BeforePlayTime() {
    return 0;
}

int32 UUserParamManager::GetBrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime() {
    return 0;
}

int32 UUserParamManager::GetBrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime() {
    return 0;
}

UBrainMessageParamManager* UUserParamManager::GetBrainMessageParamManager() {
    return NULL;
}

int32 UUserParamManager::GetBondsValue(EPlayerID playerId, EPlayerID TargetID) {
    return 0;
}

int32 UUserParamManager::GetBondsProgress(EPlayerID playerId, EPlayerID TargetID) {
    return 0;
}

int32 UUserParamManager::GetBondsMaxLevel(EPlayerID playerId, EPlayerID TargetID) {
    return 0;
}

int32 UUserParamManager::GetBondsLevel(EPlayerID playerId, EPlayerID TargetID) {
    return 0;
}

float UUserParamManager::GetBondsFValue(EPlayerID playerId, EPlayerID TargetID) {
    return 0.0f;
}

UBattleLogBuffer* UUserParamManager::GetBattleLogBuffer() {
    return NULL;
}

int32 UUserParamManager::GetBattlefieldRandomSeed() const {
    return 0;
}

TMap<FString, FBattlefieldInfo> UUserParamManager::GetBattlefieldInfos() const {
    return TMap<FString, FBattlefieldInfo>();
}

TArray<FName> UUserParamManager::GetAppliedAddContentsNameList() {
    return TArray<FName>();
}

TArray<FName> UUserParamManager::GetAllAddContentsNameList() {
    return TArray<FName>();
}

void UUserParamManager::EndBondsEpisode(bool IsCancel) {
}

void UUserParamManager::DeleteLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::DeleteLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::DeleteLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::DeleteItemKind(const FName& ID) {
}

void UUserParamManager::DeleteItemAll() {
}

void UUserParamManager::ClearWorldmapOpenParamAllFromSelectSenario() {
}

void UUserParamManager::ClearMoneyDirty() {
}

bool UUserParamManager::CheckTeamBondsLevelUp(EPlayerID playerId, int32 ProgressNo) {
    return false;
}

bool UUserParamManager::CheckStartTeamBondsEpisode(EPlayerID playerId, int32& episodeNo) {
    return false;
}

bool UUserParamManager::CheckHaveItemCapacityWithRetNum(const FName& ID, const int32 Num, ECanBeAddedItems& canBeAdded, int32& retNum) {
    return false;
}

bool UUserParamManager::CheckHaveItemCapacity(const FName& ID, const int32 Num) {
    return false;
}

bool UUserParamManager::CheckBondsLevelUp(EPlayerID playerId, EPlayerID TargetID) {
    return false;
}

void UUserParamManager::AppendAppliedAddContentsNameList(FName AddContentName) {
}

bool UUserParamManager::AddWishList(int32 Content) {
    return false;
}

void UUserParamManager::AddTotalSuspendPauseTime(const int32 addTime) {
}

void UUserParamManager::AddSkillPoint(int32 Point) {
}

void UUserParamManager::AddNotifiedNotAppliedAddContentsNameList(FName addName) {
}

bool UUserParamManager::AddMoney(const int32 Value) {
    return false;
}

void UUserParamManager::AddLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::AddLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::AddLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) {
}

void UUserParamManager::AddJewelTicketCount(int32 addCount) {
}

bool UUserParamManager::AddItemNum(const FName& ID, const int32 Num, const bool isUpdateMapUsableItemList_NotUsed, const bool IsDispGetLog, const bool isLogLongDraw) {
    return false;
}

void UUserParamManager::AddClearLapNum() {
}

void UUserParamManager::AddBrainTalkOnceCheck_InSaveData(const EBrainTalkCategory _Category, const FName _ID) {
}

void UUserParamManager::AddBondsValue(EPlayerID playerId, EPlayerID TargetID, int32 Value) {
}

void UUserParamManager::AddBondsFValue(EPlayerID playerId, EPlayerID TargetID, float Value) {
}

UUserParamManager::UUserParamManager() {
    this->m_pCharaParamManage = NULL;
    this->m_worldmapOpenParamM = NULL;
    this->m_worldmapOpenParamF = NULL;
    this->m_questParamManager = NULL;
    this->m_brainMessageParamManager = NULL;
    this->m_loadingTipsParamManager = NULL;
    this->m_optionParam = NULL;
    this->m_purposeMessageParamManager = NULL;
    this->m_libraryEnemyParam = NULL;
    this->m_libraryCharaParam = NULL;
    this->m_presentInfoParam = NULL;
    this->m_tipsCountParamManager = NULL;
    this->m_deepenTheBondsParamManager = NULL;
    this->m_battleLogBuffer = NULL;
    this->m_BrainTalkBt_ReturnToTheAjito_BeforePlayTime = 0;
    this->m_BrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime = 0;
    this->m_BrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime = 0;
    this->m_isForceNewGameFlowFlag = false;
}

