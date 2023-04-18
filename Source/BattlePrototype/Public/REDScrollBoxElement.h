#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Blueprint/UserWidget.h"
#include "REDScrollBoxElement.generated.h"

class UOverlay;
class UREDScrollBoxElement;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UREDScrollBoxElement : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
public:
    UREDScrollBoxElement();
    UFUNCTION(BlueprintCallable)
    void SetMouseInputLevel(int32 inputLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInputDisable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseDisable(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelfInitialize();
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UOverlay* Overlay, USpacer* Spacer);
    
    UFUNCTION(BlueprintCallable)
    UREDScrollBoxElement* GetThis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseInputLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseInputDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseDisable() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHitWidget();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAbsoluteSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAbsolutePosition();
    
};

