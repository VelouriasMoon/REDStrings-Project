#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UIBase.h"
#include "UICredit.generated.h"

class UImage;
class UOverlay;
class UREDTextBlock;
class USpacer;
class UTextData;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICredit : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FontColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextData* TextData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureLogos[2];
    
public:
    UUICredit();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UOverlay* overlayParent);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStaffNameQuad(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaffLeft1, UREDTextBlock* textStaffLeft2, UREDTextBlock* textStaffRight1, UREDTextBlock* textStaffRight2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSpace_StaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSpace_StaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff);
    
    UFUNCTION(BlueprintCallable)
    void InitializeOfficial_StaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeOfficial_StaffNameCombo(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition1, UREDTextBlock* textStaff1, UREDTextBlock* textPosition2, UREDTextBlock* textStaff2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeOfficial_StaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition, UREDTextBlock* textStaff);
    
    UFUNCTION(BlueprintCallable)
    void InitializeLogo(UOverlay* Overlay, USpacer* Spacer, UImage* imageLogo);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCorporateName_Official(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* TextBlock);
    
};

