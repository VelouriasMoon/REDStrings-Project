#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "InputManager.h"
#include "BattleSimulatorSaveParams.h"
#include "CosmosSysKpiParam.h"
#include "ELibraryFlagType.h"
#include "EManagerProcTiming.h"
#include "EManagerTypeID.h"
#include "InfoAtRetry.h"
#include "Templates/SubclassOf.h"
#include "RSGameInstance.generated.h"


class AActionManager;
class AActor;
class AArrangeItemManager;
class ABattleManager;
class ABattleSimulatorManager;
class ABattlefieldManager;
class ABlendableVolumeManager;
class ABrainCrashManager;
class ABrainTalkManager;
class ADebuggingGameActivityManager;
class ADropItemManager;
class AEnemyManager;
class AGameMainManager;
class AInputManager;
class AIntroTutorialManager;
class ALC21MapGimmickManager;
class AMapGimmickManager;
class AMessageHudManager;
class AModelViewerBase;
class APlayerManager;
class APsychicObjectManager;
class ARSCharacterBase;
class ARSInGameFlow;
class ARSMovieManager;
class ARSParallelObjectManager;
class ARSParticleSystemManager;
class ARSSoundManager;
class ASASManager;
class AStageManager;
class ATriggerEffectManager;
class ATwoShotParamManager;
class UAchievementManager;
class UActivityManager;
class UAddContentManager;
class UAnimeInterlockingManager;
class UCalcMemoryManager;
class UClearGetterManager;
class UDatabaseManager;
class UFlagManager;
class UObject;
class URSAccountManager;
class URSShareUtilityManager;
class URevisionData;
class USaveLoadParamClassManager;
class UUserParamManager;
class UXGameStreamingManager;

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSCharacterBase> _mainPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSCharacterBase> _leftPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSCharacterBase> _rightPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _hitManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABrainCrashManager> _brainCrashManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASASManager> _sasManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APsychicObjectManager> _psychicObjectManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSAccountManager> _accountManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSSoundManager> _soundManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSParticleSystemManager> _particleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABlendableVolumeManager> _StageSettingVolumeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEnemyManager> _enemyManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _postProcessManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _renderTargetManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _brainFieldManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _radialBlurManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _eventManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerManager> _playerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _sceneManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _levelManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _resourceManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleManager> _battleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattlefieldManager> _battlefieldManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStageManager> _stageManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSMovieManager> _movieManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInputManager> _inputManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABrainTalkManager> _brainTalkManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameMainManager> _GameMainManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _gameSystemManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _inGameFlowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMapGimmickManager> _mapGimmickManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALC21MapGimmickManager> _lc21MapGimmickManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _cosmosWebManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _triggerEffectManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleSimulatorManager> _battleSimulatorManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSShareUtilityManager> _shareUtilityManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _debuggingGameActivityManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> _Managers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _finishMoveActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ReloadLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUsesSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfoAtRetry m_retryParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_PlBPClassList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _debuggingManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _OutgameDebuggingManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AModelViewerBase> _ModelViewerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> _phychicObjectBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevisionData* _RevisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isForceCrcCheckError;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CosmosBaseURLBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCosmosGetBaseURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCosmosTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CosmosUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CosmosSessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosSysKpiParam> CosmosSysKpiParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCosmosEnvInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCosmosAgreeKpi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCosmosSendAgreeKpi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSInputDeviceType _inputDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugTodayYear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugTodayMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugTodayDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleSimulatorSaveParams> BattleSimulatorSaveParamsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BattleSimulatorRareEnemyAppearanceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BattleSimulatorRareEnemySubjugationNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSimulatorLevelInfosName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BattleSimulatorSceneArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleSimulatorRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELibraryFlagType> TwoShotCheckFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELibraryFlagType> TwoShotReplacementFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GamePauseClaimantList;
    
public:
    URSGameInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGameFlow();
    
    UFUNCTION(BlueprintCallable)
    void SetPPDistortion(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeStartCameraPositionAxis(const FVector cameraPos, const FVector cameraUp, const FVector cameraRight, const FRotator cameraRot);
    
    UFUNCTION(BlueprintCallable)
    void SetParticlePhotoMode(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsesSteam(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsForceCrcCheckError(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIntroTutorialManager(AIntroTutorialManager* pManager);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePausedRS(bool bPaused, FName ClaimantName, bool bPauseInputManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void ResetIntroTutorialManager();
    
    UFUNCTION(BlueprintCallable)
    void ReloadLevel();
    
    UFUNCTION(BlueprintCallable)
    static void PrintLogBlueprintCallstack();
    
    //UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    //void OnLoadLevelCompleteUnloadLevel(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void LoadLevel(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsesSteam() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyManagers();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceCrcCheckError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedResidentSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedResidentManagers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedManagers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedGameManagers() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeManagers(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAllManagersForPersistentLevel();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeAllManagers(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UXGameStreamingManager* GetXGameStreamingManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserParamManager* GetUserParamManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATwoShotParamManager* GetTwoShotParamManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATriggerEffectManager* GetTriggerEffectManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlendableVolumeManager* GetStageSettingVolumeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStageManager* GetStageManagerConst() const;
    
    UFUNCTION(BlueprintCallable)
    AStageManager* GetStageManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSSoundManager* GetSoundManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSShareUtilityManager* GetShareUtilityManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSceneManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USaveLoadParamClassManager* GetSaveLoadParamClassManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASASManager* GetSASManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSInGameFlow* GetRSInGameFlow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSAccountManager* GetRSAccountManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URevisionData* GetRevisionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetResourceManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRenderTargetManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRadialBlurManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APsychicObjectManager* GetPsychicObjectManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPostProcessManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerManager* GetPlayerManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSParticleSystemManager* GetParticleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSParallelObjectManager* GetParallelObjectManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOutgameDebuggingManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMovieManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AModelViewerBase* GetModelViewerBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMessageHudManager* GetMessageHudManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMapGimmickManager* GetMapGimmickManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLevelManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALC21MapGimmickManager* GetLC21MapGimmickManager() const;
    
    UFUNCTION(BlueprintCallable)
    AIntroTutorialManager* GetIntroTutorialManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInputManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHitManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGameSystemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameMainManager* GetGameMainManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlagManager* GetFlagManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFinishMoveActorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEventManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEnemyManager* GetEnemyManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADropItemManager* GetDropItemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDebuggingManager() const;
    
    UFUNCTION(BlueprintCallable)
    ADebuggingGameActivityManager* GetDebuggingGameActivityManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDatabaseManager* GetDatabaseManagerConst() const;
    
    UFUNCTION(BlueprintCallable)
    UDatabaseManager* GetDatabaseManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCosmosWebManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClearGetterManager* GetClearGetterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCalcMemoryManager* GetCalcMemoryManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABrainTalkManager* GetBrainTalkManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBrainFieldManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABrainCrashManager* GetBrainCrashManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleSimulatorManager* GetBattleSimulatorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleManager* GetBattleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattlefieldManager* GetBattlefieldManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AArrangeItemManager* GetArrangeItemManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimeInterlockingManager* GetAnimeInterlockingManagerConst() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimeInterlockingManager* GetAnimeInterlockingManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAddContentManager* GetAddContentManagerConst() const;
    
    UFUNCTION(BlueprintCallable)
    UAddContentManager* GetAddContentManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityManager* GetActivityManager() const;
    
    UFUNCTION(BlueprintCallable)
    AActionManager* GetActionManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAchievementManager* GetAchievementManager() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeManagers(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeAllManagers(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable)
    void EndInitializeCallback(EManagerTypeID ID, EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroySystem();
    
    UFUNCTION(BlueprintCallable)
    void DestroyResidentSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyResidentManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyOutGameManagers();
    
    UFUNCTION(BlueprintCallable)
    void DestroyModelViewerManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyGameManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyAllManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSystemGameManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSystem();
    
    UFUNCTION(BlueprintCallable)
    void CreateResidentSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateResidentManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateOutGameManagers();
    
    UFUNCTION(BlueprintCallable)
    void CreateModelViewerManagers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateGameManagers();
    
    UFUNCTION(BlueprintCallable)
    void CreateEnemyManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateAllManagers();
    
};

