#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ConditionQuestParams.h"
#include "EPlayerID.h"
#include "EPsychicObjectUniqueType.h"
#include "HCHitResult.h"
#include "OnChangeNoticeUiStateDelegate.h"
#include "OnChangeQuestActiveUiStateDelegate.h"
#include "ProgressRateQuestParams.h"
#include "QuestParams.h"
#include "QuestProgressState.h"
#include "QuestType.h"
#include "SortType.h"
#include "QuestParamManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UQuestParamManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNoticeUiState onChangeNoticeUiStateDelegate_;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeQuestActiveUiState onChangeQuestActiveUiStateDelegate_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestParams> questParams_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionQuestParams> subQuestParams_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProgressRateQuestParams> bondsQuestParams_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activeMainQuest_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activeSubQuest_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activeSubQuestKasane_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> needItemSubQuestNumber_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> needKillEnemySubQuestNumber_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> subQuestRowNames_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> bondsQuestRowNames_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrivemode_;
    
    UQuestParamManager();
    UFUNCTION(BlueprintCallable)
    void ThrowSubQuestNotification(FName questId);
    
    UFUNCTION(BlueprintCallable)
    void SetSubQuestState(int32 QuestNumber, QuestProgressState State);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIcon(QuestType qType, int32 QuestNumber, bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetMainQuestState(int32 QuestNumber, QuestProgressState State);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsQuestState(int32 QuestNumber, QuestProgressState State);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsQuestProgressRate(int32 QuestNumber, int32 Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSubQuestNumber(int32 subQuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void KillEnemy(FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, int32 killNum, bool bBrainCrashMulti, EPlayerID holoPlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockContentMainQuest(FName Key, int32 contentNumber);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockContentBondsEpisode(FName Key, int32 contentNumber);
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetEnemyForActiveSubQuest(const FString& enemyName);
    
    UFUNCTION(BlueprintCallable)
    bool IsSubQuestRelatedToThePlayer(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestEnemy(FName enemyName);
    
    UFUNCTION(BlueprintCallable)
    bool IsBondsQuestRelatedToThePlayer(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void InProgressSubQuest(int32 subQuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void InProgressBondsQuest(int32 bondsQuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    void InitAtExNewGame(EPlayerID MainPlayerID);
    
    UFUNCTION(BlueprintCallable)
    QuestProgressState GetSubQuestState(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubQuestNumberFromID(FName questId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubQuestNumberAchieved(const FName& questId, const FName& TargetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetQuestSortID(QuestType questTyp, SortType SortType, int32 activeNumber);
    
    UFUNCTION(BlueprintCallable)
    QuestProgressState GetMainQuestState(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMainQuestNumberFromID(FName questId);
    
    UFUNCTION(BlueprintCallable)
    FName GetMainQuestIDFromNumber(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void GetItem(FName ItemName, int32 itemNum);
    
    UFUNCTION(BlueprintCallable)
    FName GetIDFromSubQuestNumber(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    QuestProgressState GetBondsQuestState(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsQuestProgressRate(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsQuestNumberFromID(FName questId);
    
    UFUNCTION(BlueprintCallable)
    FName GetBondsEpisodeIDFromNumber(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    int32 GetActiveSubQuestNumber();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSubQuestSuitableNowPlayer(int32 QuestNumber);
    
    UFUNCTION(BlueprintCallable)
    void CheckSubQuestsStateNotOrder();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPlayingDLCBondsNow();
    
    UFUNCTION(BlueprintCallable)
    bool CheckNeedItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool CheckFinishedDLCBonds(EPlayerID heroID, EPlayerID TargetID, int32 dlcNumber);
    
    UFUNCTION(BlueprintCallable)
    bool CheckDLCQuestContentCheck(FName questId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToProgressAllQuest();
    
};

