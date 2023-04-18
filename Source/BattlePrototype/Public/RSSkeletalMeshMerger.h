#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSSkeletalMeshMergeParams.h"
#include "RSSkeletalMeshMerger.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSSkeletalMeshMerger : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSSkeletalMeshMerger();
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeSkeletalMeshes(const FRSSkeletalMeshMergeParams& Params);
    
};

