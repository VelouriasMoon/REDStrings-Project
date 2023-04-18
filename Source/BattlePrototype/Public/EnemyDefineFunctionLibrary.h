#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEnemyGrade.h"
#include "EnemyDefineFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UEnemyDefineFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnemyDefineFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool EnemyGrade_LockOnIsGreater(EEnemyGrade myPri, EEnemyGrade otherPri);
    
};

