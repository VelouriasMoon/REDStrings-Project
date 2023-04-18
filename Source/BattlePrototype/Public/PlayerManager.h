#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "AddPartyPresetData.h"
#include "BackupEquipWeapon.h"
#include "ChangeDisableBattleActionFlagDelegateDelegate.h"
#include "CharactersParameterTable.h"
#include "DelayLoadPlayerEquipData.h"
#include "EAjitoTogetherUpKind.h"
#include "EEffecacyType.h"
#include "EGetPlayerWeaponType.h"
#include "EPlayerAIOrder.h"
#include "EPlayerAccessory.h"
#include "EPlayerAttachment.h"
#include "EPlayerCommonStatus.h"
#include "EPlayerFacialAnim_Native.h"
#include "EPlayerID.h"
#include "EWeaponExtraAbility.h"
#include "E_SASButton.h"
#include "EquipCostumeDelegateDelegate.h"
#include "EquipWeaponDelegateDelegate.h"
#include "LevelDifferentExpRateData.h"
#include "ManagerInterface.h"
#include "PartyPlayerCacheData.h"
#include "PlayerAddStatusByAjitoTogether.h"
#include "PlayerInfo.h"
#include "RSPartyPlayerKind.h"
#include "Templates/SubclassOf.h"
#include "WeaponExtraAbilityParameter.h"
#include "PlayerManager.generated.h"

class ARSCharacterBase;
class UDataTable;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APlayerManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> _playerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> _extraPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID _BattleMemberMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID _BattleMemberLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID _BattleMemberRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerInfo> _partyInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharactersParameterTable> _partyParameterTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelayLoadPlayerEquipData> _delayLoadList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipWeaponDelegate DispatchEquipWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipCostumeDelegate DispatchEquipCostumeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponExtraAbilityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AccessoryExtendParameterDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartyPlayerCacheData> _partyPlayerCache;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeDisableBattleActionFlagDelegate DispatchChangeDisableBattleActionFlag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNpcThinkAssistAttack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackupEquipWeapon> EventBackupEquipWeapon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AjitoTogetherDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAddStatusByAjitoTogether> AjitoTogetherData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAddStatusByAjitoTogether> AjitoTogetherData_MainPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PluginNpcAutoReviveCount;
    
public:
    APlayerManager();
    UFUNCTION(BlueprintCallable)
    void UpdatLastNoSallyTime(EPlayerID ID, const int32 PlayBrainTalkTimeMin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FCharactersParameterTable UpdatePlayerParameter(EPlayerID playerId, bool bMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLastUseSasTime(EPlayerID ID, const bool isPlayBrainTalk);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLastSallyTime(EPlayerID ID, const int32 PlayBrainTalkTimeMin);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterKeepOutArea(int32 registerId);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterExtraPlayer(ARSCharacterBase* extraPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SwapPartyMemberInfo(int32 first, int32 second);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerParameter(EPlayerID ID, const FCharactersParameterTable& Table, bool bMaxHP);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerAIOrder(EPlayerID ID, EPlayerAIOrder Order);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPhotoModeHood_Native(RSPartyPlayerKind::Type kind, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyMemberInfo(EPlayerID ID, FPlayerInfo Info, bool bDelayLoad);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelDifferentExpRate(const FLevelDifferentExpRateData& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveUsedFlag(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBattleActionFlag(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMemberToEmpty(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBattleMemberCore(RSPartyPlayerKind::Type kind, EPlayerID ID, bool bSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleMember(RSPartyPlayerKind::Type kind, EPlayerID ID, bool bSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleEndReserveMemberStatus(float ReviveHPRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAjitoTogetherCountDirect(EPlayerID playerId, int32 CountHP, int32 CountAttack, int32 CountPsychic, int32 CountDefence);
    
    UFUNCTION(BlueprintCallable)
    void ReturnPartyMember(EPlayerID ID, const bool isCheckBattleMemberMain);
    
    UFUNCTION(BlueprintCallable)
    void ReturnEventRemvoeMembers();
    
    UFUNCTION(BlueprintCallable)
    void RemovePartyMember(EPlayerID ID, bool bDestroy, bool bDequipAttachment, bool bDefaultCostume);
    
    UFUNCTION(BlueprintCallable)
    void RegisterKeepOutAreaCircle(int32& outRegisterId, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void RegisterKeepOutAreaBox(int32& outRegisterId, FVector InMin, FVector InMax);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExtraPlayer(ARSCharacterBase* extraPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ReflectBattleMemberParameterPersonal(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void ReflectBattleMemberParameter();
    
    UFUNCTION(BlueprintCallable)
    void RecoveryReserveMemberHP();
    
    UFUNCTION(BlueprintCallable)
    void RecoveryReserveMemberBadStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 ReCalcRemainingSkillPoint(EPlayerID ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* ProtectedSpawnNotPartyPlayer(TSubclassOf<ARSCharacterBase> playerClass, FTransform Transform, AActor* createOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPhotoModeFacialAnim_Native(RSPartyPlayerKind::Type kind, EPlayerFacialAnim_Native anim);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSetting(RSPartyPlayerKind::Type kind, ARSCharacterBase* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyBattleSimulatorEnd(bool bMissionCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsStatusAssist() const;
    
    UFUNCTION(BlueprintCallable)
    void MainPlayerAccessoryBackup(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LocationChangeParameterReset();
    
    UFUNCTION(BlueprintCallable)
    void kpiAddNpcSupportRevive(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void kpiAddNpcSupportCover(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void kpiAddNpcSupportBrainField(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void kpiAddNpcSupportAttack(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisiblePhotoModeHood_Native(RSPartyPlayerKind::Type kind);
    
    UFUNCTION(BlueprintCallable)
    bool IsPluginNpcAutoReviveAble(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingRecover_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingDeadRecover_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingDead_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerStatus(RSPartyPlayerKind::Type kind, EPlayerCommonStatus PlayerStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerInputTrgBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcThinkAssistAttackCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHoodCostumeID(EPlayerID playerId, int32 CostumeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistPartyMember(EPlayerID ID) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExistBattleMember(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsExecResurrect_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsExecNpcReviveDirection_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipHoodCostume(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnablePhotoModePlayer(RSPartyPlayerKind::Type kind);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAjitoTogetherEvent(EPlayerID TogetherPlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAccessoryEffectSameEquipVisionSupport(EPlayerID NpcPlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriveUsedFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableBattleActionFlag() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatePlayerCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCanSASUse_fromNative(E_SASButton Button);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAll(const bool isNoResetPartyInfo);
    
    UFUNCTION(BlueprintCallable)
    FWeaponExtraAbilityParameter GetWeaponExtraAbilityParameter(EPlayerID playerId, EWeaponExtraAbility Ability);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponExtraAbilityDamageRate(float& OutDamageRate, float& OutPsychicDamageRate, float& OutCrashRate, EPlayerID playerId, AActor* DamageActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPlayerWeaponActorListFromNative(AActor* OwnerPlayer, EGetPlayerWeaponType Type, TArray<AActor*>& WeaponList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerUseTime(EPlayerID ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerUseCount(EPlayerID ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> GetPlayerList() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerCharacterParam(TEnumAsByte<RSPartyPlayerKind::Type> Type, FVector& Location, FRotator& Rotation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSoftClassPtr<ARSCharacterBase> GetPlayerBPSoftRef(EPlayerID playerId, bool bENPC, bool bMetamorphosis);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetPlayer(TEnumAsByte<RSPartyPlayerKind::Type> kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<EPlayerFacialAnim_Native> GetPhotoModeFacialList_Native(RSPartyPlayerKind::Type kind);
    
    UFUNCTION(BlueprintCallable)
    FPartyPlayerCacheData GetPartyPlayerCache(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerInfo GetPartyMemberInfo(EPlayerID ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerInfo> GetPartyInfoList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNpcAssistCountRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNpcAssistCountHP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNpcAssistCountBadStatus();
    
    UFUNCTION(BlueprintCallable)
    TArray<ARSCharacterBase*> GetExtraPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharactersParameterTable GetCharactersParameterTable(EPlayerID ID) const;
    
    UFUNCTION(BlueprintCallable)
    EPlayerID GetBattleMemberPlayerID(TEnumAsByte<RSPartyPlayerKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* GetBattleMemberActorFromKind(TEnumAsByte<RSPartyPlayerKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* GetBattleMemberActorFromID(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    FPlayerAddStatusByAjitoTogether GetAjitoTogetherData(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAjitoTogetherCount(EPlayerID playerId, EAjitoTogetherUpKind kind);
    
    UFUNCTION(BlueprintCallable)
    bool GetAccessoryExtendParameter(TArray<float>& outParameter, EPlayerID ID, EEffecacyType effectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAccessoryEquipNum(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void GetAccessoryEffectShoppingSupport(float& outBuyRate, float& outSellRate);
    
    UFUNCTION(BlueprintCallable)
    bool GetAccessoryEffectSameEquipVisionSupport(float& outOffsetAV, int32& outOffsetPV, float& outOffsetCV, int32& outLotParam1, int32& outLotParam2);
    
    UFUNCTION(BlueprintCallable)
    bool GetAccessoryEffect(float& outValue, EPlayerID ID, EEffecacyType effectType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventReviveBattleMember();
    
public:
    UFUNCTION(BlueprintCallable)
    void EventRemvoeMembers(TArray<EPlayerID> IgnoreActorList, bool bDisableSAS);
    
    UFUNCTION(BlueprintCallable)
    void EventDefaultWeapon(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void EventCutSceneAfterFunc();
    
    UFUNCTION(BlueprintCallable)
    void EquipWeaponSkin(EPlayerID ID, int32 WeaponId);
    
    UFUNCTION(BlueprintCallable)
    void EquipWeapon(EPlayerID ID, int32 WeaponId, bool bTempEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipCostume(EPlayerID ID, int32 CostumeId);
    
    UFUNCTION(BlueprintCallable)
    void EquipAttachment(EPlayerID ID, EPlayerAttachment Index, int32 attachmentId);
    
    UFUNCTION(BlueprintCallable)
    void EquipAccessory(EPlayerID ID, EPlayerAccessory Index, int32 accessoryId, bool bTempEquip);
    
    UFUNCTION(BlueprintCallable)
    void EndEventDefaultWeapon(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoNotifyBattleSimulatorEnd(bool bMissionCancel);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlayerCharacters();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void DelayLoadPlayerEquip();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawKeepOutArea();
    
    UFUNCTION(BlueprintCallable)
    void CreatePlayerCharacters(const FString& playerStartName);
    
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* CreatePlayerCharacterFromID(TEnumAsByte<RSPartyPlayerKind::Type> Type, EPlayerID ID, FVector Location, FRotator Rotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* CreatePlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type, TSubclassOf<ARSCharacterBase> playerClass, FVector Location, FRotator Rotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPluginNpcAutoReviveCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerUseInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerInfoDrive(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerInfoBadStatus(EPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    void ClearPartyMember();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRareArrangeItem();
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerCharacter(TEnumAsByte<RSPartyPlayerKind::Type> Type, TSubclassOf<ARSCharacterBase> playerClass);
    
    UFUNCTION(BlueprintCallable)
    float CalcLevelDifferentExpRate(int32 DifferentLevel);
    
    UFUNCTION(BlueprintCallable)
    FCharactersParameterTable ApplyAjitoTogetherCharactersParameter(EPlayerID playerId, const FCharactersParameterTable& BaseData);
    
    UFUNCTION(BlueprintCallable)
    void AllPlayerCharacterTickStop();
    
    UFUNCTION(BlueprintCallable)
    void AllDestroyPlayerCharacter();
    
    UFUNCTION(BlueprintCallable)
    void AjitoTogetherParameterRandomUp(EPlayerID NpcID, EAjitoTogetherUpKind& OutNpcUpKind, int32& OutNpcUpValue, EAjitoTogetherUpKind& OutPlayerUpKind, int32& OutPlayerUpValue);
    
    UFUNCTION(BlueprintCallable)
    void AddPluginNpcAutoReviveCount(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyMemberByPreset(FAddPartyPresetData Preset, const bool isCheckBattleMemberMain, bool bNotEquipSAS);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyMember(FPlayerInfo Info, const bool isSaveDataLoadFlow);
    
    
    // Fix for true pure virtual functions not being implemented
};

