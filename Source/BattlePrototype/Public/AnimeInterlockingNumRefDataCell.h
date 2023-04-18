#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimeInterlockingNumRefDataCell.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingNumRefDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimeInterlockingNumName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearedNum;
    
};

