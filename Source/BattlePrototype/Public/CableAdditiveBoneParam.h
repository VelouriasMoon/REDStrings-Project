#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CableAdditiveBoneParam.generated.h"

USTRUCT(BlueprintType)
struct FCableAdditiveBoneParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AngleRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AnglePitch;
};

