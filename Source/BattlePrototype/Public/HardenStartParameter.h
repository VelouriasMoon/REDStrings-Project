#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Engine/DataAsset.h"
#include "HardenStartParameter.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UHardenStartParameter : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveColor;
    
    UHardenStartParameter();
};

