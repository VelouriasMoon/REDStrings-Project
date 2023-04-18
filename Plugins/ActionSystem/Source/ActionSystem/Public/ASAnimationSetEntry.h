#pragma once
#include "CoreMinimal.h"
#include "ASAnimationSetEntry.generated.h"

USTRUCT(BlueprintType)
struct FASAnimationSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
};

