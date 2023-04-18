#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSActorComponentEnemyBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSActorComponentEnemyBase : public UActorComponent {
    GENERATED_BODY()
public:
    URSActorComponentEnemyBase();
};

