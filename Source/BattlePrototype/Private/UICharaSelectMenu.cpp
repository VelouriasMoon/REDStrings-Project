#include "UICharaSelectMenu.h"

class ARSTitleManager;
class UBorder;
class UREDImage;
class UTextBlock;
class UUICharaSelectParts;
class UUIGuide;
class UWidgetAnimation;

void UUICharaSelectMenu::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUICharaSelectMenu::Start(ECharaSelectType Type) {
}

void UUICharaSelectMenu::SetTitleManager(ARSTitleManager* ptitlemanager) {
}

void UUICharaSelectMenu::SetScenarioCrear(bool yuito, bool kasane) {
}


void UUICharaSelectMenu::InitializeParts(int32 Index, UUICharaSelectParts* charaparts) {
}

void UUICharaSelectMenu::InitializeCharaSelect(UUIGuide* uGuide, UTextBlock* charaselectguide, UTextBlock* charatext, UTextBlock* CharaName, UTextBlock* characlear, UBorder* clearborder, UREDImage* mouse_yuito_hit, UREDImage* mouse_kasane_hit, UREDImage* mouse_yuito_hit2, UREDImage* mouse_kasane_hit2) {
}

void UUICharaSelectMenu::InitializeAnime(UWidgetAnimation* in_anime, UWidgetAnimation* default_anime, UWidgetAnimation* default_none_anime, UWidgetAnimation* out_anime, UWidgetAnimation* in_yuito_anime, UWidgetAnimation* default_yuito_anime, UWidgetAnimation* decision_yuito_anime, UWidgetAnimation* out_yuito_anime, UWidgetAnimation* in_kasane_anime, UWidgetAnimation* default_kasane_anime, UWidgetAnimation* decision_kasane_anime, UWidgetAnimation* on_kasane_anime) {
}

bool UUICharaSelectMenu::GetDecideScenario() {
    return false;
}

int32 UUICharaSelectMenu::GetCursor() {
    return 0;
}

UUICharaSelectMenu::UUICharaSelectMenu() {
    this->m_pTitleManager = NULL;
    this->UserParamManager = NULL;
    this->DatabaseManager = NULL;
}

