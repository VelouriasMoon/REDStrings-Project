#include "EnemyDeadMoveComponentBase.h"

void UEnemyDeadMoveComponentBase::Update_Native(float DeltaSeconds) {
}

void UEnemyDeadMoveComponentBase::Start_Native(float BlendExp, float MoveLength, TEnumAsByte<EEasingFunc::Type> Function, float MoveSeconds, FVector DamageDir) {
}

UEnemyDeadMoveComponentBase::UEnemyDeadMoveComponentBase() {
    this->mOwnerEnemy = NULL;
}

