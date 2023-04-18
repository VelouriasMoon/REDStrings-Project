#pragma once
#include "CoreMinimal.h"
#include "LoadTipsBlockParam.generated.h"

USTRUCT(BlueprintType)
struct FLoadTipsBlockParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReadyBlock;
    
public:
};

