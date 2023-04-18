#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ShowDestinationExporter.generated.h"

class UObject;

UCLASS(Blueprintable)
class AShowDestinationExporter : public AActor {
    GENERATED_BODY()
public:
    AShowDestinationExporter();
    UFUNCTION(BlueprintCallable)
    void RegistSortData(const FString& ActorName, const FString& LocationName, const FString& AreaName, FVector actorPosition, int32 CheckType, int32 ProgressId, int32 nanka, TArray<int32> cType, TArray<FString> cName, TArray<bool> cIsCheck);
    
    UFUNCTION(BlueprintCallable)
    void RegistData(const FString& ActorName, FVector actorPosition, int32 CheckType, int32 ProgressId, int32 nanka, TArray<int32> cType, TArray<FString> cName, TArray<bool> cIsCheck, FString& LocationName, FString& AreaName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetAllActorsOfAllLevels(const UObject* WorldContextObject, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void ExportData();
    
private:
    UFUNCTION(BlueprintCallable)
    void ConvertString();
    
};

