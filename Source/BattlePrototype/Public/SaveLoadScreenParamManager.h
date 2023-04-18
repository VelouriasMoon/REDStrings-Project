#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "SaveLoadScreenParam.h"
#include "SaveLoadScreenParamManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadScreenParamManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveLoadScreenParam> m_saveLoadScreenParamList;
    
    USaveLoadScreenParamManager();
    
    // Fix for true pure virtual functions not being implemented
};

