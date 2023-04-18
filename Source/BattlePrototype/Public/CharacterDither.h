#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterDither.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterDither : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UseCapsuleComponentNames;
    
};

