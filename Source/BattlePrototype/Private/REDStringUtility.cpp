#include "REDStringUtility.h"

class UImage;
class UObject;
class UTextBlock;

void UREDStringUtility::SetActionTagSingleBIG_SupportUesKey(UObject* pWorld, UImage* iconImage, const FString& ActionName, ERSGamepadInputName InputName) {
}

void UREDStringUtility::SetActionTagSingleBIG(UObject* pWorld, UImage* iconImage, const FString& ActionName) {
}

void UREDStringUtility::SetActionTagSingle(UObject* pWorld, UImage* iconImage, const FString& ActionName) {
}

void UREDStringUtility::ReplaceOneCharacter(FString& String, int32 Index, const FString& To) {
}

bool UREDStringUtility::isFullCharacter(ETextLanguage Language) {
    return false;
}

ETextLanguage UREDStringUtility::IncrementTextLanguageEnum(ETextLanguage oldLanguage) {
    return ETextLanguage::Japanese;
}

FString UREDStringUtility::GetTextLanguageName(ETextLanguage Language) {
    return TEXT("");
}

FString UREDStringUtility::GetStringWithoutREDTag(UObject* WorldObject, const FString& Source) {
    return TEXT("");
}

FLinearColor UREDStringUtility::GetFontColor(ETextColor TextColor) {
    return FLinearColor{};
}

FString UREDStringUtility::getDateString(int32 Year, int32 Month, int32 Day) {
    return TEXT("");
}

ETextLanguage UREDStringUtility::GetCurrentTextLanguageEnum() {
    return ETextLanguage::Japanese;
}

ETextLanguage UREDStringUtility::DecrementTextLanguageEnum(ETextLanguage oldLanguage) {
    return ETextLanguage::Japanese;
}

void UREDStringUtility::AutoScale(UTextBlock* TextBlock, float Width) {
}

UREDStringUtility::UREDStringUtility() {
}

