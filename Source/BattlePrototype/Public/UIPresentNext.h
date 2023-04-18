#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIPresentNext.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPresentNext : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ItemID;
    
public:
    UUIPresentNext();
    UFUNCTION(BlueprintCallable)
    void SetItemID(FName ItemId);
    
};

