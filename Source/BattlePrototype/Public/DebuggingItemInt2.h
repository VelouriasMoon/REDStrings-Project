#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemInt.h"
#include "DebuggingItemInt2.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemInt2 : public ADebuggingItemInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ADebuggingItemInt2();
};

