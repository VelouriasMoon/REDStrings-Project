#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LoadTipsDataCell_Deprecated.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLoadTipsDataCell_Deprecated : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MsgID;
    
};

