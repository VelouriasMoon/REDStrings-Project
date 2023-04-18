#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Layout/Geometry.h"
#include "Components/Image.h"
#include "RedMouseArgument.h"
#include "REDImage.generated.h"

class UObject;
class UREDebugLines;
class UUIBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDImage : public UImage {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedImageUnFocus, FRedMouseArgument, argument, UObject*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedImageFocus, FRedMouseArgument, argument, UObject*, pWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRedImageDown, FRedMouseArgument, argument, UObject*, pWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseHitOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMouseHitDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedMouseArgument MouseCallArgument;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedImageFocus m_ImageFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedImageUnFocus m_ImageUnFocusMouse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRedImageDown m_ImageDownMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartTick;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUIBase> m_ParentUIBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDebugLines* m_DebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometry m_geometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D vectorPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D vectorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D vectorPos;
    
public:
    UREDImage();
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsoluteSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAbsolutePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRectangleCore(FVector2D Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRectangle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCircleCore(FVector2D Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCircle();
    
};

