#pragma once
#include "CoreMinimal.h"
#include "BrainTalkOnceCheck_DataTableID.generated.h"

USTRUCT(BlueprintType)
struct FBrainTalkOnceCheck_DataTableID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DataTableIDList;
};

