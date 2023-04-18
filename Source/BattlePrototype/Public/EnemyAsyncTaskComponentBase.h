#pragma once
#include "CoreMinimal.h"
#include "RSAsyncTaskActorComponent.h"
#include "EnemyAsyncTaskComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyAsyncTaskComponentBase : public URSAsyncTaskActorComponent {
    GENERATED_BODY()
public:
    UEnemyAsyncTaskComponentBase();
};

