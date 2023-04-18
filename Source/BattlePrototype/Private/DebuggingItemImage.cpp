#include "DebuggingItemImage.h"

class ADebuggingItemBase;
class UTexture;

void ADebuggingItemImage::SetStringIndex(int32 InIndex) {
}

void ADebuggingItemImage::SetImage(UTexture* Texture) {
}

void ADebuggingItemImage::OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

void ADebuggingItemImage::OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed) {
}

int32 ADebuggingItemImage::GetStringIndex() const {
    return 0;
}

ADebuggingItemImage::ADebuggingItemImage() {
    this->Image = NULL;
    this->Index = 0;
}

