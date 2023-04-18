#include "QuestData.h"

class UBondsEpisodeDBAsset;
class UDataTable;
class UMainQuestDBAsset;

bool UQuestData::UnloadDataTable_Sub() {
    return false;
}

bool UQuestData::UnloadDataTable_Main() {
    return false;
}

bool UQuestData::UnloadDataTable_Bonds() {
    return false;
}

bool UQuestData::UnloadDataTable() {
    return false;
}

bool UQuestData::LoadDataAsset_Sub(const FString& dataPath) {
    return false;
}

bool UQuestData::LoadDataAsset_Main(const FString& dataPath) {
    return false;
}

bool UQuestData::LoadDataAsset_Bonds(const FString& dataPath) {
    return false;
}

bool UQuestData::LoadDataAsset(const FString& mainDTPath, const FString& subDTPath, const FString& bondsDTPath) {
    return false;
}

bool UQuestData::IsValidSubDB() const {
    return false;
}

bool UQuestData::IsValidMainDB() const {
    return false;
}

bool UQuestData::IsValidDB() const {
    return false;
}

bool UQuestData::IsValidBondsDB() const {
    return false;
}

int32 UQuestData::GetSubQuestDataNum() const {
    return 0;
}

UDataTable* UQuestData::GetSubQuestData() const {
    return NULL;
}

int32 UQuestData::GetMainQuestDataNum() const {
    return 0;
}

UMainQuestDBAsset* UQuestData::GetMainQuestData() const {
    return NULL;
}

int32 UQuestData::GetBondsEpisodeDataNum() const {
    return 0;
}

UBondsEpisodeDBAsset* UQuestData::GetBondsEpisodeData() const {
    return NULL;
}

UQuestData::UQuestData() {
    this->RefMainDataAsset = NULL;
    this->RefSubDataAsset = NULL;
    this->RefBondsDataAsset = NULL;
    this->finderMain = NULL;
    this->MainQuestDataAsset = NULL;
    this->BondsQuestDataAsset = NULL;
}

