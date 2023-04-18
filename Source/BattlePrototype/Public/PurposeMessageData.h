#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PurposeMessageData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPurposeMessageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgID;
    
};

