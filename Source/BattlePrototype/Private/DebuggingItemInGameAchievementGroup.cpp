#include "DebuggingItemInGameAchievementGroup.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class ADebuggingItemInt;

void ADebuggingItemInGameAchievementGroup::OnPageOpened() {
}

void ADebuggingItemInGameAchievementGroup::OnEventChangeKins(const ADebuggingItemEvent* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeReportCount(const ADebuggingItemInt* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeIntParam(const ADebuggingItemInt* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeBoolTrade(const ADebuggingItemBool* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeBoolQuest(const ADebuggingItemBool* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeBoolPresent(const ADebuggingItemBool* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeBoolEnemy(const ADebuggingItemBool* Item) {
}

void ADebuggingItemInGameAchievementGroup::OnChangeBoolAttachment(const ADebuggingItemBool* Item) {
}

ADebuggingItemInGameAchievementGroup::ADebuggingItemInGameAchievementGroup() {
    this->Manager = NULL;
    this->DBAsset = NULL;
}

