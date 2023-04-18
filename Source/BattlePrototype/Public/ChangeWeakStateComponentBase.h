#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyEnableWeakData.h"
#include "EnemyWeakMaterialData.h"
#include "ChangeWeakStateComponentBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UChangeWeakStateComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeakFullInactiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mElapsedWeakFullInactiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mFullInactiveWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFullInactiveColorMapValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFullInactiveColorMapValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFullInactiveFrenelColorPowerMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFullInactiveFrenelColorPowerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mForceEnableWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mForceEnableWeakTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mElapsedForceEnableWeakTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mStartWeakEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* mWeakMaterialEmissiveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyWeakMaterialData> mWeakMaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeakEmissiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyWeakMaterialData> mDisableWeakMaterialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDisableWeakEmissiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeakExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbWeakExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCurrentWeakExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mDisableWeakNumList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableWeakExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAddFirstExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAddPconExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mChangeWeakState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyEnableWeakData> mEnableWeakDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mBeforeWeakStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> mCurrentTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mEnableWeakList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mChangeWeakMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mFullInactivateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> mChangeFullInactiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* mWeakMaterialRateCurveData;
    
    UChangeWeakStateComponentBase();
    UFUNCTION(BlueprintCallable)
    void Update_Native(float DeltaSec);
    
    UFUNCTION(BlueprintCallable)
    void StoreWeakState_Native();
    
    UFUNCTION(BlueprintCallable)
    void StartFullInactiveWeak_Native();
    
    UFUNCTION(BlueprintCallable)
    void StartForceEnableWeak_Native();
    
    UFUNCTION(BlueprintCallable)
    void SetFullInactiveWeak_Native(bool FullInactive, int32 WeakListNum);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWeakExtendTime_Native(bool EnableExtend);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeWeakMaterial_Native(bool bChange, int32 WeakListNum);
    
    UFUNCTION(BlueprintCallable)
    void SetAllWeakFullInactive_Native(bool bFullInactive);
    
    UFUNCTION(BlueprintCallable)
    void RestoreWeakState_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeakFullInactive_Native(int32 WeakListNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeakExtendTime_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceEnableWeak_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableWeakExtendTime_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllWeakFullInactive_Native();
    
    UFUNCTION(BlueprintCallable)
    void Initialize_Native(bool isChangeWeakState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetFullInactiveList_Native();
    
    UFUNCTION(BlueprintCallable)
    void ForceDisableAllWeak_Native();
    
    UFUNCTION(BlueprintCallable)
    void EndWeakExtendTime_Native();
    
    UFUNCTION(BlueprintCallable)
    void EndFullInactiveWeak_Native();
    
    UFUNCTION(BlueprintCallable)
    void EndForceEnableWeak_Native();
    
    UFUNCTION(BlueprintCallable)
    void EnableWeak_Native(bool bEnable, int32 WeakListNum, bool bNotChangeCollision);
    
    UFUNCTION(BlueprintCallable)
    void EnableAllWeak_Native(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ClearChangeWeakMaterial_Native();
    
    UFUNCTION(BlueprintCallable)
    void AddWeakExtendTime_Native();
    
};

