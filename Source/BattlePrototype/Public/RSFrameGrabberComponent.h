#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFrameGrabType.h"
#include "RSFrameGrabberComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URSFrameGrabberComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TextureTarget;
    
public:
    URSFrameGrabberComponent();
    UFUNCTION(BlueprintCallable)
    void StartGrab(EFrameGrabType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureTarget(UTextureRenderTarget2D* Target);
    
    UFUNCTION(BlueprintCallable)
    void GrabFrame(EFrameGrabType Type);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetTextureTarget();
    
    UFUNCTION(BlueprintCallable)
    void EndGrab();
    
};

