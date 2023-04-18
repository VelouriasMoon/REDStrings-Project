#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BondsEpisodeDLCContent.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBondsEpisodeDLCContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID PresentCheckPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresentID;
};

