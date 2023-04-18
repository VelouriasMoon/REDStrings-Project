#pragma once
#include "CoreMinimal.h"
#include "ESoundSelector.h"
#include "ESoundSelectorLabel.h"
#include "SoundSelectorLabel.generated.h"

USTRUCT(BlueprintType)
struct FSoundSelectorLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundSelectorLabel Label;
    
};

