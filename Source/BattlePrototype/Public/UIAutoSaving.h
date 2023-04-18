#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIAutoSaving.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIAutoSaving : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SaveTimer;
    
public:
    UUIAutoSaving();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenAutoSave();
    
};

