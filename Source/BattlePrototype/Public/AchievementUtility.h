#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerID.h"
#include "EPlayerSkill.h"
#include "EPsychicObjectUniqueType.h"
#include "HCHitResult.h"
#include "AchievementUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UAchievementUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WatchOpeningMovie(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UseSas(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UsePKObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UseDrive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UseCombinationVision(const UObject* WorldContextObject, EPlayerID playerId, EPlayerID visionCharID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UseBrainCrash(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Use4CVinCombo(const UObject* WorldContextObject);
    
    //UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    //static void TradeItem(const UObject* WorldContextObject, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TimeoverInBF(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SupportedInBrainField(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SuohIncident(const UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartStory(const UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartPsychicObjectBus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SasHologram(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResuscitateFollow(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Resuscitated(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Protected(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Present(const UObject* WorldContextObject, EPlayerID playerId, EPlayerID TargetID, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayVoice(const UObject* WorldContextObject, const FString& CueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MaMoRu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillsInBrainField(const UObject* WorldContextObject, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillEnemys(const UObject* WorldContextObject, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillEnemyDataForAchievement(const UObject* WorldContextObject, FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, bool bBrainCrashMulti);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Kill_UseBus(const UObject* WorldContextObject, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JustDodge(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetItem(const UObject* WorldContextObject, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GatherAllMember(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinishLastBattle(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EquipItems(const UObject* WorldContextObject, EPlayerID playerId, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndStory(const UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndPsychicObjectBus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DriveMaxBonus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CompleteEnemyLibrary(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearQuest(const UObject* WorldContextObject, FName questId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearBondsEp(const UObject* WorldContextObject, EPlayerID playerId, EPlayerID TargetID, int32 episodeNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Clear(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckCompleteSkill(const UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChaseAttack(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BrainCrashKillsSameTime(const UObject* WorldContextObject, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BondsLvOver6(const UObject* WorldContextObject, EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddMoney(const UObject* WorldContextObject, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AcquireSkill(const UObject* WorldContextObject, EPlayerID playerId, EPlayerSkill skill);
    
};

