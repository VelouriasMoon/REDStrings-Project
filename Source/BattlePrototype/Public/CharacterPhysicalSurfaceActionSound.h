#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterPhysicalActionSound.h"
#include "CharacterPhysicalSurfaceActionSound.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterPhysicalSurfaceActionSound : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FCharacterPhysicalActionSound Surfaces[26];
    
};

