#pragma once
#include "CoreMinimal.h"
#include "FlagListStruct.generated.h"

USTRUCT(BlueprintType)
struct FFlagListStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Flags;
    
};

