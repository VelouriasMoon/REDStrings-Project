#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Transform
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "ECharacterPhysicalActionType.h"
#include "EGamePhysicalSurfaceType.h"
#include "FootStepComponent.generated.h"

class AActor;
class UCharacterPhysicalSurfaceActionEffectResource;
class UCharacterPhysicalSurfaceActionSoundResource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UFootStepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectTableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundTableId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterPhysicalSurfaceActionEffectResource* EffectActionResCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterPhysicalSurfaceActionSoundResource* SoundActionResCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBeginPlayLoadAsset;
    
public:
    UFootStepComponent();
    UFUNCTION(BlueprintCallable)
    void PlaySoundByName(const EGamePhysicalSurfaceType PhysicsType, FName ActionType, const FVector& Location, const FRotator& Rotation, AActor* Creator);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(const EGamePhysicalSurfaceType PhysicsType, const ECharacterPhysicalActionType ActionType, const FVector& Location, const FRotator& Rotation, AActor* Creator);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectByName(const EGamePhysicalSurfaceType PhysicsType, FName ActionType, const FTransform& Transform, AActor* Creator);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffect(const EGamePhysicalSurfaceType PhysicsType, const ECharacterPhysicalActionType ActionType, const FTransform& Transform, AActor* Creator);
    
};

