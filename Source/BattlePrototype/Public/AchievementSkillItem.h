#pragma once
#include "CoreMinimal.h"
#include "EPlayerSkill.h"
#include "AchievementSkillItem.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSkillItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerSkill> skillArray;
    
};

