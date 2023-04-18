#pragma once
#include "CoreMinimal.h"
#include "RSActorBackgroundBase.h"
#include "SoundBackground.generated.h"

class URSAtomComponentBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASoundBackground : public ARSActorBackgroundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSAtomComponentBase* AtomComponent;
    
    ASoundBackground();
};

