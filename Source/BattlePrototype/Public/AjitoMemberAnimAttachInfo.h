#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoMemberAttachInfo.h"
#include "AjitoMemberAnimAttachInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoMemberAnimAttachInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoMemberAttachInfo> AttachInfo;
    
};

