#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "REDScrollBoxSimple.generated.h"

class UREDebugLines;
class UUserWidget;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDScrollBoxSimple : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitBarDisp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugbarDraw;
    
public:
    UREDScrollBoxSimple();
    UFUNCTION(BlueprintCallable)
    bool updateMouse();
    
    UFUNCTION(BlueprintCallable)
    void updateAutoScroll(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void setAutoScroll(float Offset);
    
    UFUNCTION(BlueprintCallable)
    bool scrollUp();
    
    UFUNCTION(BlueprintCallable)
    bool scrollDown();
    
    UFUNCTION(BlueprintCallable)
    void resetScrollOffset();
    
    UFUNCTION(BlueprintCallable)
    bool isMouseON();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* createAndAddChildEx(UClass* ClassInfo);
    
};

