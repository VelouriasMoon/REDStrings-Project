#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AchievementStringDBRaw.generated.h"

USTRUCT(BlueprintType)
struct FAchievementStringDBRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringData;
    
};

