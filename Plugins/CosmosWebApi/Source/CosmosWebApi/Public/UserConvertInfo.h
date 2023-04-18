#pragma once
#include "CoreMinimal.h"
#include "UserConvertInfo.generated.h"

USTRUCT(BlueprintType)
struct FUserConvertInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
};

