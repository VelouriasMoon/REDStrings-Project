#include "RSCvManager.h"

class URSAtomComponentBase;
class USceneComponent;
class USoundAtomCue;
class USoundAtomCueSheet;





URSAtomComponentBase* URSCvManager::PlayVoice(USoundAtomCue* Sound, bool isAttache, bool isAutoActivate, USceneComponent* AttachToComponent, FName AttachPointName, EFilterCallbackType filterCallbackType) {
    return NULL;
}









USoundAtomCueSheet* URSCvManager::GetFitLanguageCueSheetFromCueSheetManager(USoundAtomCue* Sound) {
    return NULL;
}

FString URSCvManager::GetCueSheetNameFromCueSheet(USoundAtomCueSheet* CueSheet) {
    return TEXT("");
}

FString URSCvManager::GetCueSheetName(USoundAtomCue* Cue) {
    return TEXT("");
}



URSCvManager::URSCvManager() {
    this->m_pSoundManager = NULL;
    this->m_pCueSheetManager = NULL;
    this->m_playingEventType = EPlayingEventType::Main;
    this->m_isInit = false;
    this->m_isTitle = false;
}

