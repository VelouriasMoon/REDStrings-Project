#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AssetLoadComponent.generated.h"

class UParticleSystem;
class USoundAtomCueSheet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAssetLoadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* SoundCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ParticleList;
    
    UAssetLoadComponent();
};

