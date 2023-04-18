#include "RSUniqueIdComponent.h"

void URSUniqueIdComponent::SetName(FName InName) {
}

void URSUniqueIdComponent::SetId(int32 InId) {
}

FName URSUniqueIdComponent::GetName() const {
    return NAME_None;
}

int32 URSUniqueIdComponent::GetId() const {
    return 0;
}

URSUniqueIdComponent::URSUniqueIdComponent() {
    this->ID = -1;
}

