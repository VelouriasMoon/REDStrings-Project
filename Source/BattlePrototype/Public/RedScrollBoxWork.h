#pragma once
#include "CoreMinimal.h"
#include "RedScrollBoxWork.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FRedScrollBoxWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* pElementWidget;
    
};

