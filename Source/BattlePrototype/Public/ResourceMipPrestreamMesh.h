#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "ResourceMipPrestreamMesh.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FResourceMipPrestreamMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> TargetTextures;
    
};

