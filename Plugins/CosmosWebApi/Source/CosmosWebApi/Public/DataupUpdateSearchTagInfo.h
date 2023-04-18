#pragma once
#include "CoreMinimal.h"
#include "DataupUpdateSearchTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FDataupUpdateSearchTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
};

