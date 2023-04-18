#include "RSAtomCuePlayNotifyStateBase.h"

class USoundAtomCue;

void URSAtomCuePlayNotifyStateBase::OnSetEditorSound_Implementation(USoundAtomCue* Sound) const {
}

URSAtomCuePlayNotifyStateBase::URSAtomCuePlayNotifyStateBase() {
    this->m_pSound = NULL;
}

