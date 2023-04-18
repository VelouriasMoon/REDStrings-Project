#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "EventSwitchPlayer.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class AEventSwitchPlayer : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> Meshes;
    
    AEventSwitchPlayer();
    UFUNCTION(BlueprintCallable)
    void SetDummyMesh(USkeletalMesh* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMesh();
    
};

