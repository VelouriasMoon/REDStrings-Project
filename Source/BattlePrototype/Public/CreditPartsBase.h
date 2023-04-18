#pragma once
#include "CoreMinimal.h"
#include "CreditPartsBase.generated.h"

class UOverlay;
class UOverlaySlot;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCreditPartsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlaySlot* OverlaySlot;
    
};

