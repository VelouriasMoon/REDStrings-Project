#include "REDScrollBox.h"

class UUserWidget;

void UREDScrollBox::UpdateList(float DeltaSeconds) {
}

void UREDScrollBox::UpdateDrawAreaWidget() {
}

void UREDScrollBox::SetupList(UClass* ElementClass, int32 ElementNum, FVector2D ElementSize, float OffsetSize, int32 initcursor, bool IsCursorTop) {
}

void UREDScrollBox::SetScrollSpeed(float Speed) {
}

void UREDScrollBox::SetScrollOffsetRED(float Offset) {
}

void UREDScrollBox::SetMouseInputLevel(int32 inputLevel) {
}

void UREDScrollBox::SetMouseInputDisable(bool Flag) {
}

void UREDScrollBox::SetMouseDisable(bool Flag, ESlateVisibility Lockvisibility) {
}

void UREDScrollBox::SetMouseControlInputLevel(bool isControl) {
}

void UREDScrollBox::SetDrawTop(int32 Pos) {
}

void UREDScrollBox::setDebugDraw(bool IsDraw) {
}

void UREDScrollBox::SetCursorPosition(int32 Index, bool mouseflag, bool mouseScrollflag) {
}

void UREDScrollBox::ResetList() {
}

void UREDScrollBox::ReleaseList() {
}

bool UREDScrollBox::IsScrollBarClicking() const {
    return false;
}

bool UREDScrollBox::IsScrollAnimation() {
    return false;
}

bool UREDScrollBox::IsRedrawScroll() const {
    return false;
}

void UREDScrollBox::IncrementWorkWeight(int32 CursorPosition) {
}

UUserWidget* UREDScrollBox::GetWorkWidget(int32 Index, bool IsSetFreeWork, bool notupdateElement) {
    return NULL;
}

UUserWidget* UREDScrollBox::GetSimpleCurrentWidget() {
    return NULL;
}

int32 UREDScrollBox::GetPageDrawNum() const {
    return 0;
}

int32 UREDScrollBox::GetMouseInputLevel() const {
    return 0;
}

bool UREDScrollBox::GetMouseInputDisable() const {
    return false;
}

bool UREDScrollBox::GetMouseDisable() const {
    return false;
}

int32 UREDScrollBox::GetMouseBackUpCursor() const {
    return 0;
}

bool UREDScrollBox::GetIsSetUp() const {
    return false;
}

int32 UREDScrollBox::GetDrawTopGoal() const {
    return 0;
}

int32 UREDScrollBox::GetDrawTop() const {
    return 0;
}

UUserWidget* UREDScrollBox::GetCurrentWidget() {
    return NULL;
}

int32 UREDScrollBox::GetCurrentIndex() const {
    return 0;
}

void UREDScrollBox::DecrementWorkWeightAll() {
}

void UREDScrollBox::CorrectCursorDrawArea(bool IsScroll, bool initcursorTop) {
}

void UREDScrollBox::CloseDrawAreaWidget() {
}

void UREDScrollBox::CleanUpList() {
}

void UREDScrollBox::AddElement() {
}

UREDScrollBox::UREDScrollBox() {
    this->DebugMouseHitDisp = false;
    this->DebugMouseHitBarDisp = false;
    this->m_elementClass = NULL;
    this->m_DebugDraw = NULL;
    this->m_DebugbarDraw = NULL;
}

