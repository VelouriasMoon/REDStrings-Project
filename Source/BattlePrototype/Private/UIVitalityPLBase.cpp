#include "UIVitalityPLBase.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

void UUIVitalityPLBase::SetName(EPlayerID CharaID) {
}

void UUIVitalityPLBase::InitializeThisParam(UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UTextBlock* textPlayerName, UTextBlock* _textMaxHP, UTextBlock* _textCurrentHP) {
}

void UUIVitalityPLBase::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageIcon1, UImage* imageIcon2, UImage* imageIcon3, UImage* imageIcon4, UImage* imageIcon5, UImage* imageBarNormal, UImage* imageBarOverride, UImage* imageBarAdd, UTextBlock* textPlayerName, UTextBlock* _textMaxHP, UTextBlock* _textCurrentHP) {
}


UUIVitalityPLBase::UUIVitalityPLBase() {
    this->WaveDesignerDataAsset = NULL;
    this->gaugeWidth_ = 0.00f;
}

