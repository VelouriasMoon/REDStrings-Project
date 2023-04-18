#pragma once
#include "CoreMinimal.h"
#include "UserInfo.generated.h"

USTRUCT(BlueprintType)
struct FUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
};

