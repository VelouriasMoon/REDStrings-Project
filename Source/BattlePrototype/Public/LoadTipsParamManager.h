#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "LoadTipsBlockParam.h"
#include "LoadTipsParam.h"
#include "LoadTipsParamManager.generated.h"

class ULoadTipsData;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULoadTipsParamManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadTipsParam> loadTipsParams_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadTipsBlockParam> loadTipsBlockDataParamsM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadTipsBlockParam> loadTipsBlockDataParamsF_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadTipsBlockParam> loadTipsBlockDataParamsCommon_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 beforeSelectTipsID_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* gameInst_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadTipsData* loadTipsData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> displayCount_;
    
public:
    ULoadTipsParamManager();
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextTips();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBeginningTips(EPlayerID playerId, int32 ProgressNo, int32 nextLocation);
    
};

