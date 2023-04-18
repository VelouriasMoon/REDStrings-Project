#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "TeamBondsLevelupData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTeamBondsLevelupData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* dataTableM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* dataTableF;
    
public:
    UTeamBondsLevelupData();
    UFUNCTION(BlueprintCallable)
    void LoadDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTeamBondsLevelupTable(EPlayerID playerId) const;
    
};

