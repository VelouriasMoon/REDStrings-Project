#pragma once
#include "CoreMinimal.h"
#include "OneShopDescPayment.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FOneShopDescPayment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
};

