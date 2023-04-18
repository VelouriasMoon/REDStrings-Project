#pragma once
#include "CoreMinimal.h"
#include "RSSequencerValueBase.h"
#include "RSSequencerValueAisac.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueAisac : public URSSequencerValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndValue;
    
public:
    URSSequencerValueAisac();
    UFUNCTION(BlueprintCallable)
    void SetParameter(UAtomComponent* AtomComponent, const FString& Name, float Start, float End, float Timer);
    
};

