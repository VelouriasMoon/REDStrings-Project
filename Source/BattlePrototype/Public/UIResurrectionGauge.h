#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "EResurrectionIconMode.h"
#include "UIBase.h"
#include "UIResurrectionGauge.generated.h"

class AActor;
class UImage;
class USpacer;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIResurrectionGauge : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D baseOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UUIResurrectionGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void setWorldOffset(const FVector& worldOffset);
    
    UFUNCTION(BlueprintCallable)
    void setOwnerActor(AActor* NewOwnerActor);
    
    UFUNCTION(BlueprintCallable)
    void setMode(EResurrectionIconMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setGauge(float guage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UImage* imageIcon, USpacer* Spacer);
    
};

