#pragma once
#include "CoreMinimal.h"
#include "EOptionParamType.generated.h"

UENUM(BlueprintType)
enum class EOptionParamType : uint8 {
    Difficulty,
    MinimapDisp,
    MinimapRotate,
    MinimapScale,
    DisplayLanguage,
    VoiceLanguage,
    VoiceVolume,
    BGMVolume,
    SEVolume,
    SoundSetting,
    CameraRotateSpeed,
    CameraPitch,
    CameraYaw,
    DisplayEnemyDamage,
    ControllerVibration,
    EventMessageAutoPlay,
    AttackAutoLockOn,
    TargetCameraTrace,
    TargetAutoChange,
    LockonActionType,
    CameraAfterMoveType,
    Num,
};

