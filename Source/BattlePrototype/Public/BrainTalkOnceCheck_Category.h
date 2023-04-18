#pragma once
#include "CoreMinimal.h"
#include "BrainTalkOnceCheck_DataTableID.h"
#include "BrainTalkOnceCheck_Category.generated.h"

USTRUCT(BlueprintType)
struct FBrainTalkOnceCheck_Category {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkOnceCheck_DataTableID> CategoryList;
};

