#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "Engine/DataTable.h"
#include "AjitoObjMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoObjMoveInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorNameToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MoveToTransform;
    
};

