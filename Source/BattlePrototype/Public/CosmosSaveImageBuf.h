#pragma once
#include "CoreMinimal.h"
#include "CosmosSaveImageBuf.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSaveImageBuf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buff;
    
};

