#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSGameAccountManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSGameAccountManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URSGameAccountManager();
};

