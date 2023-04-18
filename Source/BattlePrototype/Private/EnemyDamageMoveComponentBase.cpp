#include "EnemyDamageMoveComponentBase.h"

class AActor;

void UEnemyDamageMoveComponentBase::Update_Native(float DeltaSec) {
}

void UEnemyDamageMoveComponentBase::Start_Native(FVector DamageDir, float Power, bool DeadMove, AActor* attacker) {
}

void UEnemyDamageMoveComponentBase::SetDamageMoveScale(float Scale) {
}

float UEnemyDamageMoveComponentBase::GetLength() {
    return 0.0f;
}

UEnemyDamageMoveComponentBase::UEnemyDamageMoveComponentBase() {
    this->mOwnerEnemy = NULL;
}

