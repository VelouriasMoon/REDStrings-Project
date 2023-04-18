#include "StageManager.h"
#include "ArrangeItemStageManager.h"
#include "ArrangeObjectManager.h"
#include "GimmickManager.h"
#include "NpcManager.h"

UNpcManager* AStageManager::GetNpcManager() {
    return NULL;
}

UGimmickManager* AStageManager::GetGimmickManager() {
    return NULL;
}

UArrangeObjectManager* AStageManager::GetArrangeObjectManager() {
    return NULL;
}

UArrangeItemStageManager* AStageManager::GetArrangeItemStageManager() {
    return NULL;
}

AStageManager::AStageManager() {
    this->ArrangeObjectManager = CreateDefaultSubobject<UArrangeObjectManager>(TEXT("ArrangeObjectManager"));
    this->ArrangeItemStageManager = CreateDefaultSubobject<UArrangeItemStageManager>(TEXT("ArrangeItemStageManager"));
    this->NpcManager = CreateDefaultSubobject<UNpcManager>(TEXT("NpcManager"));
    this->GimmickManager = CreateDefaultSubobject<UGimmickManager>(TEXT("GimmickManager"));
}

