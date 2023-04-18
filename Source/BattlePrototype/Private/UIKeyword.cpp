#include "UIKeyword.h"

class UEditableText;
class UTextBlock;
class UWidgetAnimation;

void UUIKeyword::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIKeyword::textEnter(FText text) {
}

void UUIKeyword::textChange(FText text) {
}

void UUIKeyword::textCancel() {
}


bool UUIKeyword::IsCancel() const {
    return false;
}

void UUIKeyword::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textDescription, UTextBlock* textKeyword, UTextBlock* textInformation, UEditableText* textEdit) {
}

FString UUIKeyword::getResult() const {
    return TEXT("");
}

UUIKeyword::UUIKeyword() {
}

