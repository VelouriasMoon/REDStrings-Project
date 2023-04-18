#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoMemberAttach.h"
#include "ENpcAnimationKind.h"
#include "AjitoMemberAttachInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoMemberAttachInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAnimationKind AnimKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoMemberAttach> Attaches;
    
};

