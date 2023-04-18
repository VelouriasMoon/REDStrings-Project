#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Transform
#include "ESequencerDilationOwner.h"
#include "HDamageEffectType.h"
#include "SoundEffectDamage.h"
#include "Em0630Interface.generated.h"

class AActor;
class USoundAtomCue;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UEm0630Interface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IEm0630Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SpawnEm0630DmgEffect(HDamageEffectType DamagePointType, int32 DamageparticleTypeIndex, const FTransform& Transform, AActor* Creator, ESequencerDilationOwner DilationOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSoundEffectDamage GetEm0630SoundEffectDamage(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USoundAtomCue* GetEm0630DamageSoundCue(int32 Index);
    
};

