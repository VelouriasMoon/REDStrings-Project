#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UITownName.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITownName : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawSecond;
    
public:
    UUITownName();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(int32 LocationId);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textLocationName, UTextBlock* textLocationName2, UTextBlock* textLocationName3, UTextBlock* textLocationName4);
    
};

