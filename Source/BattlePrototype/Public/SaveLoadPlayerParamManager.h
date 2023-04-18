#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "SaveLoadPlayerParam.h"
#include "SaveLoadPlayerParamManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadPlayerParamManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID m_BattleMemberMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID m_BattleMemberLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID m_BattleMemberRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveLoadPlayerParam> m_saveLoadPlayerParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NpcAssistCountHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NpcAssistCountBadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NpcAssistCountRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDriveUsedFlag;
    
    USaveLoadPlayerParamManager();
    
    // Fix for true pure virtual functions not being implemented
};

