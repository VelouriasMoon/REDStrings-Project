#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "TeamBondsLevelupCharData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FTeamBondsLevelupCharData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID CharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BondsLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BondsEp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Present;
    
};

