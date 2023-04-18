#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimeInterlockingsPresentInfo.h"
#include "AnimeInterlockingsPresentList.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAnimeInterlockingsPresentList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimeInterlockingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimeInterlockingsPresentInfo> PresentInfos;
    
};

