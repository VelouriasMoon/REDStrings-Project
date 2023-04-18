#include "SoundCueSheetManager.h"

class USoundAtomCue;
class USoundAtomCueSheet;

bool USoundCueSheetManager::UnregisterFromSoftRef(TSoftObjectPtr<USoundAtomCueSheet> SheetSoftRef) {
    return false;
}

bool USoundCueSheetManager::UnregisterFromPath(const FString& Path) {
    return false;
}

bool USoundCueSheetManager::Unregister(USoundAtomCueSheet* Sheet) {
    return false;
}

bool USoundCueSheetManager::RegisterFromSoftRef(TSoftObjectPtr<USoundAtomCueSheet> SheetSoftRef) {
    return false;
}

bool USoundCueSheetManager::RegisterFromPath(const FString& Path) {
    return false;
}

bool USoundCueSheetManager::Register(USoundAtomCueSheet* Sheet) {
    return false;
}

USoundAtomCueSheet* USoundCueSheetManager::GetCueSheetByName(const FString& CueSheetName) {
    return NULL;
}

USoundAtomCue* USoundCueSheetManager::GetAtomCueByLoadedCueSheetFromString(const FString& CueName) {
    return NULL;
}

USoundAtomCue* USoundCueSheetManager::GetAtomCueByLoadedCueSheet(TSoftObjectPtr<USoundAtomCue> AtomCueSoftRef, TSoftObjectPtr<USoundAtomCueSheet> PreferenceCueSheetSoftRef) {
    return NULL;
}

USoundCueSheetManager::USoundCueSheetManager() {
}

