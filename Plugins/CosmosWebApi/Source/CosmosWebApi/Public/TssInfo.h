#pragma once
#include "CoreMinimal.h"
#include "TssInfo.generated.h"

USTRUCT(BlueprintType)
struct FTssInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tssData;
};

