#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASCollisionInterface.h"
#include "ASWeapon.generated.h"

class AASCharacter;
class UASCollisionGroupComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACTIONSYSTEM_API AASWeapon : public AActor, public IASCollisionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASCollisionGroupComponent* Collision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AASCharacter* Character;
    
public:
    AASWeapon();
    
    // Fix for true pure virtual functions not being implemented
};

