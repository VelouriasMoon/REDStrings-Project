#pragma once
#include "CoreMinimal.h"
#include "AnimeInterlockingURL.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingURL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
};

