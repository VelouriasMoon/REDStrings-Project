#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterPhysicalActionEffect.h"
#include "CharacterPhysicalSurfaceActionEffect.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterPhysicalSurfaceActionEffect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterPhysicalActionEffect Surfaces[26];
    
};

