#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EnemyRepopLevelInfo.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "SaveLoadEnemyParamManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadEnemyParamManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEnemyRepopLevelInfo> m_EnemyRepopLevelInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> m_UniqueBrainCrashPlayedList;
    
public:
    USaveLoadEnemyParamManager();
    
    // Fix for true pure virtual functions not being implemented
};

