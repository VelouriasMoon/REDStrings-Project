#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "Camera/PlayerCameraManager.h"
#include "CharactersParameterTable.h"
#include "EEffecacyType.h"
#include "EPlayerAIBattleThinkParamCPP.h"
#include "EPlayerAIBattleThinkTypeCPP.h"
#include "EPlayerAIMoveModeCPP.h"
#include "EPlayerAIOrder.h"
#include "EPlayerAccessory.h"
#include "EPlayerActionKind.h"
#include "EPlayerActionStatus.h"
#include "EPlayerAttachment.h"
#include "EPlayerBattleParticleType.h"
#include "EPlayerBrainFieldDanger.h"
#include "EPlayerCommonStatus.h"
#include "EPlayerID.h"
#include "EPlayerInputRestrictionType.h"
#include "ESASEffect.h"
#include "ESASHologramAttackTiming.h"
#include "E_SASButton.h"
#include "E_SASKindNative.h"
#include "GameTimer.h"
#include "HCHitResult.h"
#include "PlayerInfo.h"
#include "PlayerStealthDelayParam.h"
#include "RSAttackInputKind.h"
#include "RSPartyPlayerKind.h"
#include "_SASParamNative.h"
#include "PlayerInterface.generated.h"

class AActor;
class ACameraActor;
class ARSCharacterBase;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UPlayerInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IPlayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateParameter(FCharactersParameterTable Table);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //FPlayerInfo UpdateMenuParameter(const FPlayerInfo& CurrentParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SpawnBattleParticle(FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetStealthReactionInterval_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSasStealthVisible_CallFromCPP(bool stealth_on_in, FPlayerStealthDelayParam DelayParam_in, FPlayerStealthDelayParam& DelayParam_out);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSasStealth_CallFromCPP(bool stealth_on_in, bool hero_order_in, bool check_delay, bool check_ignore, bool no_sas_cancel_in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSasMetalVisible_CallFromCPP(bool metal_on_in, FGameTimer gametimer_in, FGameTimer& gametimer_out);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetReserveCoverDamage_CallFromCPP(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerInputRestriction_CallFromCPP(EPlayerInputRestrictionType Type, bool bRistriction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayerCamera(ACameraActor* pCameraActor, bool bPitch, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    RSPartyPlayerKind::Type SetPartyPlayerKind(RSPartyPlayerKind::Type kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMoveStickBack_CallFromCPP(bool bBack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMoveMode_CallFromCPP(EPlayerAIMoveModeCPP MoveModeCPP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetMaterialScalarParameterOther(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetForceLockTargetSelf_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEyeControlParameter(float Horizontal, float Vertical);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEyeControlEnable(bool bEnable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEventWait_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEventMove_CallFromCPP(const TArray<FVector>& pos_list_in, const TArray<float>& radius_list_in, bool Walk, bool bAfterWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEventEndDown(bool bFront);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEnableInputStick_CallFromCPP(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBattleParticleType(EPlayerBattleParticleType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAIOrder(EPlayerAIOrder plan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetAIMoveStick_CallFromCPP(bool bMoveStick);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SearchAIPsychicObject_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ScaleMaxSpeed_CallFromCPP(float Scale, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreMaxSpeed_CallFromCPP(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestartBattleAI_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCoverDamagePlayer_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetBattleThink_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetAnimLeftStickPower();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    RSAttackInputKind::Type OverwriteAttackInputKindAI_CallFromCPP(EPlayerAIBattleThinkTypeCPP Think, RSAttackInputKind::Type kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnChangeBattleThink_CallFromCPP(EPlayerAIBattleThinkTypeCPP Next, EPlayerAIBattleThinkTypeCPP prev);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleSimulatorMissionEnd(bool bMissionCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnimNotifyEnablePsychic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnimNotifyEnableAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnimNotifyEnableAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NotifyResetBehaviorTree_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NextBattleThink_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUseItemThink_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUseAbleSASRecastGauge(E_SASKindNative SasKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUseAbleCombinationVision(E_SASKindNative InKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUniqueEffectiveSas_CallFromCPP(AActor* InAttackActor, float& OutWinceRate, float& OutKnockbackRate, float& OutDownRate, float& OutCrashRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUniqueConditionTransition_CallFromCPP(int32 UniqueNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSpecialDown_CallFromCPP(float& OutSpDownWince);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSelfRecovery_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsResetBehaviorTree_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsReactionChance_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPsychicAble_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerSuperArmor_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerStatusAI_CallFromCPP(EPlayerCommonStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOnReadySAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMoveAble_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMetalMode_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsManualHologramAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLockTargetLostInterface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsLockTargetInterface(bool& IsLockTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsJumpAble_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsInputSAS(E_SASButton SASButton, bool& IsInputSAS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputOverwriteENPCBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAI_UseItem_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAI_Psychic_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAI_Jump_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAI_Dodge_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAI_Attack_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsIgnoreStealthVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEventWait_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEventMoveEnd_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEventMove_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyPlayer_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnemyForceWait_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSasSelectSlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSasInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSASHologramAttack(ESASHologramAttackTiming Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsEnableSASEffectInterface(E_SASKindNative kind, ESASEffect Effect, bool& OutEnable, float& OutParam0, float& OutParam1, float& OutParam2, float& OutParam3) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSASEffectHologram(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSASCoverDamageFromPlayerID(EPlayerID CoverPlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableCheckActionIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableBrainCrash_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableBackStepAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableActionJump_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableActionDodge_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableActionCounter_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDying_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDriveMode_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDodgeAble_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDamageCollisionInvincible_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsControlAI_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsCanSAS_Use(E_SASButton SASButton, bool& IsSASUse) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBattleThinkParam_CallFromCPP(EPlayerAIBattleThinkParamCPP Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBattleThink_CallFromCPP(EPlayerAIBattleThinkTypeCPP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBattleActionStartAI_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAttackAble_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAIPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAIMoveMode_CallFromCPP(EPlayerAIMoveModeCPP MoveModeCPP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Telepo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Stealth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_SeeThrough();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Psychic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Metal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsActiveSAS_ForButton(E_SASButton SASButton, bool& IsSAS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Fire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Electric();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Copy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActiveSAS_Accelerator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActionStatusAI_CallFromCPP(EPlayerActionStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAbleOverwriteENPCBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_UseItem_CallFromCPP(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_Psychic_CallFromCPP(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_LeftStick_CallFromCPP(float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_Jump_CallFromCPP(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_Dodge_CallFromCPP(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InputAI_Attack_CallFromCPP(bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetBossInterface(AActor*& LockBoss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSASRecastAndActiveGaugeRate(E_SASButton SASButton, float& SASGaugeRate, bool& IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSASKindforButton(E_SASButton SASButton, E_SASKindNative& SasKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetSASEffectFixParam(E_SASKindNative InKind, TArray<F_SASParamNative>& OutFixParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSASActiveSeconds(E_SASButton SASButton, float& RemainingSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSAS_MaxActiveSeconds(E_SASKindNative SasKind, float& ActivationSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerID GetPlayerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPlayerAccessoryEffect_CallFromCPP(EEffecacyType effectType, bool& bOutEquip, float& OutParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    RSPartyPlayerKind::Type GetPartyPlayerKind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetMovePosActor_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMaxSpeedScale_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetManualAssaultVisionSasGaugeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetEventMovePosActor_CallFromCPP(AActor*& OutActor, float& OutRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentTargetActorInterface(AActor*& TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentSASGaugeRate(E_SASButton SASButton, float& SASGaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerActionKind GetCurrentActionStateInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerID GetCoverDamagePlayerID_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetControlPlayerDist_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPlayerBrainFieldDanger GetBrainFieldDangerLV();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetBattleTargetActor_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAttackCountAI_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ForceWarp_CallFromCPP(FTransform Transform, float IdleRestoreDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ForceEndSAS_Telepo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeapon(int32 WeaponId, int32 SkinID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipCostume(int32 CostumeId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipAttachment(EPlayerAttachment Index, int32 attachmentId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipAccessory(EPlayerAccessory Index, int32 accessoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndEventWait_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndControlPsychicObject(AActor*& TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseBrainField(bool bCrash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearBattleParticle(FName ClaimantName, bool bForceClear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckRareArrangeItemBySAS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckJumpCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckHologramAttack(ESASHologramAttackTiming Timing, ARSCharacterBase* RequestCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckFriendCoverDamage(float DamageValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckEventMovePos_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckAutoCounter_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckAIPsychicObject_CallFromCPP(bool bCapture, bool bAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanBattleAction_CallFromCPP(EPlayerAIBattleThinkTypeCPP ThinkType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginControlPsychicObject(AActor*& TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BeforeTakeDamage(float DamageValue, const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AimStartAI_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AimEndAI_CallFromCPP();
    
};

