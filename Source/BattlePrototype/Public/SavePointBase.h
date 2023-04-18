#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "ActionManagerInterface.h"
#include "EActionIconType.h"
#include "PhotoModeCharacterInterface.h"
#include "Templates/SubclassOf.h"
#include "UIMapIconAdjust.h"
#include "SavePointBase.generated.h"

class AMakeEventActor;
class ANpcShopBase;
class UBoxComponent;
class UCapsuleComponent;
class UChildActorComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ASavePointBase : public AActor, public IActionManagerInterface, public IPhotoModeCharacterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* MakeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActionIconWorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMapIconAdjust MapIconAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANpcShopBase* PairActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFitGround;
    
    ASavePointBase();
    UFUNCTION(BlueprintCallable)
    void RegisterPairActor();
    
    UFUNCTION(BlueprintCallable)
    UChildActorComponent* GetChildActionIcon();
    
    
    // Fix for true pure virtual functions not being implemented
};

