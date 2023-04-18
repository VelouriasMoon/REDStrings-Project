#pragma once
#include "CoreMinimal.h"
#include "ETextType.h"
#include "TextDatabaseData.generated.h"

class UTextData;

USTRUCT(BlueprintType)
struct FTextDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextData* text;
    
};

