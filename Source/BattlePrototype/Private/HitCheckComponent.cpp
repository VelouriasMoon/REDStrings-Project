#include "HitCheckComponent.h"

class AActor;
class UAnimSequenceBase;
class UHitCheckComponent;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

void UHitCheckComponent::RemoveFixedCollision(USceneComponent* SceneComp) {
}

void UHitCheckComponent::RemoveAttackCollision(UObject* Notify, AActor* Owner, UAnimSequenceBase* Animation) {
}

bool UHitCheckComponent::IsNoDamagePartFromHCHitResult(const FHCHitResult& HitResult) {
    return false;
}

bool UHitCheckComponent::IsFixedCollisionInterceptAble(int32 Index) const {
    return false;
}

void UHitCheckComponent::InterceptFixedCollisionDataEnemy(USceneComponent* SceneComp, AActor* NewAttackOwner, const FHCCollisionCommonInfo& refInterceptCommon, const FHCSkillCommonInfo& refInterceptSkill) {
}

void UHitCheckComponent::InterceptFixedCollisionData(USceneComponent* SceneComp, AActor* NewAttackOwner) {
}

UHitCheckComponent* UHitCheckComponent::GetHitCheckComponentFromActor(AActor* Actor) {
    return NULL;
}

int32 UHitCheckComponent::GetFixedCollisionNum() const {
    return 0;
}

bool UHitCheckComponent::GetFixedCollisionCapsule(int32 Index, FVector& outStartLocation, FVector& outEndLocation, float& OutRadius) {
    return false;
}

AActor* UHitCheckComponent::GetFixedCollisionAttackSource(int32 Index) const {
    return NULL;
}

AActor* UHitCheckComponent::GetFixedCollisionAttacker(int32 Index) const {
    return NULL;
}

int32 UHitCheckComponent::GetAttackCollisionNum() const {
    return 0;
}

bool UHitCheckComponent::GetAttackCollisionCapsule(int32 Index, FVector& outStartLocation, FVector& outEndLocation, float& OutRadius) {
    return false;
}

AActor* UHitCheckComponent::GetAttackCollisionAttacker(int32 Index) const {
    return NULL;
}

void UHitCheckComponent::CheckHit(float DeltaSeconds) {
}

bool UHitCheckComponent::CheckFixedCollisionSkillExtraType(int32 Index, HCSkillExtraType CheckExtraType) {
    return false;
}

bool UHitCheckComponent::CheckAttackCollisionSkillExtraType(int32 Index, HCSkillExtraType CheckExtraType) {
    return false;
}

void UHitCheckComponent::AddIgnoreJustDodgeFixedCollisionData(USceneComponent* SceneComp) {
}

void UHitCheckComponent::AddFixedCollisionBySceneCompSkill(AActor* Owner, USceneComponent* SceneComp, float Radius, float HalfHeight, const FHCCollisionCommonInfo& commonInfo, const FHCSkillCommonInfo& skill, const FHCHitEffectInfo& effectInfo, AActor* attackOwner, float limitHeight) {
}

void UHitCheckComponent::AddFixedCollisionByPrimitiveSkill(AActor* Owner, UPrimitiveComponent* Primitive, const FHCCollisionCommonInfo& commonInfo, const FHCSkillCommonInfo& skill, const FHCHitEffectInfo& effectInfo, AActor* attackOwner, float limitHeight) {
}

void UHitCheckComponent::AddAttackCollision(UObject* Notify, AActor* Owner, UAnimSequenceBase* Animation, const FHCAttackCollisionInfo& AttackCollisionInfo, UMeshComponent* OtherMesh) {
}

UHitCheckComponent::UHitCheckComponent() {
    this->IsCallCheckHitInTick = true;
}

