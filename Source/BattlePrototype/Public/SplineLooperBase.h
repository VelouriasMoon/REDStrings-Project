#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "GameFramework/Actor.h"
#include "SplineLooperBase.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class BATTLEPROTOTYPE_API ASplineLooperBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SpawnSplineNv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SplineActorsNv;
    
public:
    ASplineLooperBase();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetupParameters(USplineComponent* InSpawnSpline, const TArray<AActor*>& InSplineActors, const TArray<float>& InInitialSplineLocations, FTransform InAdditonalTransform, float InSpeed, float InDirectionRotationSpeed, bool bInRotateAlongSpline, bool bInFlipToSpeedDirection, bool bInUpdateScale, bool bInUseScaleToSpeedRotation);
    
};

