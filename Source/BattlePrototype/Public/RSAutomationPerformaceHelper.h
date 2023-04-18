#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "RSAutomationPerformaceHelper.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSAutomationPerformaceHelper : public UObject {
    GENERATED_BODY()
public:
    URSAutomationPerformaceHelper();
    UFUNCTION(BlueprintCallable)
    void WriteLogFile(const FString& CaptureDir, const FString& CaptureExtension);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGPUTraceIfRecordFallsBelowBudget();
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopCPUProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartCPUProfiling();
    
    UFUNCTION(BlueprintCallable)
    void Sample(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginTests();
    
    UFUNCTION(BlueprintCallable)
    void OnAllTestsComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentRecordWithinRenderThreadBudget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentRecordWithinGPUBudget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentRecordWithinGameThreadBudget() const;
    
    UFUNCTION(BlueprintCallable)
    void EndStatsFile();
    
    UFUNCTION(BlueprintCallable)
    void EndRecordingBaseline();
    
    UFUNCTION(BlueprintCallable)
    void EndRecording();
    
    UFUNCTION(BlueprintCallable)
    void BeginStatsFile(const FString& RecordName);
    
    UFUNCTION(BlueprintCallable)
    void BeginRecordingBaseline(const FString& RecordName);
    
    UFUNCTION(BlueprintCallable)
    void BeginRecording(const FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget);
    
};

