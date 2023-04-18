#pragma once
#include "CoreMinimal.h"
#include "AchievementParam.h"
#include "EAchievementsType.h"
#include "EPlayerID.h"
#include "EPlayerSkill.h"
#include "EPsychicObjectUniqueType.h"
#include "HCHitResult.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "RSTickableManagerBase.h"
#include "AchievementManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UAchievementManager : public URSTickableManagerBase, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementParam Parameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> achievementQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> achievementFailedQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> achievementUnclearableQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> openCompleted;
    
public:
    UAchievementManager();
    UFUNCTION(BlueprintCallable)
    void WatchOpeningMovie();
    
    UFUNCTION(BlueprintCallable)
    void UseSas();
    
    UFUNCTION(BlueprintCallable)
    void UsePKObject();
    
    UFUNCTION(BlueprintCallable)
    void UseDrive();
    
    UFUNCTION(BlueprintCallable)
    void UseCombinationVision(EPlayerID playerId, EPlayerID visionCharID);
    
    UFUNCTION(BlueprintCallable)
    void UseBrainCrash();
    
    UFUNCTION(BlueprintCallable)
    void Use4CVinCombo();
    
    //UFUNCTION(BlueprintCallable)
    //void TradeItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void TimeoverInBF();
    
    UFUNCTION(BlueprintCallable)
    void SupportedInBrainField();
    
    UFUNCTION(BlueprintCallable)
    void SuohIncident(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void StartStory(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void StartPsychicObjectBus();
    
    UFUNCTION(BlueprintCallable)
    void SasHologram();
    
    UFUNCTION(BlueprintCallable)
    void ResuscitateFollow();
    
    UFUNCTION(BlueprintCallable)
    void Resuscitated();
    
    UFUNCTION(BlueprintCallable)
    void RegisterOpenAchievement(const EAchievementsType Type);
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievements();
    
    UFUNCTION(BlueprintCallable)
    void Protected();
    
    UFUNCTION(BlueprintCallable)
    void Present(EPlayerID playerId, EPlayerID TargetID, FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FString& CueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OpenAchievementCheckProgress_EnemyKill();
    
    UFUNCTION(BlueprintCallable)
    bool OpenAchievement(const EAchievementsType Type);
    
    UFUNCTION(BlueprintCallable)
    void MaMoRu();
    
    UFUNCTION(BlueprintCallable)
    void KillsInBrainField(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void KillEnemys(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void KillEnemyDataForAchievement(FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, bool bBrainCrashMulti);
    
    UFUNCTION(BlueprintCallable)
    void Kill_UseBus(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void JustDodge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenAchievement(const EAchievementsType Type);
    
    UFUNCTION(BlueprintCallable)
    void GetItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugString(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void GatherAllMember();
    
    UFUNCTION(BlueprintCallable)
    void FinishLastBattle();
    
    UFUNCTION(BlueprintCallable)
    void EquipItems(EPlayerID playerId, FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void EndStory(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void EndPsychicObjectBus();
    
    UFUNCTION(BlueprintCallable)
    void DriveMaxBonus();
    
    UFUNCTION(BlueprintCallable)
    void CompleteEnemyLibrary();
    
    UFUNCTION(BlueprintCallable)
    void ClearQuest(FName questId);
    
    UFUNCTION(BlueprintCallable)
    void ClearBondsEp(EPlayerID playerId, EPlayerID TargetID, int32 episodeNo);
    
    UFUNCTION(BlueprintCallable)
    void CheckCompleteSkill(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void CheckAlreadyAchievedAtTrial2ConvSaveData();
    
    UFUNCTION(BlueprintCallable)
    void CheckAlreadyAchievedAtTrial2(const bool isTrial2SaveData);
    
    UFUNCTION(BlueprintCallable)
    void CheckAlreadyAchieved();
    
    UFUNCTION(BlueprintCallable)
    void ChaseAttack();
    
    UFUNCTION(BlueprintCallable)
    void BrainCrashKillsSameTime(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void BondsLvOver6(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void AcquireSkill(EPlayerID playerId, EPlayerSkill skill);
    
    
    // Fix for true pure virtual functions not being implemented
};

