#include "SequencerFunctionLibrary.h"

class ARSLevelSequenceActor;
class UObject;

bool USequencerFunctionLibrary::IsSequencerSpawner(ARSLevelSequenceActor* Sequencer, UObject* Object) {
    return false;
}

bool USequencerFunctionLibrary::GetGhostTrailInfo(ARSLevelSequenceActor* Sequencer, UObject* GhostTrailObject, TArray<FGhostTrailInfo>& GhostTrailInfo) {
    return false;
}

USequencerFunctionLibrary::USequencerFunctionLibrary() {
}

