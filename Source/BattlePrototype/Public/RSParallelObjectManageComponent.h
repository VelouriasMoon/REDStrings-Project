#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERSParallelTiming.h"
#include "ParallelData.h"
#include "RSParallelObjectManageComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSParallelObjectManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERSParallelTiming, FParallelData> _ParallelTimingMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> _ReserveUnregisterObjectArray;
    
public:
    URSParallelObjectManageComponent();
};

