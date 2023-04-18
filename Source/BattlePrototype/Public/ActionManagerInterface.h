#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EActionIconMode.h"
#include "ActionManagerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UActionManagerInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IActionManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionManagerSetIconMode(int32 Handle, EActionIconMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionManagerSetBattleFlag(bool bBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* ActionManagerGetPairActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ActionManagerGetEditableAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActionManagerExecute(int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActionManagerCheck(int32 Handle) const;
    
};

