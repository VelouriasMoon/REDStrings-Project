#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "RSUtilityEventFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSUtilityEventFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSUtilityEventFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupCutsceneHideDitherSaveShop(UObject* WorldContextObject, float DitherRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckPlMaterialTolerance(float tolelance);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCheckPlMaterialTolerance();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetTextureNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStandbyPhaseFromProgressID(int32 ProgressId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetPresetNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetMovieTextureNameListFromMakeEventActor(TSubclassOf<AActor> MakeEventActorClass);
    
};

