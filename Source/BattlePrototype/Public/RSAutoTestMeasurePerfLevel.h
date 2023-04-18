#pragma once
#include "CoreMinimal.h"
#include "RSAutoTestBase.h"
#include "RSAutoTestMeasurePerfLevel.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSAutoTestMeasurePerfLevel : public ARSAutoTestBase {
    GENERATED_BODY()
public:
    ARSAutoTestMeasurePerfLevel();
    UFUNCTION(BlueprintCallable)
    bool WriteErrorCsvFile(const FString& LogFileName, const FString& LocationName, const FString& errorMessage);
    
    UFUNCTION(BlueprintCallable)
    bool WriteCsvFile(const FString& LogFileName);
    
    UFUNCTION(BlueprintCallable)
    void EndUnitRecording();
    
    UFUNCTION(BlueprintCallable)
    void BeginUnitRecording(const FString& CheckpointName, int32 Angle);
    
    UFUNCTION(BlueprintCallable)
    void AddCheckpointRecord(const FString& LocationName);
    
};

