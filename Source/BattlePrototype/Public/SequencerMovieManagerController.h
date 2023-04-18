#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SequencerMovieManagerController.generated.h"

class UManaTexture;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASequencerMovieManagerController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaTexture*> ManaTextureArray;
    
    ASequencerMovieManagerController();
};

