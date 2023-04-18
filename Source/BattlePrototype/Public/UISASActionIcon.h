#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "ESASActionIconType.h"
#include "UIBase.h"
#include "UISASActionIcon.generated.h"

class AActor;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASActionIcon : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D baseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUsable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UUISASActionIcon();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void setWorldOffset(const FVector& worldOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setUsable(bool NewIsUsable);
    
    UFUNCTION(BlueprintCallable)
    void setOwnerActor(AActor* NewOwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setIconType(ESASActionIconType icontype, bool NewIsUsable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isUsable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UWidgetAnimation* animSelect);
    
};

