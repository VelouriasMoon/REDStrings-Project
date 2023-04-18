#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TeamBondsLevelupCharData.h"
#include "TeamBondsLevelupDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FTeamBondsLevelupDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamBondsLevelupCharData> Params;
    
};

