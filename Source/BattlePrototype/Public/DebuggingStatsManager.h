#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ManagerInterface.h"
#include "DebuggingStatsManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDebuggingStatsManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
    UDebuggingStatsManager();
    
    // Fix for true pure virtual functions not being implemented
};

