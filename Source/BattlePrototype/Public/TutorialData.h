#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "TutorialData.generated.h"

class UHelpTutorialDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTutorialData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHelpTutorialDBAsset* helpDataAsset_;
    
public:
    UTutorialData();
};

