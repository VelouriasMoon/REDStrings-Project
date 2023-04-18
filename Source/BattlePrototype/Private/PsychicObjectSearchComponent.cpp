#include "PsychicObjectSearchComponent.h"

class AActor;

void UPsychicObjectSearchComponent::UnregisterMapGimmick(AActor* pActor) {
}

TArray<AActor*> UPsychicObjectSearchComponent::SortBySize(TArray<AActor*> ActorList, bool bAscend) {
    return TArray<AActor*>();
}

TArray<AActor*> UPsychicObjectSearchComponent::SortByDistance(TArray<AActor*> ActorList, AActor* pTargetActor, bool bAscend, bool bIgnoreZ, bool bSearchPos, FVector checkPos, float searchRadius) {
    return TArray<AActor*>();
}

void UPsychicObjectSearchComponent::SetPsychicFieldParameter(float Radius, int32 objNum) {
}

void UPsychicObjectSearchComponent::SetFocusSearchScoreParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList) {
}

void UPsychicObjectSearchComponent::SetFocusSearchHeightParameter(float heightMin, float heightMax) {
}

void UPsychicObjectSearchComponent::SetFocusSearchEnable(bool Flag, FName TagName) {
}

void UPsychicObjectSearchComponent::SetEnpcSearchParameter(float radiusMin) {
}

TArray<AActor*> UPsychicObjectSearchComponent::SearchPsychicFieldTarget(FVector SearchPos, AActor* pTargetActor) {
    return TArray<AActor*>();
}

TArray<AActor*> UPsychicObjectSearchComponent::SearchPsychicFieldObject() {
    return TArray<AActor*>();
}

void UPsychicObjectSearchComponent::SearchEnpcPsychicObject(FVector chkPos, FPsychicObjectEvaluateData& Result) {
}

void UPsychicObjectSearchComponent::RegisterMapGimmick(AActor* pActor, float DistMin) {
}

bool UPsychicObjectSearchComponent::IsFocusSearchEnable() {
    return false;
}

AActor* UPsychicObjectSearchComponent::GetSearchResultUnq() {
    return NULL;
}

AActor* UPsychicObjectSearchComponent::GetSearchResultNrl() {
    return NULL;
}

AActor* UPsychicObjectSearchComponent::GetEnpcPsychicObject() {
    return NULL;
}

void UPsychicObjectSearchComponent::DebugDispFocusSearchProc(FVector Pos) {
}

bool UPsychicObjectSearchComponent::CheckEnpcPsychicObject_Implementation(bool chkCapture, bool chkAttack) {
    return false;
}

UPsychicObjectSearchComponent::UPsychicObjectSearchComponent() {
    this->PsychicFieldObjectNum = 0;
    this->PsychicFieldRadius = 0.00f;
    this->DebugPrintPsychicFieldSearch = false;
    this->bDebugDispSyncProc = false;
    this->bDebugDispSearchProc = true;
    this->bDebugDispSearchScore = false;
    this->DebugDispSearchCount = 0;
    this->DebugDispTraceCount = 0;
    this->bDebugDispSearchEnpc = false;
}

