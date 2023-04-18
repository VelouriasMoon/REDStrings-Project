#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AttachEffectBackgroundVolume.generated.h"

class AActor;
class AEffectBackground;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAttachEffectBackgroundVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEffectBackground*> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Subtract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unbound;
    
    AAttachEffectBackgroundVolume();
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
};

