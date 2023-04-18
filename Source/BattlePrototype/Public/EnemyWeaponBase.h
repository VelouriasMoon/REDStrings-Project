#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EEnemyWeaponMoveKind.h"
#include "EnemyWeaponBase.generated.h"

class UCapsuleComponent;
class UCurveFloat;
class UHitCheckComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URSParticleSystemComponentBase;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEnemyWeaponBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTotalDeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbEnableSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbNotLineCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mOldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetDistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyWeaponMoveKind mMoveKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLifeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mInitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAdjustAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxCorrectAngleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAdjustFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLimitAngleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLimitAngleDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLimitAngleLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAdjustAngleDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAdjustAngleDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLimitDistanceAdjustAngleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLimitDistanceAdjustAngleDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbNewCorrectDir;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mWeaponActiveNative;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsCurveTargetMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCurveTargetMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* mCurveTargetMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsHitCurveTargetMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mCommonMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCommonMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCommonMoveGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mProjectileGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsAnyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbNotUseAttackCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbHitPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPhysicsHalfHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPhysicsRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mPhysicsCollisionHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbDisableHitPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator mPhysicsRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbDisableUpdatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbIsFloatObjectExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbDisablePhysicsCollision;
    
    AEnemyWeaponBase();
    UFUNCTION(BlueprintCallable)
    void UpdateTargetNative(bool BreakLostTarget, AActor* Target, AActor* attackOwner, UPARAM(Ref) float& LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviousLocations();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhysicsCollisionNative(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLifeTimeNative(bool InterceptReserve, float DeltaTime, UPARAM(Ref) float& LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurveTargetMoveNative(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCommonMoveNative(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAddIgnoreJustDodgeNative(float DeltaTime, UPARAM(Ref) float& IgnoreJustDodgeTimer);
    
    UFUNCTION(BlueprintCallable)
    void StartPhysicsCollisionNative();
    
    UFUNCTION(BlueprintCallable)
    bool SetWeaponVisibilityNative(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponActiveNative(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetMoveEffectRotationNative();
    
    UFUNCTION(BlueprintCallable)
    void SetCurveTargetMoveInitNative();
    
    UFUNCTION(BlueprintCallable)
    bool ProjectileHitProcessNative(bool IsHitPlayer, FVector HitLocation, FVector HitNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ProjectileHitProcess_FromNative(bool IsHitPlayer, FVector HitLocation, FVector HitNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponActiveNative() const;
    
    UFUNCTION(BlueprintCallable)
    void IsHitLineCheckNative(FVector StartLocation, FVector EndLocation, bool& IsAnyHit, FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitFloorNative(FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    void InitPreviousLocations(FVector InitLocation);
    
    UFUNCTION(BlueprintCallable)
    void InitializePhysicsCollisionNative();
    
    UFUNCTION(BlueprintCallable)
    void InitializeNative(UProjectileMovementComponent* ProjectileMovement, UHitCheckComponent* HitCheck, USphereComponent* AttackCollision, UCapsuleComponent* AttackCollisionCapsule, URSParticleSystemComponentBase* RSParticleSystem, USkeletalMeshComponent* BulletMesh, UCapsuleComponent* PhysicsCollision);
    
    UFUNCTION(BlueprintCallable)
    void InitCommonMovewithGravityNative(FVector InitPos, FVector MoveDir, float MoveSpeed, float Gravity, bool noTargetMove);
    
    UFUNCTION(BlueprintCallable)
    void InitCommonMoveNative(FVector InitPos, FVector MoveDir, float MoveSpeed, bool noTargetMove);
    
    UFUNCTION(BlueprintCallable)
    void HitPhysicsCollisionNative(FVector HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void HitCurveMoveTargetNative(FVector HitLocation, FVector HitNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HitAfterCurveMoveTarget_FromNative(FVector HitLocation, FVector HitNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetDistanceNative();
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocationTwoFrameAgo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHitCheckComponent* GetHitCheckComponent_FromNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetAttackOwnerTargetCharaNative();
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetAttackCollisionPrimitiveNative(bool& IsSphere);
    
    UFUNCTION(BlueprintCallable)
    void EndPhysicsCollisionNative();
    
    UFUNCTION(BlueprintCallable)
    void EndHomingNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCurveTargetMove_FromNative(float sec);
    
    UFUNCTION(BlueprintCallable)
    FVector CorrectBulletDirectionNative(FVector FireLocation, FVector TargetLocation, FVector FireForwardVector, float AbsoluteAngleZ, float MaxAngleZ, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void AttackCollisionEndNative(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreJustDodgeNative();
    
};

