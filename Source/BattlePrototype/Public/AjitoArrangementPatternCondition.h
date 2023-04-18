#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoArrangementPatternInfoProgress.h"
#include "EPlayerID.h"
#include "AjitoArrangementPatternCondition.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoArrangementPatternCondition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> RequiredMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoArrangementPatternInfoProgress> AvailableProgressIdPeriod;
    
};

