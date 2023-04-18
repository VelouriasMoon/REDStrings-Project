#pragma once
#include "CoreMinimal.h"
#include "Math/Matrix.h"
#include "Components/SceneCaptureComponent2D.h"
#include "RSSceneCaptureComponent2D.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTextureStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureStreamingBoostFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeparateTranslucency;
    
    URSSceneCaptureComponent2D();
    UFUNCTION(BlueprintCallable)
    void SetUseTAA(bool UseTAA);
    
    UFUNCTION(BlueprintCallable)
    void SetUseScreenPercentage(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSkeletalMeshes(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDynamicShadows(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void DebugTest();
    
    UFUNCTION(BlueprintCallable)
    void ClearTemporary();
    
    UFUNCTION(BlueprintCallable)
    void CaptureSceneSafe2Pass();
    
    UFUNCTION(BlueprintCallable)
    void CaptureSceneSafe();
    
    UFUNCTION(BlueprintCallable)
    FMatrix CalcProjectionMatrix(float ScreenOffsetX, float ScreenOffsetY, float ScaleX, float ScaleY);
    
};

