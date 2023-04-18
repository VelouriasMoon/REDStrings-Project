#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "AjitoNpcActor.generated.h"

class ANpcAjitoPeople;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoNpcActor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANpcAjitoPeople> AjitoNpcActor;
    
};

