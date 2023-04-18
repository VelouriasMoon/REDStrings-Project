#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PresentContainMessageData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPresentContainMessageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Expression;
    
};

