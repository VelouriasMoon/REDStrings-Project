#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_RSTimedParticleSystem.h"
#include "AnimNotifyState_RSTimedParticleSystem_SASCopyBase.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class BATTLEPROTOTYPE_API UAnimNotifyState_RSTimedParticleSystem_SASCopyBase : public UAnimNotifyState_RSTimedParticleSystem {
    GENERATED_BODY()
public:
    UAnimNotifyState_RSTimedParticleSystem_SASCopyBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckExecNotifyBegin(USkeletalMeshComponent* MeshComp) const;
    
};

