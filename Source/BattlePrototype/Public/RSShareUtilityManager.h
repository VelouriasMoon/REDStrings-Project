#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ManagerInterface.h"
#include "RSShareUtilityManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSShareUtilityManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
    URSShareUtilityManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TwitterLaunchURL(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    FString GetLastSavedScreenShotFileName();
    
    UFUNCTION(BlueprintCallable)
    bool DoShareWorkPlatform();
    
    
    // Fix for true pure virtual functions not being implemented
};

