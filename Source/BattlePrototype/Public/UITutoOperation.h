#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UITutoOperation.generated.h"

class AActor;
class ARSHUDBase;
class UImage;
class UOverlay;
class UREDRetainerBox;
class UUITutoOperationParts;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITutoOperation : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D baseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUITutoOperationParts> m_pClassSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_pPartsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector worldOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pHudBase;
    
public:
    UUITutoOperation();
    UFUNCTION(BlueprintCallable)
    void UpdateStateTutoOperation(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(FName helpID);
    
    UFUNCTION(BlueprintCallable)
    void OperationEnd();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTutoOperationList(int32 ListIndex, UOverlay* overlayData, UUITutoOperationParts* textleft);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTutoOperation(UREDRetainerBox* REDRetainerBox, UImage* boximage);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
};

