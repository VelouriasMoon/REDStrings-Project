#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPlayerSkillCategory.h"
#include "AchievementSkillDBRaw.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSkillDBRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSkillCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LearnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LearnPointCh0200;
    
};

