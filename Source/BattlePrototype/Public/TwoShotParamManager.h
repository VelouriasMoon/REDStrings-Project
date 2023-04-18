#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "TwoShotParamManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ATwoShotParamManager : public AActor, public IManagerInterface, public IRSSaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
public:
    ATwoShotParamManager();
    UFUNCTION(BlueprintCallable)
    void SaveCheckFlags();
    
    UFUNCTION(BlueprintCallable)
    void ReturnCheckFlag(bool IsMan);
    
    UFUNCTION(BlueprintCallable)
    void ReplacementChkFlag(bool IsMan);
    
    UFUNCTION(BlueprintCallable)
    void ClearReplaceList();
    
    
    // Fix for true pure virtual functions not being implemented
};

