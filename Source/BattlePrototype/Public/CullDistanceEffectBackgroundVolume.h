#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CullDistanceEffectBackgroundVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ACullDistanceEffectBackgroundVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unbound;
    
    ACullDistanceEffectBackgroundVolume();
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
};

