#pragma once
#include "CoreMinimal.h"
#include "Components/RetainerBox.h"
#include "REDRetainerBox.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
    UREDRetainerBox();
    UFUNCTION(BlueprintCallable)
    void setPhaseCount(int32 _count);
    
    UFUNCTION(BlueprintCallable)
    void setPhase(int32 _phase);
    
};

