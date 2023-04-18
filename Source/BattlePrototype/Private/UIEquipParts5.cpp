#include "UIEquipParts5.h"

class UREDScrollBox;
class UUserWidget;

int32 UUIEquipParts5::TextCompare(FText Text1, FText Text2) const {
    return 0;
}

int32 UUIEquipParts5::StringCompare(const FString& String1, const FString& String2) const {
    return 0;
}

void UUIEquipParts5::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIEquipParts5::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

bool UUIEquipParts5::isUpdateEquipListMouseFocus(int32& cursorIndex) {
    return false;
}

void UUIEquipParts5::InitializeList(UREDScrollBox* ScrollBox) {
}


UUIEquipParts5::UUIEquipParts5() {
    this->FlagManager = NULL;
}

