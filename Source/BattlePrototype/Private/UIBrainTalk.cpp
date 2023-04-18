#include "UIBrainTalk.h"

class UAtomComponent;
class UImage;
class UMaterialInstanceConstant;
class UTextBlock;
class UWidgetAnimation;

void UUIBrainTalk::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIBrainTalk::StopBrainTalkVoice() {
}


void UUIBrainTalk::SetIsVoicePlayWait(bool Flag) {
}

void UUIBrainTalk::SetBugMode(bool isBug) {
}

void UUIBrainTalk::SetBrainTalkMessage(int32 characterId, int32 ExpressionID, const FString& Message, UAtomComponent* NewVoice, float DrawSecond, const bool isReserve) {
}

void UUIBrainTalk::PlayBrainTalkVoice() {
}

void UUIBrainTalk::PauseBrainTalkVoice(const bool IsPause) {
}

void UUIBrainTalk::IsEndTalk(bool& IsEnd) {
}

void UUIBrainTalk::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animDefault2, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textBrainTalk, UImage* iconFont, UImage* faceB, UMaterialInstanceConstant* materialFontNormal, UMaterialInstanceConstant* materialFontNoize) {
}


UUIBrainTalk::UUIBrainTalk() {
    this->Voice = NULL;
    this->m_isVoicePlayWait = false;
}

