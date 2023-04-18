#include "DebuggingItemTeamBondsLevelGroup.h"

class ADebuggingItemEvent;
class ADebuggingItemInt;

void ADebuggingItemTeamBondsLevelGroup::OnExecutePresent(const ADebuggingItemEvent* Item) {
}

void ADebuggingItemTeamBondsLevelGroup::OnChangeLevel(const ADebuggingItemInt* Item) {
}

ADebuggingItemTeamBondsLevelGroup::ADebuggingItemTeamBondsLevelGroup() {
    this->paramMan = NULL;
    this->dbMan = NULL;
}

