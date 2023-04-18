#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EManagerProcTiming.h"
#include "ManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class UManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool IsNeedFrameWait();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool InitializeManager(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    bool FinalizeManager(EManagerProcTiming Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BattlePrototype")
    void DelayBeginPlay();
    
};

