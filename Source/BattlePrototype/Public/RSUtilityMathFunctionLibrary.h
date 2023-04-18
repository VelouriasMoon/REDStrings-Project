#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HCHitResult.h"
#include "RSUtilityMathFunctionLibrary.generated.h"

class AActor;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSUtilityMathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSUtilityMathFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FVector UpDownVector(FVector Src, float Angle);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateTimer(float Timer, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector TurnToTargetVector(FVector srcVec, FVector dstVec, float Angle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNearlyAngle(float A, float B, float Angle);
    
    UFUNCTION(BlueprintCallable)
    static float GetTargetRangeAngle(FVector baseDist, FVector targetDist);
    
    UFUNCTION(BlueprintCallable)
    static float GetTargetAngle(FVector baseDist, FVector targetDist);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSearchBaseParam(const UObject* WorldContextObject, FVector& outPlayerLocation, FVector& outCameraDirH);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetDamageReactionDir(AActor* Owner, FHCHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBulletDirection(FVector FireLocation, FVector TargetLocation, FVector FireForwardVector, float MaxAngleXY, float MaxAngleZ);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClampVectorLimitAngle(FVector baseDist, FVector checkDist, float limitDegree);
    
    UFUNCTION(BlueprintCallable)
    static bool CalcMeshSocketRotation(FVector& OutLocation, FRotator& outRotator, AActor* rotateActor, UMeshComponent* Mesh, FName SocketName, float Angle);
    
};

