#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LoopSeParam.generated.h"

class URSAtomComponentBase;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLoopSeParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSAtomComponentBase* pSound;
    
};

