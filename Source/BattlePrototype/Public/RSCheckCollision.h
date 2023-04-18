#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSResultCapsule.h"
#include "RSCheckCollision.generated.h"

class UBoxComponent;
class UCapsuleComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSCheckCollision : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSCheckCollision();
    UFUNCTION(BlueprintCallable)
    static bool CheckCollisionCapsuleByComponent(FRSResultCapsule& Result, UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCollisionCapsule(FRSResultCapsule& Result, const FVector& StartLocation0, const FVector& EndLocation0, float Radius0, const FVector& StartLocation1, const FVector& EndLocation1, float Radius1);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCollisionBoxVsCapsuleByComponent(UBoxComponent* Box0, UCapsuleComponent* Capsule0);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCollisionBoxVsBoxByComponent(UBoxComponent* Box0, UBoxComponent* box1);
    
};

