#pragma once
#include "CoreMinimal.h"
#include "BossFloorInfo.h"
#include "ManagerInterface.h"
#include "RSActorSystemBase.h"
#include "Templates/SubclassOf.h"
#include "LC21MapGimmickManager.generated.h"

class AActor;
class AMapGimmickObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ALC21MapGimmickManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BossFloorActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMapGimmickObject*> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossFloorInfo> ObjectInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentGimmickNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MostLeftFloorNo;
    
    ALC21MapGimmickManager();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartEventLaserSetWall();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartEventLaserFar();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartEventLaserCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartEventLaser();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveAllPart();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMostRightSideFloorNo(float Offset, int32 StartId, int32 EndId, bool CheckIsFall);
    
    UFUNCTION(BlueprintCallable)
    void GetAllFloorObjectsAndSort();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FindAllObjectsAndInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FallLeftFloor(float OffsetY);
    
    UFUNCTION(BlueprintCallable)
    void ClearObjectInfoList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangePhase(int32 PhaseNo);
    
    
    // Fix for true pure virtual functions not being implemented
};

