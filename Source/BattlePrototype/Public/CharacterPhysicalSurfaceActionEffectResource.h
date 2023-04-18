#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "CharacterPhysicalSurfaceActionEffect.h"
#include "CharacterPhysicalSurfaceActionEffectResourceArray.h"
#include "ECharacterPhysicalActionType.h"
#include "EGamePhysicalSurfaceType.h"
#include "CharacterPhysicalSurfaceActionEffectResource.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCharacterPhysicalSurfaceActionEffectResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPhysicalSurfaceActionEffectResourceArray> ResourceList;
    
public:
    UCharacterPhysicalSurfaceActionEffectResource();
    UFUNCTION(BlueprintCallable)
    bool UnloadAsset();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAsset(const FCharacterPhysicalSurfaceActionEffect& ActionEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetResource(EGamePhysicalSurfaceType SurfaceType, ECharacterPhysicalActionType ActionType);
    
};

