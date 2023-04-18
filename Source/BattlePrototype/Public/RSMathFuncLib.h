#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSMathFuncLib.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSMathFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSMathFuncLib();
    UFUNCTION(BlueprintCallable)
    static FVector2D RandomLocationInCircle(float Radius, int32 retrayMax);
    
    UFUNCTION(BlueprintCallable)
    static float PointDistToLine(const FVector& Point, const FVector& Direction, const FVector& Origin, FVector& OutClosestPoint);
    
    UFUNCTION(BlueprintCallable)
    static bool LineBoxIntersection(const FBox& InBox, const FVector& Start, const FVector& End, FVector& HitLocation, FVector& HitNormal, float& HitLength);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointOnLine(const FVector& LineStart, const FVector& LineEnd, const FVector& Point);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointOnInfiniteLine(const FVector& LineStart, const FVector& LineEnd, const FVector& Point);
    
};

