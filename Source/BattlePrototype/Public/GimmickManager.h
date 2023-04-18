#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "GimmickManager.generated.h"

class AGimmickActionBase;
class AGimmickObjectBase;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UGimmickManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGimmickObjectBase*> Gimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGimmickActionBase*> GimmickActions;
    
    UGimmickManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterGimmickAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterGimmickActionAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterGimmickAction(AGimmickActionBase* GimmickAction);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterGimmick(AGimmickObjectBase* gimmick);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGimmickAction(AGimmickActionBase* GimmickAction);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGimmick(AGimmickObjectBase* gimmick);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleModeChange(URSGameInstance* GameInstance, const bool bBattle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(const UObject* WorldContextObject);
    
};

