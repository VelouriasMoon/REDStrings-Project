#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UIBrainMap.generated.h"

class UBorder;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBrainMap : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorBrainIcon;
    
public:
    UUIBrainMap();
protected:
    UFUNCTION(BlueprintCallable)
    void updateProgramAnimation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void playContentsOut();
    
    UFUNCTION(BlueprintCallable)
    void playContentsIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsIn() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UBorder* borderAllColor, UImage* imageCoverBlack, UImage* imageCA_Red, UImage* imageCA_Green, UImage* imageCA_Blue, UImage* imageBrainIcon2, UImage* imageBrainIcon3, UImage* imageBrainIcon4, UUIBase* uiMainChliceParts);
    
};

