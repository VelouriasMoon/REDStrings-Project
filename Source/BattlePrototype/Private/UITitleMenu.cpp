#include "UITitleMenu.h"

class ARSTitleManager;
class UImage;
class UTextBlock;
class UUIScarletLogo;
class UUITitleMenuParts;
class UWidgetAnimation;

void UUITitleMenu::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUITitleMenu::Start(bool isStartMenu) {
}

void UUITitleMenu::SetTitleManager(ARSTitleManager* ptitlemanager) {
}

void UUITitleMenu::SetTitleLogoWidget(UUIScarletLogo* titlelogowidget) {
}

void UUITitleMenu::OpenSelectMenu() {
}

void UUITitleMenu::OpenLogoBP() {
}

void UUITitleMenu::OpenFirstPressMenu() {
}

bool UUITitleMenu::isFirstDecideCheck() {
    return false;
}

void UUITitleMenu::InitializeXboxOne(UTextBlock* UserName) {
}

void UUITitleMenu::InitializeTitleParts(int32 Index, UUITitleMenuParts* titleparts) {
}

void UUITitleMenu::InitializeTitleLogo(UImage* titlelogoimage) {
}

void UUITitleMenu::InitializeText(UTextBlock* pressstart, UTextBlock* titlever, UTextBlock* titlecopyright) {
}

void UUITitleMenu::InitializeAnime(UWidgetAnimation* _press_start_out_first, UWidgetAnimation* _press_start_in_first, UWidgetAnimation* _press_start_default_first, UWidgetAnimation* _press_start_out, UWidgetAnimation* _press_start_in, UWidgetAnimation* _press_start_default_none, UWidgetAnimation* _press_start_default_, UWidgetAnimation* _start_menu_in, UWidgetAnimation* _start_menu_default, UWidgetAnimation* _start_menu_decision, UWidgetAnimation* _change_press_start, UWidgetAnimation* _start_menu_select_in) {
}

bool UUITitleMenu::GetMoviePlayFlag() {
    return false;
}

UUITitleMenu::UUITitleMenu() {
    this->TitleUserTag = NULL;
    this->UserParamManager = NULL;
    this->DatabaseManager = NULL;
    this->m_pTitleManager = NULL;
    this->MessageHudManager = NULL;
    this->m_pPlayerController = NULL;
    this->m_pHudBase = NULL;
}

