#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GhostTrailInfo.h"
#include "SequencerFunctionLibrary.generated.h"

class ARSLevelSequenceActor;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USequencerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequencerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool IsSequencerSpawner(ARSLevelSequenceActor* Sequencer, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGhostTrailInfo(ARSLevelSequenceActor* Sequencer, UObject* GhostTrailObject, TArray<FGhostTrailInfo>& GhostTrailInfo);
    
};

