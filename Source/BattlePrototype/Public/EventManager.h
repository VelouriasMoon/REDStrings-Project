#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "ArrayOfMID.h"
#include "EEventPostProcessID.h"
#include "EEventTriggerCheckType.h"
#include "EEventUnControlManagerType.h"
#include "EPlayerID.h"
#include "ManagerInterface.h"
#include "OnAfterChangeProgressIDNativeDelegate.h"
#include "OnBeforeChangeProgressIDNativeDelegate.h"
#include "OnEndCutSceneNativeDelegate.h"
#include "OnStartCutSceneNativeDelegate.h"
#include "OnSubMakeEventActorArrayDelegate.h"
#include "ShowDestinationFlgCheck.h"
#include "EventManager.generated.h"

class AEventCaptureActorBase;
class ARSCharaAnimationAccessor;
class ARSLevelSequenceActor;
class UBlueprint;
class UDatabaseManager;
class UEventAssetPoolComponent;
class ULevelSequence;
class UMaterialInterface;
class UObject;
class URSAtomComponentBase;
class URSParticleSystemComponentBase;
class UTexture2D;
class UUserParamManager;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AEventManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    int32 ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FName StoreOwnerShipExternalActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsInvalidFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsSkipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsCutSceneCalledSkipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsCurrentSkipFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsCurrentTalkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsCurrentAjitoStayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsForceBrainTalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    float StaticEventSoundPressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    TArray<ARSCharaAnimationAccessor*> CharaAnimationAccessorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    int32 m_StoreUnControlMgrFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsDisableDynamicResInStaticCutScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool IsStoreSequencerInGameTransformEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FOnStartCutSceneNative OnStartCutSceneNative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FOnEndCutSceneNative OnEndCutSceneNative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FOnBeforeChangeProgressIDNative OnBeforeChangeProgressIDNative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FOnAfterChangeProgressIDNative OnAfterChangeProgressIDNative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FOnSubMakeEventActorArray OnSubMakeEventArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    URSParticleSystemComponentBase* StaticCutsceneBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    ARSLevelSequenceActor* Sequencer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    FString m_messageTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    TArray<AActor*> MakeEventActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    TArray<FArrayOfMID> CapturePPMStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    TArray<FArrayOfMID> CapturePPMDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> m_PreLoadPPMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta=(AllowPrivateAccess=true))
    bool m_IsCutScenePhotoMode;
    
public:
    AEventManager();
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype", meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSequencerSetting(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void UpdateFacialNormalNative(TArray<AActor*>& TargetSkelMeshActors, bool bUseCache);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void UnloadPPMNative(EEventPostProcessID EventPostProcessID);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void SubMakeEventActorArray(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void StartTalkEvent();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void StartEventFinishWaitMode_AfterCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    void StartDynamicCutsceneFromAsset(ULevelSequence* Sequence, bool IsSeamlessInGame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    void StartDynamicCutscene(const FString& CutsceneName);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    AActor* SpawnActorNative(UClass* ActorAsset, const FText& BindingName);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    AActor* SpawnActorFromBP(UBlueprint* ActorAsset, const FText& BindingName);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    AActor* SpawnActorEvent(UClass* ActorAsset, bool IsPersistant);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void SetupPrestreamTextures(AActor* MakeEventActor, TArray<UTexture2D*>& OutSetupTextures);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool SetStaticEventSkyPause(bool Pause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void SetSequenceEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void SetProgressIDNative(int32 NewProgressId);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void SetPPMAsset(EEventPostProcessID EventPostProcessID, TArray<TSoftObjectPtr<UMaterialInterface>> Assets, FName ResetParamName, float ResetParamValue);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void setMessageTableName(const FString& TableName);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void SetIsCutScenePhotoMode(bool EnablePhotoMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool RestoreVisibilityEventName3DWidget();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void ResetPrestreamTextures(const TArray<UTexture2D*>& SetupTextures);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void PreLoadPPMResident(TArray<EEventPostProcessID> EventPostProcessIDList);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void PreLoadPPM(EEventPostProcessID EventPostProcessID, TArray<UMaterialInterface*>& outPPMList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool OnWaitInputFinishEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool OnSkipInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void OnChangeSoundPressure(float soundPressure);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool OnBattleFieldEnd();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void IsWorldMapShowDestinationForAreaName2Native(int32 LocationId, int32 areaId, int32 PortalID, uint8 ShowType, UDatabaseManager* DatabaseManager, bool IsProgressBondsEpisode, UUserParamManager* UserParamManager, bool& IsShow, int32& VisibleWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsWaitSequencerCaptureBG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsVisibleCharaNameForProgressID(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsValidTimerEventCommand(bool CheckBrainTalkEvent, float WithinTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void IsValidEventCommandTypeFromNative(EEventTriggerCheckType EventCommandType, bool CheckBrainTalkEvent, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsValidEventCommand();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    bool IsTalkEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsPlayingNewStaticPhaseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsPlayingNewStaticBaseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsPlayBeforeBoardAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsNowSettingSeqCaptureBrainMes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsLoadingMakeEventAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsFadeAnimation();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    bool IsExistMakeEventActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool isEndPresentSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool isEndPostProcessSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool isEndDynamicCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsEmptySeqCaptureFuncList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BattlePrototype")
    bool IsCutScenePhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsCutSceneEventNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsCurrentZeroEP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsCurrentEventOffSkipEndFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool IsCurrentCreditEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    bool HiddenEventName3DWidget();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    FArrayOfMID GetOrLoadPPMStatic(EEventPostProcessID EventPostProcessID, bool Load);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    FArrayOfMID GetOrLoadPPMDynamic(EEventPostProcessID EventPostProcessID, bool Load);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BattlePrototype")
    FString getMessageTableName() const;
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    int32 GetMakeEventActorArrayNum();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    TArray<AActor*> GetMakeEventActorArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    TArray<FString> GetLoadedAndLoadingMakeEventPathList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BattlePrototype")
    int32 GetCurrentChapterID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    AEventCaptureActorBase* GetCaptureActorBase(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    UEventAssetPoolComponent* GetAssetPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void FinishSequencer();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void EventAllManagerStart(bool TickEnable, bool Visibility);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void EventAllManagerEnd(bool RestoreTickEnable, bool RestoreVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void EndWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void EndTalkEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BattlePrototype")
    bool EnableEventUnControlMgrFlag(EEventUnControlManagerType UnControlMgrType);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void ClearSequencerInCharacter();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void ClearFacialNormalCache();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool CheckScenarioFlagListC(const TArray<FShowDestinationFlgCheck>& FlgCheckList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool CheckProgressID(int32 MinProgressID, int32 MaxProgressID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void CheckAndSetTalkEventPlayerRipSync(const FString& messageLabel, URSAtomComponentBase* pAtomComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void ChangeSpeakerToVoice(URSAtomComponentBase* Voice);
    
protected:
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void CallStartCutSceneNative();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void CallEndCutSceneNative();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void CallBeforeChangeProgressIDNative();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void CallAfterChangeProgressIDNative();
    
public:
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void BindingActorNative(const FName& ActorTag, const FText& BindingName);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void BeforeChangeProgressID();
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void AfterChangeProgressID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "BattlePrototype")
    void AddMessageVoiceRipSyncInfoList(URSAtomComponentBase* AtomComp, FName RipSyncBoardJointID);
    
    UFUNCTION(BlueprintCallable, Category = "BattlePrototype")
    void AddMakeEventActorArray(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

