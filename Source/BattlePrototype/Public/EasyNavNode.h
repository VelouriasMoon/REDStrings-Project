#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EasyNavNode.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEasyNavNode : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AEasyNavNode();
};

