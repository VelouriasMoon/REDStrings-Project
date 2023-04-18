#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SequencerSound.generated.h"

class URSAtomComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASequencerSound : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSAtomComponentBase* AtomComponent;
    
public:
    ASequencerSound();
    UFUNCTION(BlueprintCallable)
    void StopSequenceSound(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* GetAtomComponent();
    
};

