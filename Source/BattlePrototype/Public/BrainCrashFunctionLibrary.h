#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BrainCrashSafePoint.h"
#include "BrainCrashSequenceSettings.h"
#include "BrainCrashSequenceSettingsData.h"
#include "BrainCrashFunctionLibrary.generated.h"

class UBrainCrashParam;
class UDataTable;
class USplineMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainCrashFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBrainCrashFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetBCSafePointAllowRotationBit(UPARAM(Ref) FBrainCrashSafePoint& RefSafePoint, int32 EnemyIndex, int32 AllowRotateBit);
    
    UFUNCTION(BlueprintCallable)
    static void SearchBCSafePointList(bool& HitNearLocation, FTransform& NearLocationTransform, float& NearLocationLength, bool& HitNearAngle, FTransform& NearAngleTransform, float& NearAngleLength, const TArray<FBrainCrashSafePoint>& SafePoints, const TArray<USplineMeshComponent*>& BattleFieldMeshComps, UBrainCrashParam* Param, const FBrainCrashSequenceSettings& SequencerSetting, int32 RotationAngle, int32 EnemyIndex, FVector Location, FVector SequencerCenterLocation, float TargetRawDir, float TargetNormalizedDir);
    
    UFUNCTION(BlueprintCallable)
    static void SearchBCSafePoint(bool& HitNearLocation, FTransform& NearLocationTransform, float& NearLocationLength, bool& HitNearAngle, FTransform& NearAngleTransform, float& NearAngleLength, float& NearAngleAngle, const FBrainCrashSafePoint& SafePoints, UBrainCrashParam* Param, int32 RotationAngle, int32 EnemyIndex, FVector Location, FVector SequencerCenterLocation, float TargetRawDir, float TargetNormalizedDir);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBCSafePointAllowAllRotation(int32 RotationBit);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBCSafePointCylinderTransform(FVector Location, const FBrainCrashSequenceSettingsData& SeqenceSetting, float HeightFloating, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetBCSafePointBoxTransform(FVector Location, const FBrainCrashSequenceSettingsData& SeqenceSetting, float RotationYaw, float HeightFloating, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBCSafePointAllowRotationBit(const FBrainCrashSafePoint& SafePoint, int32 EnemyIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBCSafePointAllowAllRotation();
    
    UFUNCTION(BlueprintCallable)
    static void EditorSetBCSequenceSettingsFromJSONString(UDataTable* DataTable, const FString& JsonString);
    
};

