#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "DataItemSpawnState.h"
#include "ManagerInterface.h"
#include "DropItemManager.generated.h"

class ADropItem;
class UParticleSystem;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADropItemManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADropItem*> allDataDropDatas_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADropItem*> allCoreDropDatas_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> dataDropActiveData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> coreDropActiveData_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isItemGetDebugOn;
    
    ADropItemManager();
    UFUNCTION(BlueprintCallable)
    void SetActiveDropVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void RegistStockDataItemData(const FDataItemSpawnState& Data);
    
    UFUNCTION(BlueprintCallable)
    void RegistAllDataDropDatas(ADropItem* itemAdress);
    
    UFUNCTION(BlueprintCallable)
    void RegistAllCoreDropDatas(ADropItem* itemAdress);
    
    UFUNCTION(BlueprintCallable)
    void RedropLandingItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void DoNotActiveDataDrop(ADropItem* itemAdress);
    
    UFUNCTION(BlueprintCallable)
    void DoNotActiveCoreDrop(ADropItem* itemAdress);
    
    UFUNCTION(BlueprintCallable)
    void DoActiveStockDataDrop(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void DoActiveDataDrop(FVector Location, FName ItemId, int32 itemNum, bool bAutoTaken, UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle, FName charID);
    
    UFUNCTION(BlueprintCallable)
    void DoActiveCoreDrop(FVector Location, FName ItemId, int32 itemNum, bool bAutoTaken, UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle);
    
    UFUNCTION(BlueprintCallable)
    void ControlDataDropActivateAtArea(const FString& nextLevelName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAllDropStateToDrop(float firstDelay);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveAllDataDrops();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveAllCoreDrops();
    
    UFUNCTION(BlueprintCallable)
    void CalledAtStartBrainField();
    
    UFUNCTION(BlueprintCallable)
    void CalledAtEndBrainField();
    
    
    // Fix for true pure virtual functions not being implemented
};

