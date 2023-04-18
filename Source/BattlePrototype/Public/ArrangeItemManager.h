#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArrangeItemListForSaveData.h"
#include "ManagerInterface.h"
#include "OnChangeMinimapStateDelegate.h"
#include "RSSaveGameInterface.h"
#include "RandomArrangeItemIDInfo.h"
#include "RedArrangeItemOnAcquireDelegate.h"
#include "RedArrangeItemOnRebirthDelegate.h"
#include "ArrangeItemManager.generated.h"

class AArrangeItemBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AArrangeItemManager : public AActor, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrangeItemListForSaveData> m_allArrangeItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomArrangeItemIDInfo> m_allRandomArrangeItemIDInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double m_timerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeMinimapState OnChangeMinimapStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedArrangeItemOnAcquire OnAcquireDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedArrangeItemOnRebirth OnRebirthDispather;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double m_LotteryPrintDispEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_LotteryPrintTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isLotteryPrintDispDrawed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDebugLotteryPrintDispFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDebugForceRepopTimeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_debugForceRepopTime;
    
    AArrangeItemManager();
    UFUNCTION(BlueprintCallable)
    bool SetRebirth(const FName ID);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomArrangeParam2Actor(AArrangeItemBase* _actor);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntervalTime(const FName ID, const float arrangeItemIntervaltime, float& resultIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetAcquired(const FName ID, const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetAccessed(const FName ID, const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool GetArrangeItemParam(const FName ID, float& IntervalTime, bool& Acquired, bool& Accessed);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAreaWork();
    
    
    // Fix for true pure virtual functions not being implemented
};

