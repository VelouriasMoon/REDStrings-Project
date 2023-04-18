#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Transform
//-FallbackName=Vector
#include "EnemyAsyncTaskComponentBase.h"
#include "EnemyGroundCheckComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyGroundCheckComponent : public UEnemyAsyncTaskComponentBase {
    GENERATED_BODY()
public:
    UEnemyGroundCheckComponent();
    UFUNCTION(BlueprintCallable)
    void SetRotationToUpVector(USkeletalMeshComponent* MeshComp, float interpSpeed, FVector UpVector);
    
    UFUNCTION(BlueprintCallable)
    void SetRotation(USkeletalMeshComponent* MeshComp, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateMesh(USkeletalMeshComponent* MeshComp, float interpSpeed, float angleLimit, bool endFit);
    
    UFUNCTION(BlueprintCallable)
    void SetIntervalTime(float newIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckPos(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void InitSetting(bool multipleChecks, float checkHeight, float CapsuleRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCalcRotator() const;
    
    UFUNCTION(BlueprintCallable)
    void EndGroundCheck();
    
    UFUNCTION(BlueprintCallable)
    FRotator CalcRotationToUpVector(float OffsetYaw, FVector forwardVector, FTransform Transform, FRotator baseRot, float interpSpeed, FVector UpVector);
    
    UFUNCTION(BlueprintCallable)
    FRotator CalcRotation(FRotator baseRot, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void CalcRotateRotToMesh(USkeletalMeshComponent* MeshComp, float OffsetYaw, float interpSpeed, float angleLimit, bool endFit);
    
    UFUNCTION(BlueprintCallable)
    void CalcRotateRotMesh(USkeletalMeshComponent* MeshComp, float OffsetYaw, float interpSpeed, float angleLimit, bool endFit);
    
    UFUNCTION(BlueprintCallable)
    void CalcRotateRot(float OffsetYaw, FVector forwardVector, FTransform Transform, FVector baseUpVector, FRotator baseRot, float interpSpeed, float angleLimit, bool endFit);
    
    UFUNCTION(BlueprintCallable)
    void CalcRotateMesh(USkeletalMeshComponent* MeshComp, float interpSpeed, float angleLimit, bool endFit);
    
    UFUNCTION(BlueprintCallable)
    void BeginGroundCheck();
    
};

