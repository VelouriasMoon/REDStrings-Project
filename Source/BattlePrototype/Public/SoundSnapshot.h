#pragma once
#include "CoreMinimal.h"
#include "ESoundSnapshot.h"
#include "SoundSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FSoundSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundSnapshot Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
};

