#pragma once
#include "CoreMinimal.h"
#include "CreditPartsBase.h"
#include "CreditLogo.generated.h"

class UImage;
class USpacer;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCreditLogo : public FCreditPartsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* imageLogo;
    
};

