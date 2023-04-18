#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "SoundPoolObject.generated.h"

class URSAtomComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USoundPoolObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSAtomComponentBase* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Used;
    
public:
    USoundPoolObject();
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* Get();
    
};

