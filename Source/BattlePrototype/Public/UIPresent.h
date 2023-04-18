#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UIPresent.generated.h"

class UREDScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPresent : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ItemID;
    
public:
    UUIPresent();
    UFUNCTION(BlueprintCallable)
    void updatePresentListMouseFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(EPlayerID Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    void restoreInputLayout();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeScrollBox(UREDScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetItemID() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void backupInputLayout();
    
};

