#pragma once
#include "CoreMinimal.h"
#include "EConvertTrial2SaveDataAllResult.h"
#include "RSGameModeBase.h"
#include "RSOutGameMode.generated.h"

class URSSaveGame;
class USaveLoadScreenParamManager;

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API ARSOutGameMode : public ARSGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pAutoSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAsyncConvertTrial2SaveDataRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConvertTrial2SaveDataAllResult m_ConvertTrial2SaveDataAllResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_AsyncConvertTrial2SaveDataClass;
    
public:
    ARSOutGameMode();
    UFUNCTION(BlueprintCallable)
    bool IsWorkingAsyncConvertTrial2SaveData();
    
    UFUNCTION(BlueprintCallable)
    bool ConvertTrial2SaveDataExec();
    
};

