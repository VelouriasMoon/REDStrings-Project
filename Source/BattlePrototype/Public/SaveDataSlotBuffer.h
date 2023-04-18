#pragma once
#include "CoreMinimal.h"
#include "SaveDataSlotBuffer.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataSlotBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_buf;
    
};

