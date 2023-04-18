#include "HelpTutorialData.h"

class UHelpTutorialDBAsset;

bool UHelpTutorialData::LoadDataAsset(const FString& dtPath) {
    return false;
}

bool UHelpTutorialData::GetTutorialDataIndexFromAsset(FName TutorialID, int32& DataIndex) {
    return false;
}

bool UHelpTutorialData::GetTutorialDataCellFromAsset(FName TutorialID, FTutorialDBDataCell& returnCell) {
    return false;
}

void UHelpTutorialData::GetTutorialDataAsset(TMap<FName, FTutorialDBDataCell>& returnTutorialMap) {
}

bool UHelpTutorialData::GetMiniHelpDataIndexFromAsset(EHelpTutorial helpID, int32& DataIndex) {
    return false;
}

bool UHelpTutorialData::GetMiniHelpDataCellFromAsset(EHelpTutorial helpID, FMiniHelpRowDataCell& returnCell) {
    return false;
}

void UHelpTutorialData::GetMiniHelpDataAsset(TMap<EHelpTutorial, FMiniHelpRowDataCell>& returnMiniHelpMap) {
}

UHelpTutorialDBAsset* UHelpTutorialData::GetHelpTutorialDataAsset() {
    return NULL;
}

bool UHelpTutorialData::GetHelpDataIndexFromAsset(EHelpTutorial helpID, int32& DataIndex) {
    return false;
}

bool UHelpTutorialData::GetHelpDataCellFromAsset(EHelpTutorial helpID, FHelpDBDataCell& returnCell) {
    return false;
}

void UHelpTutorialData::GetHelpDataAsset(TMap<EHelpTutorial, FHelpDBDataCell>& returnHelpMap) {
}

UHelpTutorialData::UHelpTutorialData() {
    this->helptutorialDataAsset_ = NULL;
}

