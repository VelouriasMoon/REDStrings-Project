#include "RSLevelSequenceActor.h"
#include "Templates/SubclassOf.h"

class AActor;
class ASequencerParticle;
class UMovieSceneSequence;
class UObject;

void ARSLevelSequenceActor::SetupParticleBinding(TArray<FMovieSceneObjectBindingID> BindingIDList, TArray<ASequencerParticle*> ParticleList) {
}

void ARSLevelSequenceActor::SetShotSequence(UMovieSceneSequence* Sequence, FText ShotName) {
}

void ARSLevelSequenceActor::SetPlaybackHead() {
}

float ARSLevelSequenceActor::SetEventSkipEndTimeForEventName(FName SkipName, FName EventName, bool& IsSuccess) {
    return 0.0f;
}

void ARSLevelSequenceActor::SetBindingByObject(FMovieSceneObjectBindingID Binding, const TArray<UObject*>& Objects, bool bAllowBindingsFromAsset) {
}

void ARSLevelSequenceActor::SetAnimationSlotNameToInString(FName SlotName, const FString& inString, const FString& ExclusionInString) {
}

int32 ARSLevelSequenceActor::SetActiveFromShotName(FText ShotName, bool IsActive, bool IsContainName) {
    return 0;
}

void ARSLevelSequenceActor::SetActiveCameraCutSection(bool IsActive) {
}

void ARSLevelSequenceActor::RestartParticle(TArray<FMovieSceneObjectBindingID> BindingIDList, TArray<ASequencerParticle*> ParticleList) {
}

void ARSLevelSequenceActor::RemoveIsActiveSectionForShotName(FText ShotName) {
}

void ARSLevelSequenceActor::GetSequenceObjectBindingIDListFromClassAndMatchTexts(TSubclassOf<AActor> ObjClass, const TArray<FText>& PerfectMatchTexts, const TArray<FText>& SuffixTexts, TArray<FMovieSceneObjectBindingID>& OutMatchBindingIDList, TArray<FString>& OutMatchNameList, bool& IsFind) {
}

void ARSLevelSequenceActor::GetSequenceObjectBindingIDListFromClass(TSubclassOf<AActor> ObjClass, TArray<FMovieSceneObjectBindingID>& OutBindingIDList, TArray<FString>& OutNameList, bool& IsFind) {
}

void ARSLevelSequenceActor::GetSequenceObjectBindingIDList(TArray<FText> ObjNames, TArray<FName> ObjTags, TArray<FMovieSceneObjectBindingID>& OutBindingIDList, bool& IsFind) {
}

FMovieSceneObjectBindingID ARSLevelSequenceActor::GetSequenceObjectBindingID(FText ObjName, TArray<FName> ObjTags, bool& IsFind) {
    return FMovieSceneObjectBindingID{};
}

void ARSLevelSequenceActor::GetSequenceInSpawnedObjectList(TArray<UObject*>& SpawnedObjects) {
}

TArray<AActor*> ARSLevelSequenceActor::GetSequenceInSpawnedActorListFromClass(TSubclassOf<AActor> ObjClass) {
    return TArray<AActor*>();
}

TArray<AActor*> ARSLevelSequenceActor::GetSequenceInSpawnedActorList() {
    return TArray<AActor*>();
}

void ARSLevelSequenceActor::ForceUpdate(float DeltaTime) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipInnerSequenceFromTagNames(TArray<FName> TagNames) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipInnerSequenceFromBinding(TArray<FMovieSceneObjectBindingID> ObjBindings) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipInnerSequenceALL() {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipInnerSequence(TArray<FText> ObjNames) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipExternalFromTagNames(TArray<FName> TagNames) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipExternalFromBinding(TArray<FMovieSceneObjectBindingID> ObjBindings) {
}

void ARSLevelSequenceActor::ChangeForceOwnerShipExternal(TArray<FText> ObjNames) {
}

void ARSLevelSequenceActor::AddSpawnableTemplateTag(TArray<FName> AddTags) {
}

