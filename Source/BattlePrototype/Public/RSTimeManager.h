#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTimeManager.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSTimeManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTimeManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWorldNormalDeltaSeconds(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSystemDeltaSeconds(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorIgnoreHitStop(float HitStopRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorDeltaSeconds(const AActor* Actor);
    
};

