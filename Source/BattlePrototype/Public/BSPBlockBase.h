#pragma once
#include "CoreMinimal.h"
#include "RSActorSystemBase.h"
#include "Components/BrushComponent.h"
#include "BSPBlockBase.generated.h"

class UBrushComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABSPBlockBase : public ARSActorSystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    ABSPBlockBase();
};

