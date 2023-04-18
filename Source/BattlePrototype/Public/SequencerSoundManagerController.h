#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SequencerSoundManagerController.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASequencerSoundManagerController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> BgmCueArray;
    
    ASequencerSoundManagerController();
};

