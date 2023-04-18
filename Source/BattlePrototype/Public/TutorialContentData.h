#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERSGamepadInputName.h"
#include "TutorialContentData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FTutorialContentData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlKeyTypeMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERSGamepadInputName> ControlKeyType;
    
};

