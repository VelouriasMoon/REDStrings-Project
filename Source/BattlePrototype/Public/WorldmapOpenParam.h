#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "WorldmapOpenLCParam.h"
#include "WorldmapOpenParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UWorldmapOpenParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FWorldmapOpenLCParam> openParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool notSelectableAll;
    
public:
    UWorldmapOpenParam();
    UFUNCTION(BlueprintCallable)
    bool SetLocationSelectable(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAllArea);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationNotSelectableAll_FromBF(bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationNotSelectableAll(bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationNotSelectable(int32 LocationNo, bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocationNewOpened(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isNewOpened, bool isAllArea);
    
    UFUNCTION(BlueprintCallable)
    bool OpenLocation(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable);
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationSelectable(int32 LocationNo, int32 AreaNo, int32 PortalNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationNotSelectableAll();
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationNotSelectable(int32 LocationNo);
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationNewOpened(int32 LocationNo, int32 AreaNo, int32 PortalNo);
    
    UFUNCTION(BlueprintCallable)
    bool GetOpenedList(TArray<FWorldmapOpenLCParam>& openedList);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocationNotSelectableAll_FromBF();
    
    UFUNCTION(BlueprintCallable)
    bool CloseLocation(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isAllArea);
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable)
    void CheckOpenFromProgressID(int32 ProgressId, bool checkNearly);
    
};

