#include "RSGameModeBase.h"

class AActor;
class UObject;

void ARSGameModeBase::OnPreStartPlay_Implementation(const FString& currentLevelName) {
}

void ARSGameModeBase::OnPostInitGame_Implementation(const FString& currentLevelName) {
}

void ARSGameModeBase::LogFlowCheck_IsValid(bool IsValid, const FString& ValidString, const FString& InvalidString) {
}

void ARSGameModeBase::LogFlowCheck(const FString& logString) {
}

bool ARSGameModeBase::IsGameFlowLevel_Implementation(const UObject* WorldContextObject) {
    return false;
}

bool ARSGameModeBase::IsDevelopment() {
    return false;
}

AActor* ARSGameModeBase::FindPlayerStartByName(const FString& TagName) {
    return NULL;
}

ARSGameModeBase::ARSGameModeBase() {
}

