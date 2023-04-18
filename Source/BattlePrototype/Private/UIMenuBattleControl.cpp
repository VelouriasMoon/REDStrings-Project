#include "UIMenuBattleControl.h"

class ARSCharacterBase;
class UOverlay;
class UUIBrainGaugeEN;
class UUIHealthControl;
class UUILog;
class UUINexusDrive;
class UUINumberDamage;
class UUIVitalityEN01;
class UUIVitalityEN02;
class UUIVitalityPL01;
class UUIVitalityPL02;
class UUIVitalityPL03;

void UUIMenuBattleControl::UpdateStateThis(float fDeltaSecond) {
}

void UUIMenuBattleControl::UpdatePkObjectTimer(ARSCharacterBase* Target, float MaxSecond, float CurrentSecond) {
}

void UUIMenuBattleControl::UpdateLogMessage(float DeltaSecond) {
}

void UUIMenuBattleControl::UpdateLockTarget() {
}

void UUIMenuBattleControl::UpdateHpWidgetInformation(ARSCharacterBase* Actor, int32 Index) {
}

void UUIMenuBattleControl::UpdateHpVisible(int32 Index, ARSCharacterBase* Character) {
}



void UUIMenuBattleControl::StopPkObjectTimer(ARSCharacterBase* Target) {
}

void UUIMenuBattleControl::StartPkObjectTimer(ARSCharacterBase* Target, float MaxSecond, float CurrentSecond, bool OpenDirect) {
}



void UUIMenuBattleControl::StartGameOver() {
}




void UUIMenuBattleControl::SetUUIVitalityEN02Visible(bool IsVisible) {
}

void UUIMenuBattleControl::SetupPlayerHpGauge() {
}

void UUIMenuBattleControl::SetLogWaitTime(float Time) {
}

void UUIMenuBattleControl::SetLogMessageSE(const FString& LogMessage, EUI_SE Se, const float _drawTime) {
}

void UUIMenuBattleControl::SetLogMessage(const FString& LogMessage, const float _drawTime) {
}

void UUIMenuBattleControl::SetLogDrawTime(float Time) {
}

void UUIMenuBattleControl::SetIcon(ARSCharacterBase* Character, UUIHealthControl* Widget) {
}

void UUIMenuBattleControl::SetEnemyHpWidgetVisible(bool IsVisible) {
}

void UUIMenuBattleControl::SetEnemyDamage(ARSCharacterBase* Target, int32 CurrentHp, int32 BaseHp, bool IsAlways, float Time) {
}

void UUIMenuBattleControl::SetDamage3D(int32 Damage, FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, ARSCharacterBase* crushTarget, int32 crushBonus, const FVector2D& Offset) {
}

void UUIMenuBattleControl::SetDamage2D(int32 Damage, FVector2D position2D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, ARSCharacterBase* crushTarget, int32 crushBonus) {
}


void UUIMenuBattleControl::SetBrainCrashTarget(ARSCharacterBase* pTarget, bool& bSuccess) {
}

int32 UUIMenuBattleControl::SetBrainCrashEnable(ARSCharacterBase* pTarget, bool IsEnable) {
    return 0;
}



void UUIMenuBattleControl::ReleaseCrushBonus() {
}





void UUIMenuBattleControl::OpenAllActivePkObjectTimer() {
}

void UUIMenuBattleControl::OpenActiveAllBrainTargetCursor() {
}




bool UUIMenuBattleControl::IsLogMessageEmpty() const {
    return false;
}

bool UUIMenuBattleControl::IsFlagPlayUINative() {
    return false;
}

bool UUIMenuBattleControl::IsEndGameOver() {
    return false;
}

void UUIMenuBattleControl::InitLogMessage() {
}

void UUIMenuBattleControl::InitializeThis(UUILog* NewUILog, UUIVitalityPL01* NewUIVitalityPL01, UUIVitalityPL02* NewUIVitalityPL02, UUIVitalityPL02* NewUiVitalityPL02Flame, UUIVitalityPL03* NewUIVitalityPL03, UUIVitalityPL03* NewUiVitalityPL03Flame, UUIVitalityEN01* NewUIVitalityEN01, UUIVitalityEN01* NewUiVitalityEN01Flame, UUIBrainGaugeEN* NewUIBrainGaugeEN, UUIBrainGaugeEN* NewUiBrainGaugeENFrame, UOverlay* overlayWidgets, UUINexusDrive* NewUiNexusDrivePL02, UUINexusDrive* NewUiNexusDrivePL03) {
}

void UUIMenuBattleControl::InitDamage() {
}

float UUIMenuBattleControl::GetLogWaitTime() const {
    return 0.0f;
}

float UUIMenuBattleControl::GetLogDrawTime() const {
    return 0.0f;
}

void UUIMenuBattleControl::GetHpTargetCharacter(int32 Index, ARSCharacterBase*& Instance, bool& IsEnable) {
}

float UUIMenuBattleControl::GetHPPercent(int32 Index) {
    return 0.0f;
}

void UUIMenuBattleControl::GetHp(ARSCharacterBase* Character, float& Max, float& current) {
}

EGameOverResult UUIMenuBattleControl::GetGameOverResult() {
    return EGameOverResult::Invalid;
}

void UUIMenuBattleControl::GetFreeHpWidget(UUIVitalityEN02*& Widget) {
}

UUINumberDamage* UUIMenuBattleControl::GetFreeDamageWidget() {
    return NULL;
}



int32 UUIMenuBattleControl::GetBrainTargetCursor(ARSCharacterBase* pTarget) {
    return 0;
}

ARSCharacterBase* UUIMenuBattleControl::GetBackupBossActor() const {
    return NULL;
}

void UUIMenuBattleControl::EnemyHpWidgetDisappearInstantly(ARSCharacterBase* Target) {
}




void UUIMenuBattleControl::CloseTargetCursor() {
}



void UUIMenuBattleControl::CloseAllPkObjectTimer() {
}

void UUIMenuBattleControl::CloseAllDamageWidget() {
}

void UUIMenuBattleControl::CloseActiveAllBrainTargetCursor(ARSCharacterBase* pExcludeTarget) {
}



void UUIMenuBattleControl::BrainGaugeENStartField() {
}

void UUIMenuBattleControl::BrainGaugeENSetVisible(bool IsVisible) {
}

void UUIMenuBattleControl::BrainGaugeENSetPercent(float percent, float Time) {
}

void UUIMenuBattleControl::BrainGaugeENSetGaugeMax(bool IsFull) {
}

void UUIMenuBattleControl::BrainGaugeENEndField() {
}

UUIMenuBattleControl::UUIMenuBattleControl() {
    this->ClassNumberDamage = NULL;
    this->UIGameOver = NULL;
    this->UIBossName = NULL;
    this->UILog = NULL;
    this->UICursorNormal = NULL;
    this->UIVitalityPL01 = NULL;
    this->UIVitalityPL02 = NULL;
    this->uiVitalityPL02Flame = NULL;
    this->UIVitalityPL03 = NULL;
    this->uiVitalityPL03Flame = NULL;
    this->UIVitalityEN01 = NULL;
    this->uiVitalityEN01Flame = NULL;
    this->UIBrainGaugeEN = NULL;
    this->uiBrainGaugeENFrame = NULL;
    this->FlagPlayUI = false;
    this->FlagCloseDirect = false;
    this->FlagDrawHpGaugeMain = false;
    this->FlagDrawHpGaugeSub = false;
    this->FlagDrawPsychicGauge = false;
    this->FlagDrawBrainCrashGauge = false;
    this->FlagDrawBrainCrashGaugeEnemy = false;
    this->FlagDrawItemMenu = false;
    this->FlagDrawSasMenu = false;
    this->FlagDrawMiniMap = false;
    this->FlagDrawLog = false;
    this->FlagDrawDroneGuide = false;
    this->FlagDrawTeamBondLv = false;
    this->FlagDrawMiniTips = false;
    this->FlagDrawBrainCrashBar = false;
    this->FlagDrawBrainCrashBarBoss = false;
    this->FlagDrawHpGaugeEnemyBoss = false;
    this->FlagDrawShortcutGuide = false;
    this->FlagDrawBrainTalk = false;
    this->FlagDrawOtherWidget = false;
    this->FlagDrawTutoOperation = false;
    this->FlagDrawAreaHere = false;
    this->FlagDrawSuccess = false;
    this->FlagDrawVisionSimulatorTimer = false;
    this->FlagDrawNexusDriveNotice = false;
    this->EnemyHpWidgetVisibleFlag = true;
    this->CursorTarget = NULL;
    this->DeltaTime = 0.00f;
    this->BrainGaugeENVisibleFlag = false;
    this->UIBrainCrashGaugeBoss = NULL;
    this->BackupBrainCrashTarget = NULL;
    this->uiNexusDrivePL02 = NULL;
    this->uiNexusDrivePL03 = NULL;
}

