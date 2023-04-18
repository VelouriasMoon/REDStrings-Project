#include "FlagManagerUtility.h"

class UObject;

void UFlagManagerUtility::SystemSaveDataCommonFlagOn(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type) {
}

void UFlagManagerUtility::SystemSaveDataCommonFlagOff(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type) {
}

bool UFlagManagerUtility::SystemSaveDataCommonFlagCheck(const UObject* WorldContextObject, ESystemSaveDataCommonFlag Type) {
    return false;
}

void UFlagManagerUtility::SetContentsOpened(const UObject* WorldContextObject, EContentsOpening Type) {
}

void UFlagManagerUtility::SetContentsClosed(const UObject* WorldContextObject, EContentsOpening Type) {
}

void UFlagManagerUtility::SetAllContentsOpened(const UObject* WorldContextObject) {
}

void UFlagManagerUtility::OperationRestrictionFlagOn(const UObject* WorldContextObject, EOperationRestriction Type) {
}

void UFlagManagerUtility::OperationRestrictionFlagOff(const UObject* WorldContextObject, EOperationRestriction Type) {
}

bool UFlagManagerUtility::IsContentsOpened(const UObject* WorldContextObject, EContentsOpening Type) {
    return false;
}

void UFlagManagerUtility::InitializeFlagManager(const UObject* WorldContextObject) {
}

void UFlagManagerUtility::HelpGetFlagOn(const UObject* WorldContextObject, EHelpTutorial Type) {
}

void UFlagManagerUtility::HelpGetFlagOff(const UObject* WorldContextObject, EHelpTutorial Type) {
}

bool UFlagManagerUtility::HelpGetFlagCheck(const UObject* WorldContextObject, EHelpTutorial Type) {
    return false;
}

void UFlagManagerUtility::EnemyLibraryNewFlagOn(const UObject* WorldContextObject, FName ID) {
}

bool UFlagManagerUtility::CheckOperationRestrictionFlag(const UObject* WorldContextObject, EOperationRestriction Type) {
    return false;
}

void UFlagManagerUtility::CharaLibraryNewFlagOn(const UObject* WorldContextObject, FName ID) {
}

void UFlagManagerUtility::CharaLibraryNewFlagOff(const UObject* WorldContextObject, ELibraryFlagType Index) {
}

UFlagManagerUtility::UFlagManagerUtility() {
}

