#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "EventSkeletalMeshSoft.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class AEventSkeletalMeshSoft : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    AEventSkeletalMeshSoft();
    UFUNCTION(BlueprintCallable)
    void SetDummyMesh(USkeletalMesh* InMesh);
    
};

