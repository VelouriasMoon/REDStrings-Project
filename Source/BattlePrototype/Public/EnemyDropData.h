#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EnemyDropDataCell.h"
#include "EnemyDropData.generated.h"

class UDataTable;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UEnemyDropData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* gameInst_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefEnemyDropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefBattleSimulateEnemyDropTable;
    
public:
    UEnemyDropData();
    UFUNCTION(BlueprintCallable)
    void SetGameInst(URSGameInstance* inst);
    
    UFUNCTION(BlueprintCallable)
    bool LoadEnemyDropDataTable(const FString& EnemyDropTablePath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadBattleSimulateEnemyDropDataTable(const FString& BattleSimulateEnemyDropTablePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnemyDropDataFromIndex(FEnemyDropDataCell& EnemyDropData, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnemyDropDataAllRound(FEnemyDropDataCell& EnemyDropData, FName ID, FName CharacterItemDropId);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnemyDropData(FEnemyDropDataCell& EnemyDropData, FName ID);
    
    UFUNCTION(BlueprintCallable)
    bool GetBattleSimulateEnemyDropData(FEnemyDropDataCell& EnemyDropData, FName characterId);
    
};

