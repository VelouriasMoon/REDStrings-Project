#include "RSSequencerComponent.h"

class URSSequencerValueBase;

int32 URSSequencerComponent::RegisterSequenceValue_Implementation(const FString& HashName, URSSequencerValueBase* Value, bool Override) {
    return 0;
}

URSSequencerValueBase* URSSequencerComponent::GetSequenceValue(int32 ID) {
    return NULL;
}

bool URSSequencerComponent::DestroySequenceValue_Implementation(int32 ID) {
    return false;
}

int32 URSSequencerComponent::ConvertNameToId(const FString& Name) {
    return 0;
}

void URSSequencerComponent::AllDestroySequenceValue() {
}

URSSequencerComponent::URSSequencerComponent() {
}

