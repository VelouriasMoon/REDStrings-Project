#pragma once
#include "CoreMinimal.h"
#include "CharacterData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hoge;
    
};

