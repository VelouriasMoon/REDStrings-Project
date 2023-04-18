#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimTransitionKind.generated.h"

UENUM(BlueprintType)
enum class PlayerAnimTransitionKind : uint8 {
    None,
    StartToIdleWalkRun,
    StartToBoringIdle,
    StartToDamage,
    StartToStep,
    StartToAttack,
    StartToFall,
    StartToLand,
    StartToStartBattle,
    StartToEndBattle,
    StartToDead,
    StartToJump,
    StartToAirJump,
    StartToRecover,
    StartToPsychic,
    StartToSprint,
    StartToSprintBrake,
    StartToJumpStepIn,
    StartToStepEnd,
    StartToBlowFall,
    StartToBlowLanding,
    StartToDown,
    StartToWakeUp,
    StartToUseItem,
    StartToStartSprint,
    StartToBrainCrash,
    StartToDrive,
    StartToResurrectBegin,
    StartToResurrect,
    StartToResurrectEnd,
    StartToRevive,
    StartToSprintTurnBack,
    StartToLaunchFall,
    StartToEvent,
    StartToTalkTurn,
    StartToSasLink,
};

