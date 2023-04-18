#pragma once
#include "CoreMinimal.h"
#include "HugeTssInfo.generated.h"

USTRUCT(BlueprintType)
struct FHugeTssInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tssUrl;
};

