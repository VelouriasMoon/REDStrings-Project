#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemInGameAchievementGroup.generated.h"

class ADebuggingItemBool;
class ADebuggingItemBool2;
class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemInt2;
class UAchievementManager;
class UAchievementParamDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemInGameAchievementGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemInt2>> IntList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt> IntReport;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> TradeBool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> QuestBool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> AttachmentBool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> EnemyBool;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemInt2> IntMoney;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebuggingItemEvent> ExecMoney;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemBool2>> PresentBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementParamDBAsset* DBAsset;
    
public:
    ADebuggingItemInGameAchievementGroup();
    UFUNCTION(BlueprintCallable)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnEventChangeKins(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeReportCount(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeIntParam(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolTrade(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolQuest(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolPresent(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolEnemy(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolAttachment(const ADebuggingItemBool* Item);
    
};

