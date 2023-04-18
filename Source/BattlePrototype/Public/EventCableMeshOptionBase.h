#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "GameFramework/Actor.h"
#include "EventCableMeshOptionBase.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API AEventCableMeshOptionBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* parentSkeletalMesh_;
    
public:
    AEventCableMeshOptionBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetParent();
    
    UFUNCTION(BlueprintCallable)
    void CalcSASCodeSocketWorldTransforms(const TArray<FName>& SocketNames, TMap<FName, FTransform>& outSocketLocations);
    
    UFUNCTION(BlueprintCallable)
    FTransform CalcSASCodeSocketWorldTransform(FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AttachToPlayerSocket();
    
};

