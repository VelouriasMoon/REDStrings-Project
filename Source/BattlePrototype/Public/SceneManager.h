#pragma once
#include "CoreMinimal.h"
#include "EChangeAreaStatus.h"
#include "ELoadingScreenType.h"
#include "EMainScenarioType.h"
#include "EventManagerInterface.h"
#include "ManagerInterface.h"
#include "OnAfterChangeScenarioFlagDelegate.h"
#include "OnBeforeChangeScenarioFlagDelegate.h"
#include "OnChangeAreaLoadStatusDelegate.h"
#include "RSActorSystemBase.h"
#include "SceneManager.generated.h"

class AActor;
class AJumpAreaBase;
class UBlueprintFunctionLibrary;
class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASceneManager : public ARSActorSystemBase, public IManagerInterface, public IEventManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAreaChanging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeforeChangeScenarioFlag OnBeforeChangeScenarioFlag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAfterChangeScenarioFlag OnAfterChangeScenarioFlag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeAreaLoadStatus OnChangeAreaLoadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckTextureLoadAtStartScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureLoadPercentAtStartScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AJumpAreaBase*> CurrentEnabledJumpAreas;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> m_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FlagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprintFunctionLibrary* FunctionLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_FunctionLibraryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSaveDataLoadFlow_ArrangeItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAreaChangeRetrySaveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WaitUnloadDynamicLevels_WaitCaount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_WaitUnloadDynamicLevels_IsDoFlushRenderingCommands;
    
public:
    ASceneManager();
    UFUNCTION(BlueprintCallable)
    void ToggleScenarioFlag(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSaveDataLoadFlow_ArrangeItemManager(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAreaChangeRetrySaveFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestChangeSceneBattleSimulator(FName BattleSimulatorRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestChangeScene(int32 LocationId, int32 areaId, int32 PortalID, const TArray<FName>& SceneArgs, bool NoFade, bool& Error, ELoadingScreenType LoadingScreenType, int32 LoadingScreenParam, bool IsAutoSaveEnable, FName BattleSimulatorLevelInfosName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCurrentJumpArea(AJumpAreaBase* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnScenarioFlag(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnEndGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void OffScenarioFlag(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitedForWaitUnloadDynamicLevels();
    
    UFUNCTION(BlueprintCallable)
    bool IsSaveDataLoadFlow_ArrangeItemManager();
    
    UFUNCTION(BlueprintCallable)
    bool IsAreaChangeRetrySaveFlag();
    
    UFUNCTION(BlueprintCallable)
    EMainScenarioType GetMainScenarioType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCurrentLocationName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentLocationInfo(int32& LocationId, int32& areaId, int32& VariationID, int32& PortalID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentLocationAndArea(int32& LocationId, int32& areaId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetBeforeLocationName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBeforeLocationAndArea(int32& LocationId, int32& areaId);
    
    UFUNCTION(BlueprintCallable)
    void FlushPhysicsSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentJumpArea();
    
    UFUNCTION(BlueprintCallable)
    bool CheckScenarioFlag(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void CallPortalFunction(int32 LocationId, int32 areaId, int32 PortalID, int32& NextLocationID, int32& NextAreaID, FName& PortalName);
    
    UFUNCTION(BlueprintCallable)
    void CallOnChangeAreaLoadStatus(EChangeAreaStatus Status, bool IsChangeLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFuncFromCode_UpdateAllTownPeopleState();
    
    UFUNCTION(BlueprintCallable)
    void AddCurrentJumpArea(AJumpAreaBase* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

