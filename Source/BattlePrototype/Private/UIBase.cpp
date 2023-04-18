#include "UIBase.h"

class UDatabaseManager;
class UImage;
class UPanelWidget;
class UPaperSprite;
class URSAtomComponentBase;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

void UUIBase::UpdateVisible() {
}


void UUIBase::UpdateControlRetainerBox() {
}

void UUIBase::UpdateChromaticAberration() {
}

void UUIBase::Update(float InDeltaTime) {
}

void UUIBase::StopUICurrentAnimation() {
}

void UUIBase::StopUIAnimation(int32 Index) {
}

void UUIBase::StopUIAllAnimation() {
}

void UUIBase::StopLoopSe(FName loopSeName) {
}

void UUIBase::SetVisible(ESlateVisibility Visiblity) {
}

void UUIBase::SetViewPortPrio(EUIViewPrio viewprio) {
}

void UUIBase::SetupChromaticAberrationRetainerBox(UPanelWidget* Base) {
}

void UUIBase::SetupChromaticAberrationImage(UPanelWidget* Base) {
}

void UUIBase::SetUIAnimationFrame(int32 Index, float Time) {
}

void UUIBase::SetMouseMode(bool mousemode, int32 NewInputLevel) {
}

void UUIBase::SetMouseDisable(bool Flag) {
}

void UUIBase::SetInputLevel(int32 NewInputLevel) {
}

void UUIBase::SetImageFromSprite(UImage* Image, UPaperSprite* Sprite) {
}

void UUIBase::SetFlagUpdateAlways(bool Flag) {
}

void UUIBase::SetDebugInvisible(bool IsInvisible) {
}

void UUIBase::SetControlWidget(UUserWidget* Widget) {
}

void UUIBase::SetAnimationNum(int32 Num) {
}

void UUIBase::SetAnimation(int32 Index, UWidgetAnimation* Animation) {
}

void UUIBase::SearchControlRetainerBox(UWidget* Widget) {
}

void UUIBase::RemoveFromParentRED() {
}

void UUIBase::ProjectWorldToScreen2(const FVector& WorldPosition, FVector2D& ScreenPosition) {
}

void UUIBase::PlayUIAnimation(int32 Index, float Speed, bool IsLoop) {
}

URSAtomComponentBase* UUIBase::PlaySEAtLocation(EUI_SE seType, FVector Location) {
    return NULL;
}

URSAtomComponentBase* UUIBase::PlaySE(EUI_SE seType) {
    return NULL;
}

void UUIBase::PlayLoopSe(EUI_SE seType, FName loopSeName) {
}

void UUIBase::OpenDirect() {
}

void UUIBase::Open() {
}

void UUIBase::IsStatePlay(bool& isPlay) const {
}

void UUIBase::IsPlayUICurrentAnimation(bool& isPlay) const {
}

void UUIBase::IsPlayUIAnyAnimation(bool& isPlay) const {
}

void UUIBase::IsPlayUIAnimation(int32 Index, bool& isPlay) const {
}

void UUIBase::IsPlaying(bool& NewIsPlaying) const {
}

bool UUIBase::isLoopSE(FName loopSeName) {
    return false;
}

FString UUIBase::IntToString(int32 Value, int32 MinLength, int32 MaxLength) const {
    return TEXT("");
}

void UUIBase::InitControlRetainerBox() {
}

void UUIBase::InitChromaticAberration() {
}

void UUIBase::GetViewportOffset(FVector2D absolutePosition, FVector2D& calcOffset) {
}

void UUIBase::GetUICurrentAnimationIndex(int32& Index) const {
}

void UUIBase::GetScreenOffsetReverse(FVector2D baseOffset, FVector2D& calcOffset) {
}

void UUIBase::GetScreenOffset(FVector2D baseOffset, FVector2D& calcOffset) {
}

bool UUIBase::GetMouseDisable() const {
    return false;
}

FText UUIBase::GetMenuCommonMessage(UDatabaseManager* pDatabaseManager, FName Name) {
    return FText::GetEmpty();
}

void UUIBase::GetInputLevel(int32& NewInputLevel) const {
}

void UUIBase::GetIconLimitRD(FVector2D& LimitPosition) {
}

void UUIBase::GetIconLimitLU(FVector2D& LimitPosition) {
}

void UUIBase::GetFlagUpdateAlways(bool& Flag) const {
}

void UUIBase::GetCurrentState(int32& State) const {
}

void UUIBase::GetAnimation(int32 Index, UWidgetAnimation*& Animation) const {
}

FVector2D UUIBase::GetAbsoluteSize() {
    return FVector2D{};
}

void UUIBase::GetAbsoluteScreenOfffset(FVector2D baseOffset, FVector2D& calcOffset) {
}

FVector2D UUIBase::GetAbsolutePosition() {
    return FVector2D{};
}

void UUIBase::DebugDrawPlayingAnimation(float DeltaSecond) {
}

void UUIBase::DebugDrawLastAnimation(float DeltaSecond) {
}

void UUIBase::CloseDirect() {
}

void UUIBase::Close() {
}

bool UUIBase::CheckRectangleCore(FVector2D Position) {
    return false;
}

bool UUIBase::CheckRectangle() {
    return false;
}

void UUIBase::CheckInput(EUIInputButton KeyType, EUIInputType InputType, bool& IsInput) {
}

bool UUIBase::CheckEqualName(const FString& BaseString, const FString& CheckString) {
    return false;
}

bool UUIBase::CheckCircleCore(FVector2D Position) {
    return false;
}

bool UUIBase::CheckCircle() {
    return false;
}

bool UUIBase::CheckAnyInput() {
    return false;
}

void UUIBase::ChangeSubState(int32 NewSubState) {
}

void UUIBase::ChangeStateDirect(int32 NewState) {
}

void UUIBase::ChangeStateAllDirect(int32 NewState, int32 NewSubState) {
}

void UUIBase::ChangeState(int32 NewState) {
}

void UUIBase::AddViewPortPrio() {
}

void UUIBase::AddToSetViewPortPrio(EUIViewPrio viewprio) {
}

UUIBase::UUIBase() {
    this->FlagPlay = false;
    this->FlagMouse = false;
    this->MouseHitType = EUIMouseHitType::Rectangle;
    this->DebugMouseHitDisp = false;
    this->FlagRemove = false;
    this->FlagNotRemoveHud = false;
    this->CurrentState = -1;
    this->NextState = -1;
    this->CurrentSubState = 0;
    this->NextSubState = 0;
    this->PlayIndex = -1;
    this->ViewPortPrio = EUIViewPrio::None;
    this->ChromaticAberration = NULL;
    this->StateControlRetainerBox = 0;
    this->ControlWidget = NULL;
    this->LocalVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->inputLevel = 0;
    this->BaseScrollSpeed = 1000.00f;
    this->m_DebugDraw = NULL;
}

