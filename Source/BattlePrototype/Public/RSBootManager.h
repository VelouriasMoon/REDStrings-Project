#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBootLevelFlow.h"
#include "ManagerInterface.h"
#include "OnEventSaveLoadErrorDelegate.h"
#include "RSBootManager.generated.h"

class ARSHUDBase;
class UDatabaseManager;
class URSSaveGame;
class USaveLoadScreenParamManager;
class UUserParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSBootManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventSaveLoadError m_OnEventSaveLoadError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBootLevelFlow m_BootFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pRSHudBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pSaveGameSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserParamManager* UserParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseManager* DatabaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSaveLoadSystemParamManager;
    
public:
    ARSBootManager();
    UFUNCTION(BlueprintCallable)
    void SetBootFlow(EBootLevelFlow flow);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool isCheckStorageSpace();
    
    UFUNCTION(BlueprintCallable)
    EBootLevelFlow GetBootFlow();
    
    
    // Fix for true pure virtual functions not being implemented
};

