#include "MessageViewerBase.h"

void AMessageViewerBase::CreateLabelList(const FString& dispName) {
}

void AMessageViewerBase::CreateFileListBySetting(ETextLanguage Language, FName Setting) {
}

AMessageViewerBase::AMessageViewerBase() {
    this->CurrentLanguage = ETextLanguage::English;
}

