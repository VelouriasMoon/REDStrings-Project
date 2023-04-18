#include "RSInGameFlow.h"

class URSGameInstance;

void ARSInGameFlow::SetCurrentFlowType(EInGameFlowType Type) {
}

void ARSInGameFlow::Initialize(URSGameInstance* gameInst) {
}

EInGameFlowType ARSInGameFlow::GetCurrentFlowType() const {
    return EInGameFlowType::Invalid;
}

ARSInGameFlow::ARSInGameFlow() {
    this->_gameInstance = NULL;
    this->_currentType = EInGameFlowType::Invalid;
}

