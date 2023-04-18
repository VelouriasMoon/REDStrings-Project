#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterDitherDataAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCharacterDitherDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherSpeed;
    
    UCharacterDitherDataAsset();
};

