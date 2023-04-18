#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInGameFlowType.h"
#include "ManagerInterface.h"
#include "RSInGameFlow.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class ARSInGameFlow : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInGameFlowType _currentType;
    
public:
    ARSInGameFlow();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentFlowType(EInGameFlowType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInGameFlowType GetCurrentFlowType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

