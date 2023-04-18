#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ManagerInterface.h"
#include "SaveLoadParamClassManager.generated.h"

class URSGameInstance;
class USaveLoadArrangeItemManager;
class USaveLoadEnemyParamManager;
class USaveLoadExSystemParamManager;
class USaveLoadPlayerParamManager;
class USaveLoadSystemParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadParamClassManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isLoadExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_RetryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_AsyncAutoSaveData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadSystemParamManager* m_pSaveLoadSystemParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadPlayerParamManager* m_pSaveLoadPlayerParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadEnemyParamManager* m_pSaveLoadEnemyParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadArrangeItemManager* m_pSaveLoadArrangeItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadExSystemParamManager* m_pSaveLoadExSystemParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadExSystemParamManager* m_pSaveLoadExSystemParamManager_Trial2LoadOnly;
    
    USaveLoadParamClassManager();
    UFUNCTION(BlueprintCallable)
    void SetSaveParamToGameParam_ScenarioFlag(const URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveParamToGameParam(const URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoadExecution(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetGameInstance(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadExecution();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadSystemParamManager* GetSaveLoadSystemParamManager();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadPlayerParamManager* GetSaveLoadPlayerParamManager();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadExSystemParamManager* GetSaveLoadExSystemParamManager_Trial2LoadOnly();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadExSystemParamManager* GetSaveLoadExSystemParamManager();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadEnemyParamManager* GetSaveLoadEnemyParamManager();
    
    UFUNCTION(BlueprintCallable)
    USaveLoadArrangeItemManager* GetSaveLoadArrangeItemManager();
    
    
    // Fix for true pure virtual functions not being implemented
};

