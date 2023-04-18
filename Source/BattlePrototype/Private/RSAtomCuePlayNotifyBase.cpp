#include "RSAtomCuePlayNotifyBase.h"

class USoundAtomCue;

void URSAtomCuePlayNotifyBase::OnSetEditorSound_Implementation(USoundAtomCue* Sound) const {
}

URSAtomCuePlayNotifyBase::URSAtomCuePlayNotifyBase() {
    this->m_pSound = NULL;
}

