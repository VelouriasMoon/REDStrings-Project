#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "Templates/SubclassOf.h"
#include "QuestData.generated.h"

class UBondsEpisodeDBAsset;
class UDataTable;
class UMainQuestDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UQuestData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefMainDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefSubDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RefBondsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDataTable> finderMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMainQuestDBAsset* MainQuestDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBondsEpisodeDBAsset* BondsQuestDataAsset;
    
public:
    UQuestData();
    UFUNCTION(BlueprintCallable)
    bool UnloadDataTable_Sub();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadDataTable_Main();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadDataTable_Bonds();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadDataTable();
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset_Sub(const FString& dataPath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset_Main(const FString& dataPath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset_Bonds(const FString& dataPath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& mainDTPath, const FString& subDTPath, const FString& bondsDTPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSubDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMainDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidBondsDB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubQuestDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetSubQuestData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainQuestDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMainQuestDBAsset* GetMainQuestData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBondsEpisodeDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBondsEpisodeDBAsset* GetBondsEpisodeData() const;
    
};

