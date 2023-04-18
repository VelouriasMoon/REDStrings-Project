#include "EnemyWeaponBase.h"

class AActor;
class UCapsuleComponent;
class UHitCheckComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URSParticleSystemComponentBase;
class USkeletalMeshComponent;
class USphereComponent;

void AEnemyWeaponBase::UpdateTargetNative(bool BreakLostTarget, AActor* Target, AActor* attackOwner, float& LifeTime) {
}

void AEnemyWeaponBase::UpdatePreviousLocations() {
}

void AEnemyWeaponBase::UpdatePhysicsCollisionNative(float DeltaTime) {
}

bool AEnemyWeaponBase::UpdateLifeTimeNative(bool InterceptReserve, float DeltaTime, float& LifeTime) {
    return false;
}

void AEnemyWeaponBase::UpdateCurveTargetMoveNative(float DeltaTime) {
}

void AEnemyWeaponBase::UpdateCommonMoveNative(float DeltaTime) {
}

void AEnemyWeaponBase::UpdateAddIgnoreJustDodgeNative(float DeltaTime, float& IgnoreJustDodgeTimer) {
}

void AEnemyWeaponBase::StartPhysicsCollisionNative() {
}

bool AEnemyWeaponBase::SetWeaponVisibilityNative(bool IsVisible) {
    return false;
}

void AEnemyWeaponBase::SetWeaponActiveNative(bool Active) {
}

void AEnemyWeaponBase::SetTargetMoveEffectRotationNative() {
}

void AEnemyWeaponBase::SetCurveTargetMoveInitNative() {
}

bool AEnemyWeaponBase::ProjectileHitProcessNative(bool IsHitPlayer, FVector HitLocation, FVector HitNormal) {
    return false;
}


bool AEnemyWeaponBase::IsWeaponActiveNative() const {
    return false;
}

void AEnemyWeaponBase::IsHitLineCheckNative(FVector StartLocation, FVector EndLocation, bool& IsAnyHit, FHitResult& HitResult) {
}

bool AEnemyWeaponBase::IsHitFloorNative(FVector Normal) {
    return false;
}

void AEnemyWeaponBase::InitPreviousLocations(FVector InitLocation) {
}

void AEnemyWeaponBase::InitializePhysicsCollisionNative() {
}

void AEnemyWeaponBase::InitializeNative(UProjectileMovementComponent* ProjectileMovement, UHitCheckComponent* HitCheck, USphereComponent* AttackCollision, UCapsuleComponent* AttackCollisionCapsule, URSParticleSystemComponentBase* RSParticleSystem, USkeletalMeshComponent* BulletMesh, UCapsuleComponent* PhysicsCollision) {
}

void AEnemyWeaponBase::InitCommonMovewithGravityNative(FVector InitPos, FVector MoveDir, float MoveSpeed, float Gravity, bool noTargetMove) {
}

void AEnemyWeaponBase::InitCommonMoveNative(FVector InitPos, FVector MoveDir, float MoveSpeed, bool noTargetMove) {
}

void AEnemyWeaponBase::HitPhysicsCollisionNative(FVector HitLocation) {
}

void AEnemyWeaponBase::HitCurveMoveTargetNative(FVector HitLocation, FVector HitNormal) {
}


float AEnemyWeaponBase::GetTargetDistanceNative() {
    return 0.0f;
}

FVector AEnemyWeaponBase::GetLocationTwoFrameAgo() {
    return FVector{};
}



UPrimitiveComponent* AEnemyWeaponBase::GetAttackCollisionPrimitiveNative(bool& IsSphere) {
    return NULL;
}

void AEnemyWeaponBase::EndPhysicsCollisionNative() {
}

void AEnemyWeaponBase::EndHomingNative() {
}


FVector AEnemyWeaponBase::CorrectBulletDirectionNative(FVector FireLocation, FVector TargetLocation, FVector FireForwardVector, float AbsoluteAngleZ, float MaxAngleZ, float Speed) {
    return FVector{};
}

void AEnemyWeaponBase::AttackCollisionEndNative(bool IsVisible) {
}

void AEnemyWeaponBase::AddIgnoreJustDodgeNative() {
}

AEnemyWeaponBase::AEnemyWeaponBase() {
    this->mTotalDeltaSeconds = 0.00f;
    this->mbEnableSweep = false;
    this->mbNotLineCheck = false;
    this->mTargetDistance = 0.00f;
    this->mTargetDistanceCheck = 0.00f;
    this->mMoveKind = EEnemyWeaponMoveKind::Invalid;
    this->mLifeTimer = 10.00f;
    this->mAdjustAngle = 0.00f;
    this->mMaxCorrectAngleZ = 40.00f;
    this->mAdjustFloorAngle = 15.00f;
    this->mLimitAngleUp = 40.00f;
    this->mLimitAngleDown = 40.00f;
    this->mLimitAngleLR = 0.00f;
    this->mAdjustAngleDistanceMax = 4000.00f;
    this->mAdjustAngleDistanceMin = 500.00f;
    this->mLimitDistanceAdjustAngleUp = 7.00f;
    this->mLimitDistanceAdjustAngleDown = 0.00f;
    this->mbNewCorrectDir = false;
    this->mWeaponActiveNative = false;
    this->mIsCurveTargetMove = false;
    this->mCurveTargetMoveSpeed = 0.00f;
    this->mCurveTargetMove = NULL;
    this->mIsHitCurveTargetMove = false;
    this->mCommonMoveSpeed = 0.00f;
    this->mCommonMoveGravity = 0.00f;
    this->mProjectileGravityScale = 0.00f;
    this->mIsAnyHit = false;
    this->mbNotUseAttackCollision = false;
    this->mbHitPhysics = false;
    this->mPhysicsHalfHeightScale = 1.00f;
    this->mPhysicsRadiusScale = 1.00f;
    this->mbDisableHitPhysics = false;
    this->mbDisableUpdatePhysics = false;
    this->mbIsFloatObjectExist = false;
    this->mbDisablePhysicsCollision = false;
}

