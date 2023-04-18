#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIWorldMap.generated.h"

class UREDScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIWorldMap : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlagOpenDirect;
    
public:
    UUIWorldMap();
    UFUNCTION(BlueprintCallable)
    void updateWorldMapMouseFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugUnlockFlag(bool UnlockFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsChange();
    
    UFUNCTION(BlueprintCallable)
    void InitializeScrollBox(UREDScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPortalName(int32 Index, FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetLocationName(int32 Index, FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentPortalName(FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentPortalID(int32& PortalID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentLocationName(FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentLocationID(int32& LocationId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentAreaID(int32& areaId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCursorMemory();
    
};

