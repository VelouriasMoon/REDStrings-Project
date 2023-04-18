#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoNpcAttachInfo.h"
#include "AjitoNpcAnimInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoNpcAnimInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoNpcAttachInfo> AttachInfo;
    
};

