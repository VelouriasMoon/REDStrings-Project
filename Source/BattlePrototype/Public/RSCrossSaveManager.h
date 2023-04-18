#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSCrossSaveManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSCrossSaveManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URSCrossSaveManager();
};

