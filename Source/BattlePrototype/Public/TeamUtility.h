#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "TeamUtility.generated.h"

class ARSCharacterBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTeamUtility : public UObject {
    GENERATED_BODY()
public:
    UTeamUtility();
    UFUNCTION(BlueprintCallable)
    static void SearchRivalCharacters(TArray<ARSCharacterBase*>& findCharas, ARSCharacterBase* starndardChara, float seachDistance);
    
};

