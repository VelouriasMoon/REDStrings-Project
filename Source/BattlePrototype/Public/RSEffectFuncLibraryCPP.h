#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HCHitResult.h"
#include "RSEffectFuncLibraryCPP.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSEffectFuncLibraryCPP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSEffectFuncLibraryCPP();
    UFUNCTION(BlueprintCallable)
    static void SpawnDamageHitEffectCPP(AActor* Actor, const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CalcDamageHitEffectRotation(AActor* InActor, const FHCHitResult& InHitResult, const FVector& InEffectSpawnLocation);
    
};

