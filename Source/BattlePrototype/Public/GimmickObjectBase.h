#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "EGimmickObjectStatus.h"
#include "GimmickObjectInterface.h"
#include "GimmickOnChangeStatusDelegate.h"
#include "GimmickObjectBase.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickObjectBase : public AActor, public IGimmickObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Blocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenCloseTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickOnChangeStatus OnChangeStatus;
    
    AGimmickObjectBase();
    UFUNCTION(BlueprintCallable)
    void UpdateOpenValueInOpening(float DelataSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOpenValueInClosing(float DelataSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetGimmickStatus(EGimmickObjectStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockerCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    EGimmickObjectStatus GetGimmickStatus();
    
    
    // Fix for true pure virtual functions not being implemented
};

