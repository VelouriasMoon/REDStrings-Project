#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ArrangeItemStageManager.generated.h"

class AArrangeItemBase;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UArrangeItemStageManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AArrangeItemBase>> ArrangeItems;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AArrangeItemBase>> UnvisivleArrangeItemsInEvent;
    
public:
    UArrangeItemStageManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterArrangeItemAll();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterArrangeItem(AArrangeItemBase* ArrangeItem);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(const bool IsVisible, const int32 LevelID, const int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterArrangeItem(AArrangeItemBase* ArrangeItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    AArrangeItemBase* GetArrangeItem(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibleActorInEvent(const bool IsVisible);
    
};

