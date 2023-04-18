#pragma once
#include "CoreMinimal.h"
#include "EasyNavRouteInfo.generated.h"

class AEasyNavNode;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEasyNavRouteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEasyNavNode*> NavNodeList;
    
};

