#include "DatabaseManager.h"

class UBrainMessageData;
class UClearGetterData;
class UDataTable;
class UDetailedMapData;
class UEnemyDropData;
class UHelpTutorialData;
class UItemData;
class ULibraryCharaData;
class ULibraryEnemyData;
class ULoadTipsData;
class UMessageData;
class UPresentData;
class UQuestData;
class UShowDestinationData;
class UTradeItemData;

void UDatabaseManager::UnloadTextAll() {
}

bool UDatabaseManager::UnloadText(ETextType TextType) {
    return false;
}

void UDatabaseManager::UnloadMessageAll() {
}

bool UDatabaseManager::UnloadMessage(const FString& TableName) {
    return false;
}

void UDatabaseManager::PreLoadAllVoiceLast(const FString& TableName) {
}

bool UDatabaseManager::LoadTextFromPath(ETextType TextType, const FString& FilePath) {
    return false;
}

bool UDatabaseManager::LoadResidentMessageData() {
    return false;
}

bool UDatabaseManager::LoadMessageFromPath(const FString& TableName, const FString& FilePath) {
    return false;
}

bool UDatabaseManager::LoadMessageFromDataTable(const FString& TableName, UDataTable* DataTable) {
    return false;
}

bool UDatabaseManager::LoadMessage(const FString& TableName, UDataTable* DataTable) {
    return false;
}

bool UDatabaseManager::LoadAndAppendMessageFromPath(const FString& TableName, const FString& FilePath) {
    return false;
}

bool UDatabaseManager::IsFinishBrainTalkLoad() const {
    return false;
}

void UDatabaseManager::Initialize_Implementation() {
}

FString UDatabaseManager::GetWhoSpeak(const FString& DisplayName) {
    return TEXT("");
}

UTradeItemData* UDatabaseManager::GetTradeItemData() {
    return NULL;
}

FString UDatabaseManager::GetText(ETextType TextType, FName ID) {
    return TEXT("");
}

void UDatabaseManager::GetSpeakerData(FName RowName, FMessageDataCell& NewSpeakerData) {
}

UShowDestinationData* UDatabaseManager::GetShowDestinationData() {
    return NULL;
}

UQuestData* UDatabaseManager::GetQuestData() {
    return NULL;
}

UPresentData* UDatabaseManager::GetPresentData() {
    return NULL;
}

TArray<EPlayerID> UDatabaseManager::GetPlayerSortList(EPlayerID mainID) {
    return TArray<EPlayerID>();
}

bool UDatabaseManager::GetMessageData(FMessageDataCell& MessageDataCell, const FString& TableName, const FString& ID) {
    return false;
}

ULoadTipsData* UDatabaseManager::GetLoadTipsData() {
    return NULL;
}

ULibraryEnemyData* UDatabaseManager::GetLibraryEnemyData() {
    return NULL;
}

ULibraryCharaData* UDatabaseManager::GetLibraryCharaData() {
    return NULL;
}

float UDatabaseManager::GetItemFavorabilityParam(EItemFavorability favorability, bool IsFirstTime) {
    return 0.0f;
}

FString UDatabaseManager::GetItemDataName(FName ID) {
    return TEXT("");
}

FString UDatabaseManager::GetItemDataDescription(FName ID) {
    return TEXT("");
}

UItemData* UDatabaseManager::GetItemData() {
    return NULL;
}

UHelpTutorialData* UDatabaseManager::GetHelpTutorialData() {
    return NULL;
}

UEnemyDropData* UDatabaseManager::GetEnemyDropData() {
    return NULL;
}

UDetailedMapData* UDatabaseManager::GetDetailedMapData() {
    return NULL;
}

UClearGetterData* UDatabaseManager::GetClearGetterData() {
    return NULL;
}

UBrainMessageData* UDatabaseManager::GetBrainMessageData() {
    return NULL;
}

UMessageData* UDatabaseManager::FindMessageData(const FString& TableName) {
    return NULL;
}

void UDatabaseManager::BT_LoadCategoryDatatable() {
}

void UDatabaseManager::BT_BrainTalkLoadWork() {
}

void UDatabaseManager::BT_BrainTalkAsyncLoadStart() {
}

bool UDatabaseManager::BT_BrainTalkAsyncLoadExec() {
    return false;
}

UDatabaseManager::UDatabaseManager() {
    this->m_pGameInstance = NULL;
    this->m_CharaSortListM.AddDefaulted(10);
    this->m_CharaSortListF.AddDefaulted(10);
}

