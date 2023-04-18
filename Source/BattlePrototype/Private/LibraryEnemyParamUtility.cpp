#include "LibraryEnemyParamUtility.h"

class UObject;

bool ULibraryEnemyParamUtility::OpenEnemyLibray(const UObject* WorldContextObject, FName EnemyId) {
    return false;
}

bool ULibraryEnemyParamUtility::GetLibraryDataFromLibraryID(const UObject* WorldContextObject, FLibraryEnemyDataCell& Data, FName libraryID, bool isDebugOpen) {
    return false;
}

bool ULibraryEnemyParamUtility::GetLibraryData(const UObject* WorldContextObject, FLibraryEnemyDataCell& Data, FName EnemyId, bool isDebugOpen) {
    return false;
}

void ULibraryEnemyParamUtility::GetItemDroppingEnemyList(const UObject* WorldContextObject, FName ItemId, TArray<FName>& outEnemyList) {
}

int32 ULibraryEnemyParamUtility::GetImageVariationNum(const UObject* WorldContextObject, FName EnemyId, bool isDebugOpen) {
    return 0;
}

void ULibraryEnemyParamUtility::EnemyLibraryUpdateIncKillNum(const UObject* WorldContextObject, FName EnemyId) {
}

void ULibraryEnemyParamUtility::EnemyLibraryUpdateGetDropItem(const UObject* WorldContextObject, FName EnemyId, FName ItemId) {
}

bool ULibraryEnemyParamUtility::EnemyLibraryOnFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

bool ULibraryEnemyParamUtility::EnemyLibraryOffFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

bool ULibraryEnemyParamUtility::EnemyLibraryIsOpenLibrary(const UObject* WorldContextObject, FName EnemyId) {
    return false;
}

bool ULibraryEnemyParamUtility::EnemyLibraryCheckFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

ULibraryEnemyParamUtility::ULibraryEnemyParamUtility() {
}

