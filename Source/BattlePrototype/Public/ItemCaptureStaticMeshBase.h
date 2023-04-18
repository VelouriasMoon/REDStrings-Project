#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ItemCaptureStaticMeshBase.generated.h"

class AItemCaptureStaticMeshBase;
class UObject;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AItemCaptureStaticMeshBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemCaptureStaticMeshBase> bpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_rootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_staticMesh;
    
    AItemCaptureStaticMeshBase();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GenerateStaticMesh(const UObject* WorldContextObject, TSubclassOf<AItemCaptureStaticMeshBase> bpClassType, const FString& meshPath);
    
};

