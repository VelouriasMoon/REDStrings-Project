#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_RSTimedParticleSystem.h"
#include "AnimNotifyState_RSTimedParticleSystemWithCondition.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BATTLEPROTOTYPE_API UAnimNotifyState_RSTimedParticleSystemWithCondition : public UAnimNotifyState_RSTimedParticleSystem {
    GENERATED_BODY()
public:
    UAnimNotifyState_RSTimedParticleSystemWithCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckCondition(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

