#pragma once
#include "CoreMinimal.h"
#include "RSSequencerValueBase.h"
#include "RSSequencerValueDebugging.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSequencerValueDebugging : public URSSequencerValueBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    URSSequencerValueDebugging();
    UFUNCTION(BlueprintCallable)
    void SetParameter(const FString& InName, float Timer, UCurveFloat* CurveData, bool LoopFlag, bool AutoDestroyFlag);
    
};

