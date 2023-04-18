#include "REDWidgetUtility.h"
#include "Templates/SubclassOf.h"

class UHorizontalBox;
class UImage;
class UInvalidationBox;
class UObject;
class UOverlay;
class USpacer;
class UTextBlock;
class UUserWidget;
class UWidget;

void UREDWidgetUtility::SetCurrentLocationAreaName(const UObject* WorldObject, int32 LocationNo, int32 AreaNo) {
}

void UREDWidgetUtility::ProjectWorldToScreen2(const UObject* WorldContextObject, const FVector& WorldPosition, FVector2D& ScreenPosition) {
}

bool UREDWidgetUtility::isYuitoMode(const UObject* WorldContextObject) {
    return false;
}

bool UREDWidgetUtility::isSpoiler(const UObject* WorldContextObject, const FName& ItemId) {
    return false;
}

bool UREDWidgetUtility::isPlayingVisionSimulator(const UObject* WorldContextObject) {
    return false;
}

bool UREDWidgetUtility::isManualDrive(const UObject* WorldContextObject) {
    return false;
}

bool UREDWidgetUtility::isEnableNexusDrive(const UObject* WorldContextObject) {
    return false;
}

bool UREDWidgetUtility::isEnableKarenEpisode(const UObject* WorldContextObject) {
    return false;
}

bool UREDWidgetUtility::isEnableCrashVision(const UObject* WorldContextObject) {
    return false;
}

void UREDWidgetUtility::GetViewportOffset(const UObject* WorldContextObject, FVector2D absolutePosition, FVector2D& calcOffset) {
}

void UREDWidgetUtility::GetScreenOffsetReverse(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset) {
}

void UREDWidgetUtility::GetScreenOffset(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset) {
}

FVector2D UREDWidgetUtility::GetRelativePositionVector2D(UWidget* Widget) {
    return FVector2D{};
}

void UREDWidgetUtility::GetRelativePosition(UWidget* Widget, float& X, float& Y) {
}

EPlayerID UREDWidgetUtility::getMainPlayerID(const UObject* WorldContextObject) {
    return EPlayerID::Invalid;
}

UInvalidationBox* UREDWidgetUtility::GetFirstInvalidationBox(UUserWidget* Widget) {
    return NULL;
}

void UREDWidgetUtility::GetDesiredSizeWithPrepass(UWidget* Widget, float& Width, float& Height) {
}

void UREDWidgetUtility::GetAbsoluteScreenOfffset(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset) {
}

FVector2D UREDWidgetUtility::GetAbsolutePositionVector2D(UWidget* Widget) {
    return FVector2D{};
}

void UREDWidgetUtility::GetAbsolutePosition(UWidget* Widget, float& X, float& Y) {
}

void UREDWidgetUtility::CreateWidgetRED(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, UUserWidget*& Output) {
}

void UREDWidgetUtility::CopyTextBlockProperty(UTextBlock* Source, UTextBlock* Dest) {
}

void UREDWidgetUtility::CopySpacerProperty(USpacer* Source, USpacer* Dest) {
}

void UREDWidgetUtility::CopySlotProperty(UWidget* Source, UWidget* Dest) {
}

void UREDWidgetUtility::CopyOverlayProperty(UOverlay* Source, UOverlay* Dest) {
}

void UREDWidgetUtility::CopyImageProperty(UImage* Source, UImage* Dest) {
}

void UREDWidgetUtility::CopyHorizontalBoxProperty(UHorizontalBox* Source, UHorizontalBox* Dest) {
}

void UREDWidgetUtility::ConvertImagePathPlatformName(UImage* Image) {
}

void UREDWidgetUtility::ConvertButtonIconPlatform(UImage* Image) {
}

void UREDWidgetUtility::ClearFontAtlas() {
}

UREDWidgetUtility::UREDWidgetUtility() {
}

