#include "HorizonDialogueMsgTextBlock.h"

void UHorizonDialogueMsgTextBlock::StopDialogue() {
}

void UHorizonDialogueMsgTextBlock::StartDialogue() {
}

void UHorizonDialogueMsgTextBlock::SkipDialogue() {
}

void UHorizonDialogueMsgTextBlock::SkipCurrentDialoguePage() {
}

void UHorizonDialogueMsgTextBlock::SkipCurrentDialogueMsgPageTick() {
}

void UHorizonDialogueMsgTextBlock::SetTextAndRebuildDialogue(const FText& InText) {
}

void UHorizonDialogueMsgTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UHorizonDialogueMsgTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UHorizonDialogueMsgTextBlock::SetOpacity(float InOpacity) {
}

void UHorizonDialogueMsgTextBlock::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UHorizonDialogueMsgTextBlock::SetIsStartTickDialogueMsg(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetIsRepeatDialogueMsg(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetIsDialogueMsgText(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetIsAutoNextDialogueMsgPage(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetFontSize(int32 FontSize) {
}

void UHorizonDialogueMsgTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UHorizonDialogueMsgTextBlock::SetDialogueMsgPage(int32 InPageIndex) {
}

void UHorizonDialogueMsgTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UHorizonDialogueMsgTextBlock::SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate) {
}

void UHorizonDialogueMsgTextBlock::ResumeDialogue() {
}

void UHorizonDialogueMsgTextBlock::RequestRebuildDialogue() {
}

void UHorizonDialogueMsgTextBlock::PauseDialogue() {
}

void UHorizonDialogueMsgTextBlock::NextDialogueMsgPage() {
}

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgPageEnd() {
    return false;
}

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgCompleted() {
    return false;
}

int32 UHorizonDialogueMsgTextBlock::GetTextLength() {
    return 0;
}

FText UHorizonDialogueMsgTextBlock::GetText() const {
    return FText::GetEmpty();
}

FText UHorizonDialogueMsgTextBlock::GetPageTextByIndex(int32 PageIndex) {
    return FText::GetEmpty();
}

TEnumAsByte<ETextJustify::Type> UHorizonDialogueMsgTextBlock::GetJustification() const {
    return ETextJustify::Left;
}

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageTextLength() {
    return 0;
}

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageIndex() {
    return 0;
}

UHorizonDialogueMsgTextBlock::UHorizonDialogueMsgTextBlock() {
    this->TextOverFlowWarpMethod = EHorizonDialogueTextOverflowWarpMethod::Normal;
    this->DialogueMsgSpeed = 0.01f;
    this->bIsStartTickDialogueMsg = false;
    this->bIsRepeatDialogueMsg = false;
    this->RepeatDialogueMsgInterval = 1.00f;
    this->bIsDialogueMsgText = false;
    this->bIsAutoNextDialogueMsgPage = true;
    this->AutoNextDialogueMsgPageIntervalRate = 0.01f;
    this->AutoNextDialogueMsgPageIntervalMin = 1.00f;
    this->AutoNextDialogueMsgPageIntervalMax = 10.00f;
    this->bIgnoreTimeDilation = false;
    this->CustomTimeDilation = 1.00f;
    this->bIsRichText = true;
    this->Justification = ETextJustify::Left;
    this->DefaultButtonStyleWidgetClass = NULL;
}

