#pragma once
#include "CoreMinimal.h"
#include "HorizonDialogueDialoguePageResult.generated.h"

USTRUCT(BlueprintType)
struct FHorizonDialogueDialoguePageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageIndex;
};

