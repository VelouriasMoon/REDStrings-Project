#pragma once
#include "CoreMinimal.h"
#include "EWishListAction.generated.h"

UENUM(BlueprintType)
enum class EWishListAction : uint8 {
    None,
    L2,
    R2,
    EnemyBooks,
    End,
};

