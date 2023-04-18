#pragma once
#include "CoreMinimal.h"
#include "EAnimeInterlockingsType.h"
#include "AnimeInterlockingsPresentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnimeInterlockingsPresentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimeInterlockingsType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
};

