#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "ContentsOpeningDelegateDelegate.h"
#include "ContentsRestrictionDelegateDelegate.h"
#include "EContentsOpening.h"
#include "EHelpTutorial.h"
#include "EOperationRestriction.h"
#include "EShopTradeAddContentsPopup.h"
#include "ESystemSaveDataCommonFlag.h"
#include "Flag.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "FlagManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UFlagManager : public UObject, public IManagerInterface, public IRSSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentsOpeningDelegate DispatchContentsOpend;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentsRestrictionDelegate DispatchContentsRestricted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag ItemNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag ShopItemNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag TradeItemNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag WorldMapNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag TutorialNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag HelpNewDataFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag HelpGetDataFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag HelpDisplayFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag MainQuestNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag SubQuestNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag BondsQuestNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag CharaLibraryNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag EnemyLibraryNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag PresentNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag ContentsOpenedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag OperationRestrictionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag BrainmapOpenInfoFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag AddContentsNewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag SystemSaveDataCommonFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlag ShopTradeAddContentsPopupFlag;
    
public:
    UFlagManager();
    UFUNCTION(BlueprintCallable)
    void WorldMapNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void WorldMapNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WorldMapNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void TutorialNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void TutorialNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TutorialNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void TradeItemNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void TradeItemNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TradeItemNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void SystemSaveDataCommonFlagOn(ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable)
    void SystemSaveDataCommonFlagOff(ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable)
    void SystemSaveDataCommonFlagClear();
    
    UFUNCTION(BlueprintCallable)
    bool SystemSaveDataCommonFlagCheck(ESystemSaveDataCommonFlag Type);
    
    UFUNCTION(BlueprintCallable)
    void SystemSaveDataCommonFlagAllOff();
    
    UFUNCTION(BlueprintCallable)
    void ShopTradeAddContentsPopupFlagOn(EShopTradeAddContentsPopup Type);
    
    UFUNCTION(BlueprintCallable)
    void ShopTradeAddContentsPopupFlagOff(EShopTradeAddContentsPopup Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShopTradeAddContentsPopupFlagCheck(EShopTradeAddContentsPopup Type) const;
    
    UFUNCTION(BlueprintCallable)
    void ShopItemNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ShopItemNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShopItemNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void SetContentsOpened(EContentsOpening Type);
    
    UFUNCTION(BlueprintCallable)
    void SetContentsClosed(EContentsOpening Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAllContentsOpened();
    
    UFUNCTION(BlueprintCallable)
    void OperationRestrictionFlagOn(EOperationRestriction Type);
    
    UFUNCTION(BlueprintCallable)
    void OperationRestrictionFlagOff(EOperationRestriction Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OperationRestrictionFlagCheck(EOperationRestriction Type) const;
    
    UFUNCTION(BlueprintCallable)
    void ItemNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ItemNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ItemNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContentsOpened(EContentsOpening Type) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeFlag(bool isConstructor);
    
    UFUNCTION(BlueprintCallable)
    void HelpNewFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HelpNewFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HelpNewFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 HelpGetFlagSize();
    
    UFUNCTION(BlueprintCallable)
    void HelpGetFlagOn(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HelpGetFlagOff(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HelpGetFlagClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HelpGetFlagCheck(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void HelpDisplayFlagOn(EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable)
    void HelpDisplayFlagOff(EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HelpDisplayFlagCheck(EHelpTutorial helpID) const;
    
    UFUNCTION(BlueprintCallable)
    void BrainmapOpenInfoFlagOn(int32 flagIdx);
    
    UFUNCTION(BlueprintCallable)
    void BrainmapOpenInfoFlagOff(int32 flagIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BrainmapOpenInfoFlagCheck(int32 flagIdx) const;
    
    UFUNCTION(BlueprintCallable)
    void AddContentsNewFlagOn(int32 flagIdx);
    
    UFUNCTION(BlueprintCallable)
    void AddContentsNewFlagOff(int32 flagIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AddContentsNewFlagCheck(int32 flagIdx) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

