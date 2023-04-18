#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "PresentCheckArray.h"
#include "PresentInfoData.h"
#include "PresentInfoParam.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPresentInfoParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FPresentCheckArray> presentInfoData_ch0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerID, FPresentCheckArray> presentInfoData_ch0200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* GameInstance;
    
public:
    UPresentInfoParam();
    UFUNCTION(BlueprintCallable)
    bool UpdatePresentInfo(EPlayerID sendCharId, EPlayerID recvCharID, FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool IsPresentedFirstTime(EPlayerID sendCharId, EPlayerID recvCharID, FName ItemId, bool& IsFirstTime);
    
    UFUNCTION(BlueprintCallable)
    void GetPresentInfoList(EPlayerID sendCharId, EPlayerID recvCharID, TArray<FPresentInfoData>& getList, bool includeEvent);
    
};

