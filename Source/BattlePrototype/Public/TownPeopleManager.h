#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TownPeopleManager.generated.h"

class UNpcManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ATownPeopleManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNpcManager* pNpcManager;
    
public:
    ATownPeopleManager();
};

