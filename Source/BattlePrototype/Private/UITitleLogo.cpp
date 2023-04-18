#include "UITitleLogo.h"

class UImage;
class UUIGamerTag;
class UWidgetAnimation;

void UUITitleLogo::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUITitleLogo::SetUserTagWidget(UUIGamerTag* UserTag) {
}

void UUITitleLogo::InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault, UImage* imageLogo) {
}

UUITitleLogo::UUITitleLogo() {
    this->TextureLogo[0] = NULL;
    this->TextureLogo[1] = NULL;
    this->TextureLogo[2] = NULL;
    this->TextureLogo[3] = NULL;
    this->TextureLogo[4] = NULL;
    this->TextureLogo[5] = NULL;
    this->m_UserTag = NULL;
    this->m_pRSHudBase = NULL;
    this->m_pSaveGameSystem = NULL;
    this->m_pSaveLoadSystemParamManager = NULL;
}

