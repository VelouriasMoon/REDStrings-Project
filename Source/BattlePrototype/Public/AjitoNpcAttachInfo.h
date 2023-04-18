#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoNpcAttach.h"
#include "ENpcAnimationKind.h"
#include "AjitoNpcAttachInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoNpcAttachInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAnimationKind AnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoNpcAttach> Attaches;
    
};

