#include "RSUtilityMathFunctionLibrary.h"

class AActor;
class UMeshComponent;
class UObject;

FVector URSUtilityMathFunctionLibrary::UpDownVector(FVector Src, float Angle) {
    return FVector{};
}

float URSUtilityMathFunctionLibrary::UpdateTimer(float Timer, float DeltaSeconds) {
    return 0.0f;
}

FVector URSUtilityMathFunctionLibrary::TurnToTargetVector(FVector srcVec, FVector dstVec, float Angle) {
    return FVector{};
}

bool URSUtilityMathFunctionLibrary::IsNearlyAngle(float A, float B, float Angle) {
    return false;
}

float URSUtilityMathFunctionLibrary::GetTargetRangeAngle(FVector baseDist, FVector targetDist) {
    return 0.0f;
}

float URSUtilityMathFunctionLibrary::GetTargetAngle(FVector baseDist, FVector targetDist) {
    return 0.0f;
}

void URSUtilityMathFunctionLibrary::GetSearchBaseParam(const UObject* WorldContextObject, FVector& outPlayerLocation, FVector& outCameraDirH) {
}

FVector URSUtilityMathFunctionLibrary::GetDamageReactionDir(AActor* Owner, FHCHitResult HitResult) {
    return FVector{};
}

FVector URSUtilityMathFunctionLibrary::GetBulletDirection(FVector FireLocation, FVector TargetLocation, FVector FireForwardVector, float MaxAngleXY, float MaxAngleZ) {
    return FVector{};
}

FVector URSUtilityMathFunctionLibrary::ClampVectorLimitAngle(FVector baseDist, FVector checkDist, float limitDegree) {
    return FVector{};
}

bool URSUtilityMathFunctionLibrary::CalcMeshSocketRotation(FVector& OutLocation, FRotator& outRotator, AActor* rotateActor, UMeshComponent* Mesh, FName SocketName, float Angle) {
    return false;
}

URSUtilityMathFunctionLibrary::URSUtilityMathFunctionLibrary() {
}

