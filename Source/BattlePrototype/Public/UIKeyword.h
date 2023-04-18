#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIKeyword.generated.h"

class UEditableText;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIKeyword : public UUIBase {
    GENERATED_BODY()
public:
    UUIKeyword();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void textEnter(FText text);
    
    UFUNCTION(BlueprintCallable)
    void textChange(FText text);
    
    UFUNCTION(BlueprintCallable)
    void textCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isWindows() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textDescription, UTextBlock* textKeyword, UTextBlock* textInformation, UEditableText* textEdit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString getResult() const;
    
};

