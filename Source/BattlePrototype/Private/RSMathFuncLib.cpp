#include "RSMathFuncLib.h"

FVector2D URSMathFuncLib::RandomLocationInCircle(float Radius, int32 retrayMax) {
    return FVector2D{};
}

float URSMathFuncLib::PointDistToLine(const FVector& Point, const FVector& Direction, const FVector& Origin, FVector& OutClosestPoint) {
    return 0.0f;
}

bool URSMathFuncLib::LineBoxIntersection(const FBox& InBox, const FVector& Start, const FVector& End, FVector& HitLocation, FVector& HitNormal, float& HitLength) {
    return false;
}

FVector URSMathFuncLib::ClosestPointOnLine(const FVector& LineStart, const FVector& LineEnd, const FVector& Point) {
    return FVector{};
}

FVector URSMathFuncLib::ClosestPointOnInfiniteLine(const FVector& LineStart, const FVector& LineEnd, const FVector& Point) {
    return FVector{};
}

URSMathFuncLib::URSMathFuncLib() {
}

