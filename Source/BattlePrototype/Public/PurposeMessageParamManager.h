#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EPlayerID.h"
#include "PurposeMessageParamManager.generated.h"

class UDataTable;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPurposeMessageParamManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* dataTable_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* bondsPurposeTable_;
    
public:
    UPurposeMessageParamManager();
    UFUNCTION(BlueprintCallable)
    void SetPurposeMessageNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetPurposeMessage(const FString& messageID);
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPurposeMessageNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetPurposeMessage();
    
    UFUNCTION(BlueprintCallable)
    FName GetDLCBondsPurposeMessage();
    
    UFUNCTION(BlueprintCallable)
    FName GetBondsPurposeMessage(EPlayerID heroID, EPlayerID TargetID);
    
};

