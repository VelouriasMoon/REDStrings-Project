#pragma once
#include "CoreMinimal.h"
#include "NpcSkeletalMeshActor.h"
#include "NpcSequencerActor.generated.h"

class UBoxComponent;
class USphereComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcSequencerActor : public ANpcSkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoundBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundCollisionHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundCollisionHandLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundCollisionHandRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundCollisionFootLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundCollisionFootRight;
    
    ANpcSequencerActor();
};

