#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimeInterlockingRefDataCell.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingRefDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimeInterlockingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableProgressID_M;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableProgressID_F;
    
};

