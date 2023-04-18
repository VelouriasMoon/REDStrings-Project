#include "RSGamepadEvent.h"

URSGamepadEvent::URSGamepadEvent() {
    this->RawOn = false;
    this->IsOn = false;
    this->IsOnTrigger = false;
    this->IsOnRepTrigger = false;
    this->IsOffTrigger = false;
    this->AxisValue = 0.00f;
    this->AxisMouseWheelValue = 0.00f;
    this->Timer = 0.00f;
    this->RepeatSec = 0.08f;
    this->FirstRepeatSec = 0.30f;
}

