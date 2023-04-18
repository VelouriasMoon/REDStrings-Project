#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EHelpTutorial.h"
#include "HelpDBDataCell.h"
#include "MiniHelpRowDataCell.h"
#include "TutorialDBDataCell.h"
#include "HelpTutorialDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UHelpTutorialDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHelpTutorial, FHelpDBDataCell> helpDBMap_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHelpTutorial, FMiniHelpRowDataCell> miniHelpDBMap_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTutorialDBDataCell> tutorialDBMap_;
    
    UHelpTutorialDBAsset();
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

