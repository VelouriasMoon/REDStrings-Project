#include "GameTimerFunctionLibrary.h"

class AActor;

void UGameTimerFunctionLibrary::UpdateTimerByWorld(FGameTimer& GameTimer, AActor* Actor) {
}

void UGameTimerFunctionLibrary::UpdateTimerByActor(FGameTimer& GameTimer, AActor* Actor) {
}

void UGameTimerFunctionLibrary::UpdateTimer(FGameTimer& GameTimer, float Delta) {
}

void UGameTimerFunctionLibrary::SetTimer(FGameTimer& GameTimer, float Time) {
}

void UGameTimerFunctionLibrary::SetPause(FGameTimer& GameTimer, bool bPause) {
}

bool UGameTimerFunctionLibrary::IsPause(const FGameTimer& GameTimer) {
    return false;
}

bool UGameTimerFunctionLibrary::IsOver(const FGameTimer& GameTimer) {
    return false;
}

bool UGameTimerFunctionLibrary::IsEnable(const FGameTimer& GameTimer) {
    return false;
}

float UGameTimerFunctionLibrary::GetRemainingTime(const FGameTimer& GameTimer) {
    return 0.0f;
}

float UGameTimerFunctionLibrary::GetRate(const FGameTimer& GameTimer) {
    return 0.0f;
}

float UGameTimerFunctionLibrary::GetEndTime(const FGameTimer& GameTimer) {
    return 0.0f;
}

float UGameTimerFunctionLibrary::GetElapsedTime(const FGameTimer& GameTimer) {
    return 0.0f;
}

void UGameTimerFunctionLibrary::EndTimer(FGameTimer& GameTimer) {
}

float UGameTimerFunctionLibrary::AddElapsedTime(FGameTimer& GameTimer, float addTime) {
    return 0.0f;
}

UGameTimerFunctionLibrary::UGameTimerFunctionLibrary() {
}

