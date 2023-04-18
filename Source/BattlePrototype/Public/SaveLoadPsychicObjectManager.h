#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "SaveLoadPsychicObjectParam.h"
#include "SaveLoadPsychicObjectManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadPsychicObjectManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveLoadPsychicObjectParam> m_saveLoadPsychicObjectParamList;
    
    USaveLoadPsychicObjectManager();
    
    // Fix for true pure virtual functions not being implemented
};

