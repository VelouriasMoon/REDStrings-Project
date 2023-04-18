#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIBrainGaugeEN.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBrainGaugeEN : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagPercentUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagGaugeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagBrainField;
    
public:
    UUIBrainGaugeEN();
    UFUNCTION(BlueprintCallable)
    void StartBrainField();
    
    UFUNCTION(BlueprintCallable)
    void SetGaugePercent(float percent, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeMax(bool IsFull);
    
    UFUNCTION(BlueprintCallable)
    void EndBrainField();
    
};

