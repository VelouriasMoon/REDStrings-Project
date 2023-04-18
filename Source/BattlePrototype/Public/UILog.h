#pragma once
#include "CoreMinimal.h"
#include "EUI_SE.h"
#include "UIBase.h"
#include "UILog.generated.h"

class UUILogParts;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUILog : public UUIBase {
    GENERATED_BODY()
public:
    UUILog();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitTime(float Time);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupTextSize();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDrawTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn1, UWidgetAnimation* animIn2, UWidgetAnimation* animIn3, UWidgetAnimation* animIn4, UWidgetAnimation* animIn5, UWidgetAnimation* animIn6, UWidgetAnimation* animIn7, UWidgetAnimation* animDefault1, UWidgetAnimation* animDefault2, UWidgetAnimation* animDefault3, UWidgetAnimation* animDefault4, UWidgetAnimation* animDefault5, UWidgetAnimation* animDefault6, UUILogParts* Log1, UUILogParts* Log2, UUILogParts* Log3, UUILogParts* Log4, UUILogParts* Log5, UUILogParts* Log6, UUILogParts* Log7);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrawTime() const;
    
    UFUNCTION(BlueprintCallable)
    void AddLogMessageSE(const FString& LogMessage, EUI_SE Se, const float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    void AddLogMessage(const FString& LogMessage, const float _drawTime);
    
};

