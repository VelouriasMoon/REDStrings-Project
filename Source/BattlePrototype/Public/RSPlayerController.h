#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RSPlayerController.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ARSPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetDisableForceFeedback(bool bDisable);
    
};

