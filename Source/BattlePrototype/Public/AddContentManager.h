#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "AddContentRefDataCell.h"
#include "AddContentsPresentInfo.h"
#include "ManagerInterface.h"
#include "AddContentManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UAddContentManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _RefDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _AddContentsPresentListDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> _EntitledData;
    
public:
    UAddContentManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitled(FName AddContentName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCheckingEntitlementInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetInvalidContentsList(TArray<FName> possessionContentsList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEntitledContentsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllContentsList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddContentsTitleIdAndExplanationId(FName AddContentName, FString& TitleID, FString& ExplanationID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddContentsPresentInfo(TArray<FAddContentsPresentInfo>& infoList, FName AddContentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddContentRefDataID(FName& ID, FName AddContentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddContentRefDataCell(FAddContentRefDataCell& rowParam, FName AddContentName);
    
    UFUNCTION(BlueprintCallable)
    bool ConstructLocalEntitleData();
    
    
    // Fix for true pure virtual functions not being implemented
};

