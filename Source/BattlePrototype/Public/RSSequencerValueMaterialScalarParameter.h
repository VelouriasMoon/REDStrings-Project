#pragma once
#include "CoreMinimal.h"
#include "RSSequencerValueBase.h"
#include "RSSequencerValueMaterialScalarParameter.generated.h"

class UCurveFloat;
class UMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueMaterialScalarParameter : public URSSequencerValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndValue;
    
public:
    URSSequencerValueMaterialScalarParameter();
    UFUNCTION(BlueprintCallable)
    void SetParameter(UMeshComponent* MeshComponent, FName Name, float Start, float End, float Timer, UCurveFloat* CurveData, bool bLoop, bool bAutoDestroy);
    
};

