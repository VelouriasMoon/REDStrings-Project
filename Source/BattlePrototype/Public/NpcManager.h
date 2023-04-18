#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "NpcManager.generated.h"

class ANpcBase;
class ANpcShopBase;
class ANpcTownPeopleBase;
class ASavePointBase;
class ATownPeopleManager;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UNpcManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANpcBase*> Npcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANpcTownPeopleBase*> NpcTowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASavePointBase*> SavePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANpcShopBase*> ShopNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATownPeopleManager* TownPeopleTickManager;
    
    UNpcManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterShopNpcAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterShopNpc(ANpcShopBase* ShopNpc);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSavePointAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSavePoint(ASavePointBase* SavePoint);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNpcTownAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNpcTown(ANpcTownPeopleBase* NPC);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNpcAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNpc(ANpcBase* NPC);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAndTickNpcTopwnAll(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void RegisterShopNpc(ANpcShopBase* ShopNpc);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSavePoint(ASavePointBase* SavePoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNpcTown(ANpcTownPeopleBase* NPC);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNpc(ANpcBase* NPC);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleModeChange(URSGameInstance* GameInstance, const bool bBattle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(const UObject* WorldContextObject);
    
};

