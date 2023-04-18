#pragma once
#include "CoreMinimal.h"
#include "LoadTipsParam.generated.h"

USTRUCT(BlueprintType)
struct FLoadTipsParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAlreadyCalled;
    
public:
};

