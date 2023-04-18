#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/EngineTypes.h"
#include "EPlayerCollisionCheckType.h"
#include "PlayerAsyncParameter.h"
#include "PlayerCollisionCheckResult.h"
#include "RSAsyncTaskActorComponent.h"
#include "PlayerAsyncScriptComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerAsyncScriptComponent : public URSAsyncTaskActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMoveWallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMoveWall_CheckForwardLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMoveWall_CheckBackLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMoveWall_CheckSideLengthShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckMoveWall_CheckSideLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> TempOutHitResultAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> TempOutHitResultAsyncSubFunc;
    
public:
    UPlayerAsyncScriptComponent();
    UFUNCTION(BlueprintCallable)
    bool SyncResult();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAsync(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckParameter(const FPlayerAsyncParameter& InParameter);
    
    UFUNCTION(BlueprintCallable)
    bool IsFallAbleGround();
    
    UFUNCTION(BlueprintCallable)
    FPlayerCollisionCheckResult GetAsyncResult(EPlayerCollisionCheckType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAssyncResult_PlayerAICheckGoalLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDispResult(TArray<EPlayerCollisionCheckType> DispList);
    
    UFUNCTION(BlueprintCallable)
    void ClearAsyncResult();
    
};

