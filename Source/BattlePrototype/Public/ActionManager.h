#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "ActionManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AActionManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispAreaNextUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebug;
    
    AActionManager();
    UFUNCTION(BlueprintCallable)
    void UnregistAction2(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void UnregistAction(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableActionCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleFlag(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterAction2(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterAction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistEnableAction2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistEnableAction() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearActionAll();
    
    
    // Fix for true pure virtual functions not being implemented
};

