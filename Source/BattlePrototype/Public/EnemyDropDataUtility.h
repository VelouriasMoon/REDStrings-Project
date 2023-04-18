#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnemyDropDataCell.h"
#include "EnemyDropDataUtility.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UEnemyDropDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnemyDropDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDropMoney(const FEnemyDropDataCell& rCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDropItemProbability(const FEnemyDropDataCell& rCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDropExperience(const FEnemyDropDataCell& rCell);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDebugLotteryParamString(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataDropItemID(const FEnemyDropDataCell& rCell, const bool isRare, FName& ItemId, int32& itemNum, bool killByBrainCrash, FName EnemyId, int32 tableNo, float Rate, float randnum);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCoreDropItemID(const FEnemyDropDataCell& rCell, const bool isRare, FName& ItemId, int32& itemNum, bool killByBrainCrash, FName EnemyId, int32 tableNo, float Rate, float randnum);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDropItemLotteryParam(FName EnemyId, int32 tableNo, float Rate, float randnum);
    
};

