#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_RSPlayerBase.h"
#include "BTDecorator_RSPlayerIsUseCppFunc.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTDecorator_RSPlayerIsUseCppFunc : public UBTDecorator_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UBTDecorator_RSPlayerIsUseCppFunc();
};

