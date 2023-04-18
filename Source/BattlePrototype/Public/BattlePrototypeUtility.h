#pragma once
#include "CoreMinimal.h"
#include "Math/IntPoint.h"
#include "Math/Color.h"
//-FallbackName=Object
#include "BattlePrototypeUtility.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBattlePrototypeUtility : public UObject {
    GENERATED_BODY()
public:
    UBattlePrototypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SimpleIntToString(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SimpleFloatToString(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNotSaveLoadDebugingParameter(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugAreaSceneSelectable(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrialFeedbackPatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotSaveLoadDebugingParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMasterReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableUserReview202005EOM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLC4PatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLC3PatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLC2PatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLC1PatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugSoundSpawnDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugSASInfinity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugSASBetaEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugPlayerInvincible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugParticleSpawnDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugEnemyParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugEnemyInvincible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugEnemyDrawData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugEnemyDamagePartHitPrint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDrawTargetSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDrawPrintString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDrawNonLockonTargetSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDrawAttackCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDrawAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugDirectPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugBrainCrashOpend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugAreaSceneSelectable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDay1PatchReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMasterReleaseVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugBadState();
    
    UFUNCTION(BlueprintCallable)
    static void getCallStackBP(FString& Output);
    
    UFUNCTION(BlueprintCallable)
    static void getCallStack(FString& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetAppBaseResolution();
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugPrintString(UObject* CallingObj, const FString& inString, float ScreenX, float ScreenY, AActor* TargetActor, FLinearColor TextColor, float Scale);
    
};

