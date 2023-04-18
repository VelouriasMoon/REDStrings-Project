#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenderingManager.generated.h"

class URenderingManagerCoreComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARenderingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderingManagerCoreComponent* CoreComponent;
    
    ARenderingManager();
};

