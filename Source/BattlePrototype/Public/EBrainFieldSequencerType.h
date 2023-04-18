#pragma once
#include "CoreMinimal.h"
#include "EBrainFieldSequencerType.generated.h"

UENUM(BlueprintType)
enum class EBrainFieldSequencerType : uint8 {
    BFS_Invalid,
    BFS_Ch0100,
    BFS_Ch0200,
    BFS_Np1100,
    BFS_Em8000,
    BFS_Em8010,
    BFS_Em8300,
    BFS_Em8000Twin,
    BFS_Em8200,
    BFS_ENPC_Ch0100,
    BFS_ENPC_Ch0200,
    BFE_Max,
};

