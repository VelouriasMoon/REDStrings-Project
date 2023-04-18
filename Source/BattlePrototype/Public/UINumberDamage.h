#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UINumberDamage.generated.h"

class UHorizontalBox;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUINumberDamage : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D FixedMove;
    
public:
    UUINumberDamage();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetThumbnailNumebr3(UImage* Image, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetThumbnailNumebr1(UImage* Image, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void setPosition3D(const FVector& Position, const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    void setPosition2D(const FVector2D& Position);
    
    UFUNCTION(BlueprintCallable)
    void setNumber(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void setFlagSasCritical(bool isSasCritical);
    
    UFUNCTION(BlueprintCallable)
    void setFlagPlayer(bool IsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void setFlagNoDamage(bool isNoDamage);
    
    UFUNCTION(BlueprintCallable)
    void setFlagHeal(bool isHeal);
    
    UFUNCTION(BlueprintCallable)
    void setFlagCritical(bool isCritical);
    
    UFUNCTION(BlueprintCallable)
    void setFlagBrainCrashCritical(bool isBrainCrashCritical);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThisEx(UWidgetAnimation* animEnemy, UWidgetAnimation* animEnemyCritical, UWidgetAnimation* animHeal, UWidgetAnimation* animNoDamage, UWidgetAnimation* animSasCritical, UWidgetAnimation* animBrainCrashCritical, UImage* number_1_100000, UImage* number_1_10000, UImage* number_1_1000, UImage* number_1_100, UImage* number_1_10, UImage* number_1_1, UImage* number_3_100000, UImage* number_3_10000, UImage* number_3_1000, UImage* number_3_100, UImage* number_3_10, UImage* number_3_1, UOverlay* overlaySetParent, UHorizontalBox* horizontalBoxCritialSet, UHorizontalBox* horizontalBoxNormalSet, UOverlay* overlayNoDamageSet);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animEnemy, UWidgetAnimation* animEnemyCritical, UWidgetAnimation* animHeal, UWidgetAnimation* animNoDamage, UWidgetAnimation* animSasCritical, UWidgetAnimation* animBrainCrashCritical, UImage* number_1_1000, UImage* number_1_100, UImage* number_1_10, UImage* number_1_1, UImage* number_3_1000, UImage* number_3_100, UImage* number_3_10, UImage* number_3_1, UOverlay* overlaySetParent, UHorizontalBox* horizontalBoxCritialSet, UHorizontalBox* horizontalBoxNormalSet, UOverlay* overlayNoDamageSet);
    
};

