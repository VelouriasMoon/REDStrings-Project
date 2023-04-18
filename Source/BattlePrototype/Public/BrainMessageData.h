#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BirthdayBrainMessageData.h"
#include "BrainMessageDBDataCell.h"
#include "BrainMessageData.generated.h"

class UBrainMessageDBAsset;
class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainMessageData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrainMessageDBAsset* brainMessageDataAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* birthdayData_;
    
public:
    UBrainMessageData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& dtPath, const FString& birthdayPath);
    
    UFUNCTION(BlueprintCallable)
    FBrainMessageDBDataCell GetBrainMessageDataCellFromAsset(FName RowName, bool& isFound);
    
    UFUNCTION(BlueprintCallable)
    UBrainMessageDBAsset* GetBrainMessageDataAsset();
    
    UFUNCTION(BlueprintCallable)
    bool GetBirthdayDataCell(const FName RowName, FBirthdayBrainMessageData& cell);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAllThreadNum();
    
    UFUNCTION(BlueprintCallable)
    void GetAllBirthdayRowNames(TArray<FName>& rowNames);
    
};

