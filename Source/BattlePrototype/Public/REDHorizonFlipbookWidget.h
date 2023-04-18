#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "HorizonFlipbookWidget.h"
#include "RedMouseArgument.h"
#include "REDHorizonFlipbookWidget.generated.h"

class UObject;
class UREDebugLines;
class UUIBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDHorizonFlipbookWidget : public UHorizonFlipbookWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedFlipBookUnFocus, FRedMouseArgument, argument, UObject*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedFlipBookFocus, FRedMouseArgument, argument, UObject*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedFlipBookDown, FRedMouseArgument, argument, UObject*, pWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedMouseArgument MouseCallArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitDisp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedFlipBookFocus m_FlipBookFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedFlipBookUnFocus m_FlipBookUnFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedFlipBookDown m_FlipBookDownMouse;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUIBase> m_ParentUIBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugDraw;
    
public:
    UREDHorizonFlipbookWidget();
    UFUNCTION(BlueprintCallable)
    void SetParentUIBase(UUIBase* pUiBase);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseMode(bool mousemode, int32 inputLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInputLevel(int32 inputLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseDisable(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseInputLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseDisable() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAbsoluteSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAbsolutePosition();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRectangleCore(FVector2D Position);
    
    UFUNCTION(BlueprintCallable)
    bool CheckRectangle();
    
};

