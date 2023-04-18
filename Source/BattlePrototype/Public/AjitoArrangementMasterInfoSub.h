#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoArrangementMasterInfoSub.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoArrangementMasterInfoSub : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HideActorTags;
    
};

