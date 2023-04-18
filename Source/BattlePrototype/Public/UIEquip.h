#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "PlayerInfo.h"
#include "UIBase.h"
#include "UIEquip.generated.h"

class UOverlay;
class UREDScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIEquip : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSetDefaultCursorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDefaultCursorVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID m_DefaultCharaID;
    
public:
    UUIEquip();
    UFUNCTION(BlueprintCallable)
    void updatEquipListMouseFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void updateProgramAnimation(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultCursor(EPlayerID CharaID, bool IsVisual);
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void removeDuplicateAccessories(FName checkItemID, UPARAM(Ref) TArray<FPlayerInfo>& playerList, int32 cursorChara);
    
    UFUNCTION(BlueprintCallable)
    void playContentsOut();
    
    UFUNCTION(BlueprintCallable)
    void playContentsIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingProgramAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingContentsIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEquip_ac4043(int32 cursorCategory, EPlayerID characterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEquip_ac3065(int32 cursorCategory, EPlayerID characterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEnableWeaponSkin() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UOverlay* overlayAllSet, UOverlay* overlay2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeScrollBox(UREDScrollBox* ScrollBox);
    
};

