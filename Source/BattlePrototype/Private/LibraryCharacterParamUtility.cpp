#include "LibraryCharacterParamUtility.h"

class UObject;

bool ULibraryCharacterParamUtility::OpenCharacterLibray(const UObject* WorldContextObject, FName libName) {
    return false;
}

int32 ULibraryCharacterParamUtility::CheckLibraryOpenByProgresNo(const UObject* WorldContextObject, int32 ProgressNo) {
    return 0;
}

bool ULibraryCharacterParamUtility::CharaLibraryOnFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

bool ULibraryCharacterParamUtility::CharaLibraryOffFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

bool ULibraryCharacterParamUtility::CharaLibraryCheckFlag(const UObject* WorldContextObject, ELibraryFlagType FlagNo) {
    return false;
}

ULibraryCharacterParamUtility::ULibraryCharacterParamUtility() {
}

