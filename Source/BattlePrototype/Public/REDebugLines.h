#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Blueprint/UserWidget.h"
#include "REDebugLines.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UREDebugLines : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_AbsolutePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_AbsoluteSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D topleft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D topright;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D bottomleft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D bottomright;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Circle;
    
public:
    UREDebugLines();
    UFUNCTION(BlueprintCallable)
    void SetHitData(FVector2D Pos, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetClippingZone(FVector2D NewTopleft, FVector2D NewTopright, FVector2D NewBottomleft, FVector2D NewBottomright);
    
    UFUNCTION(BlueprintCallable)
    void SetCircle(bool circle);
    
};

