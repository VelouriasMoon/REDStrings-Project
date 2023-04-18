#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ActionManagerInterface.h"
#include "NpcBase.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UNpcSkeletalMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcBase : public AActor, public IActionManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMeshDataTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcMaterialDataTableID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CharacterCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNpcSkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalBody;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalBodyLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
public:
    ANpcBase();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderLayer(uint8 NewRenderLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetLightChannnel(bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMesh();
    
    
    // Fix for true pure virtual functions not being implemented
};

