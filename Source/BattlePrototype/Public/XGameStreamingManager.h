#pragma once
#include "CoreMinimal.h"
#include "ETouchControlLayout.h"
#include "ManagerInterface.h"
#include "RSTickableManagerBase.h"
#include "XGameStreamingManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UXGameStreamingManager : public URSTickableManagerBase, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
public:
    UXGameStreamingManager();
    UFUNCTION(BlueprintCallable)
    static void SetNonSkipEventFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetFixedLayout(ETouchControlLayout layout, float sec);
    
    UFUNCTION(BlueprintCallable)
    void SetEventPauseFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStreaming();
    
    
    // Fix for true pure virtual functions not being implemented
};

