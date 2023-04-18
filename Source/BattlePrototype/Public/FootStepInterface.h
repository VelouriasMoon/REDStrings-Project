#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Transform
#include "ECharacterPhysicalActionType.h"
#include "EGamePhysicalSurfaceType.h"
#include "FootStepInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UFootStepInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IFootStepInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FootStepPlaySound(const EGamePhysicalSurfaceType PhysicsType, const FName ActionType, const FTransform& Transform, AActor* Creator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FootStepPlayEffect(const EGamePhysicalSurfaceType PhysicsType, const FName ActionType, const FTransform& Transform, AActor* Creator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FootStepPlay(const EGamePhysicalSurfaceType PhysicsType, const ECharacterPhysicalActionType ActionType, const FTransform& Transform, AActor* Creator, const bool isPlayEffect, const bool isPlaySound);
    
};

