#pragma once
#include "CoreMinimal.h"
#include "EPlayerCollisionCheckType.generated.h"

UENUM(BlueprintType)
enum class EPlayerCollisionCheckType : uint8 {
    Enemy,
    InputDirEnemy,
    EnemyForward,
    EnemyBackward,
    EnemyLeft,
    EnemyRight,
    EnemyForwardGround,
    EnemyBackwardGround,
    EnemyLeftGround,
    EnemyRightGround,
    Input,
    Forward,
    Backward,
    Left,
    Right,
    PlayerGround,
    ForwardGround,
    BackwardGround,
    LeftGround,
    RightGround,
    CopyRight,
    CopyLeft,
    InputDirEnemyForMoveTo,
    InputDirForCorrectMoveInputToWall,
    FallCheck,
    StuckCheck,
    MaxNum,
};

