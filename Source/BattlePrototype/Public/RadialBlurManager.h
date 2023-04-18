#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ENotifyRadialBlurModulateType.h"
#include "ManagerInterface.h"
#include "RadialBlurData.h"
#include "RadialBlurManager.generated.h"

class UCurveVector;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARadialBlurManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialBlurData AdditionalBlurParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPCC;
    
public:
    ARadialBlurManager();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void PlayPresetColorModulate(int32 Priority, UCurveVector* CurveData, const FVector& Location, ENotifyRadialBlurModulateType PresetColorType, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void Play(int32 Priority, UCurveVector* CurveData, const FVector& Location, const FLinearColor& ColorModuate, bool Force);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlaying();
    
    
    // Fix for true pure virtual functions not being implemented
};

