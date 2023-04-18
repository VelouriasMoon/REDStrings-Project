#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "UIBase.h"
#include "UISASLink.generated.h"

class UBorder;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISASLink : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ContentsInOutTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ContentsInOutTextColorMax;
    
public:
    UUISASLink();
protected:
    UFUNCTION(BlueprintCallable)
    void updateProgramAnimation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void playContentsOutMax();
    
    UFUNCTION(BlueprintCallable)
    void playContentsOut();
    
    UFUNCTION(BlueprintCallable)
    void playContentsInMax();
    
    UFUNCTION(BlueprintCallable)
    void playContentsIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOutMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsInMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsIn() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UOverlay* overlayAllSet, UBorder* borderTextBondNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getMaxCell() const;
    
};

