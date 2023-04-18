#include "UITutoTipsParts.h"

class UTextBlock;
class UTexture2D;
class UUIHelpParts;
class UWidgetAnimation;

void UUITutoTipsParts::TextureRelease() {
}


void UUITutoTipsParts::SetVisiblePageUI(bool Flag) {
}

void UUITutoTipsParts::setPageText(const FString& MainText, const FString& TitleText, int32 pageNo, int32 pageMax) {
}

void UUITutoTipsParts::setImageType(const FString& NewPathname, EHelpImageType NewImageType) {
}

UTexture2D* UUITutoTipsParts::LoadTipsTexture(const FString& Path) {
    return NULL;
}



bool UUITutoTipsParts::isLoadFailure() {
    return false;
}

bool UUITutoTipsParts::isLoad() {
    return false;
}

void UUITutoTipsParts::InitializeText(UTextBlock* textTitle, UTextBlock* TextMain, UTextBlock* textPage1, UTextBlock* textPage2, UTextBlock* textSlash) {
}


void UUITutoTipsParts::InitializeArrow(int32 Index, UUIHelpParts* arrow) {
}

void UUITutoTipsParts::InitializeAnime(UWidgetAnimation* default1_, UWidgetAnimation* default2_, UWidgetAnimation* default_none) {
}

UUITutoTipsParts::UUITutoTipsParts() {
    this->bMovieStopFlag = false;
    this->ImageType = EHelpImageType::None;
    this->Load = false;
    this->Failure = false;
    this->PlaySelect = TutoMoviePlayType::Invalid;
}

