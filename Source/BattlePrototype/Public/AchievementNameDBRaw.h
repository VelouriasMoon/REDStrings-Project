#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AchievementNameDBRaw.generated.h"

USTRUCT(BlueprintType)
struct FAchievementNameDBRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameData;
};

