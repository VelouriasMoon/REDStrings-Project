#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIVisionSimulatorStartEnd.generated.h"

class UDatabaseManager;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIVisionSimulatorStartEnd : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> TextProgressHyphenList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSwithRateLittle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSwithRateBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedSwithLongSecond;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDatabaseManager* m_pDatabaseManager;
    
public:
    UUIVisionSimulatorStartEnd();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animBar, UWidgetAnimation* animIn, UWidgetAnimation* animStartDefault, UWidgetAnimation* animStartOut, UWidgetAnimation* animEndDefault, UWidgetAnimation* animEndOut, UTextBlock* textStartEnd, UTextBlock* textFileName);
    
};

