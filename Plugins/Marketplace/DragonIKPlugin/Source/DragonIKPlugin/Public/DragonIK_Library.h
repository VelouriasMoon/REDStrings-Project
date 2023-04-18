#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DragonIK_Library.generated.h"

UCLASS(Blueprintable)
class DRAGONIKPLUGIN_API UDragonIK_Library : public UObject {
    GENERATED_BODY()
public:
    UDragonIK_Library();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CustomLookRotation(FVector lookAt, FVector upDirection);
    
};

