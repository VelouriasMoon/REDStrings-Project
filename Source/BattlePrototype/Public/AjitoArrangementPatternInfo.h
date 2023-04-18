#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoArrangementPatternInfoOne.h"
#include "AjitoArrangementPatternInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoArrangementPatternInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoArrangementPatternInfoOne> MemberAndAction;
    
};

