#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyAiVariableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyAiVariableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyAiVariableComponent();
};

