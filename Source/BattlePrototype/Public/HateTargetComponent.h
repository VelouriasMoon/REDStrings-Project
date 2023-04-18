#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHATETYPE.h"
#include "HateParam.h"
#include "HateTargetParam.h"
#include "HateTargetComponent.generated.h"

class ARSCharacterBase;
class UCharactersParameterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHateTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> mTargetLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTargetLockNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharactersParameterComponent* mTargetLockParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> mTargetLockOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTargetLockOnceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharactersParameterComponent* mTargetLockOnceParam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> mTargetLockConfusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharactersParameterComponent* mOwnerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetLockUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetLockNearUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsTargetLockNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsTargetLockPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsTargetLockNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mBeforeIsTargetLockPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mBeforeIsTargetLockNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHateTargetParam> mHateTargetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHateParam mHateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBerserkOnHateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsLookTargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetNearRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetFarRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsTargetRangeIgnoreHate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSCharacterBase> mDirectTargetLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsLookTargetRangeHate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetNearRangeHate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTargetFarRangeHate;
    
    UHateTargetComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateTarget(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SubHate(ARSCharacterBase* Target, float hateValue, float techScale);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLockConfusion(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLock(ARSCharacterBase* Target, int32 no);
    
    UFUNCTION(BlueprintCallable)
    void SetNoAttackCount(float NoAttackSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetHateParam(const FHateParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectTargetLock(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void ResetHate(ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void ResetDirectTargetLock();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllHate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockTargetNPC() const;
    
    UFUNCTION(BlueprintCallable)
    void HateTargetParamSubHate(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num);
    
    UFUNCTION(BlueprintCallable)
    void HateTargetParamAddHate(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetTargetLockConfusion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetTargetLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHateTargetParam> GetHateTargetParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBasisHate(ARSCharacterBase* mainPlayer, ARSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void EnableLockTargetRangeHate(bool bEnable, float RangeNear, float RangeFar);
    
    UFUNCTION(BlueprintCallable)
    void EnableLockTargetRange(bool bEnable, float RangeNear, float RangeFar, bool bIgnoreHate);
    
    UFUNCTION(BlueprintCallable)
    void EnableLockTargetPlayer(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableLockTargetNPC(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ClearHateTargetParam();
    
    UFUNCTION(BlueprintCallable)
    void AddHateTargetParam(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num, TEnumAsByte<EHATETYPE> Down);
    
    UFUNCTION(BlueprintCallable)
    void AddHate(ARSCharacterBase* Target, float hateValue, float techScale, bool bAccumulation, bool bDirect);
    
};

