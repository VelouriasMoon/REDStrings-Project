#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerInterface.h"
#include "RSParallelObjectManager.generated.h"

class UObject;
class URSParallelObjectManageComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSParallelObjectManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParallelObjectManageComponent* _AfterPrePhysicsManageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSParallelObjectManageComponent* _AfterDuringPhysicsManageComponent;
    
public:
    ARSParallelObjectManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetSingleThread(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterObject(UObject* Object);
    
    
    // Fix for true pure virtual functions not being implemented
};

