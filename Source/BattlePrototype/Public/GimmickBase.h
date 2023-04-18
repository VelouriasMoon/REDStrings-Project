#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionManagerInterface.h"
#include "GimmickBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickBase : public AActor, public IActionManagerInterface {
    GENERATED_BODY()
public:
    AGimmickBase();
    
    // Fix for true pure virtual functions not being implemented
};

