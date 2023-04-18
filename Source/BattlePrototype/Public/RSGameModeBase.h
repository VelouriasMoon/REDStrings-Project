#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "RSGameModeBase.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API ARSGameModeBase : public AGameMode {
    GENERATED_BODY()
public:
    ARSGameModeBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreStartPlay(const FString& currentLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostInitGame(const FString& currentLevelName);
    
    UFUNCTION(BlueprintCallable)
    static void LogFlowCheck_IsValid(bool IsValid, const FString& ValidString, const FString& InvalidString);
    
    UFUNCTION(BlueprintCallable)
    static void LogFlowCheck(const FString& logString);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    bool IsGameFlowLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDevelopment();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerStartByName(const FString& TagName);
    
};

