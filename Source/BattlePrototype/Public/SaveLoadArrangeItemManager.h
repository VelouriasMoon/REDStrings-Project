#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ArrangeItemListForSaveData.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "RandomArrangeItemIDInfo.h"
#include "SaveLoadArrangeItemManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadArrangeItemManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArrangeItemListForSaveData> m_allArrangeItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomArrangeItemIDInfo> m_allRandomArrangeItemIDInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double m_timerCount;
    
    USaveLoadArrangeItemManager();
    
    // Fix for true pure virtual functions not being implemented
};

