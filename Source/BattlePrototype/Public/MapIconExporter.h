#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapIconExporter.generated.h"

UCLASS(Blueprintable)
class AMapIconExporter : public AActor {
    GENERATED_BODY()
public:
    AMapIconExporter();
    UFUNCTION(BlueprintCallable)
    void StartupMapIconAtCurrentBegin();
    
    UFUNCTION(BlueprintCallable)
    void StartupArrangeItemAtCurrentBegin();
    
    UFUNCTION(BlueprintCallable)
    void ExportMapIconJson();
    
    UFUNCTION(BlueprintCallable)
    void ExportArrangeIconJson();
    
    UFUNCTION(BlueprintCallable)
    void CurrentMapIcon(int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable)
    void CurrentArrangeIcon();
    
};

