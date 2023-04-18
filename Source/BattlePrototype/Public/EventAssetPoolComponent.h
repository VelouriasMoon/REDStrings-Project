#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EventAssetPoolComponent.generated.h"

class UEventAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEventAssetPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEventAsset*> Assets;
    
public:
    UEventAssetPoolComponent();
    UFUNCTION(BlueprintCallable)
    bool UnloadAsset(int32 HandleId);
    
    UFUNCTION(BlueprintCallable)
    void UnloadAll();
    
    UFUNCTION(BlueprintCallable)
    UEventAsset* LoadAsset(const FString& Path, bool Async);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded(int32 HandleId) const;
    
    UFUNCTION(BlueprintCallable)
    UEventAsset* GetHandle(int32 HandleId);
    
};

