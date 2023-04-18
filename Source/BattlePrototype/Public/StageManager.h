#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "StageManager.generated.h"

class UArrangeItemStageManager;
class UArrangeObjectManager;
class UGimmickManager;
class UNpcManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AStageManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArrangeObjectManager* ArrangeObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArrangeItemStageManager* ArrangeItemStageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNpcManager* NpcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGimmickManager* GimmickManager;
    
public:
    AStageManager();
    UFUNCTION(BlueprintCallable)
    UNpcManager* GetNpcManager();
    
    UFUNCTION(BlueprintCallable)
    UGimmickManager* GetGimmickManager();
    
    UFUNCTION(BlueprintCallable)
    UArrangeObjectManager* GetArrangeObjectManager();
    
    UFUNCTION(BlueprintCallable)
    UArrangeItemStageManager* GetArrangeItemStageManager();
    
    
    // Fix for true pure virtual functions not being implemented
};

