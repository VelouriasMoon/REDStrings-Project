#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ELibraryFlagType.h"
#include "Flag.h"
#include "LibraryCharaDataCell.h"
#include "TwoShotPair.h"
#include "LibraryCharacterParam.generated.h"

class ULibraryCharaData;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ULibraryCharacterParam : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag libFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> openLibList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryCharaData* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* GameInstance;
    
public:
    ULibraryCharacterParam();
    UFUNCTION(BlueprintCallable)
    void OpenCharLib(FName libName);
    
    UFUNCTION(BlueprintCallable)
    void OnFlag(ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable)
    void OffFlag(ELibraryFlagType FlagNo);
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* NewGameInstance);
    
    UFUNCTION(BlueprintCallable)
    void GetTwoShotPairList(TArray<FTwoShotPair>& List);
    
    UFUNCTION(BlueprintCallable)
    void GetTwoshotCheckFlagList(TArray<ELibraryFlagType>& List);
    
    UFUNCTION(BlueprintCallable)
    bool GetLibraryTwoShotPhotos(TArray<FString>& Data, FName CharaID, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable)
    bool GetLibraryData(FLibraryCharaDataCell& Data, FName CharaID, bool isDebugOpen);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDBKeys(TArray<FName>& dst);
    
    UFUNCTION(BlueprintCallable)
    void CloseCharLib(FName libName);
    
    UFUNCTION(BlueprintCallable)
    int32 CheckLibraryOpenByProgresNo(int32 ProgressNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFlag(ELibraryFlagType FlagNo) const;
    
};

