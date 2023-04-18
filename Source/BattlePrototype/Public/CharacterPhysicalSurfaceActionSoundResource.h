#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "CharacterPhysicalSurfaceActionSound.h"
#include "CharacterPhysicalSurfaceActionSoundResourceArrray.h"
#include "ECharacterPhysicalActionType.h"
#include "EGamePhysicalSurfaceType.h"
#include "CharacterPhysicalSurfaceActionSoundResource.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCharacterPhysicalSurfaceActionSoundResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterPhysicalSurfaceActionSoundResourceArrray> ResourceList;
    
public:
    UCharacterPhysicalSurfaceActionSoundResource();
    UFUNCTION(BlueprintCallable)
    bool UnloadAsset();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAsset(const FCharacterPhysicalSurfaceActionSound& ActionSound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetResource(EGamePhysicalSurfaceType SurfaceType, ECharacterPhysicalActionType ActionType);
    
};

