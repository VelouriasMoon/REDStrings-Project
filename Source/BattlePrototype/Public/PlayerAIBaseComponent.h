#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ECharacterHitPriority.h"
#include "EConsumeItemID.h"
#include "EPlayerAIBattleThinkParamCPP.h"
#include "EPlayerAIBattleThinkTransitionCPP.h"
#include "EPlayerAIBattleThinkTypeCPP.h"
#include "EPlayerAIMoveModeCPP.h"
#include "EPlayerAIMoveWallCPP.h"
#include "EPlayerAIOrder.h"
#include "EPlayerAITargetSearchModeCPP.h"
#include "EPlayerAIThinkTableTypeCPP.h"
#include "GameTimer.h"
#include "PlayerAICheckMoveWallParamIn.h"
#include "PlayerAIComponentInitializeParam.h"
#include "PlayerAIEvaluateTargetParameter.h"
#include "PlayerAIThreatActorData.h"
#include "RSAttackInputKind.h"
#include "PlayerAIBaseComponent.generated.h"

class AActor;
class ACharacter;
class ARSCharacterBase;
class ARSGoalActorBase;
class UDataTable;
class UHitCheckComponent;
class UPlayerAIEvaluateLocationComponent;
class UPlayerScriptComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerAIBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameTimer> ThinkTimerList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param_ThreatTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerAIThreatActorData> ThreatDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer EventMoveForceEndTimer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeRangeAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnpcUniqueObjDodgeProbability;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIMoveModeCPP MoveModeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircleDirClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveCircleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector JumpDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderJumpNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThinkDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGoalBaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGoalRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGoalDesiredRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGoalRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSGoalActorBase* MoveGoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGoalArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGoalYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrevThinkLastActorForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircleNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer NearCircleMoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearCircleMoveNearDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearCircleMoveFarDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector JumpDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAICheckMoveWallParamIn AsyncCheckWallParamIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnerENPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidKeepOut;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackHit;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> BattleTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer UpdateTargetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateBattleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleModeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUpdateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleActionStartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateBattleTargetIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeAble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer DodgeIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BattleDodgeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDodgeRangeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DodgeRangeAttackDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceDodgeIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftStickScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftStickScaleEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> bEnableInputStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveStickBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveStickDetour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveStickDetourYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAITargetSearchModeCPP TargetSearchModeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIOrder Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_NEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_FAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_TOO_FAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOVE_AIM_CIRRCLE_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOVE_CIRCLE_SPEED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOVE_CIRCLE_SPEED_FAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_WARY_HP_RATE_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_WARY_HP_RATE_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_WARY_PROBABILITY_DOWN_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_WARY_PROBABILITY_DOWN_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_ATTACK_PROBABILITY_UP_TIME_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_ATTACK_PROBABILITY_UP_TIME_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_ATTACK_PROBABILITY_UP_VALUE_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_ATTACK_PROBABILITY_UP_VALUE_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_MOVE_PROBABILITY_DOWN_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_MOVE_PROBABILITY_DOWN_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_ATTACK_PROBABILITY_DOWN_THREAT_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPC_ASSIST_ATTACK_PROBABILITY_UP_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_REVIVE_DISTANCE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPC_REVIVE_DISTANCE_FAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CONFUSION_FRIEND_PRIORITY_OFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EvaluateLocationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginEvaluateLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkTypeCPP CurrentBattleThinkCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkParamCPP CurrentBattleThinkParamCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StealthThinkRateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerAIBattleThinkTypeCPP> StealthThinkTypeListCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkTypeCPP ReserveThinkTypeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIBattleThinkParamCPP ReserveThinkParamCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveNextThink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishMetamorphosis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThinkPhaseTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIThinkTableTypeCPP CurrentThinkTableTypeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EventMovePosList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EventMoveRadiusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventMoveWalkScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClaimantNameEventMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterHitPriority StoreCharacterHitPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStoreCharacterHitPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventMoveAfterWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventMoveWalkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseItemThink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeItemID UseItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssistItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControlPlayerDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BattleTargetDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelfRecoveryFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelfRecoveryNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawLocationEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTargetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTargetChangeResetThink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerScriptComponent* OwnerPlayerScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCppFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionObjectTypesForGroundHit;
    
public:
    UPlayerAIBaseComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateThreatData(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThinkTimerList(AActor* UpdateActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMoveWallCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMovePosCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMovePos_FollowPlayerCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMovePos_CircleCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMovePos_ApproachTargetCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateEventMoveCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDodgeCPP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDodgeBattle_Enpc_BPImplement(bool& bOK, bool& OutDodgeNormalAttack, bool& OutDodgeRangeAttack, bool& OutForceDodge);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDodge_FollowPlayerCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDodge_BattleCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDataCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCounterCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCheckRangeAttackEnpc(UHitCheckComponent* HitCheck);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCheckRangeAttack(UHitCheckComponent* HitCheck);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCheckBattleActionStartCPP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBattleTargetActorCPP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateBattleDodgeDir_CallFromCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnbindCheckBattleActionStart_CallFromCPP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupUseItem_CallFromCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetThinkTimerByIndex(int32 Index, float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetThinkPhaseTransitionCPP(int32 NewPhase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetThinkKeepOutCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetSearchModeCPP(EPlayerAITargetSearchModeCPP Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfRecoveryNum(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerScript(UPlayerScriptComponent* comp);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOrderCPP(EPlayerAIOrder _Order);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveStickDetourCPP(bool bEnable, float YawAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveStickBackCPP(bool bBack);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMoveModeFromThinkCPP(EPlayerAIBattleThinkTypeCPP Think);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMoveModeCPP(EPlayerAIMoveModeCPP Mode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMoveLocationCPP(FVector Location, float ArmLength, float Yaw);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLeftStickScale(bool bEnable, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidKeepOutCPP(bool IsInvalid);
    
    UFUNCTION(BlueprintCallable)
    void SetForceUpdateTarget(bool Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetFinishMetamorphosisCPP(bool bFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetEventWaitCPP();
    
    UFUNCTION(BlueprintCallable)
    void SetEventMoveCPP(const TArray<FVector>& pos_list_in, const TArray<float>& radius_list_in, bool Walk, bool bAfterWait, float MaxMoveTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeTargetResetThinkCPP(bool InDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBattleThink_CallFromCPP(EPlayerAIBattleThinkTypeCPP Action, EPlayerAIBattleThinkParamCPP Param);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTargetDist(FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTargetCPP(ARSCharacterBase* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleModeCPP(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackHit(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    ARSCharacterBase* SearchTargetCPP(const TArray<ARSCharacterBase*>& TargetList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SearchPsychicObjectCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestartBattleAI_CallFromCPP(bool bInEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetBattleThinkCPP();
    
    UFUNCTION(BlueprintCallable)
    void ReserveNextThinkCPP(EPlayerAIBattleThinkTypeCPP ThinkType, EPlayerAIBattleThinkParamCPP Param);
    
    UFUNCTION(BlueprintCallable)
    void RequestUseItemCPP(EConsumeItemID item_id_in, bool bAssist);
    
    UFUNCTION(BlueprintCallable)
    void RegisterThreatActor(AActor* ThreatActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterEvaluateLocationCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreUpdateCPP_RangeAttack_BPImplement();
    
    UFUNCTION(BlueprintCallable)
    void PreUpdateCPP();
    
    UFUNCTION(BlueprintCallable)
    void PostUpdateCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdateUpdateEvaluateLocationCPP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateAI();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReserveReturnMovePlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementCollisionLandCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJumpCPP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeAI();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEventStartCPP();
    
    UFUNCTION(BlueprintCallable)
    void OnClearReserveReturnMovePlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackHitCPP();
    
    UFUNCTION(BlueprintCallable)
    void NotifyResetBehaviorTreeCPP();
    
    UFUNCTION(BlueprintCallable)
    void NotifyMoveBrainFieldCPP(bool bToBrainField);
    
    UFUNCTION(BlueprintCallable)
    void NotifyForceWarpCPP();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttackStartCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector NormalizeVectorXY_CPP(FVector InVec);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool NextBattleThink_CallFromCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MainUpdateCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpOrderCPP(FVector Destination);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitBattleStartCPP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseItemThinkCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseCppFunc() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThinkTimerOverByIndex(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfRecoveryCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetBehaviorTreeCPP() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisterThreatActor(AActor* CheckActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeTooFarCPP(const FVector& Dist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeNearCPP(const FVector& Dist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeMiddleCPP(const FVector& Dist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeFarCPP(const FVector& Dist) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPsychicComboThinkCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPsychicAbleCPP_TypeCheck(EPlayerAIBattleThinkTypeCPP ThinkType) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPsychicAbleCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftStickScaleEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpAbleCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceUpdateTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishMetamorphosisCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventWaitCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventMoveEndCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventMoveCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableStickInputCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDodgeAbleCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleThinkCPP(EPlayerAIBattleThinkTypeCPP Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleActionStartCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackThinkCPP(EPlayerAIBattleThinkTypeCPP Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackHit() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackAbleCPP_TypeCheck(EPlayerAIBattleThinkTypeCPP ThinkType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackAbleCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThinkTimerList(int32 TimerNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFixParam(const FPlayerAIComponentInitializeParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConsumeItemID GetUseItemID_CPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThinkPhaseTransitionCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetEvaluateData_CallFromCPP(FPlayerAIEvaluateTargetParameter& OutParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetAngleXY_CPP(const FVector& BaseDirection, const FVector& TargetDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetAngleCPP(const FVector& BaseDirection, const FVector& TargetDirection) const;
    
    UFUNCTION(BlueprintCallable)
    EPlayerAIBattleThinkTypeCPP GetStealthThinkCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelfRecoveryNum() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerAIOrder GetOrderCPP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMovePosActorCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerAIMoveModeCPP GetMoveModeCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftStickScale() const;
    
    UFUNCTION(BlueprintCallable)
    void GetEventMovePosActorCPP(AActor*& OutPosActor, float& OutAcceptRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventMoveLeftStickY_CPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventMoveLeftStickX_CPP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAIEvaluateLocationComponent* GetEvaluateLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UDataTable* GetCurrentThinkTable_CallFromCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerAIBattleThinkParamCPP GetCurrentBattleThinkParamCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerAIBattleThinkTypeCPP GetCurrentBattleThinkCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetControlPlayerDistCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<TEnumAsByte<EObjectTypeQuery>> GetCollisionObjectTypesForGroundHit_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBattleTargetDist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBattleTargetActorCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<RSAttackInputKind::Type> GetAttackInputKindCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackCountCPP() const;
    
    UFUNCTION(BlueprintCallable)
    void EndEventWaitCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndEventMoveCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndEvaluateLocation_CallFromCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableStickInputCPP(FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void DisableStickInputCPP(FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseSelfRecoveryNumCPP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DebugUpdate_CallFromCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FPlayerAIThreatActorData> DebugGetThreatDataArray();
    
    UFUNCTION(BlueprintCallable)
    void ClearDodgeRangeAttackData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUnderSiegeCPP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckSelfRecovery_CallFromCPP();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPsychicObjectCPP(bool bCapture, bool bAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNpcReviveCPP(float InDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckMoveWallCPP(EPlayerAIMoveWallCPP& OutWall, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    bool CheckMovePosCPP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckInAttackArea_CallFromCPP(FVector CheckLocation);
    
    UFUNCTION(BlueprintCallable)
    void CheckGoalLocationKeepOutCPP();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckEventMovePosCPP(bool bCheckDistance);
    
    UFUNCTION(BlueprintCallable)
    bool CheckDodgeRangeAttack(FVector& DodgeDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceFromVectorXYZ_CPP(const FVector& Vec, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceFromVectorXY_CPP(const FVector& Vec, float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceFromVectorCPP(const FVector& Dist, float Distance, bool bIgnoreHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceCPP(const FVector& RefPos1, const FVector& RefPos2, float Distance, bool bIgnoreHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckBattleThinkTransition_CallFromCPP(EPlayerAIBattleThinkTransitionCPP Transition);
    
    UFUNCTION(BlueprintCallable)
    void ChangeThinkTableTypeCPP(EPlayerAIThinkTableTypeCPP ThinkTableType, bool bResetThink);
    
    UFUNCTION(BlueprintCallable)
    void CancelUseItemCPP();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool calcThinkTransitionProbabilityCPP_NeedsHPCheckByThinkType(EPlayerAIBattleThinkTypeCPP Action);
    
    UFUNCTION(BlueprintCallable)
    int32 calcThinkTransitionProbabilityCPP_CheckMoveOrAttackOrOthers(EPlayerAIBattleThinkTypeCPP Action);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcThinkTransitionProbabilityCPP(int32 Probability, EPlayerAIBattleThinkTypeCPP Action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTargetEvaluate_CallFromCPP(ARSCharacterBase* EvaluateTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector2D CalcStickDirCPP();
    
    UFUNCTION(BlueprintCallable)
    FVector CalcStickDir_BattleDodgeCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcStickDir_BattleAttackCPP() const;
    
    UFUNCTION(BlueprintCallable)
    FVector CalcMoveToActorLocationCPP(ACharacter* Self);
    
public:
    UFUNCTION(BlueprintCallable)
    float CalcDistanceTargetEvaluateCPP(const FVector& TargetLocation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BindCheckBattleActionStart_CallFromCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BeginEvaluateLocation_CallFromCPP();
    
};

