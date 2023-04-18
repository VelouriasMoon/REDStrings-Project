#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "SoundPoolManager.generated.h"

class USoundPoolObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USoundPoolManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundPoolObject*> Heap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
public:
    USoundPoolManager();
};

