#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ArrangeObjectManager.generated.h"

class AArrangeObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UArrangeObjectManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AArrangeObject*> ArrangeObjects;
    
    UArrangeObjectManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterObjectAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterObject(AArrangeObject* ArrangeObject);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(const bool IsVisible, const int32 LevelID, const int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCollision(const bool Flag, const bool bHiddenCheck);
    
    UFUNCTION(BlueprintCallable)
    void RestoreObjectInfo(const int32 LevelID, const int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFirstObjectInfo(const int32 LevelID, const int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterObject(AArrangeObject* ArrangeObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    AArrangeObject* GetArrangeObject(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void BackupObjectInfo(const int32 LevelID, const int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void BackupFirstObjectInfo(const int32 LevelID, const int32 GroupID);
    
};

