#include "EnemyAnimControllerComponent.h"

class AActor;
class UAnimMontage;
class UEnemyAnimControllerComponent;

void UEnemyAnimControllerComponent::UpdateAnimDirectionAndSpeed() {
}

bool UEnemyAnimControllerComponent::StateIsExcite() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateIsBack() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateAliveIsInitLayout() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateAliveIsIdleMove() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateAliveIsDamage() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateAliveIsAttack() const {
    return false;
}

bool UEnemyAnimControllerComponent::StateAliveIsAction() const {
    return false;
}

void UEnemyAnimControllerComponent::SetSwitchAnimKind(EnemySwitchAnimKind anim) {
}

void UEnemyAnimControllerComponent::SetSuperArmor(bool isSuperArmor) {
}

void UEnemyAnimControllerComponent::SetMove(EnemyMoveAnimKind move) {
}

void UEnemyAnimControllerComponent::SetLanded(bool Landed) {
}

void UEnemyAnimControllerComponent::SetInitLayout(EnemyInitLayoutAnimKind layout) {
}

void UEnemyAnimControllerComponent::SetIgnoreSuperArmor(bool isIgnoreSuperArmor) {
}

void UEnemyAnimControllerComponent::SetIgnoreStandUpSuperArmor(bool isIgnoreStandUpSuperArmor) {
}

void UEnemyAnimControllerComponent::SetEnemyKind(EnemyKind kind) {
}

void UEnemyAnimControllerComponent::SetDead(EnemyDeadAnimKind dead) {
}

void UEnemyAnimControllerComponent::SetDamageDown(EnemyDamageDownAnimKind Damage) {
}

void UEnemyAnimControllerComponent::SetDamage(EnemyDamageAnimKind Damage) {
}

void UEnemyAnimControllerComponent::SetCrashChance(EnemyCrashChanceAnimKind chance) {
}

void UEnemyAnimControllerComponent::SetBrainCrash(EnemyBrainCrashAnimKind Crash) {
}

void UEnemyAnimControllerComponent::SetAnimRootMotionScale(float Scale) {
}

void UEnemyAnimControllerComponent::SetAliveAnimKind(EnemyAliveAnimKind alive) {
}

void UEnemyAnimControllerComponent::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UEnemyAnimControllerComponent::OnEndAnimDie() {
}

bool UEnemyAnimControllerComponent::IsPressDownAnimKind() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindWince() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindSpecialDamageDown() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindLaunch() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindKnockBack() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindDown() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindDamageChance() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKindBlow() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsPossibleDamageAnimKind() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsMove(EnemyMoveAnimKind move) const {
    return false;
}

bool UEnemyAnimControllerComponent::IsLanded() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsIgnoreCrashChance() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDie() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDeadComplete() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimStateB() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimLight2() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindWince() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindSpecialDamageDown() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindSpecialDamage() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindLaunch() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindKnockBack() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindDown() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindDamageChance() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamageAnimKindBlow() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsDamage() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsCrashChanceAnimKind() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsBrainCrashAnimKind() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsAttackFlg() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsAttackAnimKind(const TArray<EnemyAttackAnimKind> kindArray) const {
    return false;
}

bool UEnemyAnimControllerComponent::IsAttack(EnemyAttackAnimKind Attack) const {
    return false;
}

bool UEnemyAnimControllerComponent::IsASNodePlayEnd() const {
    return false;
}

bool UEnemyAnimControllerComponent::IsActionAnimKind(const TArray<EnemyActionAnimKind> kindArray) const {
    return false;
}

bool UEnemyAnimControllerComponent::IsAction(EnemyActionAnimKind Action) const {
    return false;
}

EnemySwitchAnimKind UEnemyAnimControllerComponent::GetSwitchAnimKind() const {
    return EnemySwitchAnimKind::Default;
}

float UEnemyAnimControllerComponent::GetSpeed() const {
    return 0.0f;
}

EnemyMoveAnimKind UEnemyAnimControllerComponent::GetMove() const {
    return EnemyMoveAnimKind::Default;
}

EnemyKind UEnemyAnimControllerComponent::GetEnemyKind() const {
    return EnemyKind::Default;
}

EnemyDeadAnimKind UEnemyAnimControllerComponent::GetEnemyDeadAnimKind() const {
    return EnemyDeadAnimKind::Dead1;
}

EnemyDamageDownAnimKind UEnemyAnimControllerComponent::GetEnemyDamageDownAnimKind() const {
    return EnemyDamageDownAnimKind::Start;
}

EnemyDamageAnimKind UEnemyAnimControllerComponent::GetEnemyDamageAnimKind() const {
    return EnemyDamageAnimKind::Wince1;
}

EnemyCrashChanceAnimKind UEnemyAnimControllerComponent::GetEnemyCrashChanceAnimKind() const {
    return EnemyCrashChanceAnimKind::Start;
}

EnemyBrainCrashAnimKind UEnemyAnimControllerComponent::GetEnemyBrainCrashAnimKind() const {
    return EnemyBrainCrashAnimKind::Start;
}

EnemyAttackAnimKind UEnemyAnimControllerComponent::GetEnemyAttackAnimKind() const {
    return EnemyAttackAnimKind::Attack1;
}

UEnemyAnimControllerComponent* UEnemyAnimControllerComponent::GetEnemyAnimControllerComponentFromActor(AActor* Actor) {
    return NULL;
}

EnemyAliveAnimKind UEnemyAnimControllerComponent::GetEnemyAliveAnimKind() const {
    return EnemyAliveAnimKind::IdleMove;
}

EnemyActionAnimKind UEnemyAnimControllerComponent::GetEnemyActionAnimKind() const {
    return EnemyActionAnimKind::Action1;
}

float UEnemyAnimControllerComponent::GetDirection() const {
    return 0.0f;
}

void UEnemyAnimControllerComponent::EndMoveBackward() {
}

float UEnemyAnimControllerComponent::DotOfHitDirAndUp() const {
    return 0.0f;
}

float UEnemyAnimControllerComponent::DotOfHitDirAndRight() const {
    return 0.0f;
}

bool UEnemyAnimControllerComponent::CheckGoToIdleMove(bool IsEndAnim) {
    return false;
}

bool UEnemyAnimControllerComponent::CheckFaintToWakeup(bool IsEndAnim) const {
    return false;
}

bool UEnemyAnimControllerComponent::CheckEndExcite(bool IsEndAnim) {
    return false;
}

void UEnemyAnimControllerComponent::BeginMoveBackward() {
}

void UEnemyAnimControllerComponent::BeginMove(EnemyMoveAnimKind move) {
}

void UEnemyAnimControllerComponent::BeginGetUp() {
}

void UEnemyAnimControllerComponent::BeginExcite() {
}

void UEnemyAnimControllerComponent::BeginDie() {
}

void UEnemyAnimControllerComponent::BeginAttack(EnemyAttackAnimKind Attack) {
}

void UEnemyAnimControllerComponent::BeginAction(EnemyActionAnimKind Action) {
}

bool UEnemyAnimControllerComponent::AliveToDie() const {
    return false;
}

UEnemyAnimControllerComponent::UEnemyAnimControllerComponent() {
}

