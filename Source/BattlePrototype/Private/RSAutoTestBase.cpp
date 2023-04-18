#include "RSAutoTestBase.h"



bool ARSAutoTestBase::IsReady_Implementation() {
    return false;
}

void ARSAutoTestBase::FinishTest(ERSAutoTestResult TestResult, const FString& Message) {
}

ARSAutoTestBase::ARSAutoTestBase() {
    this->Result = ERSAutoTestResult::Invalid;
    this->bIsDelayGCInTest = false;
    this->PreparationTimeLimit = 15.00f;
    this->timeLimit = 60.00f;
    this->TimesUpMessage = FText::FromString(TEXT("Time's Up."));
    this->TimesUpResult = ERSAutoTestResult::Failed;
    this->bIsRunning = false;
    this->TotalTime = 0.00f;
}

