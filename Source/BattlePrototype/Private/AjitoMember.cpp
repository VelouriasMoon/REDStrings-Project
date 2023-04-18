#include "AjitoMember.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class AActor;

void AAjitoMember::WaitTransitionToTalk(float WaitTime) {
}

void AAjitoMember::WaitTransitionToIdle(float WaitTime) {
}

void AAjitoMember::UpdateTargetIconOffsetZ() {
}

bool AAjitoMember::UpdateActionIcon_Implementation() {
    return false;
}

void AAjitoMember::SetTargetIconOffsetZ(float HeadHeight) {
}

void AAjitoMember::SetNowDitherValue(float DitherValue) {
}

void AAjitoMember::SetIconOffsetPreset(FName RawName) {
}

bool AAjitoMember::SetAttachmentVisible_Implementation(bool Visible) {
    return false;
}

bool AAjitoMember::SetAjitoMemberMaterialScalarParameter_Implementation(const FName ParameterName, const float ParameterValue) {
    return false;
}

void AAjitoMember::SetActionIcoVisible(bool Visible) {
}

void AAjitoMember::SetActionIconType(EActionIconType Type) {
}

void AAjitoMember::RequestTalkStart_Implementation() {
}

void AAjitoMember::RequestTalkEnd_Implementation() {
}

void AAjitoMember::PresentEventStart() {
}

void AAjitoMember::PresentEventEnd() {
}

bool AAjitoMember::IsWaitTransitionToTalk() const {
    return false;
}

bool AAjitoMember::IsWaitTransitionToIdle() const {
    return false;
}


bool AAjitoMember::IsReadyToTalk_Implementation() const {
    return false;
}

bool AAjitoMember::IsActiveMakeEvent() {
    return false;
}

float AAjitoMember::GetNowDitherValue() {
    return 0.0f;
}

float AAjitoMember::GetHeadHeight() {
    return 0.0f;
}

TArray<AActor*> AAjitoMember::GetAllOmActors() {
    return TArray<AActor*>();
}

void AAjitoMember::ClearWaitTransitionToTalk() {
}

void AAjitoMember::ClearWaitTransitionToIdle() {
}

void AAjitoMember::AdjustIconOffsetByHeadHeightForce(float HeadHeight) {
}

void AAjitoMember::AdjustIconOffsetByHeadHeight() {
}

AAjitoMember::AAjitoMember() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->playerId = EPlayerID::Invalid;
    this->PlaceID = -1;
    this->PlaceNo = -1;
    this->IsLookAtPlayer = false;
    this->CharacterCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterHitComponent"));
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->MakeEventActorClass = NULL;
    this->MakeEventActor = NULL;
    this->IsOverlappingPlayer = false;
    this->ActionIconCoolTime = 1.00f;
    this->IsAvalableAction = false;
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->ActionIcon = NULL;
    this->actionIconType = EActionIconType::Talk;
    this->TargetIconOffsetZ = 0.00f;
    this->AnimClass = NULL;
    this->WaitTimeTransitionToTalk = 0.00f;
    this->WaitTimeTransitionToIdle = 0.00f;
}

