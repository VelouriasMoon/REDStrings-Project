#pragma once
#include "CoreMinimal.h"
#include "UserRedirectUrl.generated.h"

USTRUCT(BlueprintType)
struct FUserRedirectUrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString redirectUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString basicId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString basicPass;
};

