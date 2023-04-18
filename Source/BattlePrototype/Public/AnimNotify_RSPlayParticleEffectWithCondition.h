#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_RSPlayParticleEffect.h"
#include "AnimNotify_RSPlayParticleEffectWithCondition.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class BATTLEPROTOTYPE_API UAnimNotify_RSPlayParticleEffectWithCondition : public UAnimNotify_RSPlayParticleEffect {
    GENERATED_BODY()
public:
    UAnimNotify_RSPlayParticleEffectWithCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckCondition(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

