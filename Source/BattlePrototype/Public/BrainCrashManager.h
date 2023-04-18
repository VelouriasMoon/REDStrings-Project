#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "BrainCrashSafePoint.h"
#include "ManagerInterface.h"
#include "BrainCrashManager.generated.h"

class ABrainCrashSettingVolume;
class UBrainCrashLocationSettings;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainCrashManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmptyTriggerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LastTriggerTransform;
    
    ABrainCrashManager();
    UFUNCTION(BlueprintCallable)
    void SetupSafePointGroup(UBrainCrashLocationSettings* LocationSettings, bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool SearchUniqueFinishEnemyLocation(UPARAM(Ref) FTransform& OutEnmeyTransform, FTransform SeqeuncerEnemyTransform, FTransform SeqeuncerPlayerTransform, FTransform PlayerTransform, const TArray<FVector>& CollisionCheckOffset, int32 CollisionCheckRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& CollisionObjectTypes, TEnumAsByte<EDrawDebugTrace::Type> CollisionDebugType);
    
    UFUNCTION(BlueprintCallable)
    ABrainCrashSettingVolume* GetTriggerTransformVolume();
    
    UFUNCTION(BlueprintCallable)
    bool GetTriggerTransform(FTransform& TriggerTransform);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBrainCrashSafePoint> GetSafePointGroupPointsFromUnbound(UBrainCrashLocationSettings* LocationSettings);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBrainCrashSafePoint> GetSafePointGroupPointsFromID(UBrainCrashLocationSettings* LocationSettings, int32 SafePointID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FBrainCrashSafePoint> GetSafePointGroupPoints(UBrainCrashLocationSettings* LocationSettings);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSafePointGroupPlayerID(UBrainCrashLocationSettings* LocationSettings);
    
    UFUNCTION(BlueprintCallable)
    bool CheckUseCutin();
    
    
    // Fix for true pure virtual functions not being implemented
};

