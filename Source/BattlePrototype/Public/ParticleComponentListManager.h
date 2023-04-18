#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ParticleComponentListManager.generated.h"

class URSParticleSystemComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UParticleComponentListManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSParticleSystemComponentBase*> ParticleSystemComponentBases;
    
public:
    UParticleComponentListManager();
};

