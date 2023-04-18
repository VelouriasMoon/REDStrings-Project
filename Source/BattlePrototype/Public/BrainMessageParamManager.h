#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BirthdayBrainMessageData.h"
#include "EBrainMesSortType.h"
#include "EPlayerID.h"
#include "OnChangeNoticeUiStateDelegate.h"
#include "ThreadData.h"
#include "BrainMessageParamManager.generated.h"

class ALevelManager;
class UBrainMessageData;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainMessageParamManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNoticeUiState OnChangeNoticeUiStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* gameInst_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrainMessageData* brainMessageData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelManager* levelManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThreadData> threadDatas_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDebugReplyTime_DEBUG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float debugReplyTime_DEBUG;
    
    UBrainMessageParamManager();
    UFUNCTION(BlueprintCallable)
    void UpdateMessageIndication_BindInner(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMessageIndication_Bind();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMessageIndication(int32 threadNum, int32 messageNum, bool isReply, const bool isNoticeEnable);
    
    UFUNCTION(BlueprintCallable)
    void StopThreadTimer();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> StartAndGetBirthdayThreadID(int32 Year, int32 Month, int32 Day);
    
    UFUNCTION(BlueprintCallable)
    void SetStopUpdatingMessageFlag(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpenThred(int32 threadNum, bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetAlreadyLookNum(int32 threadNum, int32 lookNum);
    
    UFUNCTION(BlueprintCallable)
    void SetAlreadyEmergenceNum(int32 threadNum, int32 lookNum);
    
    UFUNCTION(BlueprintCallable)
    void ResumeThreadTimer();
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyToReply(int32 threadNum, int32 messageNum, bool ignoreCommonTimming);
    
    UFUNCTION(BlueprintCallable)
    bool IsBanToReply(int32 threadNum, int32 messageNum);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveThreadTimer(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    void InitBirthdayData();
    
    UFUNCTION(BlueprintCallable)
    void InitAtExNewGame(EPlayerID MainPlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool GetTiedBondsEPID(int32 threadNum, int32 messageNum, FString& bondsBPReference);
    
    UFUNCTION(BlueprintCallable)
    int32 GetThreadNumFromThreadID(FName threadID);
    
    UFUNCTION(BlueprintCallable)
    FBirthdayBrainMessageData GetThreadNameFromBirthdayID(FName threadID);
    
    UFUNCTION(BlueprintCallable)
    void GetSortedIndexArrayForSortID(TArray<int32>& resultArray);
    
    UFUNCTION(BlueprintCallable)
    void GetSortedIndexArray(EBrainMesSortType SortType, TArray<int32>& sortedIndexArray);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextMessageNum(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsOpenThread(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetEmergenceMessageNum(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAlreadyLookNum(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAlreadyEmergenceNum(int32 threadNum);
    
    UFUNCTION(BlueprintCallable)
    void FinishWork(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    void DoChangeMainPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CheckMessageConditions(int32 threadNum, int32 messageNum, bool isReply, const bool isNoticeEnable);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAppropriateThreadFromTitleID(FName TitleID, EPlayerID MainPlayerID);
    
    UFUNCTION(BlueprintCallable)
    void AllOpenMessageIgnorConditionsAndLock(const int32 targetThread);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageIgnorConditions(const int32 targetThread, const int32 messageNum);
    
};

