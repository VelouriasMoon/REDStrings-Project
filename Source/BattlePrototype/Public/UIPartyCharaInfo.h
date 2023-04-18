#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIPartyCharaInfo.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIPartyCharaInfo : public UUIBase {
    GENERATED_BODY()
public:
    UUIPartyCharaInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCheckMouseCancel();
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(TArray<UUIBase*> charainfolist);
    
};

