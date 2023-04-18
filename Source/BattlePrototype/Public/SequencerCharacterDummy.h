#pragma once
#include "CoreMinimal.h"
#include "RSActorSystemBase.h"
#include "SequencerCharacterDummy.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASequencerCharacterDummy : public ARSActorSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    ASequencerCharacterDummy();
};

