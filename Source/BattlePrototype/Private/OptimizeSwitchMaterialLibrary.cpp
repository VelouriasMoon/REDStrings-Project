#include "OptimizeSwitchMaterialLibrary.h"

class AActor;
class USkeletalMeshComponent;

EOptimizeMaterialCheckResultType UOptimizeSwitchMaterialLibrary::CanUseOptimizeSwitchMaterialPlayerComp(USkeletalMeshComponent* TargetComponent) {
    return EOptimizeMaterialCheckResultType::OMCR_OFF;
}

EOptimizeMaterialCheckResultType UOptimizeSwitchMaterialLibrary::CanUseOptimizeSwitchMaterialPlayerActor(AActor* TargetActor, USkeletalMeshComponent*& TargetMeshComp) {
    return EOptimizeMaterialCheckResultType::OMCR_OFF;
}

UOptimizeSwitchMaterialLibrary::UOptimizeSwitchMaterialLibrary() {
}

