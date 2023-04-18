#include "UILog.h"

class UUILogParts;
class UWidgetAnimation;

void UUILog::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUILog::SetWaitTime(float Time) {
}


void UUILog::SetDrawTime(float Time) {
}

bool UUILog::IsEmpty() const {
    return false;
}

void UUILog::InitializeThis(UWidgetAnimation* animIn1, UWidgetAnimation* animIn2, UWidgetAnimation* animIn3, UWidgetAnimation* animIn4, UWidgetAnimation* animIn5, UWidgetAnimation* animIn6, UWidgetAnimation* animIn7, UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault3, UWidgetAnimation* animDefault4, UWidgetAnimation* animDefault5, UWidgetAnimation* animDefault6, UUILogParts* Log1, UUILogParts* Log2, UUILogParts* Log3, UUILogParts* Log4, UUILogParts* Log5, UUILogParts* Log6, UUILogParts* Log7) {
}

float UUILog::GetWaitTime() const {
    return 0.0f;
}

float UUILog::GetDrawTime() const {
    return 0.0f;
}

void UUILog::AddLogMessageSE(const FString& LogMessage, EUI_SE Se, const float _drawTime) {
}

void UUILog::AddLogMessage(const FString& LogMessage, const float _drawTime) {
}

UUILog::UUILog() {
}

