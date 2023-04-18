#pragma once
#include "CoreMinimal.h"
#include "NpcMergeMeshResource.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FNpcMergeMeshResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
};

