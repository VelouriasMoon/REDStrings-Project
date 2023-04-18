#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavAreaMeta_SwitchByAgent.h"
#include "RSEnemyNavArea.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSEnemyNavArea : public UNavAreaMeta_SwitchByAgent {
    GENERATED_BODY()
public:
    URSEnemyNavArea();
};

