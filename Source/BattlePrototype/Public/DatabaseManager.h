#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ActionIconSupportParam.h"
#include "BrainTalkDataBase.h"
#include "EItemFavorability.h"
#include "EPlayerID.h"
#include "ETextType.h"
#include "ItemFavorabilityParamDataCell.h"
#include "ManagerInterface.h"
#include "MessageDataCell.h"
#include "TextDatabaseData.h"
#include "DatabaseManager.generated.h"

class UBondsLevelupData;
class UBrainMessageData;
class UClearGetterData;
class UDataTable;
class UDetailedMapData;
class UEnemyDropData;
class UHelpTutorialData;
class UItemData;
class ULibraryCharaData;
class ULibraryEnemyData;
class ULoadTipsData;
class UMessageData;
class UPresentData;
class UQuestData;
class URSGameInstance;
class UShowDestinationData;
class UTeamBondsLevelupData;
class UTradeItemData;
class UWorldmapBatchOpenData;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDatabaseManager : public UObject, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSGameInstance* m_pGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClearGetterData* ClearGetterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextDatabaseData> TextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMessageData*> MessageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDropData* EnemyDropData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTradeItemData* TradeItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestData* QuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrainMessageData* BrainMessageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadTipsData* LoadTipsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryEnemyData* LibraryEnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryCharaData* LibraryCharaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHelpTutorialData* HelpTutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDetailedMapData* DetailedMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* speakerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowDestinationData* ShowDestinationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPresentData* PresentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldmapBatchOpenData* WorldmapBatchOpenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemFavorabilityParamDataCell> ItemFavorabilityParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBondsLevelupData* BondsLevelupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTeamBondsLevelupData* TeamBondsLevelupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconSupportParam> ActionIconSupportParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainTalkDataBase m_BrainTalkDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> m_CharaSortListM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayerID> m_CharaSortListF;
    
public:
    UDatabaseManager();
    UFUNCTION(BlueprintCallable)
    void UnloadTextAll();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadText(ETextType TextType);
    
    UFUNCTION(BlueprintCallable)
    void UnloadMessageAll();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadMessage(const FString& TableName);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadAllVoiceLast(const FString& TableName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadTextFromPath(ETextType TextType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadResidentMessageData();
    
    UFUNCTION(BlueprintCallable)
    bool LoadMessageFromPath(const FString& TableName, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMessageFromDataTable(const FString& TableName, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMessage(const FString& TableName, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAndAppendMessageFromPath(const FString& TableName, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishBrainTalkLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FString GetWhoSpeak(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    UTradeItemData* GetTradeItemData();
    
    UFUNCTION(BlueprintCallable)
    FString GetText(ETextType TextType, FName ID);
    
    UFUNCTION(BlueprintCallable)
    void GetSpeakerData(FName RowName, FMessageDataCell& NewSpeakerData);
    
    UFUNCTION(BlueprintCallable)
    UShowDestinationData* GetShowDestinationData();
    
    UFUNCTION(BlueprintCallable)
    UQuestData* GetQuestData();
    
    UFUNCTION(BlueprintCallable)
    UPresentData* GetPresentData();
    
    UFUNCTION(BlueprintCallable)
    TArray<EPlayerID> GetPlayerSortList(EPlayerID mainID);
    
    UFUNCTION(BlueprintCallable)
    bool GetMessageData(FMessageDataCell& MessageDataCell, const FString& TableName, const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    ULoadTipsData* GetLoadTipsData();
    
    UFUNCTION(BlueprintCallable)
    ULibraryEnemyData* GetLibraryEnemyData();
    
    UFUNCTION(BlueprintCallable)
    ULibraryCharaData* GetLibraryCharaData();
    
    UFUNCTION(BlueprintCallable)
    float GetItemFavorabilityParam(EItemFavorability favorability, bool IsFirstTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemDataName(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemDataDescription(FName ID);
    
    UFUNCTION(BlueprintCallable)
    UItemData* GetItemData();
    
    UFUNCTION(BlueprintCallable)
    UHelpTutorialData* GetHelpTutorialData();
    
    UFUNCTION(BlueprintCallable)
    UEnemyDropData* GetEnemyDropData();
    
    UFUNCTION(BlueprintCallable)
    UDetailedMapData* GetDetailedMapData();
    
    UFUNCTION(BlueprintCallable)
    UClearGetterData* GetClearGetterData();
    
    UFUNCTION(BlueprintCallable)
    UBrainMessageData* GetBrainMessageData();
    
protected:
    UFUNCTION(BlueprintCallable)
    UMessageData* FindMessageData(const FString& TableName);
    
public:
    UFUNCTION(BlueprintCallable)
    void BT_LoadCategoryDatatable();
    
    UFUNCTION(BlueprintCallable)
    void BT_BrainTalkLoadWork();
    
    UFUNCTION(BlueprintCallable)
    void BT_BrainTalkAsyncLoadStart();
    
    UFUNCTION(BlueprintCallable)
    bool BT_BrainTalkAsyncLoadExec();
    
    
    // Fix for true pure virtual functions not being implemented
};

