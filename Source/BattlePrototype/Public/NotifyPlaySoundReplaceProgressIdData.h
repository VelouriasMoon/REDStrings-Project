#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NotifyPlaySoundReplaceProgressIdData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNotifyPlaySoundReplaceProgressIdData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progressIdMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progressIdMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReplaceDataTable;
    
};

