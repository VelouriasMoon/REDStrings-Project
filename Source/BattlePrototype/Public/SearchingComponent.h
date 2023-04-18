#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "SearchingComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USearchingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USearchingComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearch(FVector vecStart, FVector vecEnd, FVector vecForward, float Distance, float Range) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDistanceAngleCheck(AActor* Target, FVector TargetLocation, float Range, float Angle, FRotator Rot, bool noHeight, FVector selfLocation, bool selfLocationOn);
    
};

