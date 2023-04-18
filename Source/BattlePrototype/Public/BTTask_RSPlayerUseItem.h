#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSPlayerBase.h"
#include "BTTask_RSPlayerUseItem.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerUseItem : public UBTTask_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
public:
    UBTTask_RSPlayerUseItem();
};

