#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/ScrollBox.h"
#include "RedScrollBoxFocusDelegate.h"
#include "RedScrollBoxFocusMouseDelegate.h"
#include "RedScrollBoxLeftDownMouseDelegate.h"
#include "RedScrollBoxUnFocusDelegate.h"
#include "RedScrollBoxUnFocusMouseDelegate.h"
#include "RedScrollBoxUpdateElementDelegate.h"
#include "RedScrollBoxWork.h"
#include "REDScrollBox.generated.h"

class UREDScrollBoxElement;
class UREDebugLines;
class UUserWidget;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitBarDisp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_pElementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UREDScrollBoxElement*> m_elementList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRedScrollBoxWork> m_elementWork;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_elementClass;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxUpdateElement m_updateElement;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxFocus m_focus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxUnFocus m_unFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxFocusMouse m_FocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxUnFocusMouse m_unFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedScrollBoxLeftDownMouse m_LeftDownMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugbarDraw;
    
public:
    UREDScrollBox();
    UFUNCTION(BlueprintCallable)
    void UpdateList(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDrawAreaWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetupList(UClass* ElementClass, int32 ElementNum, FVector2D ElementSize, float OffsetSize, int32 initcursor, bool IsCursorTop);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffsetRED(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInputLevel(int32 inputLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInputDisable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseDisable(bool Flag, ESlateVisibility Lockvisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseControlInputLevel(bool isControl);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawTop(int32 Pos);
    
    UFUNCTION(BlueprintCallable)
    void setDebugDraw(bool IsDraw);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPosition(int32 Index, bool mouseflag, bool mouseScrollflag);
    
    UFUNCTION(BlueprintCallable)
    void ResetList();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrollBarClicking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrollAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRedrawScroll() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementWorkWeight(int32 CursorPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetWorkWidget(int32 Index, bool IsSetFreeWork, bool notupdateElement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetSimpleCurrentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageDrawNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseInputLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseInputDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseBackUpCursor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSetUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDrawTopGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDrawTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetCurrentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementWorkWeightAll();
    
    UFUNCTION(BlueprintCallable)
    void CorrectCursorDrawArea(bool IsScroll, bool initcursorTop);
    
    UFUNCTION(BlueprintCallable)
    void CloseDrawAreaWidget();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpList();
    
    UFUNCTION(BlueprintCallable)
    void AddElement();
    
};

