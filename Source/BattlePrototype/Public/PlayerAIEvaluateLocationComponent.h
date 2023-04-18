#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EAIBattleRange.h"
#include "EEvaluateActorStatus.h"
#include "EEvaluateActorType.h"
#include "PlayerAIParameter.h"
#include "RSAsyncTaskActorComponent.h"
#include "UpdateEvaluateLocationDelegate.h"
#include "PlayerAIEvaluateLocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerAIEvaluateLocationComponent : public URSAsyncTaskActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIBattleRange Range_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_NEAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANGE_FAR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_Init;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_NotTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_AttackActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_Friend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetActorBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_TargetActorInfront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority_CurrentLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEvaluateLocation DispatchUpdateEvaluateLocation;
    
    UPlayerAIEvaluateLocationComponent();
    UFUNCTION(BlueprintCallable)
    void SetParameter(const FPlayerAIParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreKeepOutArea(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActorData(EEvaluateActorType actorType, EEvaluateActorStatus actorStatus, const FVector& Location, const FVector& forwardDir, float Radius, bool bLockOn);
    
    UFUNCTION(BlueprintCallable)
    bool GetOtherHighPriorityLocation(FVector& OutLocation, int32 rank);
    
    UFUNCTION(BlueprintCallable)
    bool GetNearLocation(FVector& OutLocation, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIBattleRange GetLocationRangeType(FVector Location) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLocationPriorityRank(int32& outRank, FVector& OutLocation, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool GetHighPriorityLocationByRange(FVector& OutLocation, EAIBattleRange battleRange);
    
    UFUNCTION(BlueprintCallable)
    bool GetHighPriorityLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIBattleRange GetAIBattleRangeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIBattleRange(EAIBattleRange Range) const;
    
    UFUNCTION(BlueprintCallable)
    void EndEvaluate();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawEvaluationLocation();
    
    UFUNCTION(BlueprintCallable)
    void ClearActorData();
    
    UFUNCTION(BlueprintCallable)
    bool CheckKeepOutArea(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void BeginEvaluate();
    
};

