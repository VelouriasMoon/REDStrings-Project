#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BattleCharacterDebugInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UBattleCharacterDebugInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IBattleCharacterDebugInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugInvincible() const;
    
};

