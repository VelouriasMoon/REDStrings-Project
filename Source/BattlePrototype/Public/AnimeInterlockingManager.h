#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "AnimeInterlockingChallengeQuestInfo.h"
#include "AnimeInterlockingNumRefDataCell.h"
#include "AnimeInterlockingNumRewardSaveParams.h"
#include "AnimeInterlockingRefDataCell.h"
#include "AnimeInterlockingSaveParams.h"
#include "AnimeInterlockingsPresentList.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "AnimeInterlockingManager.generated.h"

class UDataTable;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UAnimeInterlockingManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* m_gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingData_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingReward_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingSubReward_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingNumData_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingNumReward_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingSubNumReward_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AnimeInterlockingRewardToKins_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimeInterlockingChallengeQuestInfo m_ChallengeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimeInterlockingSaveParams> m_AnimeInterlockingSaveParamsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimeInterlockingNumRewardSaveParams> m_AnimeInterlockingNumRewardSaveParamsList;
    
public:
    UAnimeInterlockingManager();
    UFUNCTION(BlueprintCallable)
    void SetIsChallengeInfoCorrectAnswer(bool isCorrectAnswer);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingNumRewardAchievement(FName AnimeInterlockingNumRewardName, const bool isAchievement);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingNoticedFlag(FName AnimeInterlockingName, const bool isNoticed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingNewFlag(FName AnimeInterlockingName, const bool isNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingGetReward(FName AnimeInterlockingName, const bool isGetReward);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingGetNumReward(FName AnimeInterlockingNumRewardName, const bool isGetNumReward);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnimeInterlockingAchievementQuest(FName AnimeInterlockingName, const bool isAchievementQuest);
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeInfoAnimeInterlockingName(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimeInterlockingSaveParams(FName AnimeInterlockingName, FAnimeInterlockingSaveParams& SaveParams);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimeInterlockingNumRewardSaveParams(FName AnimeInterlockingNumName, FAnimeInterlockingNumRewardSaveParams& SaveParams);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName, const int32 IncorrectAnswerNum);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableQuest(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    bool IsChallengeInfoCorrectAnswer();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingNumRewardAchievement(FName AnimeInterlockingNumRewardName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingNoticedFlag(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingNewFlag(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingGetReward(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingGetNumReward(FName AnimeInterlockingNumRewardName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimeInterlockingAchievementQuest(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetQuestClearNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetChallengeInfoAnimeInterlockingName();
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingSubReward(FName AnimeInterlockingName, FAnimeInterlockingsPresentList& presentList);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingSaveParams(FName AnimeInterlockingName, FAnimeInterlockingSaveParams& SaveParams);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingRewardToKins(const FString& ItemId, int32& KinsNum);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingReward(FName AnimeInterlockingName, FAnimeInterlockingsPresentList& presentList);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimeInterlockingRefDataList(FName AnimeInterlockingName, TArray<FAnimeInterlockingRefDataCell>& refDataList);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingRefData(FName AnimeInterlockingName, FAnimeInterlockingRefDataCell& refData);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingNumSubReward(FName AnimeInterlockingNumName, FAnimeInterlockingsPresentList& presentList);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingNumRewardSaveParams(FName AnimeInterlockingNumName, FAnimeInterlockingNumRewardSaveParams& SaveParams);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingNumReward(FName AnimeInterlockingNumName, FAnimeInterlockingsPresentList& presentList);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimeInterlockingNumRefDataList(FName AnimeInterlockingNumName, TArray<FAnimeInterlockingNumRefDataCell>& refDataList);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnimeInterlockingNumRefData(FName AnimeInterlockingNumName, FAnimeInterlockingNumRefDataCell& refData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName);
    
    UFUNCTION(BlueprintCallable)
    void GetAcquirableButNotAcquiredNumRewardNameList(TArray<FName>& nameList);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimeInterlockingIncorrectAnswerNum(FName AnimeInterlockingName);
    
    
    // Fix for true pure virtual functions not being implemented
};

