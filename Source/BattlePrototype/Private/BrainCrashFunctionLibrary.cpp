#include "BrainCrashFunctionLibrary.h"

class UBrainCrashParam;
class UDataTable;
class USplineMeshComponent;

void UBrainCrashFunctionLibrary::SetBCSafePointAllowRotationBit(FBrainCrashSafePoint& RefSafePoint, int32 EnemyIndex, int32 AllowRotateBit) {
}

void UBrainCrashFunctionLibrary::SearchBCSafePointList(bool& HitNearLocation, FTransform& NearLocationTransform, float& NearLocationLength, bool& HitNearAngle, FTransform& NearAngleTransform, float& NearAngleLength, const TArray<FBrainCrashSafePoint>& SafePoints, const TArray<USplineMeshComponent*>& BattleFieldMeshComps, UBrainCrashParam* Param, const FBrainCrashSequenceSettings& SequencerSetting, int32 RotationAngle, int32 EnemyIndex, FVector Location, FVector SequencerCenterLocation, float TargetRawDir, float TargetNormalizedDir) {
}

void UBrainCrashFunctionLibrary::SearchBCSafePoint(bool& HitNearLocation, FTransform& NearLocationTransform, float& NearLocationLength, bool& HitNearAngle, FTransform& NearAngleTransform, float& NearAngleLength, float& NearAngleAngle, const FBrainCrashSafePoint& SafePoints, UBrainCrashParam* Param, int32 RotationAngle, int32 EnemyIndex, FVector Location, FVector SequencerCenterLocation, float TargetRawDir, float TargetNormalizedDir) {
}

bool UBrainCrashFunctionLibrary::IsBCSafePointAllowAllRotation(int32 RotationBit) {
    return false;
}

FTransform UBrainCrashFunctionLibrary::GetBCSafePointCylinderTransform(FVector Location, const FBrainCrashSequenceSettingsData& SeqenceSetting, float HeightFloating, float Scale) {
    return FTransform{};
}

FTransform UBrainCrashFunctionLibrary::GetBCSafePointBoxTransform(FVector Location, const FBrainCrashSequenceSettingsData& SeqenceSetting, float RotationYaw, float HeightFloating, float Scale) {
    return FTransform{};
}

int32 UBrainCrashFunctionLibrary::GetBCSafePointAllowRotationBit(const FBrainCrashSafePoint& SafePoint, int32 EnemyIndex) {
    return 0;
}

int32 UBrainCrashFunctionLibrary::GetBCSafePointAllowAllRotation() {
    return 0;
}

void UBrainCrashFunctionLibrary::EditorSetBCSequenceSettingsFromJSONString(UDataTable* DataTable, const FString& JsonString) {
}

UBrainCrashFunctionLibrary::UBrainCrashFunctionLibrary() {
}

