#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "MessageDataCell.h"
#include "MessageData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMessageData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> RefDataTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> m_PreLoadVoiceMap;
    
public:
    UMessageData();
    UFUNCTION(BlueprintCallable)
    void RegisterDataTable(UDataTable* _datatable, const FString& _path);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDataTable(const FString& _path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMessageFromIndex(FMessageDataCell& MessageDataCell, int32 _index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMessage(FMessageDataCell& MessageDataCell, FName ID);
    
};

