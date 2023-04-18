#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventManagerInterface.h"
#include "AjitoManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAjitoManager : public AActor, public IEventManagerInterface {
    GENERATED_BODY()
public:
    AAjitoManager();
    
    // Fix for true pure virtual functions not being implemented
};

