#include "AttackInputComponent.h"

class UAttackComponentBase;

void UAttackInputComponent::UnregisterCurrentAttackComponent(UAttackComponentBase* attackComp) {
}

void UAttackInputComponent::SetPsychicComboLevel(int32 PsychicComboLevel) {
}

void UAttackInputComponent::SetFlyingPsychicComboLevel(int32 PsychicComboLevel) {
}

void UAttackInputComponent::SetDisableCombo(TEnumAsByte<RSAttackInputKind::Type> kind, bool bDisable) {
}

void UAttackInputComponent::SetComboAttackInputKind(TEnumAsByte<RSAttackInputKind::Type> kind) {
}

void UAttackInputComponent::SetAttackedFlyingCombo() {
}

void UAttackInputComponent::ResetSasHologramAttack() {
}

void UAttackInputComponent::ResetPsychicComboLevel() {
}

void UAttackInputComponent::ResetFlyingCombo() {
}

void UAttackInputComponent::ResetComboByInputKind(TEnumAsByte<RSAttackInputKind::Type> kind) {
}

void UAttackInputComponent::ResetCombo() {
}

void UAttackInputComponent::RegisterCurrentAttackComponent(UAttackComponentBase* attackComp) {
}

void UAttackInputComponent::OverwriteComboCount(int32 comboCount) {
}

void UAttackInputComponent::OnAttackComponentChangeAttacking(UAttackComponentBase* attackComp, bool bAttacking) {
}

bool UAttackInputComponent::IsWaitPsychicCombo() const {
    return false;
}

bool UAttackInputComponent::IsRegisterCombo(TEnumAsByte<RSAttackInputKind::Type> kind) {
    return false;
}

bool UAttackInputComponent::IsDisableCombo(TEnumAsByte<RSAttackInputKind::Type> kind) {
    return false;
}

bool UAttackInputComponent::IsComboInterval(TEnumAsByte<RSAttackInputKind::Type> kind, bool bCheckWaitFlag) {
    return false;
}

bool UAttackInputComponent::IsCheckStartAttack(TEnumAsByte<RSAttackInputKind::Type> AttackKind) {
    return false;
}

bool UAttackInputComponent::IsAttackingByKind(TEnumAsByte<RSAttackInputKind::Type> kind) {
    return false;
}

bool UAttackInputComponent::IsAttacking() {
    return false;
}

bool UAttackInputComponent::IsAttackedFlyingCombo() {
    return false;
}

void UAttackInputComponent::InputAttackByPC(TEnumAsByte<RSAttackInputKind::Type> inputKind, bool bPressed) {
}

int32 UAttackInputComponent::GetRemainUseCount(TEnumAsByte<RSAttackInputKind::Type> kind) {
    return 0;
}

int32 UAttackInputComponent::GetPsychicComboLevelMax() const {
    return 0;
}

int32 UAttackInputComponent::GetPsychicComboLevel() const {
    return 0;
}

int32 UAttackInputComponent::GetPsychicComboCount() {
    return 0;
}

TArray<UAttackComponentBase*> UAttackInputComponent::GetInputAttackComponentList() {
    return TArray<UAttackComponentBase*>();
}

int32 UAttackInputComponent::GetFlyingPsychicComboLevelMax() const {
    return 0;
}

int32 UAttackInputComponent::GetFlyingPsychicComboLevel() const {
    return 0;
}

FName UAttackInputComponent::GetComboPattern() const {
    return NAME_None;
}

int32 UAttackInputComponent::GetComboCountByInputKind(TEnumAsByte<RSAttackInputKind::Type> kind) const {
    return 0;
}

int32 UAttackInputComponent::GetComboCount() const {
    return 0;
}

TEnumAsByte<RSAttackInputKind::Type> UAttackInputComponent::GetComboAttackInputKindPrev() const {
    return RSAttackInputKind::Attack1;
}

TEnumAsByte<RSAttackInputKind::Type> UAttackInputComponent::GetComboAttackInputKind() const {
    return RSAttackInputKind::Attack1;
}

UAttackComponentBase* UAttackInputComponent::FindAttackingComponent(TEnumAsByte<RSAttackInputKind::Type> kind) {
    return NULL;
}

void UAttackInputComponent::DebugSetComboDisp(bool bDisp) {
}

void UAttackInputComponent::ClearUseCount() {
}

void UAttackInputComponent::ClearPsychicComboCount() {
}

void UAttackInputComponent::ClearInputAll() {
}

void UAttackInputComponent::ClearComboPattern(FName patternName) {
}

void UAttackInputComponent::CheckStartAttack(float DeltaTime) {
}

void UAttackInputComponent::ChangeComboPattern(FName patternName) {
}

void UAttackInputComponent::BeginComboInterval() {
}

void UAttackInputComponent::AddPsychicComboCount() {
}

void UAttackInputComponent::AddComboPattern(FName patternName, TEnumAsByte<RSAttackInputKind::Type> inputKind, TArray<UAttackComponentBase*> attackComps, float comboInterval, int32 maxUseCount) {
}

void UAttackInputComponent::AddComboCount(TEnumAsByte<RSAttackInputKind::Type> kind, TEnumAsByte<RSAttackInputKind::Type> branchKind, int32 branchComboCount) {
}

UAttackInputComponent::UAttackInputComponent() {
}

