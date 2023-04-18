#pragma once
#include "CoreMinimal.h"
#include "BrainFieldSettings.generated.h"

class ARSCharacterBase;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainFieldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavimeshLevelPath;
};

