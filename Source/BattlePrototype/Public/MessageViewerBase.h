#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETextLanguage.h"
#include "MsgViewerData.h"
#include "MsgViewerLoadedData.h"
#include "MessageViewerBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMessageViewerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDataTable> SettingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextLanguage CurrentLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETextLanguage> LanguageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMsgViewerData> DataFileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MessageLabelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMsgViewerLoadedData LoadedData;
    
public:
    AMessageViewerBase();
    UFUNCTION(BlueprintCallable)
    void CreateLabelList(const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    void CreateFileListBySetting(ETextLanguage Language, FName Setting);
    
};

