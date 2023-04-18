#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIPkObjectTimer.generated.h"

class UImage;
class UREDTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPkObjectTimer : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
public:
    UUIPkObjectTimer();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupOffset();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UREDTextBlock* textTimer, UImage* imageTimer, UImage* imageTimerAdd);
    
};

