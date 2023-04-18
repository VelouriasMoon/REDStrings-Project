#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HorizonDialogueSegmentInfoStyle.h"
#include "HorizonDialogueStyleInfo.generated.h"

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonDialogueStyleInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;
    
    UHorizonDialogueStyleInfo();
};

