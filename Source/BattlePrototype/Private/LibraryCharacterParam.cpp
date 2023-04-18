#include "LibraryCharacterParam.h"

class URSGameInstance;

void ULibraryCharacterParam::OpenCharLib(FName libName) {
}

void ULibraryCharacterParam::OnFlag(ELibraryFlagType FlagNo) {
}

void ULibraryCharacterParam::OffFlag(ELibraryFlagType FlagNo) {
}

void ULibraryCharacterParam::InitData(URSGameInstance* NewGameInstance) {
}

void ULibraryCharacterParam::GetTwoShotPairList(TArray<FTwoShotPair>& List) {
}

void ULibraryCharacterParam::GetTwoshotCheckFlagList(TArray<ELibraryFlagType>& List) {
}

bool ULibraryCharacterParam::GetLibraryTwoShotPhotos(TArray<FString>& Data, FName CharaID, bool isDebugOpen) {
    return false;
}

bool ULibraryCharacterParam::GetLibraryData(FLibraryCharaDataCell& Data, FName CharaID, bool isDebugOpen) {
    return false;
}

int32 ULibraryCharacterParam::GetDBKeys(TArray<FName>& dst) {
    return 0;
}

void ULibraryCharacterParam::CloseCharLib(FName libName) {
}

int32 ULibraryCharacterParam::CheckLibraryOpenByProgresNo(int32 ProgressNo) {
    return 0;
}

bool ULibraryCharacterParam::CheckFlag(ELibraryFlagType FlagNo) const {
    return false;
}

ULibraryCharacterParam::ULibraryCharacterParam() {
    this->DataTable = NULL;
    this->GameInstance = NULL;
}

