#pragma once
#include "CoreMinimal.h"
#include "Math/Vector4.h"
#include "RSSequencerValueBase.h"
#include "RSSequencerValueMaterialVectorParameter.generated.h"

class UCurveFloat;
class UMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueMaterialVectorParameter : public URSSequencerValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 EndValue;
    
public:
    URSSequencerValueMaterialVectorParameter();
    UFUNCTION(BlueprintCallable)
    void SetParameter(UMeshComponent* MeshComponent, FName Name, const FVector4& Start, const FVector4& End, float Timer, UCurveFloat* CurveData, bool bLoop, bool bAutoDestroy);
    
};

