#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerID.h"
#include "EPsychicObjectUniqueType.h"
#include "HCHitResult.h"
#include "QuestDataUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UQuestDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestDataUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDLCBondsStartTargetChar(const UObject* WorldContextObject, FName dlcBondsID, EPlayerID startChar);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool KillEnemyDataForSubQuest(const UObject* WorldContextObject, FName enemyName, FHCHitResult hcResult, EPsychicObjectUniqueType poType, bool bBrainCrashMulti, EPlayerID holoPlayerID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCharStartedDLCBonds(const UObject* WorldContextObject, FName dlcBondsID, EPlayerID& startedCharID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckFinishedDLCBonds(const UObject* WorldContextObject, EPlayerID heroID, EPlayerID TargetID, int32 dlcNumber);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckDLCQuestContentCheck(const UObject* WorldContextObject, FName questId);
    
};

