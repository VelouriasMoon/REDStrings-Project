#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "RSSequencerValueInterface.h"
#include "RSSequencerValueBase.generated.h"

class UCurveFloat;
class URSSequencerComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueBase : public UObject, public IRSSequencerValueInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSSequencerComponent* SeqParent;
    
public:
    URSSequencerValueBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StoreParameter(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetupTimer(float Time, UCurveFloat* CurveData, bool LoopFlag, bool AutoDestroyFlag);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSeqParent(URSSequencerComponent* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    URSSequencerComponent* GetSeqParent();
    
    
    // Fix for true pure virtual functions not being implemented
};

