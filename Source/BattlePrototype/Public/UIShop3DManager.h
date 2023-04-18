#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIShop3DManager.generated.h"

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AUIShop3DManager : public AActor {
    GENERATED_BODY()
public:
    AUIShop3DManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isWaitStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool End();
    
};

