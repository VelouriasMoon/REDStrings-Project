#include "REDUserTextWidget.h"

class UImage;
class UObject;
class UTextBlock;
class UWidget;

void UREDUserTextWidget::setStringSlotVersion(int32 StringIndex, const FString& String) {
}

void UREDUserTextWidget::setString(int32 StringIndex, const FString& String, bool bIsAnalyzeTag) {
}

void UREDUserTextWidget::setApplyGeometryScale(bool isApply) {
}

void UREDUserTextWidget::resetString() {
}

void UREDUserTextWidget::moveAll(int32 StringIndex, float fMoveX, float fMoveY) {
}

void UREDUserTextWidget::initializeStringForKeyGuide(int32 StringIndex, int32 guideNum, UTextBlock* baseTextBlock, UImage* baseIconFont) {
}

void UREDUserTextWidget::initializeString(int32 StringIndex, UTextBlock* baseTextBlock, int32 textBlockNum, UImage* baseIconFont, int32 iconFontNum, bool isUseRuby) {
}

void UREDUserTextWidget::getTextRectLight(int32 StringIndex, FVector4& rect) {
}

void UREDUserTextWidget::getTextRect(int32 StringIndex, FVector4& rect) {
}

UWidget* UREDUserTextWidget::getRootWidget() const {
    return NULL;
}

float UREDUserTextWidget::getGeometryScale() {
    return 0.0f;
}

FVector2D UREDUserTextWidget::getDefaultViewportSize() const {
    return FVector2D{};
}

UTextBlock* UREDUserTextWidget::getBaseTextBlock(int32 StringIndex) const {
    return NULL;
}

void UREDUserTextWidget::destroy(int32 StringIndex) {
}

void UREDUserTextWidget::clearString(int32 StringIndex) {
}

void UREDUserTextWidget::changeRubyProperty(int32 StringIndex, float rubySizeRate, float rubyAdjustY) {
}

void UREDUserTextWidget::changeFont(int32 StringIndex, UObject* Font) {
}

void UREDUserTextWidget::applyTextFormatFromBase(int32 StringIndex) {
}

UREDUserTextWidget::UREDUserTextWidget() : UUserWidget(FObjectInitializer::Get()) {
}

