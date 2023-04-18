#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UIMainContents.generated.h"

class UUIConfigGame;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMainContents : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIBase*> MenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIConfigGame* UIConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuIndexNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuIndexBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabEnableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBrainMessageAutoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mBrainMessageDefaultThreadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsMenuSingle;
    
public:
    UUIMainContents();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetWeaponMenuDefaultCursor(EPlayerID CharaID, bool IsVisual);
    
    UFUNCTION(BlueprintCallable)
    void SetViewerMode(bool NewIsViewerMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTabEnable(int32 Index, bool IsEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStartBrainMessage(bool isDefaultBrainMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetPopupMode(bool NewIsPopupMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyWeaponMenu(bool NewIsOnlyWeaponMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyEnemyBooks(bool NewIsOnlyEnemyBooks);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyBrainMessage(bool NewIsOnlyBrainMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool SetMouseEnableMode(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetChangeMainMenuTabR();
    
    UFUNCTION(BlueprintCallable)
    bool SetChangeMainMenuTabL();
    
    UFUNCTION(BlueprintCallable)
    bool SetChangeMainMenuTab(int32 nextindex);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMessageDefaultThread(FName threadID);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainMessageAutoMode(bool IsAuto);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBrainMapCursorSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBrainMapCursorCorrectSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBrainMapCursorCorrectArea(float Area);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetWeaponMenuDefaultCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetReplyBondsEpisodeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Release3DView();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewerMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabEnable(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartBrainMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsReplyBondsEpisode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPopupMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlyWeaponMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlyEnemyBooks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlyBrainMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isLockTabChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEndCurrentMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetBrainMapCursorSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetBrainMapCursorCorrectSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetBrainMapCursorCorrectArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Create3DView();
    
    UFUNCTION(BlueprintCallable)
    void ControlFunc(int32 SubState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimPressButtonR();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimPressButtonL();
    
};

