#pragma once
#include "CoreMinimal.h"
#include "BTTask_RSNativeBase.h"
#include "BTTask_RSPlayerBase.generated.h"

class UPlayerScriptComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSPlayerBase : public UBTTask_RSNativeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerScriptComponent* _PlayerScript;
    
public:
    UBTTask_RSPlayerBase();
};

