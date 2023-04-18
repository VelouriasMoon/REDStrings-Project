#pragma once
#include "CoreMinimal.h"
#include "AnimeInterlockingAnswer.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Answers;
    
};

