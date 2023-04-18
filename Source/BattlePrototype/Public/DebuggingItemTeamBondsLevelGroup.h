#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemGroup.h"
#include "DebuggingItemTeamBondsLevelGroup.generated.h"

class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemPresentEvent;
class ADebuggingItemTeamBondsLevel;
class UDatabaseManager;
class UUserParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemTeamBondsLevelGroup : public ADebuggingItemGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemTeamBondsLevel>> levelIntList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADebuggingItemPresentEvent>> presentEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserParamManager* paramMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatabaseManager* dbMan;
    
public:
    ADebuggingItemTeamBondsLevelGroup();
    UFUNCTION(BlueprintCallable)
    void OnExecutePresent(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLevel(const ADebuggingItemInt* Item);
    
};

