#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "EBgmCategory.h"
#include "EBrainFieldEndType.h"
#include "EDspBus.h"
#include "EFilterCallbackType.h"
#include "EGamePhysicalSurfaceType.h"
#include "EGetPlayerWeaponType.h"
#include "ENotifySoundReplace_EnStr.h"
#include "EPlayerID.h"
#include "ESoundAisacControlId.h"
#include "ESoundCategory.h"
#include "ESoundSelector.h"
#include "ESoundSelectorLabel.h"
#include "ESoundState.h"
#include "GeneralPhysicalSurfaceActionSoundResourceArray.h"
#include "HitDamageInfo.h"
#include "LoopSeParam.h"
#include "ManagerInterface.h"
#include "NotifyPlaySoundReplaceParam.h"
#include "NotifyPlaySoundReplaceProgressIdData.h"
#include "RSPartyPlayerKind.h"
#include "SoundEffectAttribute.h"
#include "SoundEffectDamage.h"
#include "SoundLevelParam.h"
#include "SoundSnapshot.h"
#include "Templates/SubclassOf.h"
#include "RSSoundManager.generated.h"

class ARSLevelSequenceActor;
class UAtomComponent;
class UCharacterPhysicalSurfaceActionSoundResource;
class UCurveFloat;
class UDataTable;
class ULevelSequence;
class UObject;
class URSAtomComponentBase;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class USoundConcurrency;
class USoundCueSheetManager;
class USoundPoolManager;
class USoundVolumeController;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSSoundManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSAtomComponentBase*> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSAtomComponentBase*> DestroyReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FootStepDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCharacterPhysicalSurfaceActionSoundResource*> MapFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGeneralPhysicalSurfaceActionSoundResourceArray> MapGeneralPhysicalActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> SoundEffectAttackPly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> SoundEffectAttackEmnNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> SoundEffectAttackEmnMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundEffectAttribute> SoundEffectAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundEffectDamage> SoundEffectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitSoundIntervalWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitSoundInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveBgmTransEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoopSeParam> LoopSeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSAtomComponentBase*> BgmList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundCueSheetManager* CueSheetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundPoolManager* PoolManager;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SoundEmitterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> LoadedVoiceSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeforeStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ScenarioVoiceCueSheetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BondsVoiceCueSheetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> LoadedScenarioVoiceSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> LoadedBondsVoiceSheet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotifyPlaySoundReplaceParam> EnBrainField_DataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotifyPlaySoundReplaceProgressIdData> ProgressID_DataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifySoundReplace_EnStr m_NotifySoundReplace_EnStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotifyPlaySoundReplaceProgressIdData> ReplaceEnStr_Mid_DataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotifyPlaySoundReplaceProgressIdData> ReplaceEnStr_High_DataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundVolumeController* SoundVolumeController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundState SoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundAtomCue*> adlibCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSAtomComponentBase*> playingAdlibVoices_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> SequencerSoundCueSheets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDlc1Available;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDlc2Available;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDlc3Available;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCue*> MapVisionSimulator_VoiceReplace;
    
    ARSSoundManager();
    UFUNCTION(BlueprintCallable)
    void UnregistLoopSe(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSoundEmitterAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSoundEmitter(AActor* soundEmitter);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterCueSheet(USoundAtomCueSheet* Sheet);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponent(URSAtomComponentBase* Component);
    
    UFUNCTION(BlueprintCallable)
    void UnregistAllLoopSe(const bool isStopSound);
    
    UFUNCTION(BlueprintCallable)
    void UnLoadSequencerSeCueSheet();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadFootStep(FName nameId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopME(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopEnv(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopBgm(EBgmCategory Category, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSound();
    
    UFUNCTION(BlueprintCallable)
    void StopAllAdlibVoice();
    
    UFUNCTION(BlueprintCallable)
    void SetSoundLevelSnapshot(FSoundSnapshot Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundLevelParam(FSoundLevelParam SoundLevelParam, UAtomComponent* AtomCom);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundBusBypass(EDspBus DspBus, bool Bypass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetResumeFromMuteAll();
    
    UFUNCTION(BlueprintCallable)
    void SetNotifySoundReplace_EnStr(ENotifySoundReplace_EnStr Param);
    
    UFUNCTION(BlueprintCallable)
    void SetNonPlayerCueSheetVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMuteAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLoopSEVolume(float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetInGameVolumeByCategoryName(ESoundCategory Category, float DestVol);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetInGameVolumeAll(float DestVol);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFadeByCategoryName(ESoundCategory Category, float FadeTime, float DestVol);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFadeAllCategory(float FadeTime, float DestVol);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetConfigVolumeByCategoryName(ESoundCategory soundCategory, float DestVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCueSheetVolume(const FString& CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBGMVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmTransEffectValue(const float Rate, const bool isDirect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBaseSoundVolume(ESoundCategory soundCategory, const FString& ParamName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacValue(UAtomComponent* AtomCom, ESoundCategory Category, ESoundAisacControlId Control, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* RSAtomCuePlay_AnimNotify_Native(AActor* OwnerPlayer, USoundAtomCue* Sound, bool UseWeaponLocation, EGetPlayerWeaponType WeaponType, TSubclassOf<URSAtomComponentBase> ComponentClass, USceneComponent* AttachToComponent, FName AttachPointName, USoundAttenuation* AttenuationSettings, bool isInvalidProgressIdCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeME(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeFromPauseAllSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeEnv(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeBgm(EBgmCategory Category, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable)
    void ResetNonPlayerCueSheetVolume();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterCueSheetVolume(const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllBusBypass(bool Bypass);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* ReplaceVoice_VisionSimulator(USoundAtomCue* InputSound);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* ReplaceNotifySound_Native(USoundAtomCue* InputSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReplacedVoiceSheet(bool isJapanese);
    
    UFUNCTION(BlueprintCallable)
    void RegistLoopSe(FName Name, URSAtomComponentBase* pSound);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSoundEmitter(AActor* soundEmitter);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCueSheet(USoundAtomCueSheet* Sheet);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponent(URSAtomComponentBase* Component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayVoiceAtCueName(const UObject* WorldContextObject, const FString& CueName, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayVoiceAtCue(const UObject* WorldContextObject, USoundAtomCue* SoundCue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSAtomComponentBase* PlayVoice(USoundAtomCue* Sound, bool isAttache, bool isAutoActivate, USceneComponent* AttachToComponent, FName AttachPointName, EFilterCallbackType filterCallbackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayME(USoundAtomCue* AtomCue, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayLoopSe(FName Name, USoundAtomCue* AtomCue, FVector Location, FRotator Rotation, float FadeTime, float FadeVolume, bool forceFirstStart);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitSoundEffect(const FHitDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayEnv(USoundAtomCue* AtomCue, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URSAtomComponentBase* PlayCueWeaponLocation(AActor* OwnerPlayer, USoundAtomCue* Sound, EGetPlayerWeaponType WeaponType, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBgm(EBgmCategory Category, USoundAtomCue* AtomCue, float FadeTime, float FadeVolume, bool forceFirstStart);
    
    UFUNCTION(BlueprintCallable)
    void PlayAdlibVoiceFromLoadedAsset(const FString& voiceName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseME(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseLoopSe(FName Name, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseEnv(float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseBgm(EBgmCategory Category, float FadeTime, float FadeVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseAllSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageSkipSePlay();
    
    UFUNCTION(BlueprintCallable)
    void OnEDBrainFieldBattleEndNativeEvent(EBrainFieldEndType EndType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrainFieldCloseFromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrainCrashOn();
    
    UFUNCTION(BlueprintCallable)
    FString MakeCueSheetPath(const FString& BaseName);
    
    UFUNCTION(BlueprintCallable)
    void MakeBondsChueSheetName(EPlayerID heroID, EPlayerID partnerId, FString& makedName);
    
    UFUNCTION(BlueprintCallable)
    bool Macro_IsSpCostume(TEnumAsByte<RSPartyPlayerKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    bool Macro_IsAriseItemEquipped(TEnumAsByte<RSPartyPlayerKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    bool Macro_GetPlayer(TEnumAsByte<RSPartyPlayerKind::Type> kind, USkeletalMeshComponent*& Mesh, EPlayerID& playerId);
    
    UFUNCTION(BlueprintCallable)
    int32 Macro_GetPartyTotalExp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadVoiceCueSheetPlayStage(const FString& seName);
    
    UFUNCTION(BlueprintCallable)
    void LoadUseAdlibVoicePath(ULevelSequence* seq, TArray<FString>& adlibVoiceNames, bool bCueReset);
    
    UFUNCTION(BlueprintCallable)
    void LoadSequencerSeCueSheet(ARSLevelSequenceActor* seqActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadScenarioCueSheet();
    
    UFUNCTION(BlueprintCallable)
    UCharacterPhysicalSurfaceActionSoundResource* LoadFootStep(FName nameId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadBondsCueSheet(EPlayerID heroID, EPlayerID partnerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidCurrentSimulatorLevelInfos();
    
    UFUNCTION(BlueprintCallable)
    bool isRegistLoopSe(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Init_ReplaceVoice_VisionSimulator();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSoundSelectorString(ESoundSelector Selector);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSoundSelectorLabelString(ESoundSelectorLabel Label);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSoundEmitterListCount();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSoundEmitter(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* GetSoundCueSheet(const FString& SheetName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FNotifyPlaySoundReplaceProgressIdData> GetReplaceEnStrDataTableList();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerWeaponActorListFromNative(AActor* OwnerPlayer, EGetPlayerWeaponType Type, TArray<AActor*>& WeaponList);
    
    UFUNCTION(BlueprintCallable)
    FString GetLanguageSettingString();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetGeneralPhysicalSurfaceActionResource(const EGamePhysicalSurfaceType PhysicsType, FName ActionType);
    
    UFUNCTION(BlueprintCallable)
    FString GetCueSheetName(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCueSheetManager* GetCueSheetManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetBaseSoundVolume(ESoundCategory soundCategory, const FString& ParamName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    URSAtomComponentBase* DoIsVoiceToSpawnSoundAttachedLoadedSheetRS(const UObject* WorldContextObject, TSubclassOf<URSAtomComponentBase> ComponentClass, USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, USoundAttenuation* AttenuationSettings, UObject* Creator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeSoundState(ESoundState sndState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeLanguageVoiceSheet(bool isJapanese);
    
    
    // Fix for true pure virtual functions not being implemented
};

