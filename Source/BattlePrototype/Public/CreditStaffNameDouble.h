#pragma once
#include "CoreMinimal.h"
#include "CreditPartsBase.h"
#include "CreditStaffNameDouble.generated.h"

class UREDTextBlock;
class USpacer;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCreditStaffNameDouble : public FCreditPartsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaff1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaff2;
    
};

