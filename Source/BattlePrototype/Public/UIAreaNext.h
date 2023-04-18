#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIAreaNext.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIAreaNext : public UUIBase {
    GENERATED_BODY()
public:
    UUIAreaNext();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Start(int32 LocationId, int32 areaId, int32 PortalID, bool isWorldMap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animIn, UWidgetAnimation* animOut);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool End();
    
};

