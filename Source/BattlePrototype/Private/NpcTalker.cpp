#include "NpcTalker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "REDLuaScriptComponent.h"

void ANpcTalker::setMessageTableName(const FString& TableName) {
}

FString ANpcTalker::getMessageTableName() const {
    return TEXT("");
}

ANpcTalker::ANpcTalker() {
    this->m_messageTableName = TEXT("common");
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->m_pLuaScriptComponent = CreateDefaultSubobject<UREDLuaScriptComponent>(TEXT("Lua Component"));
    this->m_MakeEventActorClass = NULL;
    this->m_makeEventActor = NULL;
    this->m_pChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->m_actionIconType = EActionIconType::Talk;
    this->m_actionIconSubQuestState = EActionIconSubQuestState::None;
}

