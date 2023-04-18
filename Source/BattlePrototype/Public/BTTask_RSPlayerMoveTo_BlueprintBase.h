#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "EPlayerAIMoveWallCPP.h"
#include "GameTimer.h"
#include "BTTask_RSPlayerMoveTo_BlueprintBase.generated.h"

class AAIController;
class APawn;
class ARSCharacterBase;
class UPlayerAIBaseComponent;
class UPlayerScriptComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerMoveTo_BlueprintBase : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerScriptComponent* OwnerPlayerScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAIBaseComponent* OwnerPlayerAIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer ResetAIMoveToTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJumpCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsJumpCheckCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpCheckMoveSpeedRatioThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer CheckWallTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckJumpInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer BackInputTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimer DetourInputTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputBeginYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputDurationShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputBeginYawAngleShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputDurationRateWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputDurationRateRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputDurationRateSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputRotateDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetourInputBeginYawAngleCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIMoveWallCPP WallTypeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWallBackCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWallBackNotMovedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWallDetourCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovedDistanceCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovedDistancePrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovedDistanceCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovedDistanceCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovedDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotMovedElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWarpThresholdTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceWarpRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeWalkOrRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWalking;
    
public:
    UBTTask_RSPlayerMoveTo_BlueprintBase();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveCPP();
    
    UFUNCTION(BlueprintCallable)
    void StopAIMoveToCPP(bool bRechargeResetAIMoveTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAIMoveTo_CallFromCPP(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerScriptComponent* GetOwnerPlayerScript() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerAIBaseComponent* GetOwnerPlayerAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceWarpCPP();
    
    UFUNCTION(BlueprintCallable)
    void ExitCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit_CallFromCPP(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable)
    void CheckWallCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckStickMoveEndCPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPlayerIsRun(ARSCharacterBase* Character) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckMoveDistance_IsEndCPP();
    
    UFUNCTION(BlueprintCallable)
    void CheckMovedDistance_TickCPP(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void CheckMovedDistance_InitializeCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceXY_Z_CPP(FVector Location1, FVector Location2, float DistanceXY, float DistanceZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceXY_CPP(FVector Location1, FVector Location2, float DistanceXY) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckAvoidWallOrWarpCPP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckArrivedGoalCPP() const;
    
};

