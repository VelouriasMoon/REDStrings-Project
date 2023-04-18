#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UINexusDriveSAS.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINexusDriveSAS : public UUIBase {
    GENERATED_BODY()
public:
    UUINexusDriveSAS();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUsingSasPlayer(bool IsUsing);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingDriveNpc(bool IsUsing);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingCv(bool IsUsing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetNeonColor(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSasPlayer(bool IsEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* pAnimDefault, UWidgetAnimation* pAnimIn, UWidgetAnimation* pAnimOut, UWidgetAnimation* pAnimDecision, UWidgetAnimation* pAnimUsing, UWidgetAnimation* pAnimReturn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetUsingStartTime();
    
    UFUNCTION(BlueprintCallable)
    float GetUsingCurrentTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDefaultStartTime();
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultCurrentTime();
    
};

