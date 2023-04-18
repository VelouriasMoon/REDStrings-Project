#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIEquipParts5.generated.h"

class UFlagManager;
class UREDScrollBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEquipParts5 : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFlagManager* FlagManager;
    
public:
    UUIEquipParts5();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TextCompare(FText Text1, FText Text2) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 StringCompare(const FString& String1, const FString& String2) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool isUpdateEquipListMouseFocus(int32& cursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeList(UREDScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearCurrentNewFlagNative(int32 Index);
    
};

