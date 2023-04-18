#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBool.h"
#include "DebuggingItemBool2.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemBool2 : public ADebuggingItemBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ADebuggingItemBool2();
};

