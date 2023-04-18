#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShowDestinationActorData.h"
#include "ShowDestinationTableExporter.generated.h"

class ULevel;
class UObject;

UCLASS(Blueprintable)
class AShowDestinationTableExporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> loadedLevels_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShowDestinationActorData> pickedUpActor_;
    
    AShowDestinationTableExporter();
    UFUNCTION(BlueprintCallable)
    void StartupAtLoadBeginDoOnce();
    
    UFUNCTION(BlueprintCallable)
    void SearchLoadedLevels();
    
    UFUNCTION(BlueprintCallable)
    void RegistExportDatas(TArray<FShowDestinationActorData> exportDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RegistDataAtLoadedLevel(int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetAllActorsOfAllLevels(const UObject* WorldContextObject, TArray<AActor*>& pickedUpActor, int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable)
    void ExportCSVData();
    
};

