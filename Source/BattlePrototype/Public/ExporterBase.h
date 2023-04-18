#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EExporterType.h"
#include "ExporterBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AExporterBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExporterType exporterType;
    
public:
    AExporterBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartExportShowDestination();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartExportInternal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoopExportShowDestination(int32 LocationId, int32 areaId);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecExportInternal(int32 LocationId, int32 areaId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndExportShowDestination();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndExportInternal();
    
};

