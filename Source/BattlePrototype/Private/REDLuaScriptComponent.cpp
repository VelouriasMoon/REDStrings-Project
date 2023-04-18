#include "REDLuaScriptComponent.h"

class APlayerController;
class UObject;

void UREDLuaScriptComponent::SetPlayerController(APlayerController* PlayerController) {
}

void UREDLuaScriptComponent::SetIsEndMotion(bool IsEndMotion) {
}

void UREDLuaScriptComponent::SetAnimationActor(UObject* Object) {
}

bool UREDLuaScriptComponent::CreateContextRED(UObject* Parent, bool isRun) {
    return false;
}

UREDLuaScriptComponent::UREDLuaScriptComponent() {
    this->m_parent = NULL;
    this->m_PlayerController = NULL;
    this->m_AnimationActor = NULL;
    this->m_pWaitAnimMontageActor = NULL;
    this->m_pWaitAnimMontageMontage = NULL;
    this->m_pStaticCutsceneBG_ParticleSpeedUpCurveData = NULL;
    this->m_pWaitLoadAsset = NULL;
}

