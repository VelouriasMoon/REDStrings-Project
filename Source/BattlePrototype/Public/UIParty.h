#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UIBase.h"
#include "UIParty.generated.h"

class UBorder;
class UImage;
class UREDScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIParty : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RT1_InOut1_Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RT1_Out2_Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorPosMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorPosSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorPosLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoLockIndex;
    
public:
    UUIParty();
protected:
    UFUNCTION(BlueprintCallable)
    void updateProgramAnimation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void updatePartyMouseFocus();
    
    UFUNCTION(BlueprintCallable)
    void playContentsOut2();
    
    UFUNCTION(BlueprintCallable)
    void playContentsOut();
    
    UFUNCTION(BlueprintCallable)
    void playContentsIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOut2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsIn() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UBorder* borderAllColor, UImage* imageRT1);
    
    UFUNCTION(BlueprintCallable)
    void InitializeScrollBox(UREDScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void bonsai10450();
    
};

