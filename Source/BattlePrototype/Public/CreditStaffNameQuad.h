#pragma once
#include "CoreMinimal.h"
#include "CreditPartsBase.h"
#include "CreditStaffNameQuad.generated.h"

class UREDTextBlock;
class USpacer;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCreditStaffNameQuad : public FCreditPartsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaffLeft1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaffLeft2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaffRight1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDTextBlock* textStaffRight2;
    
};

