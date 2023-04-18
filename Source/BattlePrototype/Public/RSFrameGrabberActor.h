#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSFrameGrabberActor.generated.h"

class URSFrameGrabberComponent;

UCLASS(Blueprintable)
class ARSFrameGrabberActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSFrameGrabberComponent* FrameGrabberComponent;
    
    ARSFrameGrabberActor();
};

