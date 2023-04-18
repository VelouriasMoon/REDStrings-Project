#include "RSGamepadLayout.h"

class URSGamepadEvent;

void URSGamepadLayout::SetEnable() {
}

void URSGamepadLayout::SetDisable() {
}

URSGamepadEvent* URSGamepadLayout::GetKeyEvent(const ERSGamepadInputName InputName) {
    return NULL;
}

URSGamepadLayout::URSGamepadLayout() {
    this->layout = ERSGamepadLayoutType::RAW;
    this->Enabled = true;
}

