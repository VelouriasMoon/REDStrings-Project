#pragma once
#include "CoreMinimal.h"
#include "AchievementParam.generated.h"

class UAchievementManager;
class UAchievementParamDBAsset;
class URSGameInstance;

USTRUCT(BlueprintType)
struct FAchievementParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* m_gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementManager* m_achievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementParamDBAsset* m_achievementDBAsset;
    
public:
};

