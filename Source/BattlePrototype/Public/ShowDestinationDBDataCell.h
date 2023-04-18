#pragma once
#include "CoreMinimal.h"
#include "ShowDestinationProgOrFlgCheck.h"
#include "ShowDestinationDBDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FShowDestinationDBDataCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShowDestinationProgOrFlgCheck> ProOrFlgCheck;
    
};

