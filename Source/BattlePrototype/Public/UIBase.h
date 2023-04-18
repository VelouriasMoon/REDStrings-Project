#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "EUIInputButton.h"
#include "EUIInputType.h"
#include "EUIMouseHitType.h"
#include "EUIViewPrio.h"
#include "EUI_SE.h"
#include "REDUserTextWidget.h"
#include "RedMouseArgument.h"
#include "UIBase.generated.h"

class UDatabaseManager;
class UImage;
class UPanelWidget;
class UPaperSprite;
class UREDRetainerBox;
class UREDebugLines;
class URSAtomComponentBase;
class UUIChromaticAberration;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBase : public UREDUserTextWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedWidgetUnFocus, FRedMouseArgument, argument, UUserWidget*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedWidgetFocus, FRedMouseArgument, argument, UUserWidget*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedWidgetDown, FRedMouseArgument, argument, UUserWidget*, pWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedMouseArgument MouseCallArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMouseHitType MouseHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitDisp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedWidgetFocus m_BaseFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedWidgetUnFocus m_BaseUnFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedWidgetDown m_BaseDownMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagNotRemoveHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIViewPrio ViewPortPrio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIChromaticAberration* ChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> CA_WorkObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIChromaticAberration*> ListChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UREDRetainerBox*> ListControlRetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateControlRetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ControlWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LocalVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inputLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScrollSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugDraw;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometry m_MyGeometry;
    
public:
    UUIBase();
    UFUNCTION(BlueprintCallable)
    void UpdateVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateControlRetainerBox();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChromaticAberration();
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopUICurrentAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopUIAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void StopUIAllAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopLoopSe(FName loopSeName);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(ESlateVisibility Visiblity);
    
    UFUNCTION(BlueprintCallable)
    void SetViewPortPrio(EUIViewPrio viewprio);
    
    UFUNCTION(BlueprintCallable)
    void SetupChromaticAberrationRetainerBox(UPanelWidget* Base);
    
    UFUNCTION(BlueprintCallable)
    void SetupChromaticAberrationImage(UPanelWidget* Base);
    
    UFUNCTION(BlueprintCallable)
    void SetUIAnimationFrame(int32 Index, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseMode(bool mousemode, int32 NewInputLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMouseDisable(bool Flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInputLevel(int32 NewInputLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetImageFromSprite(UImage* Image, UPaperSprite* Sprite);
    
    UFUNCTION(BlueprintCallable)
    void SetFlagUpdateAlways(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugInvisible(bool IsInvisible);
    
    UFUNCTION(BlueprintCallable)
    void SetControlWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimation(int32 Index, UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    void SearchControlRetainerBox(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromParentRED();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ProjectWorldToScreen2(const FVector& WorldPosition, FVector2D& ScreenPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayUIAnimation(int32 Index, float Speed, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* PlaySEAtLocation(EUI_SE seType, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    URSAtomComponentBase* PlaySE(EUI_SE seType);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopSe(EUI_SE seType, FName loopSeName);
    
    UFUNCTION(BlueprintCallable)
    void OpenDirect();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsStatePlay(bool& isPlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayUICurrentAnimation(bool& isPlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayUIAnyAnimation(bool& isPlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayUIAnimation(int32 Index, bool& isPlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlaying(bool& NewIsPlaying) const;
    
    UFUNCTION(BlueprintCallable)
    bool isLoopSE(FName loopSeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString IntToString(int32 Value, int32 MinLength, int32 MaxLength) const;
    
    UFUNCTION(BlueprintCallable)
    void InitControlRetainerBox();
    
    UFUNCTION(BlueprintCallable)
    void InitChromaticAberration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetViewportOffset(FVector2D absolutePosition, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUICurrentAnimationIndex(int32& Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScreenOffsetReverse(FVector2D baseOffset, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScreenOffset(FVector2D baseOffset, FVector2D& calcOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseDisable() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMenuCommonMessage(UDatabaseManager* pDatabaseManager, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputLevel(int32& NewInputLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIconLimitRD(FVector2D& LimitPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIconLimitLU(FVector2D& LimitPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFlagUpdateAlways(bool& Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentState(int32& State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimation(int32 Index, UWidgetAnimation*& Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsoluteSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbsoluteScreenOfffset(FVector2D baseOffset, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsolutePosition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugDrawPlayingAnimation(float DeltaSecond);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawLastAnimation(float DeltaSecond);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseDirect();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRectangleCore(FVector2D Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRectangle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckInput(EUIInputButton KeyType, EUIInputType InputType, bool& IsInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEqualName(const FString& BaseString, const FString& CheckString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCircleCore(FVector2D Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAnyInput();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubState(int32 NewSubState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateDirect(int32 NewState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateAllDirect(int32 NewState, int32 NewSubState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(int32 NewState);
    
    UFUNCTION(BlueprintCallable)
    void AddViewPortPrio();
    
    UFUNCTION(BlueprintCallable)
    void AddToSetViewPortPrio(EUIViewPrio viewprio);
    
};

