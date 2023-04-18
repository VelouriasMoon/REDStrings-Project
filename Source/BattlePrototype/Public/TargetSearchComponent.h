#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "ChangeTargetDelegateDelegate.h"
#include "ETargetFailedReason.h"
#include "TargetListType.h"
#include "TargetSearchArea.h"
#include "TargetSearchComponent.generated.h"

class AActor;
class ABattleManager;
class AEnemyManager;
class ARSCharacterBase;
class UTargetSearchComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UTargetSearchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetSearchArea> SearchArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchMobDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Trace2ndZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LockonPlayerPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InternalLockUpdateTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeTargetDelegate DispatchChangeTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyManager* pEnemyManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleManager* pBattleManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval_;
    
public:
    UTargetSearchComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTarget();
    
    UFUNCTION(BlueprintCallable)
    void StoreLockTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetFix(bool bFix);
    
    UFUNCTION(BlueprintCallable)
    void SetLostFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetLockTargetDirect(ARSCharacterBase* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLockTarget(bool bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* SearchTargetActor(const TArray<ARSCharacterBase*>& enemyList, TEnumAsByte<TargetListType> listType, bool bIgnoreRendered, bool bNotLockTarget) const;
    
    UFUNCTION(BlueprintCallable)
    void RestoreLockTarget(bool bRetargetRestoreFailed);
    
    UFUNCTION(BlueprintCallable)
    void OnSetBattling(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void LockonTargetCalcPos(float lockonHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetFix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLostLockTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbleTarget(ARSCharacterBase* Target, bool isLock, TEnumAsByte<TargetListType> listType, ETargetFailedReason& OutReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTargetSearchComponent* GetTargetSearchComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetLostTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetCurrentTargetActor();
    
    UFUNCTION(BlueprintCallable)
    void ClearLostTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeLockTarget(float AxisValue, const TArray<ARSCharacterBase*>& enemyList);
    
};

