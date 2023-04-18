#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/LatentActionManager.h"
#include "BattlefieldInfo.h"
#include "BattlefieldTutorialInfo.h"
#include "CameraTriggerInfo.h"
#include "EBattlefieldEventType.h"
#include "EEventPostProcessID.h"
#include "EEventSaveLoadExType.h"
#include "EEventSaveLoadType.h"
#include "EEventShopType.h"
#include "EEventWaitMode.h"
#include "EHelpTutorial.h"
#include "ELoadingScreenType.h"
#include "ENpcAnimationKind.h"
#include "EPhotoModeStatusType.h"
#include "EPlayerBrainFieldDanger.h"
#include "EPlayerID.h"
#include "ESequenceSkipPhase.h"
#include "EStaticPlType.h"
#include "EStoreSeqCapStatus.h"
#include "ETextType.h"
#include "OnMainEventDelegate.h"
#include "QuestProgressState.h"
#include "RSPartyPlayerKind.h"
#include "Templates/SubclassOf.h"
#include "WaitMainEventDispatcherDelegate.h"
#include "MakeEventActor.generated.h"

class AMainEventLatentActor;
class AMakeEventActor;
class APlayerController;
class ARSCharacterBase;
class UAnimMontage;
class UAnimationAsset;
class UCurveFloat;
class UEventAsset;
class ULevelSequence;
class UManaTexture;
class UMaterialInterface;
class UObject;
class USoundAtomCue;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMakeEventActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainEvent OnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharaPresetNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextureRowNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MovieTextureRowNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimAssetPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimBPPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEventPostProcessID> EventPostProcessIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattleSimulatorSystemEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNpcActionButton2Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveBPEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticToInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStoreSequencerInGameTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkipOPEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkipUnableSpaceString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InterludeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SkipMessageSE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventWaitMode m_waitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_waitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEndMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_AnimationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isStartDynamicCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCallSkipMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_MessageFlagCheckClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pWaitAnimMontageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_pWaitAnimMontageMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventAsset* m_pWaitLoadAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreSeqCapStatus m_StoreSeqCapStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceSkipPhase m_SequenceSkipPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeStatusType m_PhotoModeStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsStopBoadMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSkipLatentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInputOnSkipLatentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMainEventLatentActor* m_Latenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsOrWaitInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCurrentStaticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimationAsset*> m_PreLoadAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> m_PreLoadAnimationBPMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_PreLoadCurveFloat[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> m_PreLoadPPMList;
    
public:
    AMakeEventActor();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitTutoTips(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSubQuestReward(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitShop(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSaveLoad(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSasWindow(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSASCutinExtra(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSASCutinCh0500_0700(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitSASCutinCh0400_0600(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitPresentSequencer(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitPostProcessSequencer(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitPhaseAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, bool IsOrWaitInput, bool OnSkipLatentNodeFlag);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitNewStaticInGeneralAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitMipLoadReadyMesh(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, FName MeshName, float TimeLimitSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitMipLoadReady(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float TimeLimitSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, bool FlagCheckClose);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitMainEvent(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, const FWaitMainEventDispatcher onEventDispatcher);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitLogMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitLoadMakeEventAsset(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitLoadingInterlude(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, const FWaitMainEventDispatcher onEventDispatcher, int32 ID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitLoadChangeScene(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitLoadAssetAll(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitInput(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitGeneralChoice(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitFade(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEventTips(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEventBrainFieldTuto(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndVisionSimulatorSelect(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndSubMenu(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndKeyword(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndCreditEvent(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndCode(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitEndBrainTalk(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitDynamicCutscene(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitDelayOrInput(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float Duration, bool OnSkipLatentNodeFlag);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitCloseSystemMessage(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitCharacterEventMoveEnd(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitBrainFieldDangerLV(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, EPlayerBrainFieldDanger DangerLvType);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitBrainFieldButton(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitBrainField(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitBoardBGAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void WaitBoardAnimation(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, int32 CaptureActorIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTownPeopleSubQuestState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBondsLevelAllMembers(EPlayerID playerId, TArray<EPlayerID>& levelupMembers, bool isSingleLvUp);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBondsLevel(EPlayerID playerId, EPlayerID TargetID, bool isSingleLvUp);
    
    UFUNCTION(BlueprintCallable)
    void UnLockInputSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void UnloadMessage();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void StoreSequencerInGameTransform(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, ULevelSequence* Sequnece, float SequencePosition);
    
    UFUNCTION(BlueprintCallable)
    void StaticEventStart();
    
    UFUNCTION(BlueprintCallable)
    void StaticEventEnd(bool isRestoreTransform);
    
    UFUNCTION(BlueprintCallable)
    void startVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable)
    void StartupCutscene(bool IsPartyPlayerBattleReady, bool IsENPCBattleReady, bool PreLoad);
    
    UFUNCTION(BlueprintCallable)
    void StartUITutoTipsByID(EHelpTutorial helpTutoID, bool notPauseControll, bool notCloseOfPause);
    
    UFUNCTION(BlueprintCallable)
    void StartUITutoTips(FName helpTutoID);
    
    UFUNCTION(BlueprintCallable)
    void StartUITutoOperation(FName helpTutoID);
    
    UFUNCTION(BlueprintCallable)
    void StartUIRewardSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    void StartUIEffectSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    void StartUIEffectBondsQuest(FName bondsQuestId);
    
    UFUNCTION(BlueprintCallable)
    void StartTalkEvent(bool IsAutoInput);
    
    UFUNCTION(BlueprintCallable)
    void StartSubQuestById(FName SubQuestID, bool NoCheck, bool UiEffectFlag);
    
    UFUNCTION(BlueprintCallable)
    void StartSubQuest(bool NoCheck, bool UiEffectFlag);
    
    UFUNCTION(BlueprintCallable)
    void StartKeyword();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHighSpeedMode();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOut(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption);
    
    UFUNCTION(BlueprintCallable)
    void StartFade(float FadeSeconds, float ColorR, float ColorG, float ColorB, float ColorA, bool isUnderCaption);
    
    UFUNCTION(BlueprintCallable)
    bool StartEventBattlefield(int32 GroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartDynamicCutscene(ULevelSequence* Sequence, bool IsSeamlessInGame, FName OwnerShipExternalActorTag);
    
    UFUNCTION(BlueprintCallable)
    void StartCode();
    
    UFUNCTION(BlueprintCallable)
    void StartBondsQuestById(FName bondsQuestId, bool NoCheck, bool UiEffectFlag);
    
    UFUNCTION(BlueprintCallable)
    bool StartBattlefield(EBattlefieldEventType Type, int32 GroupID, int32 SubGroupID, TArray<FBattlefieldTutorialInfo> AdditionalTutorialInfo, TSubclassOf<AMakeEventActor> MakeEventActorClass, int32 TutorialGroupID, int32 TutorialSubGroupID, float FenceBattleRate, const FString& SeedString, bool IsOnceBattle);
    
    UFUNCTION(BlueprintCallable)
    void StartAutoBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, UAnimMontage* AddAnimMontage, EStaticPlType StaticPlType, TSoftObjectPtr<UCurveFloat> PlayRateCurveData);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemiesBySubGroup(int32 GroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemiesByGroup(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SkipMessage(bool NoPlaySE);
    
    UFUNCTION(BlueprintCallable)
    void SkipEvent();
    
    UFUNCTION(BlueprintCallable)
    void Shop(EEventShopType ShopType, int32 ShopParam, int32 TradeShopParam);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformCaptureBGCamera(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformCaptureBG(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SettingCapture(int32 CaptureActorIndex, int32 BoardMeshIndex, FName CapturePresetName, FName CharaBodyAnimationSectionName, FName CharaFaceAnimationSectionName, int32 NpcMeshTableID, int32 NpcMaterialTableID, FName LightPresetName, ULevelSequence* CaptureSequnece, float CaptureSequnecePositon, FName TextureRowName, EStaticPlType StaticPlType, FName MovieTextureRowName, bool IsUseSaveTexture, bool IsSeamlessInGameCapture, bool IsHiddenPlFrameEffect, FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, const FString& CharaPartsMontagePath);
    
    UFUNCTION(BlueprintCallable)
    void SetSubQuestState(FName SubQuestID, QuestProgressState SetState);
    
    UFUNCTION(BlueprintCallable)
    void SetStopBoadMotionFlag(bool IsStop);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayBattleUI(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWaitFlag(bool IsWait);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEndMotion(bool IsEndMotion);
    
    UFUNCTION(BlueprintCallable)
    void SetEventPause(bool IsPause);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void SetEventMovieTextureAndPrepare(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, UManaTexture* movieTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalLight(FName LightPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsQuestState(FName bondsQuestId, QuestProgressState SetState);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsProgress(EPlayerID heroID, EPlayerID partnerId, int32 SetValue, bool notUpdateBrainMes);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationActor(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    void SetActionIconType(bool NeedKizunaIcon);
    
    UFUNCTION(BlueprintCallable)
    void SaveLoad(EEventSaveLoadType SaveType, EEventSaveLoadExType Mode);
    
    UFUNCTION(BlueprintCallable)
    void RestartUpdatingBrainMessage();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeScene(int32 LocationId, int32 areaId, int32 PortalID, FName StartPortalName, bool NoFade, ELoadingScreenType LoadingScreenType, int32 LoadingScreenParam, bool IsAutoSaveEnable);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadAllVoice();
    
    UFUNCTION(BlueprintCallable)
    void PlayGeneralBoardAnimation(int32 CaptureActorIndex, const FString& boardAnimationName, int32 AttachCaptureActorIndex, UAnimMontage* AddAnimMontage, TSoftObjectPtr<UCurveFloat> PlayRateCurveData);
    
    UFUNCTION(BlueprintCallable)
    void PlayBoardBGAnimation(const FString& BoardAnimNamePath, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void PlayBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, bool IsLoop, FName SocketName, TSoftObjectPtr<UCurveFloat> PlayRateCurveData);
    
    UFUNCTION(BlueprintCallable)
    void OpenScarletLogo();
    
    UFUNCTION(BlueprintCallable)
    void OpenEventBrainFieldTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGameEventNative();
    
    UFUNCTION(BlueprintCallable)
    void OnStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipUnableFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishEvent();
    
    UFUNCTION(BlueprintCallable)
    void OffSkipUnableFlag();
    
    UFUNCTION(BlueprintCallable)
    void OffSkipLatentNodeFlag();
    
    UFUNCTION(BlueprintCallable)
    void OffPhotoModeFlag();
    
    UFUNCTION(BlueprintCallable)
    void NPCTurnToPlayer(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void NPCPlayAnimation(const ENpcAnimationKind AnimKind);
    
    UFUNCTION(BlueprintCallable)
    void NPCLookAtPlayer(bool IsLookAt);
    
    UFUNCTION(BlueprintCallable)
    void LockInputSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void LoadMessage(const FString& messageDataPath, bool PreLoad);
    
    UFUNCTION(BlueprintCallable)
    int32 LC21ChangePhase(int32 PhaseNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitEndSASCutinCh0500_0700();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitEndSASCutinCh0400_0600();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartBattlefield(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    bool IsSkipUnableFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSeamlessStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSavedSaveLoadMenuError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSavedSaveLoadMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsPhotoModeFlag();
    
    UFUNCTION(BlueprintCallable)
    bool IsMainEventWait();
    
    UFUNCTION(BlueprintCallable)
    bool isCancelKeyword();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCanceledVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable)
    bool isCanceledCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    QuestProgressState GetSubQuestProgressById(FName SubQuestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    QuestProgressState GetSubQuestProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName getResultVisionSimulatorSelect();
    
    UFUNCTION(BlueprintCallable)
    FString getResultKeyword();
    
    UFUNCTION(BlueprintCallable)
    FName getResultCode();
    
    UFUNCTION(BlueprintCallable)
    FString GetMessageForMessageLabel(const FString& messageLabel);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastChoiceResult();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGeneralChoiceResult();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyNumInSubGroup(int32 GroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyNumInGroup(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    FBattlefieldInfo GetCurrentBattlefieldInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetChoiceResult(int32 MessageIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsValue(EPlayerID heroID, EPlayerID partnerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    QuestProgressState GetBondsQuestProgressById(FName bondsQuestId) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsProgress(EPlayerID heroID, EPlayerID partnerId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsLevel(EPlayerID heroID, EPlayerID partnerId);
    
    UFUNCTION(BlueprintCallable)
    float GetBondsFValue(EPlayerID heroID, EPlayerID partnerId);
    
    UFUNCTION(BlueprintCallable)
    void FinishUIEffectSubQuest(FName SubQuestID);
    
    UFUNCTION(BlueprintCallable)
    void FinishUIEffectBondsQuest(FName bondsQuestId);
    
    UFUNCTION(BlueprintCallable)
    void FinishSubQuestById(FName SubQuestID, bool NoCheck, bool UiEffectFlag);
    
    UFUNCTION(BlueprintCallable)
    void FinishSubQuest(bool NoCheck, bool UiEffectFlag);
    
    UFUNCTION(BlueprintCallable)
    void EventAllManagerStart(bool TickEnable, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void EventAllManagerEnd(bool RestoreTickEnable, bool RestoreVisibility);
    
    UFUNCTION(BlueprintCallable)
    void EndTalkEvent(bool isRestoreTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndHighSpeedMode();
    
    UFUNCTION(BlueprintCallable)
    void EndFade(float FadeSeconds, bool isUnderCaption);
    
    UFUNCTION(BlueprintCallable)
    bool EndEventBattlefield(int32 GroupID, bool ForceCloseFence);
    
    UFUNCTION(BlueprintCallable)
    void EndCutScene(bool isEndEvent, float PlayerCameraBlendTime, TEnumAsByte<EViewTargetBlendFunction> PlayerCameraBlendFunc, float PlayerCameraBlendExp, FName SkipENPCCamRowName);
    
    UFUNCTION(BlueprintCallable)
    void EndBattlefieldForce(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    bool EnableEventBattlefieldFence(int32 FenceGroupID);
    
    UFUNCTION(BlueprintCallable)
    void EffectBokeh(int32 CaptureActorIndex, UCurveFloat* Curve, bool CurveReverse);
    
    UFUNCTION(BlueprintCallable)
    void DrawMessage(int32 windowType, const FString& messageLabel, FName RipSyncBoardJointID, bool skipable, float DrawSecond, bool isSkipVoiceEnd, bool IsVoiceOnlyMessage, bool isWaitMode);
    
    UFUNCTION(BlueprintCallable)
    void DrawGeneralChoice4(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, FName Choice3, FName Choice4, bool isCancelable);
    
    UFUNCTION(BlueprintCallable)
    void DrawGeneralChoice3(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, FName Choice3, bool isCancelable);
    
    UFUNCTION(BlueprintCallable)
    void DrawGeneralChoice2(ETextType TextType, FName TextMain, int32 DefaultCursor, FName Choice1, FName Choice2, bool isCancelable);
    
    UFUNCTION(BlueprintCallable)
    void DrawGeneralChoice1(ETextType TextType, FName TextMain, FName Choice1, bool isCancelable);
    
    UFUNCTION(BlueprintCallable)
    int32 DrawChoiceMessage(const FString& Choice1, const FString& Choice2, const FString& Choice3, const FString& Choice4, const FString& Choice5, int32 DefaultCursor, float DrawSecond, bool isWaitMode);
    
    UFUNCTION(BlueprintCallable)
    bool DisableEventBattlefieldFence(int32 FenceGroupID);
    
    UFUNCTION(BlueprintCallable)
    void CloseUITutoTips();
    
    UFUNCTION(BlueprintCallable)
    void CloseUITutoOperation(FName ClosehelpTutoID);
    
    UFUNCTION(BlueprintCallable)
    void CloseScarletLogo();
    
    UFUNCTION(BlueprintCallable)
    void CloseMessage();
    
    UFUNCTION(BlueprintCallable)
    void CloseForceUITutoOperation();
    
    UFUNCTION(BlueprintCallable)
    int32 CheckSubQuestRewardResult();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBondsLevelUp(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    void ChangePresetCamera(FCameraTriggerInfo triggerInfo, bool bLerp);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerFromClass(TEnumAsByte<RSPartyPlayerKind::Type> PartyPlayerType, TSoftClassPtr<ARSCharacterBase> CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMainPlayer();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void CaptureSceneBGForLevelSequencerAndDelay(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, ULevelSequence* CaptureSequence, float CaptureSequencePosition);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="latentInfo_", WorldContext="worldContextObject_"))
    void CaptureSceneBG(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
    UFUNCTION(BlueprintCallable)
    void CaptureScene(int32 CaptureActorIndex);
    
    UFUNCTION(BlueprintCallable)
    void BoardEffectAnimationAlpha(int32 CaptureActorIndex, float Time, float Start, float End, UCurveFloat* Curve, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void BGEffectScanline(UCurveFloat* Curve, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void BGEffectNoise(UCurveFloat* Curve, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void BGEffectGlitch(UCurveFloat* Curve, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void BGEffectFringe(UCurveFloat* Curve, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void AddBondsValue(EPlayerID heroID, EPlayerID partnerId, float addNum);
    
    UFUNCTION(BlueprintCallable)
    void AddBondsLevel(EPlayerID heroID, EPlayerID partnerId, int32 addNum);
    
    UFUNCTION(BlueprintCallable)
    void AddBoardBGAnimation(const FString& BoardAnimNamePath, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void AddBoardAnimation(int32 CaptureActorIndex, const FString& BoardAnimNamePath, bool IsLoop);
    
};

