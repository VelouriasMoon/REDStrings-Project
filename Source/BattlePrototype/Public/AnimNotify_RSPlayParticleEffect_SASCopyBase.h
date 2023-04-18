#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_RSPlayParticleEffect.h"
#include "AnimNotify_RSPlayParticleEffect_SASCopyBase.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class BATTLEPROTOTYPE_API UAnimNotify_RSPlayParticleEffect_SASCopyBase : public UAnimNotify_RSPlayParticleEffect {
    GENERATED_BODY()
public:
    UAnimNotify_RSPlayParticleEffect_SASCopyBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckExecNotify(USkeletalMeshComponent* MeshComp) const;
    
};

