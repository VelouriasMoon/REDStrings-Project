#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FreeCameraController.generated.h"

class AActor;
class UPlayer;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AFreeCameraController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalViewTargetPCRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OriginalViewTargetRef;
    
    AFreeCameraController();
};

