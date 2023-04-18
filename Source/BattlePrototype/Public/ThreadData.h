#pragma once
#include "CoreMinimal.h"
#include "ThreadData.generated.h"

USTRUCT(BlueprintType)
struct FThreadData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 alreadyLookNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 alreadyEmergenceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> publishedMessageNum;
    
public:
};

