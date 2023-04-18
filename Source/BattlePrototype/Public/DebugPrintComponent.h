#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugPrintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDebugPrintComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugPrintComponent();
    UFUNCTION(BlueprintCallable)
    void DrawHUD();
    
};

