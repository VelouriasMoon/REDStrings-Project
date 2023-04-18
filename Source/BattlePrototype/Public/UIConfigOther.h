#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigOther.generated.h"

class UREDTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigOther : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIBase* ChildIndex;
    
public:
    UUIConfigOther();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UUIBase* uiIndex, UREDTextBlock* textIndex);
    
};

