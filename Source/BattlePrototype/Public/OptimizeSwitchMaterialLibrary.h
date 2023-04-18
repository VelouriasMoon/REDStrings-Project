#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOptimizeMaterialCheckResultType.h"
#include "OptimizeSwitchMaterialLibrary.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOptimizeSwitchMaterialLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOptimizeSwitchMaterialLibrary();
    UFUNCTION(BlueprintCallable)
    static EOptimizeMaterialCheckResultType CanUseOptimizeSwitchMaterialPlayerComp(USkeletalMeshComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable)
    static EOptimizeMaterialCheckResultType CanUseOptimizeSwitchMaterialPlayerActor(AActor* TargetActor, USkeletalMeshComponent*& TargetMeshComp);
    
};

