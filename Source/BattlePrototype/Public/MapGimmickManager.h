#pragma once
#include "CoreMinimal.h"
#include "ELiftFloorInfoId.h"
#include "EMapGimmickStateRequest.h"
#include "EMapGimmickType.h"
#include "ManagerInterface.h"
#include "MovingRoadActor.h"
#include "OnBeginOverlapMapGimmickAreaDelegate.h"
#include "OnChangeFinishedMapGimmickDelegate.h"
#include "OnChangeReuseStartMapGimmickDelegate.h"
#include "OnEndOverlapMapGimmickAreaDelegate.h"
#include "OnExecMapGimmickDelegate.h"
#include "RSActorSystemBase.h"
#include "MapGimmickManager.generated.h"

class AActor;
class AGimmickTriggerVolume;
class AMapGimmickObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMapGimmickManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginOverlapMapGimmickArea OnBeginOverlapMapGimmickAreaEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndOverlapMapGimmickArea OnEndOverlapMapGimmickAreaEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecMapGimmick OnExecMapGimmickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeFinishedMapGimmick OnChangeFinishedMapGimmickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeReuseStartMapGimmick OnChangeReuseStartMapGimmickEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FinishedGimmickNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllMapGimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGimmickTriggerVolume*> AllTriggerVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMapGimmickObject*> ActivatedMapGimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovingRoadActor> MovingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> LiftFloorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapGimmickType, int32> GimmickUseTimeMap;
    
public:
    AMapGimmickManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterMapGimmick(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetLiftFloor(ELiftFloorInfoId ID, int32 floor);
    
    UFUNCTION(BlueprintCallable)
    bool RequestToMapGimmick(EMapGimmickStateRequest Request, AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapGimmick(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapMovingRoad(AActor* Actor, AActor* RoadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapMovingRoad(AActor* Actor, AActor* RoadActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatedMapGimmick(AMapGimmickObject* map_gimmick) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeAtAreaStart();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAreaData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMapGimmickUseTime(EMapGimmickType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLiftFloor(ELiftFloorInfoId ID);
    
    UFUNCTION(BlueprintCallable)
    bool DeactivateMapGimmick(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CanChargeMapGimmick(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CallOnExecMapGimmickEvent(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CallOnEndOverlapMapGimmickAreaEvent(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CallOnChangeReuseStartMapGimmickEvent(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CallOnChangeFinishedMapGimmickEvent(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool CallOnBeginOverlapMapGimmickAreaEvent(AMapGimmickObject* map_gimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddMapGimmickUseTime(AMapGimmickObject* gimmick);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateMapGimmick(AMapGimmickObject* map_gimmick);
    
    
    // Fix for true pure virtual functions not being implemented
};

