#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BondsLevelupExpData.h"
#include "EPlayerID.h"
#include "BondsLevelupData.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBondsLevelupData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBondsLevelupExpData> expListM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBondsLevelupExpData> expListF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBondsLevelupExpData dummyList;
    
public:
    UBondsLevelupData();
    UFUNCTION(BlueprintCallable)
    void LoadDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetBondsLevelupTable(EPlayerID playerId, EPlayerID TargetID) const;
    
};

