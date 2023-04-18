#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugSaveDataListWindow.generated.h"

class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebugSaveDataListWindow : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugDebugSaveLoadScreenParamManager;
    
public:
    ADebugSaveDataListWindow();
    UFUNCTION(BlueprintCallable)
    void LoadDebugSaveData(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void DoNewGame();
    
};

