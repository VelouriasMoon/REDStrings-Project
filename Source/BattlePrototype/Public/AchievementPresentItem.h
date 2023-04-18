#pragma once
#include "CoreMinimal.h"
#include "AchievementPresentItem.generated.h"

USTRUCT(BlueprintType)
struct FAchievementPresentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> idArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 startIdx;
    
};

