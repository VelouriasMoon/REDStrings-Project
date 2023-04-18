#pragma once
#include "CoreMinimal.h"
#include "CharacterData.h"
#include "ScenarioData.h"
#include "SystemData.h"
#include "UserData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemData SystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterData> CharacterDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioData ScenarioData;
    
};

